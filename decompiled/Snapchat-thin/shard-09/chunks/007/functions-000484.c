/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070772c4; end: 10707732f; +[SCChatViewHeaderAction launchSaturnWithSaturnUserId:] */

void FUN_1070772c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107077330; end: 1070773fb; +[SCChatViewHeaderAction launchStreakMilestoneSnapWithPoseId:myAvatarId:friendAvatarId:] */

void FUN_107077330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cb858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070773fc; end: 10707741f; -[SCChatViewHeaderAction copyWithZone:] */

undefined8 FUN_1070773fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107077420; end: 1070774eb; -[SCChatViewHeaderAction hash] */

void FUN_107077420(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_1126f87a0;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070774ec; end: 10707752f; -[SCChatViewHeaderAction internalInit] */

void FUN_1070774ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f87a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107077530; end: 10707768f; -[SCChatViewHeaderAction isEqual:] */

long FUN_107077530(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107077668:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107077674;
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
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_107077674;
                      }
                      goto LAB_107077668;
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
LAB_107077674:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107077690; end: 107077827; -[SCChatViewHeaderAction matchLaunchFriendProfile:launchGroupProfile:launchMap:launchMerlinBioPage:launchSaturn:launchStreakMilestoneSnap:launchMyAIModelSelectionPaywall:] */

void FUN_107077690(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_1070777dc;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if (lVar3 != 1) {
        if ((lVar3 != 2) || (param_5 == 0)) goto LAB_1070777dc;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        pcVar4 = *(code **)(param_5 + 0x10);
        lVar3 = param_5;
        goto LAB_10707775c;
      }
      if (param_4 == 0) goto LAB_1070777dc;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
  else {
    if (lVar3 < 5) {
      if (lVar3 != 3) {
        if ((lVar3 != 4) || (param_7 == 0)) goto LAB_1070777dc;
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        pcVar4 = *(code **)(param_7 + 0x10);
        lVar3 = param_7;
LAB_10707775c:
        (*pcVar4)(lVar3,uVar1);
        goto LAB_1070777dc;
      }
      if (param_6 == 0) goto LAB_1070777dc;
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    else {
      if (lVar3 == 5) {
        if (param_8 != 0) {
          (**(code **)(param_8 + 0x10))
                    (param_8,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50));
        }
        goto LAB_1070777dc;
      }
      if ((lVar3 != 6) || (param_9 == 0)) goto LAB_1070777dc;
      pcVar4 = *(code **)(param_9 + 0x10);
      lVar3 = param_9;
    }
    (*pcVar4)(lVar3);
  }
LAB_1070777dc:
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



/* Entry: 107077828; end: 1070778ab; -[SCChatViewHeaderAction .cxx_destruct] */

void FUN_107077828(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1070778ac; end: 107077953; -[SCQuotedRenderableViewModel initWithQuotedMessageId:quotedMessageContent:] */

undefined1 *
FUN_1070778ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f87a8;
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



/* Entry: 107077954; end: 107077977; -[SCQuotedRenderableViewModel copyWithZone:] */

undefined8 FUN_107077954(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107077978; end: 1070779eb; -[SCQuotedRenderableViewModel hash] */

undefined8 * FUN_107077978(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107077a6c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107077a78;
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
          goto LAB_107077a78;
        }
        goto LAB_107077a6c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107077a78:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070779ec; end: 107077a93; -[SCQuotedRenderableViewModel isEqual:] */

long FUN_1070779ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107077a6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107077a78;
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
          goto LAB_107077a78;
        }
        goto LAB_107077a6c;
      }
    }
    lVar3 = 0;
  }
LAB_107077a78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107077a94; end: 107077a9b; -[SCQuotedRenderableViewModel quotedMessageId] */

undefined8 FUN_107077a94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107077a9c; end: 107077aa3; -[SCQuotedRenderableViewModel quotedMessageContent] */

undefined8 FUN_107077a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107077aa4; end: 107077ad3; -[SCQuotedRenderableViewModel .cxx_destruct] */

void FUN_107077aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107077ad4; end: 107077b2b; -[SCChatLoadHistoryActionHandler initWithActionHandler:] */

long FUN_107077ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107077b2c; end: 107077c63; -[SCChatLoadHistoryActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_107077b2c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d43e8;
    _objc_opt_class(PTR_PTR_1126d43e8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar3 = uVar1;
      func_0x00010bf50280(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c23ca60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c232be0(uVar1);
      func_0x00010c09bbe0(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107077c64; end: 107077c6f; -[SCChatLoadHistoryActionHandler .cxx_destruct] */

void FUN_107077c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107077c70; end: 107077c77; -[SCChatLoadingCellViewModel cellWillDisplayAction] */

undefined8 FUN_107077c70(void)

{
  return 0;
}



/* Entry: 107077c78; end: 107077c7f; -[SCChatLoadingCellViewModel hidden] */

undefined8 FUN_107077c78(void)

{
  return 0;
}



/* Entry: 107077c80; end: 107077ca7; -[SCChatLoadingCellViewModel contentSizeForMaxWidth:] */

undefined1  [16] FUN_107077c80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bf4c660();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107077ca8; end: 107077d5b; -[SCChatLoadConversationHistoryActionData initWithConversationId:sinceMessageId:shouldRetry:] */

undefined1 *
FUN_107077ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f87b0;
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



/* Entry: 107077d5c; end: 107077d7f; -[SCChatLoadConversationHistoryActionData copyWithZone:] */

undefined8 FUN_107077d5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107077d80; end: 107077df7; -[SCChatLoadConversationHistoryActionData hash] */

undefined8 * FUN_107077d80(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_107077e88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107077e94;
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
          goto LAB_107077e94;
        }
        goto LAB_107077e88;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107077e94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107077df8; end: 107077eaf; -[SCChatLoadConversationHistoryActionData isEqual:] */

long FUN_107077df8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107077e88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107077e94;
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
          goto LAB_107077e94;
        }
        goto LAB_107077e88;
      }
    }
    lVar3 = 0;
  }
LAB_107077e94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107077eb0; end: 107077eb7; -[SCChatLoadConversationHistoryActionData conversationId] */

undefined8 FUN_107077eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107077eb8; end: 107077ebf; -[SCChatLoadConversationHistoryActionData sinceMessageId] */

undefined8 FUN_107077eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107077ec0; end: 107077ec7; -[SCChatLoadConversationHistoryActionData shouldRetry] */

undefined1 FUN_107077ec0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107077ec8; end: 107077ef7; -[SCChatLoadConversationHistoryActionData .cxx_destruct] */

void FUN_107077ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107077ef8; end: 107077fef; -[SCChatLoadingCellViewModel initWithLoadStatus:displayLoadConversationHistoryAction:tapLoadConversationHistoryAction:contentHeight:reuseIdentifier:] */

undefined1 *
FUN_107077ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f87b8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107077ff0; end: 107078013; -[SCChatLoadingCellViewModel copyWithZone:] */

undefined8 FUN_107077ff0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107078014; end: 1070780c3; -[SCChatLoadingCellViewModel hash] */

long * FUN_107078014(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar4 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == (long *)param_3) {
LAB_1070781a0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070781ac;
    puVar8 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)plVar4 + 8) == *(long *)(param_3 + 8))) {
      dVar10 = ABS(*(double *)((long)plVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar9 = ABS(*(double *)((long)plVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)plVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)plVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)plVar4 + 0x28);
        if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1070781ac;
        }
        goto LAB_1070781a0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1070781ac:
  _objc_release(param_3);
  return (long *)puVar8;
}



/* Entry: 1070780c4; end: 1070781c7; -[SCChatLoadingCellViewModel isEqual:] */

long FUN_1070780c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070781a0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070781ac;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1070781ac;
        }
        goto LAB_1070781a0;
      }
    }
    lVar4 = 0;
  }
LAB_1070781ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1070781c8; end: 1070781cf; -[SCChatLoadingCellViewModel loadStatus] */

undefined8 FUN_1070781c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070781d0; end: 1070781d7; -[SCChatLoadingCellViewModel displayLoadConversationHistoryAction] */

undefined8 FUN_1070781d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070781d8; end: 1070781df; -[SCChatLoadingCellViewModel tapLoadConversationHistoryAction] */

undefined8 FUN_1070781d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070781e0; end: 1070781e7; -[SCChatLoadingCellViewModel contentHeight] */

undefined8 FUN_1070781e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070781e8; end: 1070781ef; -[SCChatLoadingCellViewModel reuseIdentifier] */

undefined8 FUN_1070781e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070781f0; end: 10707822b; -[SCChatLoadingCellViewModel .cxx_destruct] */

void FUN_1070781f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10707822c; end: 1070782df;  */

void FUN_10707822c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c102de0(param_5);
  func_0x00010bf0e380(param_1,0x3ff0000000000000,param_2,param_3,param_4,param_5,param_6,param_7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1070782e0; end: 1070787d3;  */

void FUN_1070782e0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,int param_9)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e820();
    uVar3 = param_5;
    func_0x00010c08fa60();
    func_0x00010bef6f20(puVar2);
    func_0x00010bef6f20(puVar2);
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x3032000000;
    pcStack_130 = FUN_1070787d4;
    uStack_128 = 0x1070787e4;
    _objc_retain(param_6);
    dVar9 = 0.0;
    uStack_120 = param_6;
    _objc_retain(param_8);
    lVar5 = param_8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_8);
        }
        uVar8 = *(ulong *)(lVar6 * 8);
        uVar4 = uVar8;
        func_0x00010c11f2a0();
        if ((uVar4 < uVar3) && ((param_4 + uVar4) - 1 < uVar3)) {
          func_0x00010bf4df40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar2);
          _objc_retain(param_5);
          _objc_retain(param_6);
          _objc_retain(puVar2);
          _objc_retain(puVar2);
          _objc_retain(puVar2);
          _objc_retain(puVar2);
          _objc_retain(puVar2);
          func_0x00010c0bdec0(uVar8);
          _objc_release(uVar8);
          _objc_release(puVar2);
          _objc_release(puVar2);
          _objc_release(puVar2);
          _objc_release(puVar2);
          _objc_release(puVar2);
          _objc_release(param_6);
          _objc_release(param_5);
          _objc_release(puVar2);
        }
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = param_8;
      func_0x00010bf52a60();
    }
    _objc_release(param_8);
    if ((param_9 != 0) && (func_0x00010c102de0(puStack_140[5]), param_1 < dVar9)) {
      func_0x0001070a60b4(param_5);
    }
    puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf69e60(param_1,param_2,PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6f20(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    __Block_object_dispose(&uStack_148,8);
    _objc_release(uStack_120);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_148);
  __Unwind_Resume();
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 1070787d4; end: 1070787eb;  */

void FUN_1070787d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1070787ec; end: 1070788db;  */

/* WARNING: Possible PIC construction at 0x000107078870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107078874) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1070787ec(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSAttributedString_1126af068;
  if (param_2 < 2) {
    uVar5 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0dde0(uVar2,param_2,uVar5,*(undefined8 *)(param_1 + 0x28),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3c00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    uVar5 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9e20;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef6f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_addAttribute_value_range__11259b570,uVar5,ppuVar1,uVar3,uVar4);
  return;
}



/* Entry: 1070788dc; end: 107078a2f;  */

void FUN_1070788dc(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  func_0x00010c08fa60();
  dStack_48 = 1.0;
  bVar1 = true;
  if ((0.0 < param_1) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 1.0;
  }
  if ((!bVar1) && ((param_1 < 1.0 || (uVar2 < 1000)))) {
    func_0x00010c102de0(*(undefined8 *)(param_2 + 0x28));
    if (dStack_48 == 16.0) {
      dStack_48 = param_1 * 16.0;
    }
    else if (param_1 <= 1.0) {
      dStack_48 = (param_1 * (dStack_48 + -8.0 + dStack_48 + -8.0) + 16.0) - dStack_48;
    }
    else {
      dStack_48 = (dStack_48 * 10.0 + -170.0) / 9.0 + param_1 * ((170.0 - dStack_48) / 9.0);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107078a30;
    puStack_60 = &UNK_11092b158;
    _objc_retain(uVar3);
    uStack_50 = *(undefined8 *)(param_2 + 0x38);
    uStack_58 = uVar3;
    func_0x00010bf97b00(uVar3,param_3,uVar4,*(undefined8 *)(param_2 + 0x40),
                        *(undefined8 *)(param_2 + 0x48),0,&puStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uStack_58);
    return;
  }
  return;
}



/* Entry: 107078a30; end: 107078ad3;  */

void FUN_107078a30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb3f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb41a0(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef6f20(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107078ad4; end: 107078b47;  */

void FUN_107078ad4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addAttribute_value_range__11259b570,
             *(undefined8 *)PTR__NSLinkAttributeName_110345818,param_2,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107078b48; end: 107078bf7;  */

void FUN_107078b48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010bfb3ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c265a80(uVar2);
  uVar1 = (uint)uVar3 | 2;
  if (param_3 != 0) {
    uVar1 = (uint)uVar3;
  }
  uVar3 = uVar2;
  func_0x00010bfb3d60(uVar2,param_2,uVar1 | param_3 == 1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb4160(0,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107078bf8; end: 107078c23;  */

void FUN_107078bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c102de0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107078c24; end: 107078d0f;  */

void FUN_107078c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0dde0(param_3,param_2,uVar2,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3c20(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(param_3,param_2,uVar2,param_1,param_5,param_6);
  _objc_release(param_1);
  _objc_release(uVar1);
  func_0x00010bef6f20(param_3,param_2,*(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8,
                      param_4,param_5,param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107078d10; end: 107078e33;  */

void FUN_107078d10(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  func_0x00010c166c00();
  func_0x00010c099280(param_5);
  if (param_7 != 0) {
    dVar5 = dVar7;
    func_0x00010c102de0(param_5);
    dVar6 = 1.0;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (param_1 < 170.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar5) && !NAN(param_1)) {
        bVar1 = dVar5 < param_1;
        bVar2 = dVar5 == param_1;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      dVar5 = (dVar5 - param_1) / (170.0 - param_1);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar6 = -1.0;
      if (dVar5 <= 1.0) {
        dVar6 = -dVar5;
      }
      dVar6 = (1.0 - param_2) * dVar6 + 1.0;
    }
    dVar7 = dVar7 * dVar6;
  }
  func_0x00010c1bdcc0(dVar7 * 0.05,puVar4);
  func_0x00010c1c82e0(dVar7,puVar4);
  func_0x00010c1c3ba0(dVar7,puVar4);
  func_0x00010c1bdc00(0x3ff0000000000000,puVar4);
  func_0x00010bfb17a0(puVar4);
  func_0x00010c1a75e0(puVar4);
  func_0x00010c1bdb00(puVar4,param_4,0);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107078e34; end: 107078f5f;  */

undefined8
FUN_107078e34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  
  dVar4 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _CACurrentMediaTime();
  uVar1 = param_4;
  func_0x00010bf55720(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c2a1580(uVar1);
  uVar5 = 0x7fefffffffffffff;
  func_0x00010c0c3ec0(param_1,0x7fefffffffffffff,uVar1);
  func_0x00010bf6ef60(uVar1);
  _CACurrentMediaTime();
  uVar2 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_2;
  func_0x00010bf0cc20(param_2);
  _objc_release(param_2);
  FUN_10707eed0(param_1 - dVar4,uVar2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 107078f60; end: 107079027;  */

void FUN_107078f60(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((param_2 & 1) == 0) {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14c4a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e300(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107079028; end: 1070790f3;  */

void FUN_107079028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c25cda0(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070790f4; end: 10707910b;  */

void FUN_1070790f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10707910c; end: 10707934f;  */

void FUN_10707910c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126cb590;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar8 = param_2;
  func_0x00010bfe4900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01abc0(puVar1);
  _objc_release(uVar8);
  FUN_10707c878();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f440(puVar1);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bfe49e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9400(puVar1);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bfe4ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a94e0(puVar1);
  _objc_release(uVar8);
  uVar8 = param_2;
  func_0x00010bfe4ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a94c0(puVar1);
  _objc_release(uVar8);
  func_0x00010c201ec0(puVar1);
  puVar2 = PTR_PTR_1126cb598;
  _objc_opt_new(PTR_PTR_1126cb598);
  func_0x00010c1a93e0();
  func_0x00010c1ee000(*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126d4490;
  _objc_alloc(PTR_PTR_1126d4490);
  uVar8 = param_2;
  func_0x00010bfe4900(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfe49e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bfe4ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bfe4ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01ac00(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126d4498;
  func_0x00010bfe4960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar7;
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107079350; end: 1070794df;  */

void FUN_107079350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = PTR_PTR_1126d4498;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0f6ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0f6cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126cb598;
  _objc_opt_new(PTR_PTR_1126cb598);
  puVar5 = PTR_PTR_1126cb5a0;
  _objc_alloc(PTR_PTR_1126cb5a0);
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d000(puVar5);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0f6ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9f20(puVar5);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0f6cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d9f40(puVar5);
  _objc_release(uVar1);
  func_0x00010c1d9f00(puVar4);
  func_0x00010c1ee000(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1070794e0; end: 1070795bf;  */

void FUN_1070794e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cb5a8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a97e0(puVar1);
  _objc_release(uVar2);
  func_0x00010c174a80(puVar1);
  uVar2 = param_2;
  func_0x00010c28f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d3960(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070795c0; end: 1070795c3;  */

void FUN_1070795c0(void)

{
  return;
}



/* Entry: 1070795c4; end: 10707969b;  */

void FUN_1070795c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d44a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c28f560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_107079028();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0517a0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10707969c; end: 107079b0b;  */

void FUN_10707969c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (uVar4 < (ulong)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48))) {
    return;
  }
  if (param_2 == 1) {
    ppuVar6 = *(undefined ***)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined1 *)(param_1 + 0x60);
    cVar3 = *(char *)(param_1 + 0x62);
    uVar16 = *(undefined8 *)(param_1 + 0x58);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    _objc_retain(uVar14);
    _objc_retain(uVar1);
    func_0x00010c260c80(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR_PTR_1126aed98;
    if (cVar3 == '\x01') {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e1f218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    ppuVar10 = ppuVar9;
    FUN_107078f60(ppuVar9,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d4480;
    _objc_alloc();
    func_0x00010c035900();
    puVar11 = PTR_PTR_1126d4470;
    func_0x00010c0fb0c0(PTR_PTR_1126d4470);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cb588;
    _objc_alloc(PTR_PTR_1126cb588);
    func_0x00010bff4ac0();
    func_0x00010c1e2a80();
    uVar12 = uVar14;
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    uVar14 = uVar12;
    func_0x00010c142e00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    FUN_107078e34(uVar16,puVar7,0,uVar14,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126d4478;
    _objc_alloc();
    func_0x00010c029040(uVar16);
    _objc_release(uVar1);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    ppuVar6 = *(undefined ***)(param_1 + 0x20);
    puVar7 = *(undefined **)(param_1 + 0x28);
    uVar16 = *(undefined8 *)(param_1 + 0x58);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    _objc_retain(uVar14);
    _objc_retain(puVar7);
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar6;
    FUN_107078f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = (undefined **)PTR_PTR_1126d4468;
    _objc_alloc(PTR_PTR_1126d4468);
    func_0x00010bff25c0();
    puVar8 = PTR_PTR_1126d4470;
    func_0x00010befd7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cb588;
    _objc_alloc(PTR_PTR_1126cb588);
    func_0x00010bff4ac0();
    func_0x00010c1e2a80();
    uVar5 = uVar14;
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    uVar14 = uVar5;
    func_0x00010c142e00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_107078e34(uVar16,puVar11,0,uVar14,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar14);
    _objc_release(uVar5);
    puVar13 = PTR_PTR_1126d4478;
    _objc_alloc();
    func_0x00010c029040(uVar16);
  }
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 107079b0c; end: 10707a1ab;  */

void FUN_107079b0c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  lVar18 = param_2;
  func_0x00010c083ac0();
  if ((int)lVar18 != 0) {
    lVar18 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    bVar3 = *(byte *)(param_1 + 0x60);
    uVar21 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_2);
    _objc_retain(lVar18);
    _objc_retain(uVar1);
    _objc_retain(uVar17);
    _objc_retain(uVar2);
    lVar4 = param_2;
    func_0x00010beec820(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar6 = param_2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar4);
      lVar6 = lVar4;
    }
    _objc_release(lVar4);
    lVar4 = lVar6;
    FUN_107078f60(lVar6,bVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar5;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (lVar20 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      if ((bVar3 & 1) == 0) {
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c14c4a0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e300(puVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(lVar20);
    _objc_release(lVar20);
    lVar20 = lVar5;
    func_0x00010c28f560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar20 == 0) {
      _objc_retain(param_2);
      lVar10 = param_2;
    }
    else {
      lVar9 = lVar5;
      func_0x00010c28f560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      FUN_107079028();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    _objc_release(lVar20);
    puVar7 = PTR_PTR_1126d4488;
    _objc_alloc();
    func_0x00010c05a080();
    puVar8 = PTR_PTR_1126d4470;
    func_0x00010c27e380();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cb588;
    _objc_alloc();
    func_0x00010bff4ac0();
    lVar20 = lVar4;
    func_0x00010c25cd40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(puVar11);
    _objc_release(lVar20);
    puVar12 = puVar19;
    func_0x00010c25cd40(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(puVar11);
    _objc_release(puVar12);
    lVar20 = lVar5;
    func_0x00010c26e500(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2360(puVar11);
    _objc_release(lVar20);
    lVar20 = lVar5;
    func_0x00010bfa0ea0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ede0(puVar11);
    _objc_release(lVar20);
    puVar12 = PTR_PTR_1126cb5b0;
    _objc_opt_new(PTR_PTR_1126cb5b0);
    uVar13 = uVar17;
    FUN_10707c46c(uVar17,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224fa0(puVar12);
    _objc_release(uVar13);
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1070790f4;
    uStack_88 = 0x107079104;
    uStack_80 = 0;
    lVar20 = lVar5;
    func_0x00010c1407e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar11);
    _objc_retain(puVar11);
    func_0x00010c0be3a0(lVar20);
    _objc_release(lVar20);
    lVar20 = lVar5;
    func_0x00010beed1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = lVar5;
      func_0x00010beed1e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar20;
      func_0x000100504554();
      func_0x00010c186600(puVar11);
      _objc_release(lVar9);
      _objc_release(lVar20);
      lVar9 = lVar5;
      func_0x00010beed1e0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar9;
      func_0x000100504554();
      _objc_release(lVar9);
    }
    uVar13 = uVar17;
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    FUN_107078e34(uVar21,puVar11,puVar12,uVar14,uVar2);
    _objc_release(uVar14);
    _objc_release(uVar13);
    puVar15 = PTR_PTR_1126d4478;
    _objc_alloc();
    lVar9 = lVar5;
    func_0x00010c26e500(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar5;
    func_0x00010bfa0ea0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029040(uVar21);
    _objc_release(lVar16);
    _objc_release(lVar9);
    _objc_release(lVar20);
    _objc_release(puVar11);
    _objc_release(puVar11);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar10);
    _objc_release(puVar19);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar2);
    _objc_release(uVar17);
    _objc_release(uVar1);
    _objc_release(lVar18);
    _objc_release(param_2);
    lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar17 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined **)(lVar18 + 0x28) = puVar15;
    _objc_release(uVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10707a1ac; end: 10707a307;  */

undefined8
FUN_10707a1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0b8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10707a308; end: 10707a5c7;  */

void FUN_10707a308(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_2);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  func_0x00010c11f2a0();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1070790f4;
  uStack_88 = 0x107079104;
  uStack_80 = 0;
  uVar4 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  func_0x00010c0becc0(uVar4);
  _objc_release(uVar4);
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10707a5c8; end: 10707a5cf; -[SCChatTextContentViewModel cellWillDisplayAction] */

undefined8 FUN_10707a5c8(void)

{
  return 0;
}



/* Entry: 10707a5d0; end: 10707a5d7; -[SCChatTextContentViewModel hidden] */

undefined8 FUN_10707a5d0(void)

{
  return 0;
}



/* Entry: 10707a5d8; end: 10707a5db; -[SCChatTextContentViewModel contentSizeForMaxWidth:] */

void FUN_10707a5d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSize_1125b0f20);
  return;
}



/* Entry: 10707a5dc; end: 10707a65f;  */

void FUN_10707a5dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c9ff8;
  puRam00000001136c9ff8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10707a660; end: 10707a72b;  */

undefined * FUN_10707a660(int param_1,int param_2)

{
  undefined *puVar1;
  
  func_0x00010bf4b960();
  if (param_1 == 0) {
    if (param_2 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7380(0x4030000000000000,0,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      return puVar1;
    }
    puVar1 = puRam00000001136ca008;
    if (lRam00000001136ca010 != -1) {
      func_0x00010002a2fc(0x1136ca010,&PTR___NSConcreteGlobalBlock_110989f38);
      puVar1 = puRam00000001136ca008;
    }
  }
  else {
    puVar1 = puRam00000001136ca018;
    if (lRam00000001136ca020 != -1) {
      func_0x00010002a2fc(0x1136ca020,&PTR___NSConcreteGlobalBlock_11098a008);
      puVar1 = puRam00000001136ca018;
    }
  }
  _objc_retain(puVar1);
  return puVar1;
}



/* Entry: 10707a72c; end: 10707a737;  */

void FUN_10707a72c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_filteredArrayUsingBlock__1125c9430,&PTR___NSConcreteGlobalBlock_110989f58
            );
  return;
}



/* Entry: 10707a738; end: 10707a83f;  */

undefined1 FUN_10707a738(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0becc0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10707a840; end: 10707a91f;  */

bool FUN_10707a840(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    lVar2 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c25d0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c11f2a0(lVar2);
    lVar5 = lVar4;
    func_0x00010c08fa60(lVar4);
    bVar1 = lVar5 != lVar6;
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10707a920; end: 10707b61f; -[SCChatTextContentViewModelGenerator contentFromParameterProvider:] */

undefined *
FUN_10707a920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  uint uStack_278;
  uint uStack_274;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar2 = param_4;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_4;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x000108ef55a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_4;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar16 = ppuVar17;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar2 = ppuVar16;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar16);
  ppuVar5 = ppuVar17;
  func_0x00010c26c040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR____NSArray0__struct_11034ab48;
  ppuVar16 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar16 = ppuVar5;
  }
  _objc_retain(ppuVar16);
  _objc_release(ppuVar5);
  ppuStack_268 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = ppuVar13;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0720c0();
    _objc_release(ppuVar4);
    if ((int)ppuVar5 != 0) {
      ppuVar4 = param_4;
      func_0x00010c0cbd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c0784c0();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      if ((int)ppuVar6 != 0) {
        _objc_retain(ppuVar16);
        ppuStack_208 = ppuVar16;
        goto LAB_10707ab24;
      }
    }
  }
  ppuVar4 = ppuVar16;
  func_0x0001006372a4(ppuVar16,&PTR___NSConcreteGlobalBlock_110989f98);
  ppuStack_208 = ppuVar4;
LAB_10707ab24:
  ppuVar4 = param_4;
  func_0x00010c108300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  ppuVar5 = ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar7);
  ppuStack_218 = ppuVar4;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuStack_218 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar17;
  func_0x00010c15cca0();
  ppuVar5 = ppuVar17;
  ppuStack_210 = ppuVar4;
  func_0x00010c26c400();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_10707b720;
  puStack_1e8 = &UNK_110989fd8;
  _objc_retain(param_4);
  ppuStack_1e0 = param_4;
  _objc_retain(ppuVar17);
  ppuStack_1d8 = ppuVar17;
  _objc_retain(ppuVar13);
  ppuVar4 = ppuVar5;
  ppuStack_1d0 = ppuVar13;
  func_0x0001006372a4(ppuVar5,&puStack_200);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar8 = ppuVar4;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar4);
  _objc_release(ppuVar5);
  func_0x00010c0f65a0(param_4);
  _objc_retain(ppuVar8);
  ppuVar4 = param_4;
  func_0x00010c0cbd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c078d60();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  ppuStack_270 = ppuVar16;
  ppuStack_260 = ppuVar13;
  ppuStack_258 = ppuVar3;
  ppuStack_238 = ppuVar8;
  ppuStack_230 = ppuVar2;
  if ((int)ppuVar6 == 0) {
    uStack_278 = 0;
    ppuStack_220 = ppuVar8;
  }
  else {
    ppuVar3 = param_4;
    func_0x00010bf500c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_4;
    func_0x00010c0db680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920(ppuVar3);
    ppuVar4 = ppuVar3;
    func_0x00010bf500c0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar4;
    func_0x00010bf5a660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_4;
    func_0x00010c0cbd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db720();
    ppuVar6 = ppuVar13;
    func_0x00010c14f920();
    _objc_release(ppuVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar16);
    _objc_release(ppuVar4);
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar2 = param_4;
      func_0x00010c0db680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar13;
      func_0x00010c28f500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      _objc_release(ppuVar2);
      ppuVar8 = ppuStack_238;
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar2 = ppuVar4;
        func_0x00010beec820(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuStack_218;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
      }
      ppuVar2 = ppuStack_230;
      ppuVar16 = ppuVar13;
      func_0x00010c07efa0();
      ppuStack_220 = ppuVar8;
      uStack_278 = (uint)ppuVar16;
      if (uStack_278 != 0) {
        puVar7 = PTR_PTR_1126c6aa8;
        func_0x00010c28fb80(PTR_PTR_1126c6aa8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126c6ab0;
        _objc_alloc(PTR_PTR_1126c6ab0);
        func_0x00010c08fa60(ppuVar2);
        func_0x00010c03cbe0(puVar9);
        ppuVar16 = ppuVar8;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_220 = ppuVar16;
        _objc_release(ppuVar8);
        _objc_release(puVar9);
        _objc_release(puVar7);
      }
      _objc_release(ppuVar13);
      _objc_release(ppuVar4);
    }
    else {
      uStack_278 = 0;
      ppuStack_220 = ppuStack_238;
      ppuVar2 = ppuStack_230;
      ppuVar8 = ppuStack_238;
    }
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_4;
  func_0x00010c0cbd40(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010c0cbf60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(ppuVar16);
  _objc_release(ppuVar4);
  _objc_release(ppuVar13);
  _objc_release(ppuVar3);
  ppuVar3 = param_4;
  func_0x00010c0cbd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  func_0x00010c06e500();
  _objc_release(ppuVar13);
  _objc_release(ppuVar3);
  _objc_retain(ppuVar8);
  ppuVar13 = ppuStack_208;
  _objc_retain(ppuStack_208);
  _objc_retain(ppuVar2);
  uStack_274 = (uint)ppuVar4;
  ppuVar16 = ppuVar2;
  FUN_10707a660(ppuVar2,ppuVar4);
  ppuVar3 = ppuStack_210;
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0(ppuVar16);
  func_0x00010bf0e380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  _objc_release(puVar9);
  ppuVar13 = ppuVar2;
  func_0x00010c08fa60();
  _objc_release(ppuVar2);
  _objc_retain(puVar7);
  _objc_retain(ppuVar8);
  ppuVar4 = ppuVar8;
  func_0x00010bf529e0();
  puStack_228 = puVar7;
  if (ppuVar4 != (undefined **)0x0) {
    puVar9 = puVar7;
    func_0x00010c0d3c80();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10707bd58;
    puStack_108 = &UNK_11098a088;
    puStack_100 = puVar7;
    puStack_f8 = puVar9;
    ppuStack_f0 = ppuVar13;
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    func_0x00010bf97e80(ppuVar8);
    puVar10 = puVar9;
    func_0x00010bf51e00();
    puStack_228 = puVar10;
    _objc_release(puStack_f8);
    _objc_release(puStack_100);
    _objc_release(puVar7);
    _objc_release(puVar9);
  }
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar16);
  _objc_release(ppuVar8);
  ppuVar13 = ppuStack_220;
  ppuVar4 = ppuStack_220;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = ppuVar17;
  ppuStack_240 = ppuVar4;
  func_0x00010c0cb8c0(ppuVar17);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_4;
  func_0x00010c295440(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = param_4;
  func_0x00010bf366a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10707a1ac(param_1,ppuVar13,ppuVar2,ppuVar17,ppuStack_218,ppuVar3,ppuVar4,ppuVar16);
  ppuStack_210 = ppuVar13;
  _objc_release(ppuVar16);
  _objc_release(ppuVar4);
  _objc_release(ppuVar17);
  ppuStack_248 = param_4;
  func_0x00010c244a80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuStack_208;
  _objc_retain(ppuStack_208);
  _objc_retain(param_4);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(ppuVar2);
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar15 = *plStack_150;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_150 != lVar15) {
          _objc_enumerationMutation(ppuStack_208);
        }
        uVar12 = *(undefined8 *)(lStack_158 + (long)ppuVar17 * 8);
        uVar20 = uVar12;
        func_0x00010bf4df40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_190 = 0xc2000000;
        pcStack_188 = FUN_10707c078;
        puStack_180 = &UNK_11098a118;
        _objc_retain(param_4);
        ppuStack_178 = param_4;
        uStack_170 = uVar12;
        _objc_retain(puVar7);
        puStack_1c8 = puVar9;
        uStack_1c0 = 0xc2000000;
        uStack_1b8 = 0x10707c1fc;
        puStack_1b0 = &UNK_11098a148;
        uStack_1a8 = uVar12;
        puStack_168 = puVar7;
        _objc_retain(puVar7);
        puStack_1a0 = puVar7;
        func_0x00010c0bdec0(uVar20);
        _objc_release(uVar20);
        _objc_release(puStack_1a0);
        _objc_release(puStack_168);
        _objc_release(ppuStack_178);
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar2 != ppuVar17);
      ppuVar2 = ppuStack_208;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  ppuVar2 = ppuStack_208;
  _objc_release(ppuStack_208);
  puVar9 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  ppuVar2 = ppuStack_230;
  if (((uStack_278 & 1) == 0) &&
     (ppuVar17 = ppuStack_230, FUN_10707a840(ppuStack_230,ppuStack_240), (int)ppuVar17 != 0)) {
    dVar19 = 1.79769313486232e+308;
    uVar20 = param_1;
    func_0x00010c23d600(param_1,0x7fefffffffffffff,PTR_PTR_1126af270);
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
    uVar20 = *(undefined8 *)PTR__CGSizeZero_110347620;
    dVar19 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  ppuVar3 = ppuStack_248;
  ppuVar17 = ppuStack_260;
  ppuVar4 = ppuStack_248;
  func_0x00010c0cbd40(ppuStack_248);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuStack_210;
  _objc_retain(ppuStack_210);
  dVar18 = 0.0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x00010bf52a60();
  if (ppuVar13 == (undefined **)0x0) {
    dVar21 = 0.0;
  }
  else {
    lVar15 = *plStack_150;
    dVar21 = 0.0;
    do {
      ppuVar16 = (undefined **)0x0;
      do {
        if (*plStack_150 != lVar15) {
          _objc_enumerationMutation(ppuStack_210);
        }
        uVar14 = *(ulong *)(lStack_158 + (long)ppuVar16 * 8);
        uVar11 = uVar14;
        FUN_10707c2f4(uVar14,ppuVar4);
        if ((uVar11 & 1) == 0) {
          func_0x00010bfe0640(uVar14);
          dVar18 = dVar21 + dVar18;
          dVar21 = dVar18 + 8.0;
        }
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar13 != ppuVar16);
      ppuVar13 = ppuStack_210;
      func_0x00010bf52a60();
    } while (ppuVar13 != (undefined **)0x0);
  }
  ppuVar13 = ppuStack_210;
  ppuVar16 = ppuStack_210;
  FUN_10707b974(ppuStack_210,ppuVar4);
  dVar18 = dVar21 + 8.0;
  if ((int)ppuVar16 == 0) {
    dVar18 = dVar21;
  }
  _objc_release(ppuVar13);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar3;
  func_0x00010c0cbd40(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar13;
  FUN_10707b974(ppuVar13,ppuVar4);
  _objc_release(ppuVar4);
  if ((int)ppuVar16 == 0) {
    param_1 = uVar20;
  }
  uVar11 = (ulong)uStack_274;
  ppuVar4 = ppuVar2;
  FUN_10707a660(ppuVar2,uVar11);
  puVar10 = PTR_PTR_1126c6d08;
  _objc_alloc();
  puVar7 = puStack_228;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110e9e5b8;
  func_0x00010c03cde0(dVar19,dVar18,param_1,dVar19 + dVar18);
  _objc_release(ppuVar4);
  _objc_release(puVar9);
  _objc_release(ppuVar13);
  _objc_release(ppuStack_240);
  _objc_release(puVar7);
  _objc_release(ppuStack_220);
  _objc_release(ppuStack_238);
  _objc_release(ppuStack_1d0);
  _objc_release(ppuStack_1d8);
  _objc_release(ppuStack_1e0);
  _objc_release(ppuStack_218);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_270);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_268);
  _objc_release(ppuVar17);
  _objc_release(ppuStack_258);
  _objc_release(ppuStack_250);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  puStack_2a8 = puVar7;
  pcStack_288 = FUN_10707b620;
  uStack_2b0 = uVar12;
  puStack_2a0 = puVar10;
  ppuStack_298 = ppuVar4;
  puStack_290 = &stack0xfffffffffffffff0;
  _objc_retain(uVar11);
  _objc_retain(uVar11);
  puStack_2c8 = &uStack_2d0;
  uStack_2d0 = 0;
  uStack_2c0 = 0x2020000000;
  uStack_2b8 = 0;
  uVar14 = uVar11;
  func_0x00010bf4df40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdec0();
  _objc_release(uVar14);
  bVar1 = *(byte *)(puStack_2c8 + 3);
  __Block_object_dispose(&uStack_2d0,8);
  _objc_release(uVar11);
  _objc_release(uVar11);
  return (undefined *)(ulong)((bVar1 ^ 0xffffffff) & 1);
}



/* Entry: 10707b620; end: 10707b71f;  */

byte FUN_10707b620(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdec0();
  _objc_release(uVar2);
  bVar1 = *(byte *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_2);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 10707b720; end: 10707b853;  */

byte FUN_10707b720(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0becc0(uVar2);
  _objc_release(uVar2);
  bVar1 = *(byte *)(puStack_48 + 3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 10707b854; end: 10707b857;  */

void FUN_10707b854(void)

{
  return;
}



/* Entry: 10707b858; end: 10707b973;  */

void FUN_10707b858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c28f980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb8c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf60a00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c081ce0();
  _objc_release(param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar6;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10707b974; end: 10707ba1b;  */

bool FUN_10707b974(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10707c448;
  puStack_40 = &UNK_11098a1b8;
  uStack_38 = param_2;
  _objc_retain(param_2);
  func_0x0001006372a4(param_1,&puStack_58);
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 10707ba1c; end: 10707bcbb; -[SCChatTextContentViewModelGenerator quotedContentFromQuotedMessage:viewModel:] */

void FUN_10707ba1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf4ce20();
  if ((int)lVar1 == 7) {
    lVar1 = param_3;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c131be0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0xb) {
      lVar1 = param_3;
      func_0x00010c242c40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c132180();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar6 = (undefined *)0x0;
      goto LAB_10707bc18;
    }
  }
  lVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf0e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  puVar6 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar4 = uVar7;
        func_0x00010bf0dec0();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar4 == 6) {
          func_0x00010c14e140(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c0df720(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          goto LAB_10707bc10;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
    puVar6 = (undefined *)0x0;
  }
LAB_10707bc10:
  _objc_release(lVar3);
LAB_10707bc18:
  puVar5 = PTR_PTR_1126d44a8;
  _objc_alloc(PTR_PTR_1126d44a8);
  func_0x00010c0511e0();
  func_0x00010c1f5fe0();
  uVar4 = param_4;
  func_0x00010bf4bc60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213220();
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = puRam00000001136ca018;
  puRam00000001136ca018 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10707bcbc; end: 10707bcf7;  */

void FUN_10707bcbc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136ca018;
  puRam00000001136ca018 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10707bcf8; end: 10707bd13;  */

void FUN_10707bcf8(long param_1,ulong param_2)

{
  if (param_2 < 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10707bd14; end: 10707bd43;  */

void FUN_10707bd14(long param_1,undefined1 param_2)

{
  func_0x00010c083ac0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10707bd44; end: 10707bd57;  */

void FUN_10707bd44(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10707bd58; end: 10707bff3;  */

void FUN_10707bd58(double param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_3;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c11f2a0();
  if ((ulong)(lVar2 + lVar8) <= *(ulong *)(param_2 + 0x30)) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    func_0x00010bf0dde0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_opt_class(PTR__OBJC_CLASS___UIFont_1126aec38);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c102de0(uVar1);
    if (param_1 == 16.0) {
      if (lRam00000001136ca000 != -1) {
        func_0x00010002a2fc(0x1136ca000,&PTR___NSConcreteGlobalBlock_110989f18);
      }
      puVar4 = puRam00000001136c9ff8;
      _objc_retain(puRam00000001136c9ff8);
    }
    else {
      func_0x00010c102de0(uVar1);
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    lVar2 = param_3;
    func_0x00010bf4df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar10);
    func_0x00010c0becc0(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(uVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bef6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addAttributes_range__11259b578,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
             *(undefined8 *)(param_3 + 0x38));
  return;
}



/* Entry: 10707bff4; end: 10707c003;  */

void FUN_10707bff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addAttributes_range__11259b578,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10707c004; end: 10707c06b;  */

void FUN_10707c004(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c083ac0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bef6f20(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bef6f40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10707c06c; end: 10707c077;  */

void FUN_10707c06c(void)

{
  return;
}



/* Entry: 10707c078; end: 10707c2ef;  */

void FUN_10707c078(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    _objc_retain(uVar5);
    puVar3 = puVar2;
    func_0x000100bf119c();
    puVar4 = puVar2;
    if ((((ulong)puVar3 & 1) == 0) && (puVar3 = puVar2, func_0x00010901c5ac(), (int)puVar3 == 0)) {
      func_0x00010c2923e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000107d53844(puVar2,puVar4,1,0x2e879d01,0x2f,0x2b);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c2923e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar3);
    }
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126d44b0;
    _objc_alloc(PTR_PTR_1126d44b0);
    func_0x00010c11f2a0(uVar5);
    _objc_release(uVar5);
    func_0x00010c03cc00(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10707c2f0; end: 10707c2f3;  */

void FUN_10707c2f0(void)

{
  return;
}



/* Entry: 10707c2f4; end: 10707c417;  */

undefined8 FUN_10707c2f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010c0c43a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf360();
  _objc_release(uVar2);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    uVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf90800();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10707c418; end: 10707c447;  */

void FUN_10707c418(long param_1,undefined1 param_2)

{
  func_0x00010c065360();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10707c448; end: 10707c46b;  */

uint FUN_10707c448(long param_1,undefined8 param_2)

{
  FUN_10707c2f4(param_2,*(undefined8 *)(param_1 + 0x20));
  return (uint)param_2 ^ 1;
}



/* Entry: 10707c46c; end: 10707c5a7;  */

void FUN_10707c46c(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = param_2;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_opt_class(PTR_PTR_1126c3578);
  uVar3 = uVar2;
  func_0x00010c0b7ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10707c5a8; end: 10707c877;  */

void FUN_10707c5a8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  bVar1 = *(byte *)(param_1 + 0x28);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_opt_new(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x00010c167600();
  func_0x00010c1c5500(puVar2);
  func_0x00010c1676e0(puVar2);
  if ((param_1 != 0) && ((bVar1 & 1) != 0)) {
    _objc_retain(puVar2);
    _objc_retain(param_1);
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR__OBJC_CLASS___WKUserContentController_1126d44b8;
    _objc_opt_new(PTR__OBJC_CLASS___WKUserContentController_1126d44b8);
    func_0x00010c21e100(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c291760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d44c0;
    func_0x00010c293600(PTR_PTR_1126d44c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc7c0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d44c0;
    _objc_alloc(PTR_PTR_1126d44c0);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c036fe0(puVar3);
    puVar4 = puVar2;
    func_0x00010c291760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d44c0;
    func_0x00010c0cb740(PTR_PTR_1126d44c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb220(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c3578;
  _objc_retain(puVar2);
  _objc_alloc(puVar3);
  func_0x00010c014100(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c152980(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1d4c20(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10707c878; end: 10707c92b;  */

void FUN_10707c878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e130f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10707c92c; end: 10707c9bb;  */

void FUN_10707c92c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10707c9bc;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10707c9bc; end: 10707c9ef;  */

void FUN_10707c9bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfe4940(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10707c9f0; end: 10707ca67; -[SCChatAddressMediaCardViewModel initWithAddress:] */

undefined1 * FUN_10707c9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f87c0;
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



/* Entry: 10707ca68; end: 10707ca8b; -[SCChatAddressMediaCardViewModel copyWithZone:] */

undefined8 FUN_10707ca68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10707ca8c; end: 10707ca93; -[SCChatAddressMediaCardViewModel hash] */

void FUN_10707ca8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10707ca94; end: 10707cb23; -[SCChatAddressMediaCardViewModel isEqual:] */

long FUN_10707ca94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707cb08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10707cb08;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10707cb08;
    }
  }
  lVar3 = 1;
LAB_10707cb08:
  _objc_release(param_3);
  return lVar3;
}


