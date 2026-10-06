/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d0cb0c; end: 107d0cb13; -[SCLensFriendsFeedContextServices lensFriendsFeedContextDataStore] */

undefined8 FUN_107d0cb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0cb14; end: 107d0cb1b; -[SCLensFriendsFeedContextServices lensFriendsFeedContextLogger] */

undefined8 FUN_107d0cb14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0cb1c; end: 107d0cb23; -[SCLensFriendsFeedContextServices lensFriendsFeedContextImpressionTracker] */

undefined8 FUN_107d0cb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0cb24; end: 107d0cb6b; -[SCLensFriendsFeedContextServices .cxx_destruct] */

void FUN_107d0cb24(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0cb6c; end: 107d0ccf7; -[SCLensFriendsFeedSuggestionParams initWithEventType:lenses:localizedButtonText:conversationId:username:displayName:userId:isGroupConversation:useStandardEventIcons:] */

undefined1 *
FUN_107d0cb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fa9b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0ccf8; end: 107d0cd1b; -[SCLensFriendsFeedSuggestionParams copyWithZone:] */

undefined8 FUN_107d0ccf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0cd1c; end: 107d0cdcf; -[SCLensFriendsFeedSuggestionParams hash] */

undefined8 * FUN_107d0cd1c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d0cee0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d0ceec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) && (*(char *)((long)puVar3 + 9) == param_3[9])
        ))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x40);
                if (puVar6 != *(undefined1 **)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_107d0ceec;
                }
                goto LAB_107d0cee0;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d0ceec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d0cdd0; end: 107d0cf07; -[SCLensFriendsFeedSuggestionParams isEqual:] */

long FUN_107d0cdd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0cee0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0ceec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_107d0ceec;
                }
                goto LAB_107d0cee0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d0ceec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0cf08; end: 107d0cf0f; -[SCLensFriendsFeedSuggestionParams eventType] */

undefined8 FUN_107d0cf08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0cf10; end: 107d0cf17; -[SCLensFriendsFeedSuggestionParams lenses] */

undefined8 FUN_107d0cf10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0cf18; end: 107d0cf1f; -[SCLensFriendsFeedSuggestionParams localizedButtonText] */

undefined8 FUN_107d0cf18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0cf20; end: 107d0cf27; -[SCLensFriendsFeedSuggestionParams conversationId] */

undefined8 FUN_107d0cf20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0cf28; end: 107d0cf2f; -[SCLensFriendsFeedSuggestionParams username] */

undefined8 FUN_107d0cf28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d0cf30; end: 107d0cf37; -[SCLensFriendsFeedSuggestionParams displayName] */

undefined8 FUN_107d0cf30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d0cf38; end: 107d0cf3f; -[SCLensFriendsFeedSuggestionParams userId] */

undefined8 FUN_107d0cf38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d0cf40; end: 107d0cf47; -[SCLensFriendsFeedSuggestionParams isGroupConversation] */

undefined1 FUN_107d0cf40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d0cf48; end: 107d0cf4f; -[SCLensFriendsFeedSuggestionParams useStandardEventIcons] */

undefined1 FUN_107d0cf48(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d0cf50; end: 107d0cfaf; -[SCLensFriendsFeedSuggestionParams .cxx_destruct] */

void FUN_107d0cf50(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d0cfb0; end: 107d0d03b; -[SCLensFriendsFeedContextEventModel initWithEventType:priority:lenses:] */

undefined1 *
FUN_107d0cfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa9c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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



/* Entry: 107d0d03c; end: 107d0d05f; -[SCLensFriendsFeedContextEventModel copyWithZone:] */

undefined8 FUN_107d0d03c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0d060; end: 107d0d0c3; -[SCLensFriendsFeedContextEventModel hash] */

undefined8 * FUN_107d0d060(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d0d158;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_107d0d158;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_107d0d158;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_107d0d158:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 107d0d0c4; end: 107d0d173; -[SCLensFriendsFeedContextEventModel isEqual:] */

long FUN_107d0d0c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0d158;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_107d0d158;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_107d0d158;
    }
  }
  lVar3 = 1;
LAB_107d0d158:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0d174; end: 107d0d17b; -[SCLensFriendsFeedContextEventModel eventType] */

undefined8 FUN_107d0d174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0d17c; end: 107d0d183; -[SCLensFriendsFeedContextEventModel priority] */

undefined8 FUN_107d0d17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0d184; end: 107d0d18b; -[SCLensFriendsFeedContextEventModel lenses] */

undefined8 FUN_107d0d184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0d18c; end: 107d0d197; -[SCLensFriendsFeedContextEventModel .cxx_destruct] */

void FUN_107d0d18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d0d198; end: 107d0d243; -[SCLensFriendsFeedSuggestionLensModel initWithLensId:lensIconURL:] */

undefined1 *
FUN_107d0d198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa9c8;
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



/* Entry: 107d0d244; end: 107d0d267; -[SCLensFriendsFeedSuggestionLensModel copyWithZone:] */

undefined8 FUN_107d0d244(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0d268; end: 107d0d2db; -[SCLensFriendsFeedSuggestionLensModel hash] */

undefined8 * FUN_107d0d268(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d0d35c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d0d368;
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
          goto LAB_107d0d368;
        }
        goto LAB_107d0d35c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d0d368:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d0d2dc; end: 107d0d383; -[SCLensFriendsFeedSuggestionLensModel isEqual:] */

long FUN_107d0d2dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0d35c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0d368;
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
          goto LAB_107d0d368;
        }
        goto LAB_107d0d35c;
      }
    }
    lVar3 = 0;
  }
LAB_107d0d368:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0d384; end: 107d0d38b; -[SCLensFriendsFeedSuggestionLensModel lensId] */

undefined8 FUN_107d0d384(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0d38c; end: 107d0d393; -[SCLensFriendsFeedSuggestionLensModel lensIconURL] */

undefined8 FUN_107d0d38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0d394; end: 107d0d3c3; -[SCLensFriendsFeedSuggestionLensModel .cxx_destruct] */

void FUN_107d0d394(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0d3c4; end: 107d0d4af;  */

void FUN_107d0d3c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_x5;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  _objc_retain(param_2);
  FUN_107d0d4b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108fec800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d0d4b0; end: 107d0d4ff;  */

void FUN_107d0d4b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_107d244dc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010c258dc0(PTR_PTR_1126b4860,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d0d500; end: 107d0d65b; -[SCLegacyMyProfileScope initWithUiContainer:displaySetting:hideRecursiveOptions:showRecentStoryOnOpen:showRecentPublicStoryOnOpen:notification:openningData:delegate:showBitmojiIdentityViewOnOpen:] */

undefined1 *
FUN_107d0d500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  puStack_68 = PTR_PTR_1126fa9d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bc8f3c8();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 9) = 1;
    *(undefined1 *)((long)puVar1 + 10) = param_4;
    *(undefined1 *)((long)puVar1 + 0xc) = param_6;
    *(undefined1 *)((long)puVar1 + 0xd) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_5;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_10);
    *(undefined1 *)((long)puVar1 + 0xe) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0d65c; end: 107d0d7e7; -[SCLegacyMyProfileScope initWithContainerViewController:animated:displaySetting:hideRecursiveOptions:showRecentStoryOnOpen:showRecentPublicStoryOnOpen:notification:openningData:delegate:showBitmojiIdentityViewOnOpen:] */

undefined8 *
FUN_107d0d65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa9d0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar2 + 3,param_3);
    puVar1 = PTR_DAT_1126a4e58;
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    uVar4 = param_3;
    if ((int)uVar3 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = uVar4;
    func_0x00010c0f2220();
    _objc_release(uVar4);
    puVar2[9] = uVar3;
    *(undefined1 *)((long)puVar2 + 9) = param_4;
    *(undefined1 *)((long)puVar2 + 10) = param_5;
    *(undefined1 *)((long)puVar2 + 0xb) = param_6;
    *(undefined1 *)((long)puVar2 + 0xc) = param_7;
    *(undefined1 *)((long)puVar2 + 0xd) = param_8;
    _objc_retain(param_9);
    uVar4 = puVar2[4];
    puVar2[4] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar2[5];
    puVar2[5] = param_10;
    _objc_release(uVar4);
    _objc_storeWeak(puVar2 + 10,param_11);
    *(undefined1 *)((long)puVar2 + 0xe) = param_12;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107d0d7e8; end: 107d0d923; -[SCLegacyMyProfileScope initWithDeckContainerFactory:animated:displaySetting:hideRecursiveOptions:showRecentStoryOnOpen:showRecentPublicStoryOnOpen:notification:openningData:delegate:showBitmojiIdentityViewOnOpen:] */

undefined8 *
FUN_107d0d7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa9d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_11);
    *(undefined1 *)((long)puVar1 + 0xe) = param_12;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d0d924; end: 107d0d92b; -[SCLegacyMyProfileScope uiContainer] */

undefined8 FUN_107d0d924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0d92c; end: 107d0d933; -[SCLegacyMyProfileScope isOverlayPresentation] */

undefined1 FUN_107d0d92c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d0d934; end: 107d0d94b; -[SCLegacyMyProfileScope containerViewController] */

void FUN_107d0d934(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0d94c; end: 107d0d953; -[SCLegacyMyProfileScope animated] */

undefined1 FUN_107d0d94c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d0d954; end: 107d0d95b; -[SCLegacyMyProfileScope displaySetting] */

undefined1 FUN_107d0d954(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d0d95c; end: 107d0d963; -[SCLegacyMyProfileScope hideRecursiveOptions] */

undefined1 FUN_107d0d95c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d0d964; end: 107d0d96b; -[SCLegacyMyProfileScope showRecentStoryOnOpen] */

undefined1 FUN_107d0d964(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d0d96c; end: 107d0d973; -[SCLegacyMyProfileScope showRecentPublicStoryOnOpen] */

undefined1 FUN_107d0d96c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d0d974; end: 107d0d97b; -[SCLegacyMyProfileScope notification] */

undefined8 FUN_107d0d974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0d97c; end: 107d0d983; -[SCLegacyMyProfileScope openningData] */

undefined8 FUN_107d0d97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0d984; end: 107d0d98b; -[SCLegacyMyProfileScope profile3DeeplinkPayload] */

undefined8 FUN_107d0d984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d0d98c; end: 107d0d9bb; -[SCLegacyMyProfileScope setProfile3DeeplinkPayload:] */

void FUN_107d0d98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d0d9bc; end: 107d0d9d3; -[SCLegacyMyProfileScope contactSupportScopeExposerForDeeplink] */

void FUN_107d0d9bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0d9d4; end: 107d0d9df; -[SCLegacyMyProfileScope setContactSupportScopeExposerForDeeplink:] */

void FUN_107d0d9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107d0d9e0; end: 107d0d9f7; -[SCLegacyMyProfileScope contactSupportScopeServicesForDeeplink] */

void FUN_107d0d9e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0d9f8; end: 107d0da03; -[SCLegacyMyProfileScope setContactSupportScopeServicesForDeeplink:] */

void FUN_107d0d9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107d0da04; end: 107d0da0b; -[SCLegacyMyProfileScope sourcePage] */

undefined8 FUN_107d0da04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d0da0c; end: 107d0da13; -[SCLegacyMyProfileScope setSourcePage:] */

void FUN_107d0da0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107d0da14; end: 107d0da2b; -[SCLegacyMyProfileScope delegate] */

void FUN_107d0da14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0da2c; end: 107d0da37; -[SCLegacyMyProfileScope setDelegate:] */

void FUN_107d0da2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107d0da38; end: 107d0da3f; -[SCLegacyMyProfileScope profileBackgroundPickerMode] */

undefined8 FUN_107d0da38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d0da40; end: 107d0da47; -[SCLegacyMyProfileScope setProfileBackgroundPickerMode:] */

void FUN_107d0da40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107d0da48; end: 107d0da4f; -[SCLegacyMyProfileScope deckContainerFactory] */

undefined8 FUN_107d0da48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d0da50; end: 107d0da57; -[SCLegacyMyProfileScope showBitmojiIdentityViewOnOpen] */

undefined1 FUN_107d0da50(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107d0da58; end: 107d0dacb; -[SCLegacyMyProfileScope .cxx_destruct] */

void FUN_107d0da58(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d0dacc; end: 107d0db3b; +[SCProfile3DeeplinkPayload settingsPayloadWithDeepLinkTypeRaw:unknownFeature:] */

void FUN_107d0dacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce4f8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1b7000();
  func_0x00010c1fe4a0(puVar1,param_2,param_3);
  func_0x00010c1fe5c0(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d0db3c; end: 107d0dbbf; +[SCProfile3DeeplinkPayload profileManagementPayloadWithProfileId:deeplinkActionRaw:] */

void FUN_107d0db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce4f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1b7000();
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c1e4360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1aaf40(puVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d0dbc0; end: 107d0dbf3; +[SCProfile3DeeplinkPayload pendingInvitationsPayload] */

void FUN_107d0dbc0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce4f8;
  _objc_alloc_init(PTR_PTR_1126ce4f8);
  func_0x00010c1b7000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d0dbf4; end: 107d0dbfb; -[SCProfile3DeeplinkPayload kind] */

undefined8 FUN_107d0dbf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0dbfc; end: 107d0dc03; -[SCProfile3DeeplinkPayload setKind:] */

void FUN_107d0dbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107d0dc04; end: 107d0dc0b; -[SCProfile3DeeplinkPayload settingsDeepLinkTypeRaw] */

undefined8 FUN_107d0dc04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0dc0c; end: 107d0dc13; -[SCProfile3DeeplinkPayload setSettingsDeepLinkTypeRaw:] */

void FUN_107d0dc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107d0dc14; end: 107d0dc1b; -[SCProfile3DeeplinkPayload settingsUnknownFeature] */

undefined8 FUN_107d0dc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0dc1c; end: 107d0dc23; -[SCProfile3DeeplinkPayload setSettingsUnknownFeature:] */

void FUN_107d0dc1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d0dc24; end: 107d0dc2b; -[SCProfile3DeeplinkPayload profileManagementProfileId] */

undefined8 FUN_107d0dc24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0dc2c; end: 107d0dc33; -[SCProfile3DeeplinkPayload setProfileManagementProfileId:] */

void FUN_107d0dc2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d0dc34; end: 107d0dc3b; -[SCProfile3DeeplinkPayload impalaProfileDeeplinkActionRaw] */

undefined8 FUN_107d0dc34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0dc3c; end: 107d0dc43; -[SCProfile3DeeplinkPayload setImpalaProfileDeeplinkActionRaw:] */

void FUN_107d0dc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107d0dc44; end: 107d0dc73; -[SCProfile3DeeplinkPayload .cxx_destruct] */

void FUN_107d0dc44(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d0dc74; end: 107d0dd0b; -[SCPrivateProfileOpenningData initWithSourcePageType:userInitializedOpenTime:pageEntryType:] */

undefined1 *
FUN_107d0dc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fa9d8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0dd0c; end: 107d0dd2f; -[SCPrivateProfileOpenningData copyWithZone:] */

undefined8 FUN_107d0dd0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0dd30; end: 107d0ddc7; -[SCPrivateProfileOpenningData hash] */

undefined8 * FUN_107d0dd30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_40 = uVar3;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107d0de74:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d0de80;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        puVar7 = *(undefined1 **)((long)puVar4 + 8);
        if (puVar7 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_107d0de80;
        }
        goto LAB_107d0de74;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_107d0de80:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 107d0ddc8; end: 107d0de9b; -[SCPrivateProfileOpenningData isEqual:] */

long FUN_107d0ddc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0de74:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0de80;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_107d0de80;
        }
        goto LAB_107d0de74;
      }
    }
    lVar4 = 0;
  }
LAB_107d0de80:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107d0de9c; end: 107d0dea3; -[SCPrivateProfileOpenningData sourcePageType] */

undefined8 FUN_107d0de9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0dea4; end: 107d0deab; -[SCPrivateProfileOpenningData userInitializedOpenTime] */

undefined8 FUN_107d0dea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0deac; end: 107d0deb3; -[SCPrivateProfileOpenningData pageEntryType] */

undefined8 FUN_107d0deac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0deb4; end: 107d0debf; -[SCPrivateProfileOpenningData .cxx_destruct] */

void FUN_107d0deb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0dec0; end: 107d0e0b3; -[SCUnifiedProfileNotification initWithUserInfo:serverSentTime:notificationId:notificationKey:spotlightPendingReplySnapClientId:spotlightSnapId:profileId:activityFeedNotificationId:spotlightId:] */

undefined1 *
FUN_107d0dec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa9e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0e0b4; end: 107d0e0d7; -[SCUnifiedProfileNotification copyWithZone:] */

undefined8 FUN_107d0e0b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0e0d8; end: 107d0e19f; -[SCUnifiedProfileNotification hash] */

undefined8 * FUN_107d0e0d8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d0e2c8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d0e2d4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_107d0e2d4;
                      }
                      goto LAB_107d0e2c8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d0e2d4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d0e1a0; end: 107d0e2ef; -[SCUnifiedProfileNotification isEqual:] */

long FUN_107d0e1a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0e2c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0e2d4;
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
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if (lVar3 != *(long *)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_107d0e2d4;
                      }
                      goto LAB_107d0e2c8;
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
LAB_107d0e2d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0e2f0; end: 107d0e2f7; -[SCUnifiedProfileNotification userInfo] */

undefined8 FUN_107d0e2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0e2f8; end: 107d0e2ff; -[SCUnifiedProfileNotification serverSentTime] */

undefined8 FUN_107d0e2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0e300; end: 107d0e307; -[SCUnifiedProfileNotification notificationId] */

undefined8 FUN_107d0e300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0e308; end: 107d0e30f; -[SCUnifiedProfileNotification notificationKey] */

undefined8 FUN_107d0e308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0e310; end: 107d0e317; -[SCUnifiedProfileNotification spotlightPendingReplySnapClientId] */

undefined8 FUN_107d0e310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0e318; end: 107d0e31f; -[SCUnifiedProfileNotification spotlightSnapId] */

undefined8 FUN_107d0e318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d0e320; end: 107d0e327; -[SCUnifiedProfileNotification profileId] */

undefined8 FUN_107d0e320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d0e328; end: 107d0e32f; -[SCUnifiedProfileNotification activityFeedNotificationId] */

undefined8 FUN_107d0e328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d0e330; end: 107d0e337; -[SCUnifiedProfileNotification spotlightId] */

undefined8 FUN_107d0e330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d0e338; end: 107d0e3bb; -[SCUnifiedProfileNotification .cxx_destruct] */

void FUN_107d0e338(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 107d0e3bc; end: 107d0e41f; -[SCPreferences ctaPromoLastViewedValues] */

void FUN_107d0e3bc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


