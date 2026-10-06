/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107072f44; end: 107072fb7; -[SCChatTimestampViewModel hash] */

undefined8 * FUN_107072f44(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107073038:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107073044;
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
          goto LAB_107073044;
        }
        goto LAB_107073038;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107073044:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107072fb8; end: 10707305f; -[SCChatTimestampViewModel isEqual:] */

long FUN_107072fb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107073038:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107073044;
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
          goto LAB_107073044;
        }
        goto LAB_107073038;
      }
    }
    lVar3 = 0;
  }
LAB_107073044:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107073060; end: 107073067; -[SCChatTimestampViewModel cellTimestampText] */

undefined8 FUN_107073060(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107073068; end: 10707306f; -[SCChatTimestampViewModel actionHeaderTimestampText] */

undefined8 FUN_107073068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107073070; end: 10707309f; -[SCChatTimestampViewModel .cxx_destruct] */

void FUN_107073070(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070730a0; end: 10707314b; -[SCChatBatchMessageSaveActionData initWithMessageIds:conversationId:] */

undefined1 *
FUN_1070730a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8720;
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



/* Entry: 10707314c; end: 10707316f; -[SCChatBatchMessageSaveActionData copyWithZone:] */

undefined8 FUN_10707314c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107073170; end: 1070731e3; -[SCChatBatchMessageSaveActionData hash] */

undefined8 * FUN_107073170(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107073264:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107073270;
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
          goto LAB_107073270;
        }
        goto LAB_107073264;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107073270:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070731e4; end: 10707328b; -[SCChatBatchMessageSaveActionData isEqual:] */

long FUN_1070731e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107073264:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107073270;
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
          goto LAB_107073270;
        }
        goto LAB_107073264;
      }
    }
    lVar3 = 0;
  }
LAB_107073270:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707328c; end: 107073293; -[SCChatBatchMessageSaveActionData messageIds] */

undefined8 FUN_10707328c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107073294; end: 10707329b; -[SCChatBatchMessageSaveActionData conversationId] */

undefined8 FUN_107073294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707329c; end: 1070732cb; -[SCChatBatchMessageSaveActionData .cxx_destruct] */

void FUN_10707329c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070732cc; end: 107073343; -[SCChatMessageCopyTextActionData initWithTextToCopy:] */

undefined1 * FUN_1070732cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8728;
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



/* Entry: 107073344; end: 107073367; -[SCChatMessageCopyTextActionData copyWithZone:] */

undefined8 FUN_107073344(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107073368; end: 10707336f; -[SCChatMessageCopyTextActionData hash] */

void FUN_107073368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107073370; end: 1070733ff; -[SCChatMessageCopyTextActionData isEqual:] */

long FUN_107073370(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070733e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1070733e4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1070733e4;
    }
  }
  lVar3 = 1;
LAB_1070733e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107073400; end: 107073407; -[SCChatMessageCopyTextActionData textToCopy] */

undefined8 FUN_107073400(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107073408; end: 107073413; -[SCChatMessageCopyTextActionData .cxx_destruct] */

void FUN_107073408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107073414; end: 1070734fb; -[SCChatMessageEditTextActionData initWithText:messageId:scale:mentions:] */

undefined1 *
FUN_107073414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f8730;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
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



/* Entry: 1070734fc; end: 10707351f; -[SCChatMessageEditTextActionData copyWithZone:] */

undefined8 FUN_1070734fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107073520; end: 1070735c3; -[SCChatMessageEditTextActionData hash] */

undefined8 * FUN_107073520(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107073690:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10707369c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[4];
        if (puVar8 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10707369c;
        }
        goto LAB_107073690;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10707369c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1070735c4; end: 1070736b7; -[SCChatMessageEditTextActionData isEqual:] */

long FUN_1070735c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107073690:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707369c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10707369c;
        }
        goto LAB_107073690;
      }
    }
    lVar4 = 0;
  }
LAB_10707369c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1070736b8; end: 1070736bf; -[SCChatMessageEditTextActionData text] */

undefined8 FUN_1070736b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070736c0; end: 1070736c7; -[SCChatMessageEditTextActionData messageId] */

undefined8 FUN_1070736c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070736c8; end: 1070736cf; -[SCChatMessageEditTextActionData scale] */

undefined8 FUN_1070736c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070736d0; end: 1070736d7; -[SCChatMessageEditTextActionData mentions] */

undefined8 FUN_1070736d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070736d8; end: 107073713; -[SCChatMessageEditTextActionData .cxx_destruct] */

void FUN_1070736d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107073714; end: 1070737d7; -[SCChatMessageEraseActionData initWithMessageId:conversationId:isGroupConversation:isSnap:] */

undefined1 *
FUN_107073714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f8738;
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070737d8; end: 1070737fb; -[SCChatMessageEraseActionData copyWithZone:] */

undefined8 FUN_1070737d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070737fc; end: 10707387b; -[SCChatMessageEraseActionData hash] */

undefined8 * FUN_1070737fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10707391c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107073928;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_107073928;
        }
        goto LAB_10707391c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107073928:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10707387c; end: 107073943; -[SCChatMessageEraseActionData isEqual:] */

long FUN_10707387c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707391c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107073928;
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
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107073928;
        }
        goto LAB_10707391c;
      }
    }
    lVar3 = 0;
  }
LAB_107073928:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107073944; end: 10707394b; -[SCChatMessageEraseActionData messageId] */

undefined8 FUN_107073944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707394c; end: 107073953; -[SCChatMessageEraseActionData conversationId] */

undefined8 FUN_10707394c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107073954; end: 10707395b; -[SCChatMessageEraseActionData isGroupConversation] */

undefined1 FUN_107073954(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10707395c; end: 107073963; -[SCChatMessageEraseActionData isSnap] */

undefined1 FUN_10707395c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107073964; end: 107073993; -[SCChatMessageEraseActionData .cxx_destruct] */

void FUN_107073964(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107073994; end: 107073a57; -[SCChatMessageSnapReplyActionData initWithChatIdentifier:displayName:isBirthday:isGroupConversation:] */

undefined1 *
FUN_107073994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f8740;
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107073a58; end: 107073a7b; -[SCChatMessageSnapReplyActionData copyWithZone:] */

undefined8 FUN_107073a58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107073a7c; end: 107073afb; -[SCChatMessageSnapReplyActionData hash] */

undefined8 * FUN_107073a7c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107073b9c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107073ba8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_107073ba8;
        }
        goto LAB_107073b9c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107073ba8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107073afc; end: 107073bc3; -[SCChatMessageSnapReplyActionData isEqual:] */

long FUN_107073afc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107073b9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107073ba8;
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
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107073ba8;
        }
        goto LAB_107073b9c;
      }
    }
    lVar3 = 0;
  }
LAB_107073ba8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107073bc4; end: 107073bcb; -[SCChatMessageSnapReplyActionData chatIdentifier] */

undefined8 FUN_107073bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107073bcc; end: 107073bd3; -[SCChatMessageSnapReplyActionData displayName] */

undefined8 FUN_107073bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107073bd4; end: 107073bdb; -[SCChatMessageSnapReplyActionData isBirthday] */

undefined1 FUN_107073bd4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107073bdc; end: 107073be3; -[SCChatMessageSnapReplyActionData isGroupConversation] */

undefined1 FUN_107073bdc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107073be4; end: 107073c13; -[SCChatMessageSnapReplyActionData .cxx_destruct] */

void FUN_107073be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107073c14; end: 10707436b; -[SCChatMessageCellViewModel initWithSavableViewModel:reactableViewModel:shouldShowSenderHeader:senderHeaderViewModel:senderLine:shouldShowFoldIndicator:bodyWidth:payloadWidth:heightExcludingContentHeight:minimumContentWidth:maximumContentWidth:bodyInsets:payloadContainerViewInsets:payloadContainerViewMargins:payloadContainerCornerRadii:additionalInsets:payloadViewPosition:reusableCellIdentifier:shouldDisplayBelowFoldInChat:isUnseenMessageInChat:isAvailableForNewChatsAffordance:isMessageSentBySelf:dateHeaderViewModel:messageContent:quotedRenderableViewModel:belowMessageAccessoryContent:ctaAccessoryContent:postSnapActionsParams:postSnapActionsSize:timestampViewModel:identifier:diffableIdentifier:accessibilityValue:externalTapAction:externalDoubleTapAction:prefetchPluginIdentifier:analyticsMessageId:message:canBeQuoted:isGroupConversation:conversationId:renderAsBubble:isLastMessage:recipientUserId:senderUserId:conversationSubtypeMetadata:isUnknownMessage:messages:] */

undefined8 *
FUN_107073c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined4 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined4 param_52,
             undefined4 param_53,undefined8 param_54,undefined4 param_55,undefined4 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined1 param_60,
             undefined4 param_61,undefined8 param_62)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_26);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_54);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_62);
  puStack_b0 = PTR_PTR_1126f8748;
  puVar1 = &uStack_b8;
  uStack_b8 = param_6;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_13;
    puVar1[7] = param_1;
    puVar1[8] = param_2;
    puVar1[9] = param_3;
    puVar1[10] = param_4;
    puVar1[0xb] = param_5;
    puVar1[0x25] = param_14;
    puVar1[0x26] = param_15;
    puVar1[0x27] = param_16;
    puVar1[0x28] = param_17;
    puVar1[0x29] = param_18;
    puVar1[0x2a] = param_19;
    puVar1[0x2b] = param_20;
    puVar1[0x2c] = param_21;
    puVar1[0x2d] = param_22;
    puVar1[0x2e] = param_23;
    puVar1[0x2f] = param_24;
    puVar1[0x30] = param_25;
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0x31] = param_27;
    puVar1[0x32] = param_28;
    puVar1[0x33] = param_29;
    puVar1[0x34] = param_30;
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_33;
    *(undefined1 *)((long)puVar1 + 0xb) = param_33._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_33._2_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_33._3_1_;
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_36;
    _objc_release(uVar2);
    uVar2 = param_37;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_38);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_39;
    _objc_release(uVar2);
    uVar2 = param_40;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    puVar1[0x23] = param_41;
    puVar1[0x24] = param_42;
    uVar2 = param_43;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_44);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_45;
    _objc_release(uVar2);
    uVar2 = param_46;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_47;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_48;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_49;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_50;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_51;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_52;
    *(undefined1 *)((long)puVar1 + 0xf) = param_52._1_1_;
    uVar2 = param_54;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_55;
    *(undefined1 *)((long)puVar1 + 0x11) = param_55._1_1_;
    uVar2 = param_57;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_58;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_59;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x12) = param_60;
    uVar2 = param_62;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_62);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_54);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_26);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 10707436c; end: 10707438f; -[SCChatMessageCellViewModel copyWithZone:] */

undefined8 FUN_10707436c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107074390; end: 107074867; -[SCChatMessageCellViewModel hash] */

undefined8 * FUN_107074390(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  uint3 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar8 = &uStack_220;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_220 = uVar6;
  func_0x00010bfde980();
  uStack_210 = (ulong)*(byte *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uStack_218 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uStack_208 = uVar6;
  func_0x00010bfde980();
  uVar11 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uStack_1f8 = (ulong)*(byte *)(param_1 + 9);
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1f0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1f0 = uStack_1f0 ^ uStack_1f0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1e8 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1e8 = uStack_1e8 ^ uStack_1e8 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1e0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1e0 = uStack_1e0 ^ uStack_1e0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1d8 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1d8 = uStack_1d8 ^ uStack_1d8 >> 0x16;
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1d0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1d0 = uStack_1d0 ^ uStack_1d0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x128) + *(ulong *)(param_1 + 0x128) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1c8 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1c8 = uStack_1c8 ^ uStack_1c8 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x130) + *(ulong *)(param_1 + 0x130) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1c0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1c0 = uStack_1c0 ^ uStack_1c0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x138) + *(ulong *)(param_1 + 0x138) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1b8 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1b8 = uStack_1b8 ^ uStack_1b8 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x140) + *(ulong *)(param_1 + 0x140) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1b0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1b0 = uStack_1b0 ^ uStack_1b0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x148) + *(ulong *)(param_1 + 0x148) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1a8 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1a8 = uStack_1a8 ^ uStack_1a8 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x150) + *(ulong *)(param_1 + 0x150) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_1a0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_1a0 = uStack_1a0 ^ uStack_1a0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x158) + *(ulong *)(param_1 + 0x158) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_198 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_198 = uStack_198 ^ uStack_198 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x160) + *(ulong *)(param_1 + 0x160) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_190 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_190 = uStack_190 ^ uStack_190 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x168) + *(ulong *)(param_1 + 0x168) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_188 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_188 = uStack_188 ^ uStack_188 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x170) + *(ulong *)(param_1 + 0x170) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x178) + *(ulong *)(param_1 + 0x178) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_180 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_180 = uStack_180 ^ uStack_180 >> 0x16;
  uVar11 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_178 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_178 = uStack_178 ^ uStack_178 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x180) + *(ulong *)(param_1 + 0x180) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_170 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_170 = uStack_170 ^ uStack_170 >> 0x16;
  uStack_200 = uVar7;
  func_0x00010bfde980();
  uVar11 = ~*(ulong *)(param_1 + 0x188) + *(ulong *)(param_1 + 0x188) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_160 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_160 = uStack_160 ^ uStack_160 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 400) + *(ulong *)(param_1 + 400) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x198) + *(ulong *)(param_1 + 0x198) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_158 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_158 = uStack_158 ^ uStack_158 >> 0x16;
  uVar11 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_150 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_150 = uStack_150 ^ uStack_150 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x1a0) + *(ulong *)(param_1 + 0x1a0) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_148 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_148 = uStack_148 ^ uStack_148 >> 0x16;
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uStack_168 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uStack_140 = uVar7;
  func_0x00010bfde980();
  uVar4 = *(undefined4 *)(param_1 + 10);
  uVar2 = CONCAT12((char)((uint)uVar4 >> 8),(ushort)(byte)uVar4) & 0x1ff01;
  uStack_128 = (ulong)(byte)(uVar2 >> 0x10);
  uStack_130 = (ulong)(byte)uVar2;
  uStack_118 = (ulong)((byte)((uint)uVar4 >> 0x18) & 1);
  uStack_120 = (ulong)((byte)((uint)uVar4 >> 0x10) & 1);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uStack_138 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uStack_108 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uStack_f8 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = uVar7;
  func_0x00010bfde980();
  uVar11 = ~*(ulong *)(param_1 + 0x118) + *(ulong *)(param_1 + 0x118) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_e0 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_e0 = uStack_e0 ^ uStack_e0 >> 0x16;
  uVar11 = ~*(ulong *)(param_1 + 0x120) + *(ulong *)(param_1 + 0x120) * 0x40000;
  uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_d8 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e8 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c8 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 200);
  uStack_b8 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a8 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  uStack_98 = uVar6;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_80 = (ulong)*(byte *)(param_1 + 0xf);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = uVar7;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x11);
  uVar7 = *(undefined8 *)(param_1 + 0xf8);
  uStack_78 = uVar6;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  uStack_58 = uVar6;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x12);
  uVar6 = *(undefined8 *)(param_1 + 0x110);
  uStack_50 = uVar7;
  func_0x00010bfde980();
  uStack_40 = uVar6;
  func_0x000100505190(&uStack_220,0x3d);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar8 == (undefined8 *)param_3) {
LAB_107074dcc:
    puVar12 = (undefined1 *)0x1;
  }
  else {
    puVar12 = (undefined1 *)0x0;
    if ((puVar8 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107074dd0;
    puVar12 = (undefined1 *)puVar8;
    _objc_opt_class(puVar8);
    puVar9 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar12);
    if (((((ulong)puVar9 & 1) != 0) &&
        ((((*(char *)((long)puVar8 + 8) == param_3[8] && (*(char *)((long)puVar8 + 9) == param_3[9])
           ) && (*(char *)((long)puVar8 + 10) == param_3[10])) &&
         ((*(char *)((long)puVar8 + 0xb) == param_3[0xb] &&
          (*(char *)((long)puVar8 + 0xc) == param_3[0xc])))))) &&
       ((*(char *)((long)puVar8 + 0xd) == param_3[0xd] &&
        (((*(char *)((long)puVar8 + 0xe) == param_3[0xe] &&
          (*(char *)((long)puVar8 + 0xf) == param_3[0xf])) &&
         ((*(char *)((long)puVar8 + 0x10) == param_3[0x10] &&
          ((*(char *)((long)puVar8 + 0x11) == param_3[0x11] &&
           (*(char *)((long)puVar8 + 0x12) == param_3[0x12])))))))))) {
      dVar5 = ABS(*(double *)((long)puVar8 + 0x38) - *(double *)(param_3 + 0x38));
      if ((dVar5 < 2.2250738585072014e-308) ||
         (dVar5 < ABS(*(double *)((long)puVar8 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16)) {
        dVar5 = ABS(*(double *)((long)puVar8 + 0x40) - *(double *)(param_3 + 0x40));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)((long)puVar8 + 0x40) + *(double *)(param_3 + 0x40)) *
                    2.220446049250313e-16)) {
          dVar5 = ABS(*(double *)((long)puVar8 + 0x48) - *(double *)(param_3 + 0x48));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)((long)puVar8 + 0x48) + *(double *)(param_3 + 0x48)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)((long)puVar8 + 0x50) - *(double *)(param_3 + 0x50));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)((long)puVar8 + 0x50) + *(double *)(param_3 + 0x50)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)((long)puVar8 + 0x58) - *(double *)(param_3 + 0x58));
              if (((dVar5 < 2.2250738585072014e-308) ||
                  (dVar5 < ABS(*(double *)((long)puVar8 + 0x58) + *(double *)(param_3 + 0x58)) *
                           2.220446049250313e-16)) &&
                 ((((uVar3 = NEON_uminv(CONCAT17((char)(-(ulong)(*(double *)((long)puVar8 + 0x140)
                                                                == *(double *)(param_3 + 0x140)) >>
                                                       8),CONCAT16((char)-(ulong)(*(double *)
                                                                                   ((long)puVar8 +
                                                                                   0x140) ==
                                                                                 *(double *)
                                                                                  (param_3 + 0x140))
                                                                   ,CONCAT15((char)(-(ulong)(*(
                                                  double *)((long)puVar8 + 0x138) ==
                                                  *(double *)(param_3 + 0x138)) >> 8),
                                                  CONCAT14((char)-(ulong)(*(double *)
                                                                           ((long)puVar8 + 0x138) ==
                                                                         *(double *)
                                                                          (param_3 + 0x138)),
                                                           CONCAT13((char)(-(ulong)(*(double *)
                                                                                     ((long)puVar8 +
                                                                                     0x130) ==
                                                                                   *(double *)
                                                                                    (param_3 + 0x130
                                                                                    )) >> 8),
                                                                    CONCAT12((char)-(ulong)(*(double
                                                                                              *)((
                                                  long)puVar8 + 0x130) ==
                                                  *(double *)(param_3 + 0x130)),
                                                  -(ushort)(*(double *)((long)puVar8 + 0x128) ==
                                                           *(double *)(param_3 + 0x128)))))))),2),
                    (uVar3 & 1) != 0 &&
                    (uVar3 = NEON_uminv(CONCAT17((char)(-(ulong)(*(double *)((long)puVar8 + 0x160)
                                                                == *(double *)(param_3 + 0x160)) >>
                                                       8),CONCAT16((char)-(ulong)(*(double *)
                                                                                   ((long)puVar8 +
                                                                                   0x160) ==
                                                                                 *(double *)
                                                                                  (param_3 + 0x160))
                                                                   ,CONCAT15((char)(-(ulong)(*(
                                                  double *)((long)puVar8 + 0x158) ==
                                                  *(double *)(param_3 + 0x158)) >> 8),
                                                  CONCAT14((char)-(ulong)(*(double *)
                                                                           ((long)puVar8 + 0x158) ==
                                                                         *(double *)
                                                                          (param_3 + 0x158)),
                                                           CONCAT13((char)(-(ulong)(*(double *)
                                                                                     ((long)puVar8 +
                                                                                     0x150) ==
                                                                                   *(double *)
                                                                                    (param_3 + 0x150
                                                                                    )) >> 8),
                                                                    CONCAT12((char)-(ulong)(*(double
                                                                                              *)((
                                                  long)puVar8 + 0x150) ==
                                                  *(double *)(param_3 + 0x150)),
                                                  -(ushort)(*(double *)((long)puVar8 + 0x148) ==
                                                           *(double *)(param_3 + 0x148)))))))),2),
                    (uVar3 & 1) != 0)) &&
                   (uVar3 = NEON_uminv(CONCAT17((char)(-(ulong)(*(double *)((long)puVar8 + 0x180) ==
                                                               *(double *)(param_3 + 0x180)) >> 8),
                                                CONCAT16((char)-(ulong)(*(double *)
                                                                         ((long)puVar8 + 0x180) ==
                                                                       *(double *)(param_3 + 0x180))
                                                         ,CONCAT15((char)(-(ulong)(*(double *)
                                                                                    ((long)puVar8 +
                                                                                    0x178) ==
                                                                                  *(double *)
                                                                                   (param_3 + 0x178)
                                                                                  ) >> 8),
                                                                   CONCAT14((char)-(ulong)(*(double 
                                                  *)((long)puVar8 + 0x178) ==
                                                  *(double *)(param_3 + 0x178)),
                                                  CONCAT13((char)(-(ulong)(*(double *)
                                                                            ((long)puVar8 + 0x170)
                                                                          == *(double *)
                                                                              (param_3 + 0x170)) >>
                                                                 8),CONCAT12((char)-(ulong)(*(double
                                                                                              *)((
                                                  long)puVar8 + 0x170) ==
                                                  *(double *)(param_3 + 0x170)),
                                                  -(ushort)(*(double *)((long)puVar8 + 0x168) ==
                                                           *(double *)(param_3 + 0x168)))))))),2),
                   (uVar3 & 1) != 0)) &&
                  (uVar3 = NEON_uminv(CONCAT17((char)(-(ulong)(*(double *)((long)puVar8 + 0x1a0) ==
                                                              *(double *)(param_3 + 0x1a0)) >> 8),
                                               CONCAT16((char)-(ulong)(*(double *)
                                                                        ((long)puVar8 + 0x1a0) ==
                                                                      *(double *)(param_3 + 0x1a0)),
                                                        CONCAT15((char)(-(ulong)(*(double *)
                                                                                  ((long)puVar8 +
                                                                                  0x198) ==
                                                                                *(double *)
                                                                                 (param_3 + 0x198))
                                                                       >> 8),
                                                                 CONCAT14((char)-(ulong)(*(double *)
                                                                                          ((long)
                                                  puVar8 + 0x198) == *(double *)(param_3 + 0x198)),
                                                  CONCAT13((char)(-(ulong)(*(double *)
                                                                            ((long)puVar8 + 400) ==
                                                                          *(double *)(param_3 + 400)
                                                                          ) >> 8),
                                                           CONCAT12((char)-(ulong)(*(double *)
                                                                                    ((long)puVar8 +
                                                                                    400) == *(double
                                                                                              *)(
                                                  param_3 + 400)),
                                                  -(ushort)(*(double *)((long)puVar8 + 0x188) ==
                                                           *(double *)(param_3 + 0x188)))))))),2),
                  (uVar3 & 1) != 0)))) {
                puVar12 = (undefined1 *)0x0;
                if ((*(double *)((long)puVar8 + 0x118) != *(double *)(param_3 + 0x118)) ||
                   (*(double *)((long)puVar8 + 0x120) != *(double *)(param_3 + 0x120)))
                goto LAB_107074dd0;
                lVar10 = *(long *)((long)puVar8 + 0x18);
                if (((((lVar10 == *(long *)(param_3 + 0x18)) ||
                      (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                     ((lVar10 = *(long *)((long)puVar8 + 0x20), lVar10 == *(long *)(param_3 + 0x20)
                      || (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                    (((lVar10 = *(long *)((long)puVar8 + 0x28), lVar10 == *(long *)(param_3 + 0x28)
                      || (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                     (((((((lVar10 = *(long *)((long)puVar8 + 0x30),
                           lVar10 == *(long *)(param_3 + 0x30) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                          ((lVar10 = *(long *)((long)puVar8 + 0x60),
                           lVar10 == *(long *)(param_3 + 0x60) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                         (((lVar10 = *(long *)((long)puVar8 + 0x68),
                           lVar10 == *(long *)(param_3 + 0x68) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                          ((lVar10 = *(long *)((long)puVar8 + 0x70),
                           lVar10 == *(long *)(param_3 + 0x70) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)))))) &&
                        ((((lVar10 = *(long *)((long)puVar8 + 0x78),
                           lVar10 == *(long *)(param_3 + 0x78) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                          ((lVar10 = *(long *)((long)puVar8 + 0x80),
                           lVar10 == *(long *)(param_3 + 0x80) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                         ((lVar10 = *(long *)((long)puVar8 + 0x88),
                          lVar10 == *(long *)(param_3 + 0x88) ||
                          (func_0x00010c071ae0(), (int)lVar10 != 0)))))) &&
                       ((lVar10 = *(long *)((long)puVar8 + 0x90),
                        lVar10 == *(long *)(param_3 + 0x90) ||
                        (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                      ((((lVar10 = *(long *)((long)puVar8 + 0x98),
                         lVar10 == *(long *)(param_3 + 0x98) ||
                         (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                        ((lVar10 = *(long *)((long)puVar8 + 0xa0),
                         lVar10 == *(long *)(param_3 + 0xa0) ||
                         (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                       (((lVar10 = *(long *)((long)puVar8 + 0xa8),
                         lVar10 == *(long *)(param_3 + 0xa8) ||
                         (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                        (((lVar10 = *(long *)((long)puVar8 + 0xb0),
                          lVar10 == *(long *)(param_3 + 0xb0) ||
                          (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                         ((((lVar10 = *(long *)((long)puVar8 + 0xb8),
                            lVar10 == *(long *)(param_3 + 0xb8) ||
                            (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                           ((lVar10 = *(long *)((long)puVar8 + 0xc0),
                            lVar10 == *(long *)(param_3 + 0xc0) ||
                            (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                          ((lVar10 = *(long *)((long)puVar8 + 200),
                           lVar10 == *(long *)(param_3 + 200) ||
                           (func_0x00010c071ae0(), (int)lVar10 != 0)))))))))))))))) &&
                   (((lVar10 = *(long *)((long)puVar8 + 0xd0), lVar10 == *(long *)(param_3 + 0xd0)
                     || (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                    ((((((lVar10 = *(long *)((long)puVar8 + 0xd8),
                         lVar10 == *(long *)(param_3 + 0xd8) ||
                         (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                        ((lVar10 = *(long *)((long)puVar8 + 0xe0),
                         lVar10 == *(long *)(param_3 + 0xe0) ||
                         (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                       ((lVar10 = *(long *)((long)puVar8 + 0xe8),
                        lVar10 == *(long *)(param_3 + 0xe8) ||
                        (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                      ((lVar10 = *(long *)((long)puVar8 + 0xf0), lVar10 == *(long *)(param_3 + 0xf0)
                       || (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                     ((((lVar10 = *(long *)((long)puVar8 + 0xf8),
                        lVar10 == *(long *)(param_3 + 0xf8) ||
                        (func_0x00010c071ae0(), (int)lVar10 != 0)) &&
                       ((lVar10 = *(long *)((long)puVar8 + 0x100),
                        lVar10 == *(long *)(param_3 + 0x100) ||
                        (func_0x00010c071ae0(), (int)lVar10 != 0)))) &&
                      ((lVar10 = *(long *)((long)puVar8 + 0x108),
                       lVar10 == *(long *)(param_3 + 0x108) ||
                       (func_0x00010c071ae0(), (int)lVar10 != 0)))))))))) {
                  puVar12 = *(undefined1 **)((long)puVar8 + 0x110);
                  if (puVar12 != *(undefined1 **)(param_3 + 0x110)) {
                    func_0x00010c071ae0();
                    goto LAB_107074dd0;
                  }
                  goto LAB_107074dcc;
                }
              }
            }
          }
        }
      }
    }
    puVar12 = (undefined1 *)0x0;
  }
LAB_107074dd0:
  _objc_release(param_3);
  return (undefined8 *)puVar12;
}



/* Entry: 107074868; end: 107074deb; -[SCChatMessageCellViewModel isEqual:] */

long FUN_107074868(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107074dcc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107074dd0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((((uVar3 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
       ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
        (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
         ((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
          ((*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11) &&
           (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))))))))) {
      dVar1 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      if ((dVar1 < 2.2250738585072014e-308) ||
         (dVar1 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16)) {
        dVar1 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
        if ((dVar1 < 2.2250738585072014e-308) ||
           (dVar1 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                    2.220446049250313e-16)) {
          dVar1 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
          if ((dVar1 < 2.2250738585072014e-308) ||
             (dVar1 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                      2.220446049250313e-16)) {
            dVar1 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
            if ((dVar1 < 2.2250738585072014e-308) ||
               (dVar1 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                        2.220446049250313e-16)) {
              dVar1 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
              if (((dVar1 < 2.2250738585072014e-308) ||
                  (dVar1 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                           2.220446049250313e-16)) &&
                 ((((uVar5 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x140) ==
                                                          *(double *)(param_3 + 0x140)),
                                                 CONCAT24(-(ushort)(*(double *)(param_1 + 0x138) ==
                                                                   *(double *)(param_3 + 0x138)),
                                                          CONCAT22(-(ushort)(*(double *)
                                                                              (param_1 + 0x130) ==
                                                                            *(double *)
                                                                             (param_3 + 0x130)),
                                                                   -(ushort)(*(double *)
                                                                              (param_1 + 0x128) ==
                                                                            *(double *)
                                                                             (param_3 + 0x128))))),2
                                       ), (uVar5 & 1) != 0 &&
                    (uVar5 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x160) ==
                                                          *(double *)(param_3 + 0x160)),
                                                 CONCAT24(-(ushort)(*(double *)(param_1 + 0x158) ==
                                                                   *(double *)(param_3 + 0x158)),
                                                          CONCAT22(-(ushort)(*(double *)
                                                                              (param_1 + 0x150) ==
                                                                            *(double *)
                                                                             (param_3 + 0x150)),
                                                                   -(ushort)(*(double *)
                                                                              (param_1 + 0x148) ==
                                                                            *(double *)
                                                                             (param_3 + 0x148))))),2
                                       ), (uVar5 & 1) != 0)) &&
                   (uVar5 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x180) ==
                                                         *(double *)(param_3 + 0x180)),
                                                CONCAT24(-(ushort)(*(double *)(param_1 + 0x178) ==
                                                                  *(double *)(param_3 + 0x178)),
                                                         CONCAT22(-(ushort)(*(double *)
                                                                             (param_1 + 0x170) ==
                                                                           *(double *)
                                                                            (param_3 + 0x170)),
                                                                  -(ushort)(*(double *)
                                                                             (param_1 + 0x168) ==
                                                                           *(double *)
                                                                            (param_3 + 0x168))))),2)
                   , (uVar5 & 1) != 0)) &&
                  (uVar5 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x1a0) ==
                                                        *(double *)(param_3 + 0x1a0)),
                                               CONCAT24(-(ushort)(*(double *)(param_1 + 0x198) ==
                                                                 *(double *)(param_3 + 0x198)),
                                                        CONCAT22(-(ushort)(*(double *)
                                                                            (param_1 + 400) ==
                                                                          *(double *)(param_3 + 400)
                                                                          ),
                                                                 -(ushort)(*(double *)
                                                                            (param_1 + 0x188) ==
                                                                          *(double *)
                                                                           (param_3 + 0x188))))),2),
                  (uVar5 & 1) != 0)))) {
                lVar4 = 0;
                if ((*(double *)(param_1 + 0x118) != *(double *)(param_3 + 0x118)) ||
                   (*(double *)(param_1 + 0x120) != *(double *)(param_3 + 0x120)))
                goto LAB_107074dd0;
                lVar4 = *(long *)(param_1 + 0x18);
                if (((((lVar4 == *(long *)(param_3 + 0x18)) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                     ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                    (((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                     (((((((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                          ((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                         (((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                          ((lVar4 = *(long *)(param_1 + 0x70), lVar4 == *(long *)(param_3 + 0x70) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                        ((((lVar4 = *(long *)(param_1 + 0x78), lVar4 == *(long *)(param_3 + 0x78) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                          ((lVar4 = *(long *)(param_1 + 0x80), lVar4 == *(long *)(param_3 + 0x80) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                         ((lVar4 = *(long *)(param_1 + 0x88), lVar4 == *(long *)(param_3 + 0x88) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                       ((lVar4 = *(long *)(param_1 + 0x90), lVar4 == *(long *)(param_3 + 0x90) ||
                        (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                      ((((lVar4 = *(long *)(param_1 + 0x98), lVar4 == *(long *)(param_3 + 0x98) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                        ((lVar4 = *(long *)(param_1 + 0xa0), lVar4 == *(long *)(param_3 + 0xa0) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                       (((lVar4 = *(long *)(param_1 + 0xa8), lVar4 == *(long *)(param_3 + 0xa8) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                        (((lVar4 = *(long *)(param_1 + 0xb0), lVar4 == *(long *)(param_3 + 0xb0) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                         ((((lVar4 = *(long *)(param_1 + 0xb8), lVar4 == *(long *)(param_3 + 0xb8)
                            || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                           ((lVar4 = *(long *)(param_1 + 0xc0), lVar4 == *(long *)(param_3 + 0xc0)
                            || (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                          ((lVar4 = *(long *)(param_1 + 200), lVar4 == *(long *)(param_3 + 200) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))))))))) &&
                   (((lVar4 = *(long *)(param_1 + 0xd0), lVar4 == *(long *)(param_3 + 0xd0) ||
                     (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                    ((((((lVar4 = *(long *)(param_1 + 0xd8), lVar4 == *(long *)(param_3 + 0xd8) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                        ((lVar4 = *(long *)(param_1 + 0xe0), lVar4 == *(long *)(param_3 + 0xe0) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                       ((lVar4 = *(long *)(param_1 + 0xe8), lVar4 == *(long *)(param_3 + 0xe8) ||
                        (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                      ((lVar4 = *(long *)(param_1 + 0xf0), lVar4 == *(long *)(param_3 + 0xf0) ||
                       (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                     ((((lVar4 = *(long *)(param_1 + 0xf8), lVar4 == *(long *)(param_3 + 0xf8) ||
                        (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                       ((lVar4 = *(long *)(param_1 + 0x100), lVar4 == *(long *)(param_3 + 0x100) ||
                        (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                      ((lVar4 = *(long *)(param_1 + 0x108), lVar4 == *(long *)(param_3 + 0x108) ||
                       (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))) {
                  lVar4 = *(long *)(param_1 + 0x110);
                  if (lVar4 != *(long *)(param_3 + 0x110)) {
                    func_0x00010c071ae0();
                    goto LAB_107074dd0;
                  }
                  goto LAB_107074dcc;
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_107074dd0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107074dec; end: 107074df3; -[SCChatMessageCellViewModel savableViewModel] */

undefined8 FUN_107074dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107074df4; end: 107074dfb; -[SCChatMessageCellViewModel reactableViewModel] */

undefined8 FUN_107074df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107074dfc; end: 107074e03; -[SCChatMessageCellViewModel shouldShowSenderHeader] */

undefined1 FUN_107074dfc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107074e04; end: 107074e0b; -[SCChatMessageCellViewModel senderHeaderViewModel] */

undefined8 FUN_107074e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107074e0c; end: 107074e13; -[SCChatMessageCellViewModel senderLine] */

undefined8 FUN_107074e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107074e14; end: 107074e1b; -[SCChatMessageCellViewModel shouldShowFoldIndicator] */

undefined1 FUN_107074e14(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107074e1c; end: 107074e23; -[SCChatMessageCellViewModel bodyWidth] */

undefined8 FUN_107074e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107074e24; end: 107074e2b; -[SCChatMessageCellViewModel payloadWidth] */

undefined8 FUN_107074e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107074e2c; end: 107074e33; -[SCChatMessageCellViewModel heightExcludingContentHeight] */

undefined8 FUN_107074e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107074e34; end: 107074e3b; -[SCChatMessageCellViewModel minimumContentWidth] */

undefined8 FUN_107074e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107074e3c; end: 107074e43; -[SCChatMessageCellViewModel maximumContentWidth] */

undefined8 FUN_107074e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107074e44; end: 107074e4f; -[SCChatMessageCellViewModel bodyInsets] */

undefined8 FUN_107074e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 107074e50; end: 107074e5b; -[SCChatMessageCellViewModel payloadContainerViewInsets] */

undefined8 FUN_107074e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 107074e5c; end: 107074e67; -[SCChatMessageCellViewModel payloadContainerViewMargins] */

undefined8 FUN_107074e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 107074e68; end: 107074e6f; -[SCChatMessageCellViewModel payloadContainerCornerRadii] */

undefined8 FUN_107074e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107074e70; end: 107074e7b; -[SCChatMessageCellViewModel additionalInsets] */

undefined8 FUN_107074e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 107074e7c; end: 107074e83; -[SCChatMessageCellViewModel payloadViewPosition] */

undefined8 FUN_107074e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107074e84; end: 107074e8b; -[SCChatMessageCellViewModel reusableCellIdentifier] */

undefined8 FUN_107074e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107074e8c; end: 107074e93; -[SCChatMessageCellViewModel shouldDisplayBelowFoldInChat] */

undefined1 FUN_107074e8c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107074e94; end: 107074e9b; -[SCChatMessageCellViewModel isUnseenMessageInChat] */

undefined1 FUN_107074e94(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107074e9c; end: 107074ea3; -[SCChatMessageCellViewModel isAvailableForNewChatsAffordance] */

undefined1 FUN_107074e9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107074ea4; end: 107074eab; -[SCChatMessageCellViewModel isMessageSentBySelf] */

undefined1 FUN_107074ea4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107074eac; end: 107074eb3; -[SCChatMessageCellViewModel dateHeaderViewModel] */

undefined8 FUN_107074eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107074eb4; end: 107074ebb; -[SCChatMessageCellViewModel messageContent] */

undefined8 FUN_107074eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107074ebc; end: 107074ec3; -[SCChatMessageCellViewModel quotedRenderableViewModel] */

undefined8 FUN_107074ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107074ec4; end: 107074ecb; -[SCChatMessageCellViewModel belowMessageAccessoryContent] */

undefined8 FUN_107074ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107074ecc; end: 107074ed3; -[SCChatMessageCellViewModel ctaAccessoryContent] */

undefined8 FUN_107074ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107074ed4; end: 107074edb; -[SCChatMessageCellViewModel postSnapActionsParams] */

undefined8 FUN_107074ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107074edc; end: 107074ee3; -[SCChatMessageCellViewModel postSnapActionsSize] */

undefined1  [16] FUN_107074edc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x118);
}



/* Entry: 107074ee4; end: 107074eeb; -[SCChatMessageCellViewModel timestampViewModel] */

undefined8 FUN_107074ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107074eec; end: 107074ef3; -[SCChatMessageCellViewModel identifier] */

undefined8 FUN_107074eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107074ef4; end: 107074efb; -[SCChatMessageCellViewModel diffableIdentifier] */

undefined8 FUN_107074ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107074efc; end: 107074f03; -[SCChatMessageCellViewModel accessibilityValue] */

undefined8 FUN_107074efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107074f04; end: 107074f0b; -[SCChatMessageCellViewModel externalTapAction] */

undefined8 FUN_107074f04(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107074f0c; end: 107074f13; -[SCChatMessageCellViewModel externalDoubleTapAction] */

undefined8 FUN_107074f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107074f14; end: 107074f1b; -[SCChatMessageCellViewModel prefetchPluginIdentifier] */

undefined8 FUN_107074f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107074f1c; end: 107074f23; -[SCChatMessageCellViewModel analyticsMessageId] */

undefined8 FUN_107074f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107074f24; end: 107074f2b; -[SCChatMessageCellViewModel message] */

undefined8 FUN_107074f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107074f2c; end: 107074f33; -[SCChatMessageCellViewModel canBeQuoted] */

undefined1 FUN_107074f2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107074f34; end: 107074f3b; -[SCChatMessageCellViewModel isGroupConversation] */

undefined1 FUN_107074f34(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107074f3c; end: 107074f43; -[SCChatMessageCellViewModel conversationId] */

undefined8 FUN_107074f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107074f44; end: 107074f4b; -[SCChatMessageCellViewModel renderAsBubble] */

undefined1 FUN_107074f44(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107074f4c; end: 107074f53; -[SCChatMessageCellViewModel isLastMessage] */

undefined1 FUN_107074f4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107074f54; end: 107074f5b; -[SCChatMessageCellViewModel recipientUserId] */

undefined8 FUN_107074f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107074f5c; end: 107074f63; -[SCChatMessageCellViewModel senderUserId] */

undefined8 FUN_107074f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107074f64; end: 107074f6b; -[SCChatMessageCellViewModel conversationSubtypeMetadata] */

undefined8 FUN_107074f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107074f6c; end: 107074f73; -[SCChatMessageCellViewModel isUnknownMessage] */

undefined1 FUN_107074f6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107074f74; end: 107074f7b; -[SCChatMessageCellViewModel messages] */

undefined8 FUN_107074f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 107074f7c; end: 1070750d7; -[SCChatMessageCellViewModel .cxx_destruct] */

void FUN_107074f7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
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
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1070750d8; end: 10707528f; -[SCChatViewHeaderViewModel initWithDisplayName:subtextInfo:animatedSubtextInfo:uberAvatarConfiguration:avatarStyle:bannerViewModel:accessoryButtonType:hasPendingFriendRequest:allowDisplayNameEdit:disableLeftIconInteraction:trailingIcon:showLegalHoldBadge:] */

undefined8 *
FUN_1070750d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f8750;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_9;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_10._2_1_;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107075290; end: 1070752b3; -[SCChatViewHeaderViewModel copyWithZone:] */

undefined8 FUN_107075290(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


