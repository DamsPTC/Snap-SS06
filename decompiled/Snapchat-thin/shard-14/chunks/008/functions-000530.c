/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b64e570; end: 10b64e577; -[SCSnapchattersUpdateDataRequestMuteStory aFriend] */

undefined8 FUN_10b64e570(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64e578; end: 10b64e583; -[SCSnapchattersUpdateDataRequestMuteStory .cxx_destruct] */

void FUN_10b64e578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64e584; end: 10b64e62f; -[SCSnapchattersUpdateDataRequestSetDisplay initWithSnapchatter:displayName:] */

undefined1 *
FUN_10b64e584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707480;
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



/* Entry: 10b64e630; end: 10b64e653; -[SCSnapchattersUpdateDataRequestSetDisplay copyWithZone:] */

undefined8 FUN_10b64e630(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64e654; end: 10b64e6c7; -[SCSnapchattersUpdateDataRequestSetDisplay hash] */

undefined8 * FUN_10b64e654(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b64e748:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64e754;
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
          goto LAB_10b64e754;
        }
        goto LAB_10b64e748;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b64e754:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b64e6c8; end: 10b64e76f; -[SCSnapchattersUpdateDataRequestSetDisplay isEqual:] */

long FUN_10b64e6c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64e748:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64e754;
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
          goto LAB_10b64e754;
        }
        goto LAB_10b64e748;
      }
    }
    lVar3 = 0;
  }
LAB_10b64e754:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64e770; end: 10b64e777; -[SCSnapchattersUpdateDataRequestSetDisplay snapchatter] */

undefined8 FUN_10b64e770(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64e778; end: 10b64e77f; -[SCSnapchattersUpdateDataRequestSetDisplay displayName] */

undefined8 FUN_10b64e778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64e780; end: 10b64e7af; -[SCSnapchattersUpdateDataRequestSetDisplay .cxx_destruct] */

void FUN_10b64e780(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64e7b0; end: 10b64e827; -[SCSnapchattersUpdateDataRequestSetStoryPrivacy initWithUserIds:] */

undefined1 * FUN_10b64e7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112707488;
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



/* Entry: 10b64e828; end: 10b64e84b; -[SCSnapchattersUpdateDataRequestSetStoryPrivacy copyWithZone:] */

undefined8 FUN_10b64e828(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64e84c; end: 10b64e853; -[SCSnapchattersUpdateDataRequestSetStoryPrivacy hash] */

void FUN_10b64e84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b64e854; end: 10b64e8e3; -[SCSnapchattersUpdateDataRequestSetStoryPrivacy isEqual:] */

long FUN_10b64e854(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64e8c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b64e8c8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b64e8c8;
    }
  }
  lVar3 = 1;
LAB_10b64e8c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64e8e4; end: 10b64e8eb; -[SCSnapchattersUpdateDataRequestSetStoryPrivacy userIds] */

undefined8 FUN_10b64e8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64e8ec; end: 10b64e8f7; -[SCSnapchattersUpdateDataRequestSetStoryPrivacy .cxx_destruct] */

void FUN_10b64e8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64e8f8; end: 10b64e96f; -[SCSnapchattersUpdateDataRequestUnblock initWithBlockedSnapchatter:] */

undefined1 * FUN_10b64e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112707490;
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



/* Entry: 10b64e970; end: 10b64e993; -[SCSnapchattersUpdateDataRequestUnblock copyWithZone:] */

undefined8 FUN_10b64e970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64e994; end: 10b64e99b; -[SCSnapchattersUpdateDataRequestUnblock hash] */

void FUN_10b64e994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b64e99c; end: 10b64ea2b; -[SCSnapchattersUpdateDataRequestUnblock isEqual:] */

long FUN_10b64e99c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64ea10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b64ea10;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b64ea10;
    }
  }
  lVar3 = 1;
LAB_10b64ea10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64ea2c; end: 10b64ea33; -[SCSnapchattersUpdateDataRequestUnblock blockedSnapchatter] */

undefined8 FUN_10b64ea2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64ea34; end: 10b64ea3f; -[SCSnapchattersUpdateDataRequestUnblock .cxx_destruct] */

void FUN_10b64ea34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64ea40; end: 10b64eab7; -[SCSnapchattersUpdateDataRequestUnMuteStory initWithAFriend:] */

undefined1 * FUN_10b64ea40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112707498;
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



/* Entry: 10b64eab8; end: 10b64eadb; -[SCSnapchattersUpdateDataRequestUnMuteStory copyWithZone:] */

undefined8 FUN_10b64eab8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64eadc; end: 10b64eae3; -[SCSnapchattersUpdateDataRequestUnMuteStory hash] */

void FUN_10b64eadc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b64eae4; end: 10b64eb73; -[SCSnapchattersUpdateDataRequestUnMuteStory isEqual:] */

long FUN_10b64eae4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64eb58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b64eb58;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b64eb58;
    }
  }
  lVar3 = 1;
LAB_10b64eb58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64eb74; end: 10b64eb7b; -[SCSnapchattersUpdateDataRequestUnMuteStory aFriend] */

undefined8 FUN_10b64eb74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64eb7c; end: 10b64eb87; -[SCSnapchattersUpdateDataRequestUnMuteStory .cxx_destruct] */

void FUN_10b64eb7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64eb88; end: 10b64ec33; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji initWithSnapchatter:postSendEmoji:] */

undefined1 *
FUN_10b64eb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127074a0;
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



/* Entry: 10b64ec34; end: 10b64ec57; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji copyWithZone:] */

undefined8 FUN_10b64ec34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64ec58; end: 10b64eccb; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji hash] */

undefined8 * FUN_10b64ec58(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b64ed4c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64ed58;
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
          goto LAB_10b64ed58;
        }
        goto LAB_10b64ed4c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b64ed58:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b64eccc; end: 10b64ed73; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji isEqual:] */

long FUN_10b64eccc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64ed4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64ed58;
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
          goto LAB_10b64ed58;
        }
        goto LAB_10b64ed4c;
      }
    }
    lVar3 = 0;
  }
LAB_10b64ed58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64ed74; end: 10b64ed7b; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji snapchatter] */

undefined8 FUN_10b64ed74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64ed7c; end: 10b64ed83; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji postSendEmoji] */

undefined8 FUN_10b64ed7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64ed84; end: 10b64edb3; -[SCSnapchattersUpdateDataRequestSetPostSendEmoji .cxx_destruct] */

void FUN_10b64ed84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64edb4; end: 10b64edd7; -[SCSnapchattersLoggingData copyWithZone:] */

undefined8 FUN_10b64edb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64edd8; end: 10b64ee4f; -[SCSnapchattersLoggingData hash] */

undefined8 * FUN_10b64edd8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b64eee0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b64eeec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b64eeec;
        }
        goto LAB_10b64eee0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b64eeec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b64ee50; end: 10b64ef07; -[SCSnapchattersLoggingData isEqual:] */

long FUN_10b64ee50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64eee0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64eeec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b64eeec;
        }
        goto LAB_10b64eee0;
      }
    }
    lVar3 = 0;
  }
LAB_10b64eeec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64ef08; end: 10b64ef0f; -[SCSnapchattersLoggingData state] */

undefined8 FUN_10b64ef08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64ef10; end: 10b64ef17; -[SCSnapchattersLoggingData error] */

undefined8 FUN_10b64ef10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64ef18; end: 10b64ef77; -[SCSnapchattersFetchSuggestionDiff initWithModifiedCount:purgedCount:addedCount:suggestionCategoryType:] */

void FUN_10b64ef18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127074b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 10b64ef78; end: 10b64ef9b; -[SCSnapchattersFetchSuggestionDiff copyWithZone:] */

undefined8 FUN_10b64ef78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64ef9c; end: 10b64efff; -[SCSnapchattersFetchSuggestionDiff hash] */

undefined8 * FUN_10b64ef9c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c3191c(&uStack_40,4);
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
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x20) == *(long *)(param_3 + 0x20));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10b64f000; end: 10b64f0b7; -[SCSnapchattersFetchSuggestionDiff isEqual:] */

bool FUN_10b64f000(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b64f0b8; end: 10b64f0bf; -[SCSnapchattersFetchSuggestionDiff modifiedCount] */

undefined8 FUN_10b64f0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64f0c0; end: 10b64f0c7; -[SCSnapchattersFetchSuggestionDiff purgedCount] */

undefined8 FUN_10b64f0c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64f0c8; end: 10b64f0cf; -[SCSnapchattersFetchSuggestionDiff addedCount] */

undefined8 FUN_10b64f0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64f0d0; end: 10b64f0d7; -[SCSnapchattersFetchSuggestionDiff suggestionCategoryType] */

undefined8 FUN_10b64f0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b64f0d8; end: 10b64f1e7; -[SCSnapchattersFetchSuggestionLoggingData initWithFetchCount:suggestionDiffs:purgedBeforeImpressedCount:startTime:networkStartTime:networkEndTime:endTime:fetchGap:triggerType:triggerSourceType:error:] */

undefined1 *
FUN_10b64f0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_9);
  _objc_retain(param_13);
  puStack_88 = PTR_PTR_1127074b8;
  uStack_90 = param_6;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_10;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64f1e8; end: 10b64f20b; -[SCSnapchattersFetchSuggestionLoggingData copyWithZone:] */

undefined8 FUN_10b64f1e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64f20c; end: 10b64f347; -[SCSnapchattersFetchSuggestionLoggingData hash] */

long * FUN_10b64f20c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar5 = &lStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lStack_80 = -lVar7;
  if (-1 < lVar7) {
    lStack_80 = lVar7;
  }
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x18);
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  lStack_70 = -lVar7;
  if (-1 < lVar7) {
    lStack_70 = lVar7;
  }
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000107c3191c(&lStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar5 == (long *)param_3) {
LAB_10b64f514:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((plVar5 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b64f520;
    puVar9 = (undefined1 *)plVar5;
    _objc_opt_class(plVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((((*(long *)((long)plVar5 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)((long)plVar5 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)((long)plVar5 + 0x48) == *(long *)(param_3 + 0x48))) &&
        (*(long *)((long)plVar5 + 0x50) == *(long *)(param_3 + 0x50))))) {
      dVar11 = ABS(*(double *)((long)plVar5 + 0x20) - *(double *)(param_3 + 0x20));
      dVar10 = ABS(*(double *)((long)plVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)plVar5 + 0x28) - *(double *)(param_3 + 0x28));
        dVar10 = ABS(*(double *)((long)plVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar10 = ABS(*(double *)((long)plVar5 + 0x30) - *(double *)(param_3 + 0x30));
          if ((dVar10 < 2.2250738585072014e-308) ||
             (dVar10 < ABS(*(double *)((long)plVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
                       2.220446049250313e-16)) {
            dVar10 = ABS(*(double *)((long)plVar5 + 0x38) - *(double *)(param_3 + 0x38));
            if ((dVar10 < 2.2250738585072014e-308) ||
               (dVar10 < ABS(*(double *)((long)plVar5 + 0x38) + *(double *)(param_3 + 0x38)) *
                         2.220446049250313e-16)) {
              dVar10 = ABS(*(double *)((long)plVar5 + 0x40) - *(double *)(param_3 + 0x40));
              if (((dVar10 < 2.2250738585072014e-308) ||
                  (dVar10 < ABS(*(double *)((long)plVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                            2.220446049250313e-16)) &&
                 ((lVar7 = *(long *)((long)plVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
                puVar9 = *(undefined1 **)((long)plVar5 + 0x58);
                if (puVar9 != *(undefined1 **)(param_3 + 0x58)) {
                  func_0x00010c071ae0();
                  goto LAB_10b64f520;
                }
                goto LAB_10b64f514;
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b64f520:
  _objc_release(param_3);
  return (long *)puVar9;
}



/* Entry: 10b64f348; end: 10b64f53b; -[SCSnapchattersFetchSuggestionLoggingData isEqual:] */

long FUN_10b64f348(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64f514:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64f520;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
              if (((dVar5 < 2.2250738585072014e-308) ||
                  (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                           2.220446049250313e-16)) &&
                 ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
                lVar4 = *(long *)(param_1 + 0x58);
                if (lVar4 != *(long *)(param_3 + 0x58)) {
                  func_0x00010c071ae0();
                  goto LAB_10b64f520;
                }
                goto LAB_10b64f514;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b64f520:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b64f53c; end: 10b64f543; -[SCSnapchattersFetchSuggestionLoggingData fetchCount] */

undefined8 FUN_10b64f53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64f544; end: 10b64f54b; -[SCSnapchattersFetchSuggestionLoggingData suggestionDiffs] */

undefined8 FUN_10b64f544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64f54c; end: 10b64f553; -[SCSnapchattersFetchSuggestionLoggingData purgedBeforeImpressedCount] */

undefined8 FUN_10b64f54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64f554; end: 10b64f55b; -[SCSnapchattersFetchSuggestionLoggingData startTime] */

undefined8 FUN_10b64f554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b64f55c; end: 10b64f563; -[SCSnapchattersFetchSuggestionLoggingData networkStartTime] */

undefined8 FUN_10b64f55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b64f564; end: 10b64f56b; -[SCSnapchattersFetchSuggestionLoggingData networkEndTime] */

undefined8 FUN_10b64f564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b64f56c; end: 10b64f573; -[SCSnapchattersFetchSuggestionLoggingData endTime] */

undefined8 FUN_10b64f56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b64f574; end: 10b64f57b; -[SCSnapchattersFetchSuggestionLoggingData fetchGap] */

undefined8 FUN_10b64f574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b64f57c; end: 10b64f583; -[SCSnapchattersFetchSuggestionLoggingData triggerType] */

undefined8 FUN_10b64f57c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b64f584; end: 10b64f58b; -[SCSnapchattersFetchSuggestionLoggingData triggerSourceType] */

undefined8 FUN_10b64f584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b64f58c; end: 10b64f593; -[SCSnapchattersFetchSuggestionLoggingData error] */

undefined8 FUN_10b64f58c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b64f594; end: 10b64f5c3; -[SCSnapchattersFetchSuggestionLoggingData .cxx_destruct] */

void FUN_10b64f594(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64f5c4; end: 10b64f69b; -[SCSnapchatterSources initWithCoder:] */

undefined1 * FUN_10b64f5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127074c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64f69c; end: 10b64f773; -[SCSnapchatterSources initWithWidgetSource:pageSource:entryPoint:] */

undefined1 *
FUN_10b64f69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1127074c0;
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



/* Entry: 10b64f774; end: 10b64f797; -[SCSnapchatterSources copyWithZone:] */

undefined8 FUN_10b64f774(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64f798; end: 10b64f80b; -[SCSnapchatterSources encodeWithCoder:] */

void FUN_10b64f798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f69a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f69a58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f69a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b64f80c; end: 10b64f88b; -[SCSnapchatterSources hash] */

undefined8 * FUN_10b64f80c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b64f924:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b64f930;
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
            goto LAB_10b64f930;
          }
          goto LAB_10b64f924;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b64f930:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b64f88c; end: 10b64f94b; -[SCSnapchatterSources isEqual:] */

long FUN_10b64f88c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64f924:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64f930;
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
            goto LAB_10b64f930;
          }
          goto LAB_10b64f924;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b64f930:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64f94c; end: 10b64f953; -[SCSnapchatterSources widgetSource] */

undefined8 FUN_10b64f94c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64f954; end: 10b64f95b; -[SCSnapchatterSources pageSource] */

undefined8 FUN_10b64f954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64f95c; end: 10b64f963; -[SCSnapchatterSources entryPoint] */

undefined8 FUN_10b64f95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64f964; end: 10b64f99f; -[SCSnapchatterSources .cxx_destruct] */

void FUN_10b64f964(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64f9a0; end: 10b64fa4b; -[SCFriendNetworkString initWithLoadIdentifier:loadingString:] */

undefined1 *
FUN_10b64f9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127074c8;
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



/* Entry: 10b64fa4c; end: 10b64fa6f; -[SCFriendNetworkString copyWithZone:] */

undefined8 FUN_10b64fa4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64fa70; end: 10b64fae3; -[SCFriendNetworkString hash] */

undefined8 * FUN_10b64fa70(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b64fb64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64fb70;
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
          goto LAB_10b64fb70;
        }
        goto LAB_10b64fb64;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b64fb70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b64fae4; end: 10b64fb8b; -[SCFriendNetworkString isEqual:] */

long FUN_10b64fae4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64fb64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64fb70;
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
          goto LAB_10b64fb70;
        }
        goto LAB_10b64fb64;
      }
    }
    lVar3 = 0;
  }
LAB_10b64fb70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64fb8c; end: 10b64fb93; -[SCFriendNetworkString loadIdentifier] */

undefined8 FUN_10b64fb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64fb94; end: 10b64fb9b; -[SCFriendNetworkString loadingString] */

undefined8 FUN_10b64fb94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64fb9c; end: 10b64fbcb; -[SCFriendNetworkString .cxx_destruct] */

void FUN_10b64fb9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64fbcc; end: 10b64fd1b; -[SCContactItem initWithCoder:] */

undefined1 *
FUN_10b64fbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127074d0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64fd1c; end: 10b64fe57; -[SCContactItem initWithUsername:userId:displayName:displayUsername:lastUpdated:hasStarred:hasPhoto:hasSavedDate:] */

undefined1 *
FUN_10b64fd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1127074d0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_10;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64fe58; end: 10b64fe7b; -[SCContactItem copyWithZone:] */

undefined8 FUN_10b64fe58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64fe7c; end: 10b64ff53; -[SCContactItem encodeWithCoder:] */

void FUN_10b64fe7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de8218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f69a98);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x30),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f69ab8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f69ad8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f69af8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f69b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b64ff54; end: 10b650017; -[SCContactItem hash] */

undefined8 * FUN_10b64ff54(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar4 = &uStack_68;
  uStack_50 = uVar3;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b65012c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b650138;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))) {
      dVar10 = ABS((double)puVar4[6] - (double)param_3[6]);
      dVar9 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
      {
        puVar8 = (undefined8 *)puVar4[5];
        if (puVar8 != (undefined8 *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_10b650138;
        }
        goto LAB_10b65012c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b650138:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b650018; end: 10b650153; -[SCContactItem isEqual:] */

long FUN_10b650018(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b65012c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b650138;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b650138;
        }
        goto LAB_10b65012c;
      }
    }
    lVar4 = 0;
  }
LAB_10b650138:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b650154; end: 10b65015b; -[SCContactItem username] */

undefined8 FUN_10b650154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b65015c; end: 10b650163; -[SCContactItem userId] */

undefined8 FUN_10b65015c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b650164; end: 10b65016b; -[SCContactItem displayName] */

undefined8 FUN_10b650164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b65016c; end: 10b650173; -[SCContactItem displayUsername] */

undefined8 FUN_10b65016c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b650174; end: 10b65017b; -[SCContactItem lastUpdated] */

undefined8 FUN_10b650174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b65017c; end: 10b650183; -[SCContactItem hasStarred] */

undefined1 FUN_10b65017c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b650184; end: 10b65018b; -[SCContactItem hasPhoto] */

undefined1 FUN_10b650184(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b65018c; end: 10b650193; -[SCContactItem hasSavedDate] */

undefined1 FUN_10b65018c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b650194; end: 10b6501db; -[SCContactItem .cxx_destruct] */

void FUN_10b650194(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6501dc; end: 10b650263; -[SCSnapchatterStreakMetadata initWithStreakCount:expirationServerTimestamp:] */

undefined1 *
FUN_10b6501dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127074d8;
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



/* Entry: 10b650264; end: 10b650287; -[SCSnapchatterStreakMetadata copyWithZone:] */

undefined8 FUN_10b650264(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b650288; end: 10b6502ef; -[SCSnapchatterStreakMetadata hash] */

long * FUN_10b650288(long param_1,undefined8 param_2,long *param_3)

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
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b650374;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b650374;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b650374;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b650374:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b6502f0; end: 10b65038f; -[SCSnapchatterStreakMetadata isEqual:] */

long FUN_10b6502f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b650374;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b650374;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b650374;
    }
  }
  lVar3 = 1;
LAB_10b650374:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b650390; end: 10b650397; -[SCSnapchatterStreakMetadata streakCount] */

undefined8 FUN_10b650390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


