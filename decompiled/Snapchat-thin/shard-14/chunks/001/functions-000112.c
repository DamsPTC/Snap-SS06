/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afebe40; end: 10afebe57; -[SCMentionBarScope composerRuntime] */

void FUN_10afebe40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afebe58; end: 10afebe5f; -[SCMentionBarScope didScopeBegin] */

undefined8 FUN_10afebe58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afebe60; end: 10afebe67; -[SCMentionBarScope setDidScopeBegin:] */

void FUN_10afebe60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10afebe68; end: 10afebe6f; -[SCMentionBarScope getNonParticipantObservableCallback] */

undefined8 FUN_10afebe68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afebe70; end: 10afebe77; -[SCMentionBarScope setGetNonParticipantObservableCallback:] */

void FUN_10afebe70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10afebe78; end: 10afebe7f; -[SCMentionBarScope merlinOnboardingType] */

undefined8 FUN_10afebe78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afebe80; end: 10afebeef; -[SCMentionBarScope .cxx_destruct] */

void FUN_10afebe80(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afebef0; end: 10afec073; -[SCMentionUserDataModel initWithUserId:username:userColor:displayName:bitmojiAvatarId:bitmojiSelfieId:searchMode:isNonParticipant:] */

undefined1 *
FUN_10afebef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112704028;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afec074; end: 10afec097; -[SCMentionUserDataModel copyWithZone:] */

undefined8 FUN_10afec074(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afec098; end: 10afec14f; -[SCMentionUserDataModel hash] */

undefined8 * FUN_10afec098(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afec250:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afec25c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[8] == param_3[8] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[7];
                if (puVar6 != (undefined8 *)param_3[7]) {
                  func_0x00010c071ae0();
                  goto LAB_10afec25c;
                }
                goto LAB_10afec250;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afec25c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afec150; end: 10afec277; -[SCMentionUserDataModel isEqual:] */

long FUN_10afec150(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afec250:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afec25c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10afec25c;
                }
                goto LAB_10afec250;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afec25c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afec278; end: 10afec27f; -[SCMentionUserDataModel userId] */

undefined8 FUN_10afec278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afec280; end: 10afec287; -[SCMentionUserDataModel username] */

undefined8 FUN_10afec280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afec288; end: 10afec28f; -[SCMentionUserDataModel userColor] */

undefined8 FUN_10afec288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afec290; end: 10afec297; -[SCMentionUserDataModel displayName] */

undefined8 FUN_10afec290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afec298; end: 10afec29f; -[SCMentionUserDataModel bitmojiAvatarId] */

undefined8 FUN_10afec298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afec2a0; end: 10afec2a7; -[SCMentionUserDataModel bitmojiSelfieId] */

undefined8 FUN_10afec2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afec2a8; end: 10afec2af; -[SCMentionUserDataModel searchMode] */

undefined8 FUN_10afec2a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afec2b0; end: 10afec2b7; -[SCMentionUserDataModel isNonParticipant] */

undefined1 FUN_10afec2b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afec2b8; end: 10afec317; -[SCMentionUserDataModel .cxx_destruct] */

void FUN_10afec2b8(long param_1)

{
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



/* Entry: 10afec318; end: 10afec403; -[SCMentionBarTextInputEvent initWithOldText:updatedText:addedText:changedRange:] */

undefined1 *
FUN_10afec318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704030;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afec404; end: 10afec427; -[SCMentionBarTextInputEvent copyWithZone:] */

undefined8 FUN_10afec404(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afec428; end: 10afec4af; -[SCMentionBarTextInputEvent hash] */

undefined8 * FUN_10afec428(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_30;
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
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afec56c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afec578;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      puVar6 = (undefined1 *)0x0;
      if ((*(long *)((long)puVar3 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)((long)puVar3 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_10afec578;
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afec578;
          }
          goto LAB_10afec56c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afec578:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afec4b0; end: 10afec593; -[SCMentionBarTextInputEvent isEqual:] */

long FUN_10afec4b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afec56c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afec578;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = 0;
      if ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_10afec578;
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afec578;
          }
          goto LAB_10afec56c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afec578:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afec594; end: 10afec59b; -[SCMentionBarTextInputEvent oldText] */

undefined8 FUN_10afec594(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afec59c; end: 10afec5a3; -[SCMentionBarTextInputEvent updatedText] */

undefined8 FUN_10afec59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afec5a4; end: 10afec5ab; -[SCMentionBarTextInputEvent addedText] */

undefined8 FUN_10afec5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afec5ac; end: 10afec5b7; -[SCMentionBarTextInputEvent changedRange] */

undefined1  [16] FUN_10afec5ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10afec5b8; end: 10afec5f3; -[SCMentionBarTextInputEvent .cxx_destruct] */

void FUN_10afec5b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afec5f4; end: 10afec697; -[SCChatInputMentionDataModel initWithUserId:range:searchMode:isNonParticipant:] */

undefined1 *
FUN_10afec5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112704038;
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



/* Entry: 10afec698; end: 10afec6bb; -[SCChatInputMentionDataModel copyWithZone:] */

undefined8 FUN_10afec698(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afec6bc; end: 10afec73f; -[SCChatInputMentionDataModel hash] */

undefined8 * FUN_10afec6bc(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afec7f8;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10afec7f8;
    }
    puVar5 = (undefined1 *)0x0;
    if ((*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20)) ||
       (*(long *)((long)puVar2 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_10afec7f8;
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afec7f8;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10afec7f8:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10afec740; end: 10afec813; -[SCChatInputMentionDataModel isEqual:] */

long FUN_10afec740(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afec7f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_10afec7f8;
    }
    lVar3 = 0;
    if ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20)) ||
       (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_10afec7f8;
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afec7f8;
    }
  }
  lVar3 = 1;
LAB_10afec7f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afec814; end: 10afec81b; -[SCChatInputMentionDataModel userId] */

undefined8 FUN_10afec814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afec81c; end: 10afec827; -[SCChatInputMentionDataModel range] */

undefined1  [16] FUN_10afec81c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10afec828; end: 10afec82f; -[SCChatInputMentionDataModel searchMode] */

undefined8 FUN_10afec828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afec830; end: 10afec837; -[SCChatInputMentionDataModel isNonParticipant] */

undefined1 FUN_10afec830(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afec838; end: 10afec843; -[SCChatInputMentionDataModel .cxx_destruct] */

void FUN_10afec838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afec844; end: 10afec88f; -[SCMentionSearchMetrics initWithSearchWithoutAtSymbolVisibleCount:searchWithAtSymbolVisibleCount:] */

void FUN_10afec844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704040;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10afec890; end: 10afec8b3; -[SCMentionSearchMetrics copyWithZone:] */

undefined8 FUN_10afec890(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afec8b4; end: 10afec90f; -[SCMentionSearchMetrics hash] */

undefined8 * FUN_10afec8b4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_30,2);
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



/* Entry: 10afec910; end: 10afec9a7; -[SCMentionSearchMetrics isEqual:] */

bool FUN_10afec910(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10afec9a8; end: 10afec9af; -[SCMentionSearchMetrics searchWithoutAtSymbolVisibleCount] */

undefined8 FUN_10afec9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afec9b0; end: 10afec9b7; -[SCMentionSearchMetrics searchWithAtSymbolVisibleCount] */

undefined8 FUN_10afec9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afec9b8; end: 10afeca8b; -[SCMerlinOnboardingScope initWithOnboardingType:delegate:completionPromise:uiContainer:] */

undefined1 *
FUN_10afec9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704048;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afeca8c; end: 10afeca93; -[SCMerlinOnboardingScope onboardingType] */

undefined8 FUN_10afeca8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afeca94; end: 10afecaab; -[SCMerlinOnboardingScope delegate] */

void FUN_10afeca94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afecaac; end: 10afecab3; -[SCMerlinOnboardingScope completionPromise] */

undefined8 FUN_10afecaac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afecab4; end: 10afecabb; -[SCMerlinOnboardingScope uiContainer] */

undefined8 FUN_10afecab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afecabc; end: 10afecaf3; -[SCMerlinOnboardingScope .cxx_destruct] */

void FUN_10afecabc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10afecaf4; end: 10afecaff; -[SCTextSendingServices .cxx_destruct] */

void FUN_10afecaf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afecb00; end: 10afecb5b; -[SCChatCommandDataModel initWithCommandType:range:] */

void FUN_10afecb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112704058;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10afecb5c; end: 10afecb7f; -[SCChatCommandDataModel copyWithZone:] */

undefined8 FUN_10afecb5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afecb80; end: 10afecbe7; -[SCChatCommandDataModel hash] */

long * FUN_10afecb80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  plVar1 = &lStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3191c(&lStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == (long *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)plVar1;
      _objc_opt_class(plVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)plVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)
                 (ulong)(*(long *)((long)plVar1 + 0x10) == *(long *)(param_3 + 0x10) &&
                        *(long *)((long)plVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (long *)puVar4;
}



/* Entry: 10afecbe8; end: 10afecc83; -[SCChatCommandDataModel isEqual:] */

bool FUN_10afecbe8(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
                *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afecc84; end: 10afecc8b; -[SCChatCommandDataModel commandType] */

undefined8 FUN_10afecc84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afecc8c; end: 10afecc97; -[SCChatCommandDataModel range] */

undefined1  [16] FUN_10afecc8c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10afecc98; end: 10afecd33; -[SCChatMentionDataModel initWithUserId:range:isNonParticipant:] */

undefined1 *
FUN_10afecc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112704060;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afecd34; end: 10afecd57; -[SCChatMentionDataModel copyWithZone:] */

undefined8 FUN_10afecd34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afecd58; end: 10afecdcf; -[SCChatMentionDataModel hash] */

undefined8 * FUN_10afecd58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afece78;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10afece78;
    }
    puVar4 = (undefined8 *)0x0;
    if ((puVar2[3] != param_3[3]) || (puVar2[4] != param_3[4])) goto LAB_10afece78;
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afece78;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10afece78:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afecdd0; end: 10afece93; -[SCChatMentionDataModel isEqual:] */

long FUN_10afecdd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afece78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afece78;
    }
    lVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18)) ||
       (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) goto LAB_10afece78;
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afece78;
    }
  }
  lVar3 = 1;
LAB_10afece78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afece94; end: 10afece9b; -[SCChatMentionDataModel userId] */

undefined8 FUN_10afece94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afece9c; end: 10afecea7; -[SCChatMentionDataModel range] */

undefined1  [16] FUN_10afece9c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10afecea8; end: 10afeceaf; -[SCChatMentionDataModel isNonParticipant] */

undefined1 FUN_10afecea8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afeceb0; end: 10afecebb; -[SCChatMentionDataModel .cxx_destruct] */

void FUN_10afeceb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afecebc; end: 10afecff7; -[SCChatTextLocalMessageContentMetadata initWithMentions:chatCommands:quotedMessageId:scale:isClickedActionSuggestion:sendContextSource:botMetadata:teamSnapchatDisclosureAccepted:] */

undefined1 *
FUN_10afecebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

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
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112704068;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afecff8; end: 10afed01b; -[SCChatTextLocalMessageContentMetadata copyWithZone:] */

undefined8 FUN_10afecff8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afed01c; end: 10afed0df; -[SCChatTextLocalMessageContentMetadata hash] */

undefined8 * FUN_10afed01c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
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
  lVar6 = *(long *)(param_1 + 0x30);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar4 = &uStack_68;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afed1f4:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afed200;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) && (puVar4[6] == param_3[6])) &&
        (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))))) {
      dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
      dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
      {
        puVar8 = (undefined8 *)puVar4[7];
        if (puVar8 != (undefined8 *)param_3[7]) {
          func_0x00010c071ae0();
          goto LAB_10afed200;
        }
        goto LAB_10afed1f4;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afed200:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afed0e0; end: 10afed21b; -[SCChatTextLocalMessageContentMetadata isEqual:] */

long FUN_10afed0e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afed1f4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afed200;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
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
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10afed200;
        }
        goto LAB_10afed1f4;
      }
    }
    lVar4 = 0;
  }
LAB_10afed200:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afed21c; end: 10afed223; -[SCChatTextLocalMessageContentMetadata mentions] */

undefined8 FUN_10afed21c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afed224; end: 10afed22b; -[SCChatTextLocalMessageContentMetadata chatCommands] */

undefined8 FUN_10afed224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afed22c; end: 10afed233; -[SCChatTextLocalMessageContentMetadata quotedMessageId] */

undefined8 FUN_10afed22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afed234; end: 10afed23b; -[SCChatTextLocalMessageContentMetadata scale] */

undefined8 FUN_10afed234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afed23c; end: 10afed243; -[SCChatTextLocalMessageContentMetadata isClickedActionSuggestion] */

undefined1 FUN_10afed23c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afed244; end: 10afed24b; -[SCChatTextLocalMessageContentMetadata sendContextSource] */

undefined8 FUN_10afed244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afed24c; end: 10afed253; -[SCChatTextLocalMessageContentMetadata botMetadata] */

undefined8 FUN_10afed24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afed254; end: 10afed25b; -[SCChatTextLocalMessageContentMetadata teamSnapchatDisclosureAccepted] */

undefined1 FUN_10afed254(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afed25c; end: 10afed2a3; -[SCChatTextLocalMessageContentMetadata .cxx_destruct] */

void FUN_10afed25c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afed2a4; end: 10afed2bf; +[SCChatTextLocalMessageContentMetadataBuilder chatTextLocalMessageContentMetadata] */

void FUN_10afed2a4(void)

{
  _objc_alloc_init(PTR_PTR_1126b5f98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afed2c0; end: 10afed4cb; +[SCChatTextLocalMessageContentMetadataBuilder chatTextLocalMessageContentMetadataFromExistingChatTextLocalMessageContentMetadata:] */

void FUN_10afed2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126b5f98;
  _objc_retain(param_3);
  func_0x00010bf37840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b3dc0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf361a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2aa520(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c11ecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b66c0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120(param_3);
  puVar8 = puVar7;
  func_0x00010c2b78c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c06e9a0(param_3);
  puVar10 = puVar8;
  func_0x00010c2b0420(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c15b9c0(param_3);
  puVar11 = puVar10;
  func_0x00010c2b81a0(puVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf1fde0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2a9820(puVar11,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c26aae0(param_3);
  _objc_release(param_3);
  puVar14 = puVar12;
  func_0x00010c2bade0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10afed4cc; end: 10afed51b; -[SCChatTextLocalMessageContentMetadataBuilder build] */

void FUN_10afed4cc(long param_1)

{
  _objc_alloc(PTR_PTR_1126cfad8);
  func_0x00010c02b140(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afed51c; end: 10afed553; -[SCChatTextLocalMessageContentMetadataBuilder withMentions:] */

long FUN_10afed51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afed554; end: 10afed58b; -[SCChatTextLocalMessageContentMetadataBuilder withChatCommands:] */

long FUN_10afed554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afed58c; end: 10afed5c3; -[SCChatTextLocalMessageContentMetadataBuilder withQuotedMessageId:] */

long FUN_10afed58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afed5c4; end: 10afed5cb; -[SCChatTextLocalMessageContentMetadataBuilder withScale:] */

void FUN_10afed5c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10afed5cc; end: 10afed5d3; -[SCChatTextLocalMessageContentMetadataBuilder withIsClickedActionSuggestion:] */

void FUN_10afed5cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afed5d4; end: 10afed5db; -[SCChatTextLocalMessageContentMetadataBuilder withSendContextSource:] */

void FUN_10afed5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10afed5dc; end: 10afed613; -[SCChatTextLocalMessageContentMetadataBuilder withBotMetadata:] */

long FUN_10afed5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afed614; end: 10afed61b; -[SCChatTextLocalMessageContentMetadataBuilder withTeamSnapchatDisclosureAccepted:] */

void FUN_10afed614(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10afed61c; end: 10afed663; -[SCChatTextLocalMessageContentMetadataBuilder .cxx_destruct] */

void FUN_10afed61c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afed664; end: 10afed73b; -[SCChatTextMessage initWithTextMessage:additionalMetadata:platformAnalytics:] */

undefined1 *
FUN_10afed664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704070;
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



/* Entry: 10afed73c; end: 10afed75f; -[SCChatTextMessage copyWithZone:] */

undefined8 FUN_10afed73c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afed760; end: 10afed7df; -[SCChatTextMessage hash] */

undefined8 * FUN_10afed760(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afed878:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afed884;
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
            goto LAB_10afed884;
          }
          goto LAB_10afed878;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afed884:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afed7e0; end: 10afed89f; -[SCChatTextMessage isEqual:] */

long FUN_10afed7e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afed878:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afed884;
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
            goto LAB_10afed884;
          }
          goto LAB_10afed878;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afed884:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afed8a0; end: 10afed8a7; -[SCChatTextMessage textMessage] */

undefined8 FUN_10afed8a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afed8a8; end: 10afed8af; -[SCChatTextMessage additionalMetadata] */

undefined8 FUN_10afed8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afed8b0; end: 10afed8b7; -[SCChatTextMessage platformAnalytics] */

undefined8 FUN_10afed8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afed8b8; end: 10afed8f3; -[SCChatTextMessage .cxx_destruct] */

void FUN_10afed8b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afed8f4; end: 10afedadb; -[SCContextMessagingScope initWithDelegate:sessionParams:logger:messaging:parentViewController:actionMenuViewController:animator:options:recipientUserId:contextActionParams:swipeDirection:replyOptions:] */

undefined8 *
FUN_10afed8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112704078;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
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
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar1[8] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar1[0xb] = param_13;
    puVar1[0xc] = param_14;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afedadc; end: 10afedaf3; -[SCContextMessagingScope delegate] */

void FUN_10afedadc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


