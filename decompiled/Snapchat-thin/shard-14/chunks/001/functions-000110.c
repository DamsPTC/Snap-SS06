/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afe7a7c; end: 10afe7a83; -[SCFriendActionSheetScope hideRecursiveOptions] */

undefined1 FUN_10afe7a7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe7a84; end: 10afe7a8b; -[SCFriendActionSheetScope hideSendTo] */

undefined1 FUN_10afe7a84(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afe7a8c; end: 10afe7a93; -[SCFriendActionSheetScope showHideStorySuggestions] */

undefined1 FUN_10afe7a8c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afe7a94; end: 10afe7a9b; -[SCFriendActionSheetScope saveableSnapMessageId] */

undefined8 FUN_10afe7a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afe7a9c; end: 10afe7aa3; -[SCFriendActionSheetScope setSaveableSnapMessageId:] */

void FUN_10afe7a9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10afe7aa4; end: 10afe7aab; -[SCFriendActionSheetScope groupConversationId] */

undefined8 FUN_10afe7aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afe7aac; end: 10afe7ab3; -[SCFriendActionSheetScope setGroupConversationId:] */

void FUN_10afe7aac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10afe7ab4; end: 10afe7abb; -[SCFriendActionSheetScope nonFriendAddSourceType] */

undefined8 FUN_10afe7ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afe7abc; end: 10afe7ac3; -[SCFriendActionSheetScope nonFriendAddPlacementType] */

undefined8 FUN_10afe7abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afe7ac4; end: 10afe7adb; -[SCFriendActionSheetScope delegate] */

void FUN_10afe7ac4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe7adc; end: 10afe7ae3; -[SCFriendActionSheetScope hideUserDetails] */

undefined1 FUN_10afe7adc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10afe7ae4; end: 10afe7b4b; -[SCFriendActionSheetScope .cxx_destruct] */

void FUN_10afe7ae4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe7b4c; end: 10afe7c37; -[SCGroupActionSheetScope initWithUiContainer:groupId:sourcePageType:hideRecursiveOptions:delegate:disableCallingActions:] */

undefined1 *
FUN_10afe7b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112703fa0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe7c38; end: 10afe7c3f; -[SCGroupActionSheetScope uiContainer] */

undefined8 FUN_10afe7c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe7c40; end: 10afe7c47; -[SCGroupActionSheetScope groupId] */

undefined8 FUN_10afe7c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe7c48; end: 10afe7c4f; -[SCGroupActionSheetScope sourcePageType] */

undefined8 FUN_10afe7c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe7c50; end: 10afe7c57; -[SCGroupActionSheetScope hideRecursiveOptions] */

undefined1 FUN_10afe7c50(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe7c58; end: 10afe7c5f; -[SCGroupActionSheetScope disableCallingActions] */

undefined1 FUN_10afe7c58(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afe7c60; end: 10afe7c67; -[SCGroupActionSheetScope saveableSnapMessageId] */

undefined8 FUN_10afe7c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe7c68; end: 10afe7c6f; -[SCGroupActionSheetScope setSaveableSnapMessageId:] */

void FUN_10afe7c68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10afe7c70; end: 10afe7c87; -[SCGroupActionSheetScope delegate] */

void FUN_10afe7c70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe7c88; end: 10afe7ccb; -[SCGroupActionSheetScope .cxx_destruct] */

void FUN_10afe7c88(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe7ccc; end: 10afe7e53; -[SCChatInputScope initWithPlaceholderText:shortPlaceholderText:ignoresSafeAreaLayoutGuids:inputViewTransparent:inputContext:activeConversationInformation:pluginFeatureSet:uiContainer:delegate:] */

undefined1 *
FUN_10afe7ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112703fa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe7e54; end: 10afe7e5b; -[SCChatInputScope placeholderText] */

undefined8 FUN_10afe7e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe7e5c; end: 10afe7e63; -[SCChatInputScope shortPlaceholderText] */

undefined8 FUN_10afe7e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe7e64; end: 10afe7e6b; -[SCChatInputScope ignoresSafeAreaLayoutGuides] */

undefined1 FUN_10afe7e64(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe7e6c; end: 10afe7e73; -[SCChatInputScope inputViewTransparent] */

undefined1 FUN_10afe7e6c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afe7e74; end: 10afe7e7b; -[SCChatInputScope inputContext] */

undefined8 FUN_10afe7e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe7e7c; end: 10afe7e83; -[SCChatInputScope activeConversationInformation] */

undefined8 FUN_10afe7e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe7e84; end: 10afe7e8b; -[SCChatInputScope pluginFeatureSet] */

undefined8 FUN_10afe7e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe7e8c; end: 10afe7e93; -[SCChatInputScope uiContainer] */

undefined8 FUN_10afe7e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afe7e94; end: 10afe7eab; -[SCChatInputScope delegate] */

void FUN_10afe7e94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe7eac; end: 10afe7f13; -[SCChatInputScope .cxx_destruct] */

void FUN_10afe7eac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 10afe7f14; end: 10afe7ffb; -[SCChatInputEditMessageEvent initWithMessageAttrText:messageId:scale:mentions:] */

undefined1 *
FUN_10afe7f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112703fb0;
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



/* Entry: 10afe7ffc; end: 10afe801f; -[SCChatInputEditMessageEvent copyWithZone:] */

undefined8 FUN_10afe7ffc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe8020; end: 10afe80c3; -[SCChatInputEditMessageEvent hash] */

undefined8 * FUN_10afe8020(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afe8190:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe819c;
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
          goto LAB_10afe819c;
        }
        goto LAB_10afe8190;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afe819c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afe80c4; end: 10afe81b7; -[SCChatInputEditMessageEvent isEqual:] */

long FUN_10afe80c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe8190:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe819c;
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
          goto LAB_10afe819c;
        }
        goto LAB_10afe8190;
      }
    }
    lVar4 = 0;
  }
LAB_10afe819c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afe81b8; end: 10afe81bf; -[SCChatInputEditMessageEvent messageAttrText] */

undefined8 FUN_10afe81b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe81c0; end: 10afe81c7; -[SCChatInputEditMessageEvent messageId] */

undefined8 FUN_10afe81c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe81c8; end: 10afe81cf; -[SCChatInputEditMessageEvent scale] */

undefined8 FUN_10afe81c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe81d0; end: 10afe81d7; -[SCChatInputEditMessageEvent mentions] */

undefined8 FUN_10afe81d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe81d8; end: 10afe8213; -[SCChatInputEditMessageEvent .cxx_destruct] */

void FUN_10afe81d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe8214; end: 10afe827f; +[SCChatInputTextViewEditingEvent didBeginEditingWithTextView:] */

void FUN_10afe8214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe8280; end: 10afe82e3; +[SCChatInputTextViewEditingEvent didChangeWithTextView:] */

void FUN_10afe8280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb968;
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



/* Entry: 10afe82e4; end: 10afe834f; +[SCChatInputTextViewEditingEvent didEndEditingWithTextView:] */

void FUN_10afe82e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe8350; end: 10afe83bb; +[SCChatInputTextViewEditingEvent didReturnWithTextView:] */

void FUN_10afe8350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe83bc; end: 10afe8427; +[SCChatInputTextViewEditingEvent willBeginEditingWithTextView:] */

void FUN_10afe83bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb968;
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



/* Entry: 10afe8428; end: 10afe84d3; +[SCChatInputTextViewEditingEvent willChangeTextWithTextView:range:replacementText:] */

void FUN_10afe8428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126cb968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  *(undefined8 *)(puVar2 + 0x50) = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_6;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe84d4; end: 10afe853f; +[SCChatInputTextViewEditingEvent willEndEditingWithTextView:] */

void FUN_10afe84d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb968;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe8540; end: 10afe8563; -[SCChatInputTextViewEditingEvent copyWithZone:] */

undefined8 FUN_10afe8540(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe8564; end: 10afe862b; -[SCChatInputTextViewEditingEvent hash] */

void FUN_10afe8564(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
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
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_112703fb8;
  puStack_b0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe862c; end: 10afe866f; -[SCChatInputTextViewEditingEvent internalInit] */

void FUN_10afe862c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703fb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe8670; end: 10afe87db; -[SCChatInputTextViewEditingEvent isEqual:] */

long FUN_10afe8670(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe87b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe87c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = 0;
      if ((*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48)) ||
         (*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50))) goto LAB_10afe87c0;
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
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if (lVar3 != *(long *)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_10afe87c0;
                    }
                    goto LAB_10afe87b4;
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
LAB_10afe87c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe87dc; end: 10afe8973; -[SCChatInputTextViewEditingEvent matchDidChange:willBeginEditing:didBeginEditing:willEndEditing:didEndEditing:didReturn:willChangeText:] */

void FUN_10afe87dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10afe8928;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_10afe8928;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 2) || (param_5 == 0)) goto LAB_10afe8928;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      if (param_6 == 0) goto LAB_10afe8928;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    else {
      if ((lVar2 != 4) || (param_7 == 0)) goto LAB_10afe8928;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
    }
  }
  else {
    if (lVar2 != 5) {
      if ((lVar2 == 6) && (param_9 != 0)) {
        (**(code **)(param_9 + 0x10))
                  (param_9,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
      }
      goto LAB_10afe8928;
    }
    if (param_8 == 0) goto LAB_10afe8928;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10afe8928:
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



/* Entry: 10afe8974; end: 10afe89eb; -[SCChatInputTextViewEditingEvent .cxx_destruct] */

void FUN_10afe8974(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10afe89ec; end: 10afe8a4b; +[SCChatInputStateEvent didTransitionWithFromState:toState:] */

void FUN_10afe89ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe8a4c; end: 10afe8aa7; +[SCChatInputStateEvent willTransitionWithFromState:toState:] */

void FUN_10afe8a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe8aa8; end: 10afe8acb; -[SCChatInputStateEvent copyWithZone:] */

undefined8 FUN_10afe8aa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe8acc; end: 10afe8b2f; -[SCChatInputStateEvent hash] */

void FUN_10afe8acc(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112703fc0;
  puStack_70 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe8b30; end: 10afe8b73; -[SCChatInputStateEvent internalInit] */

void FUN_10afe8b30(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703fc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe8b74; end: 10afe8c3b; -[SCChatInputStateEvent isEqual:] */

bool FUN_10afe8b74(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afe8c3c; end: 10afe8ccb; -[SCChatInputStateEvent matchWillTransition:didTransition:] */

void FUN_10afe8c3c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10afe8cb0;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10afe8cb0;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_10afe8cb0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe8ccc; end: 10afe8dc7; -[SCChatInputTextEvent initWithOldText:updatedText:addedText:changedRange:state:] */

undefined1 *
FUN_10afe8ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_112703fc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe8dc8; end: 10afe8deb; -[SCChatInputTextEvent copyWithZone:] */

undefined8 FUN_10afe8dc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe8dec; end: 10afe8e83; -[SCChatInputTextEvent hash] */

undefined8 * FUN_10afe8dec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_58;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe8f50:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe8f5c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      puVar6 = (undefined8 *)0x0;
      if ((puVar3[5] != param_3[5]) || (puVar3[6] != param_3[6])) goto LAB_10afe8f5c;
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_10afe8f5c;
          }
          goto LAB_10afe8f50;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe8f5c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe8e84; end: 10afe8f77; -[SCChatInputTextEvent isEqual:] */

long FUN_10afe8e84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe8f50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe8f5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = 0;
      if ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28)) ||
         (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))) goto LAB_10afe8f5c;
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afe8f5c;
          }
          goto LAB_10afe8f50;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe8f5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe8f78; end: 10afe8f7f; -[SCChatInputTextEvent oldText] */

undefined8 FUN_10afe8f78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe8f80; end: 10afe8f87; -[SCChatInputTextEvent updatedText] */

undefined8 FUN_10afe8f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe8f88; end: 10afe8f8f; -[SCChatInputTextEvent addedText] */

undefined8 FUN_10afe8f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe8f90; end: 10afe8f9b; -[SCChatInputTextEvent changedRange] */

undefined1  [16] FUN_10afe8f90(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 10afe8f9c; end: 10afe8fa3; -[SCChatInputTextEvent state] */

undefined8 FUN_10afe8f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe8fa4; end: 10afe8fdf; -[SCChatInputTextEvent .cxx_destruct] */

void FUN_10afe8fa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe8fe0; end: 10afe902b; +[SCChatInputTypingState composing] */

void FUN_10afe8fe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
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



/* Entry: 10afe902c; end: 10afe9077; +[SCChatInputTypingState deleting] */

void FUN_10afe902c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe9078; end: 10afe90c3; +[SCChatInputTypingState finished] */

void FUN_10afe9078(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe90c4; end: 10afe910b; +[SCChatInputTypingState inactive] */

void FUN_10afe90c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
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



/* Entry: 10afe910c; end: 10afe9157; +[SCChatInputTypingState noInput] */

void FUN_10afe910c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe9158; end: 10afe91a3; +[SCChatInputTypingState recording] */

void FUN_10afe9158(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe91a4; end: 10afe91c7; -[SCChatInputTypingState copyWithZone:] */

undefined8 FUN_10afe91a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe91c8; end: 10afe91cf; -[SCChatInputTypingState hash] */

undefined8 FUN_10afe91c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe91d0; end: 10afe9213; -[SCChatInputTypingState internalInit] */

void FUN_10afe91d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe9214; end: 10afe929b; -[SCChatInputTypingState isEqual:] */

bool FUN_10afe9214(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10afe929c; end: 10afe93c7; -[SCChatInputTypingState matchInactive:noInput:composing:deleting:finished:recording:] */

void FUN_10afe929c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    lVar1 = param_3;
    if (((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) && (lVar1 = param_5, lVar2 != 2))
    goto LAB_10afe936c;
  }
  else {
    lVar1 = param_6;
    if (((lVar2 != 3) && (lVar1 = param_7, lVar2 != 4)) && (lVar1 = param_8, lVar2 != 5))
    goto LAB_10afe936c;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10afe936c:
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



/* Entry: 10afe93c8; end: 10afe942b; +[SCChatInputPasteEvent gifWithData:] */

void FUN_10afe93c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb978;
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



/* Entry: 10afe942c; end: 10afe9497; +[SCChatInputPasteEvent imageWithImage:] */

void FUN_10afe942c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb978;
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



/* Entry: 10afe9498; end: 10afe9503; +[SCChatInputPasteEvent stickerWithSticker:] */

void FUN_10afe9498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb978;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe9504; end: 10afe959b; +[SCChatInputPasteEvent videoWithData:contentType:] */

void FUN_10afe9504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb978;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe959c; end: 10afe95bf; -[SCChatInputPasteEvent copyWithZone:] */

undefined8 FUN_10afe959c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe95c0; end: 10afe965b; -[SCChatInputPasteEvent hash] */

void FUN_10afe95c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112703fd8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe965c; end: 10afe969f; -[SCChatInputPasteEvent internalInit] */

void FUN_10afe965c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703fd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe96a0; end: 10afe979f; -[SCChatInputPasteEvent isEqual:] */

long FUN_10afe96a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe9778:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe9784;
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
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10afe9784;
              }
              goto LAB_10afe9778;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe9784:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe97a0; end: 10afe9893; -[SCChatInputPasteEvent matchGif:image:sticker:video:] */

void FUN_10afe97a0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      if (param_3 == 0) goto LAB_10afe9864;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10afe9864;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))
                  (param_6,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_10afe9864;
    }
    if (param_5 == 0) goto LAB_10afe9864;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10afe9864:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe9894; end: 10afe98e7; -[SCChatInputPasteEvent .cxx_destruct] */

void FUN_10afe9894(long param_1)

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



/* Entry: 10afe98e8; end: 10afe994b; +[SCChatInputFeatureType drawerRenderableWithDrawerRenderable:] */

void FUN_10afe98e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb8c0;
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



/* Entry: 10afe994c; end: 10afe99b7; +[SCChatInputFeatureType itemControllableWithItemControllable:] */

void FUN_10afe994c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb8c0;
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



/* Entry: 10afe99b8; end: 10afe99db; -[SCChatInputFeatureType copyWithZone:] */

undefined8 FUN_10afe99b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe99dc; end: 10afe9a53; -[SCChatInputFeatureType hash] */

void FUN_10afe99dc(long param_1)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112703fe0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe9a54; end: 10afe9a97; -[SCChatInputFeatureType internalInit] */

void FUN_10afe9a54(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703fe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe9a98; end: 10afe9b4f; -[SCChatInputFeatureType isEqual:] */

long FUN_10afe9a98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe9b28:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe9b34;
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
          goto LAB_10afe9b34;
        }
        goto LAB_10afe9b28;
      }
    }
    lVar3 = 0;
  }
LAB_10afe9b34:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe9b50; end: 10afe9bd3; -[SCChatInputFeatureType matchDrawerRenderable:itemControllable:] */

void FUN_10afe9b50(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10afe9bb8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10afe9bb8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10afe9bb8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


