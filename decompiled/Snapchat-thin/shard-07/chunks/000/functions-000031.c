/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10508d21c; end: 10508d36f;  */

ulong FUN_10508d21c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  func_0x00010c14b860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar3 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lVar8 * 8);
        func_0x00010c0720c0();
        if ((uVar3 & 1) != 0) {
          uVar3 = 1;
          goto LAB_10508d2f4;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar3 = 0;
  }
LAB_10508d2f4:
  _objc_release(param_1);
  uVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_release(param_1);
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(uVar5);
    uVar3 = uVar4;
    func_0x00010c0cb2a0();
    if ((uVar3 < 0x2d) && ((0x160381e08069U >> (uVar3 & 0x3f) & 1) != 0)) {
      uVar7 = 0;
    }
    else {
      uVar3 = uVar4;
      func_0x00010c15df40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar3);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    return uVar7;
  }
  return uVar3;
}



/* Entry: 10508d370; end: 10508d437;  */

ulong FUN_10508d370(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0cb2a0();
  if ((uVar1 < 0x2d) && ((0x160381e08069U >> (uVar1 & 0x3f) & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c15df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10508d438; end: 10508d56f;  */

void FUN_10508d438(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0cb5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb2a0(param_1);
  uVar3 = param_1;
  func_0x00010c15df40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf026e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4698;
  _objc_alloc(PTR_PTR_1126b4698);
  func_0x00010c02b6a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10508d570; end: 10508d6fb;  */

bool FUN_10508d570(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c0c5240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    lVar3 = param_1;
    func_0x00010c0c4680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 1) {
      bVar1 = false;
      goto LAB_10508d670;
    }
    lVar3 = param_1;
    func_0x00010c0c4680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0c5240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0c6c20(lVar2);
    bVar1 = lVar3 == 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
LAB_10508d670:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10508d6fc; end: 10508d713;  */

void FUN_10508d6fc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc44f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc44f8,
                      &PTR____CFConstantStringClassReference_110dc4518,0);
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



/* Entry: 10508d714; end: 10508d997; -[SCProfileArroyoChatMediaDataModel initWithUniqueId:conversationId:messageId:analyticsMessageId:messageBodyType:senderUserId:messageTimestamp:isFromGroupConversation:savedByParticipants:mediaIds:mediaContentsById:messageParticipants:mediaOwnerId:is24HourSnap:] */

undefined8 *
FUN_10508d714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17)

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
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e5e50;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_17;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10508d998; end: 10508d9bb; -[SCProfileArroyoChatMediaDataModel copyWithZone:] */

undefined8 FUN_10508d998(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10508d9bc; end: 10508daaf; -[SCProfileArroyoChatMediaDataModel hash] */

undefined8 * FUN_10508d9bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_98;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10508dc38:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10508dc44;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[6] == param_3[6] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[9];
                  if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[10];
                    if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xb];
                      if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xc];
                        if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = (undefined8 *)puVar3[0xd];
                          if (puVar6 != (undefined8 *)param_3[0xd]) {
                            func_0x00010c071ae0();
                            goto LAB_10508dc44;
                          }
                          goto LAB_10508dc38;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10508dc44:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10508dab0; end: 10508dc5f; -[SCProfileArroyoChatMediaDataModel isEqual:] */

long FUN_10508dab0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10508dc38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10508dc44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if (lVar3 != *(long *)(param_3 + 0x68)) {
                            func_0x00010c071ae0();
                            goto LAB_10508dc44;
                          }
                          goto LAB_10508dc38;
                        }
                      }
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
LAB_10508dc44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10508dc60; end: 10508dc67; -[SCProfileArroyoChatMediaDataModel uniqueId] */

undefined8 FUN_10508dc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10508dc68; end: 10508dc6f; -[SCProfileArroyoChatMediaDataModel conversationId] */

undefined8 FUN_10508dc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10508dc70; end: 10508dc77; -[SCProfileArroyoChatMediaDataModel messageId] */

undefined8 FUN_10508dc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10508dc78; end: 10508dc7f; -[SCProfileArroyoChatMediaDataModel analyticsMessageId] */

undefined8 FUN_10508dc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10508dc80; end: 10508dc87; -[SCProfileArroyoChatMediaDataModel messageBodyType] */

undefined8 FUN_10508dc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10508dc88; end: 10508dc8f; -[SCProfileArroyoChatMediaDataModel senderUserId] */

undefined8 FUN_10508dc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10508dc90; end: 10508dc97; -[SCProfileArroyoChatMediaDataModel messageTimestamp] */

undefined8 FUN_10508dc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10508dc98; end: 10508dc9f; -[SCProfileArroyoChatMediaDataModel isFromGroupConversation] */

undefined1 FUN_10508dc98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10508dca0; end: 10508dca7; -[SCProfileArroyoChatMediaDataModel savedByParticipants] */

undefined8 FUN_10508dca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10508dca8; end: 10508dcaf; -[SCProfileArroyoChatMediaDataModel mediaIds] */

undefined8 FUN_10508dca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10508dcb0; end: 10508dcb7; -[SCProfileArroyoChatMediaDataModel mediaContentsById] */

undefined8 FUN_10508dcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10508dcb8; end: 10508dcbf; -[SCProfileArroyoChatMediaDataModel messageParticipants] */

undefined8 FUN_10508dcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10508dcc0; end: 10508dcc7; -[SCProfileArroyoChatMediaDataModel mediaOwnerId] */

undefined8 FUN_10508dcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10508dcc8; end: 10508dccf; -[SCProfileArroyoChatMediaDataModel is24HourSnap] */

undefined1 FUN_10508dcc8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10508dcd0; end: 10508dd6b; -[SCProfileArroyoChatMediaDataModel .cxx_destruct] */

void FUN_10508dcd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10508dd6c; end: 10508de07; -[SCProfileChatMediaFetchMetadata initWithOwnerIdentifier:checksum:paginationSeqNumMap:expirationTimestamp:] */

undefined8
FUN_10508dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be19ae0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032b20(param_1,param_2,param_3,param_4,uVar1,param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10508de08; end: 10508de57; -[SCProfileChatMediaFetchMetadata paginationSeqNumMap] */

void FUN_10508de08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f2860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becc820(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10508de58; end: 10508dfe7; -[SCProfileChatMediaFetchMetadata _toMap:] */

void FUN_10508de58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c15e680(uVar7);
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f49c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar1);
        _objc_release(uVar7);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar4 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        puVar3 = PTR_PTR_1126b46a0;
        _objc_alloc();
        puVar5 = (undefined1 *)puVar6;
        func_0x00010c0e00e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c034240();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar5);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = (undefined1 *)puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar3 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      _objc_retain();
      FUN_105094128(param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10508dfe8; end: 10508e177; -[SCProfileChatMediaFetchMetadata _fromMap:] */

void FUN_10508dfe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126b46a0;
      _objc_alloc();
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c034240();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      _objc_release(lVar5);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  FUN_105094128(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10508e178; end: 10508e1ff;  */

void FUN_10508e178(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_105094128(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508e200; end: 10508e45b;  */

void FUN_10508e200(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b46a8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_105092670();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10508e45c; end: 10508e7b7;  */

void FUN_10508e45c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double dVar14;
  undefined4 uStack_534;
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined **ppuStack_518;
  undefined4 uStack_510;
  undefined4 uStack_500;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined1 uStack_4a1;
  undefined **ppuStack_4a0;
  undefined4 uStack_498;
  undefined2 uStack_488;
  undefined2 uStack_486;
  undefined1 *puStack_468;
  undefined ***pppuStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_2f8;
  undefined4 uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b46a8);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_105092670();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  uStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puStack_220 = (undefined8 *)0x0;
  puStack_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  uStack_224 = 0;
  puVar3 = &uStack_120;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_190,&puStack_220,&uStack_224);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_220 != (undefined8 *)0x0) {
    puStack_218 = puStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_220 = &uStack_148;
  func_0x000100105004(&puStack_220);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_220 = &uStack_1c0;
  func_0x000100105004(&puStack_220);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  dVar14 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126b46b0;
      FUN_1050940b4(PTR_PTR_1126b46b0,*(undefined8 *)((long)puVar12 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar4 != puVar12);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126b46b8);
  if (lVar6 == 0) {
    uStack_400 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_430,lVar6);
  }
  puVar2 = &uStack_4a1;
  FUN_1050927e8();
  uStack_510 = 0xf;
  uStack_500 = 0x100;
  ppuStack_518 = &PTR_DAT_110864b98;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_4c8 = 0;
  lStack_4d0 = 0;
  plStack_4b8 = (long *)0x0;
  uStack_4c0 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_486 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_498 = 6;
  uStack_488 = 0x100;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  pppuStack_460 = &ppuStack_518;
  lStack_450 = 0;
  lStack_458 = 0;
  plStack_440 = (long *)0x0;
  uStack_448 = 0;
  plStack_438 = (long *)0x0;
  lStack_530 = 0;
  lStack_528 = 0;
  uStack_520 = 0;
  uStack_534 = 0;
  puVar3 = &uStack_430;
  lStack_4e8 = (long)dVar14;
  puStack_468 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_4a0,&lStack_530,&uStack_534);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_530 != 0) {
    lStack_528 = lStack_530;
    __ZdlPv();
  }
  plVar1 = plStack_438;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  plStack_438 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_440;
  plStack_440 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  plVar1 = plStack_4b0;
  ppuStack_518 = &PTR_DAT_110864b98;
  plStack_4b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4b8;
  plStack_4b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4d0 != 0) {
    lStack_4c8 = lStack_4d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_408);
  _objc_release(uStack_418);
  _objc_release(uStack_420);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar3);
      }
      uVar10 = *(undefined8 *)((long)puVar12 * 8);
      puVar5 = PTR_PTR_1126b46c0;
      FUN_105091484(PTR_PTR_1126b46c0,uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(lVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c0f0720(uVar10);
      _objc_retainAutoreleasedReturnValue();
      FUN_10508e45c(lVar6,uVar10);
      _objc_release(uVar10);
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar4 != puVar12);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_opt_class(PTR_PTR_1126b46a8);
  if (lVar6 == 0) {
    uStack_400 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_430,lVar6);
  }
  puVar2 = &uStack_4a1;
  FUN_1050927e8();
  uStack_510 = 0xf;
  uStack_500 = 0x100;
  ppuStack_518 = &PTR_DAT_110864b98;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lStack_4c8 = 0;
  lStack_4d0 = 0;
  plStack_4b8 = (long *)0x0;
  uStack_4c0 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_486 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_498 = 6;
  uStack_488 = 0x100;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  pppuStack_460 = &ppuStack_518;
  lStack_450 = 0;
  lStack_458 = 0;
  plStack_440 = (long *)0x0;
  uStack_448 = 0;
  plStack_438 = (long *)0x0;
  lStack_530 = 0;
  lStack_528 = 0;
  uStack_520 = 0;
  uStack_534 = 0;
  puVar4 = &uStack_430;
  pppuVar9 = &ppuStack_4a0;
  lStack_4e8 = (long)dVar14;
  puStack_468 = puVar2;
  func_0x0001000e77a0(puVar4,pppuVar9,&lStack_530,&uStack_534);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_530 != 0) {
    lStack_528 = lStack_530;
    __ZdlPv();
  }
  plVar1 = plStack_438;
  ppuStack_4a0 = &PTR_FUN_110864b38;
  plStack_438 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_440;
  plStack_440 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_458 != 0) {
    lStack_450 = lStack_458;
    __ZdlPv();
  }
  plVar1 = plStack_4b0;
  ppuStack_518 = &PTR_DAT_110864b98;
  plStack_4b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4b8;
  plStack_4b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4d0 != 0) {
    lStack_4c8 = lStack_4d0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_408);
  _objc_release(uStack_418);
  _objc_release(uStack_420);
  _objc_retain(puVar4);
  puVar12 = puVar4;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar12 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar11 = *(undefined ****)((long)puVar13 * 8);
      puVar5 = PTR_PTR_1126b46b0;
      FUN_1050940b4(PTR_PTR_1126b46b0,pppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(lVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c0f0700(pppuVar11);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar11;
      FUN_10508ee3c(lVar6,pppuVar11);
      _objc_release(pppuVar11);
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (puVar12 != puVar13);
    puVar12 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar7 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar6);
  __Unwind_Resume(lVar7);
  _objc_retain();
  _objc_retain(pppuVar9);
  puVar5 = PTR_PTR_1126b46c0;
  puVar8 = PTR_PTR_1126b46b8;
  _objc_alloc(PTR_PTR_1126b46b8);
  func_0x00010c032b20();
  FUN_105091484(puVar5,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c25ed40(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(pppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10508e7b8; end: 10508ee3b;  */

void FUN_10508e7b8(double param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uStack_2c4;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_290;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined1 uStack_231;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined2 uStack_218;
  undefined2 uStack_216;
  undefined1 *puStack_1f8;
  undefined ***pppuStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126b46b8);
  if (param_2 == 0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,param_2);
  }
  puVar3 = &uStack_231;
  FUN_1050927e8();
  uStack_2a0 = 0xf;
  uStack_290 = 0x100;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_258 = 0;
  lStack_260 = 0;
  plStack_248 = (long *)0x0;
  uStack_250 = 0;
  plStack_240 = (long *)0x0;
  uStack_216 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_228 = 6;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_FUN_110864b38;
  pppuStack_1f0 = &ppuStack_2a8;
  lStack_1e0 = 0;
  lStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c4 = 0;
  puVar4 = &uStack_1c0;
  lStack_278 = (long)param_1;
  puStack_1f8 = puVar3;
  func_0x0001000e77a0(puVar4,&ppuStack_230,&lStack_2c0,&uStack_2c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar1 = plStack_1c8;
  ppuStack_230 = &PTR_FUN_110864b38;
  plStack_1c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  plVar1 = plStack_240;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  plStack_240 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_248;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar4);
      }
      uVar9 = *(undefined8 *)((long)puVar11 * 8);
      puVar2 = PTR_PTR_1126b46c0;
      FUN_105091484(PTR_PTR_1126b46c0,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c0f0720(uVar9);
      _objc_retainAutoreleasedReturnValue();
      FUN_10508e45c(param_2,uVar9);
      _objc_release(uVar9);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar5 != puVar11);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126b46a8);
  if (param_2 == 0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,param_2);
  }
  puVar3 = &uStack_231;
  FUN_1050927e8();
  uStack_2a0 = 0xf;
  uStack_290 = 0x100;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_258 = 0;
  lStack_260 = 0;
  plStack_248 = (long *)0x0;
  uStack_250 = 0;
  plStack_240 = (long *)0x0;
  uStack_216 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_228 = 6;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_FUN_110864b38;
  pppuStack_1f0 = &ppuStack_2a8;
  lStack_1e0 = 0;
  lStack_1e8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c4 = 0;
  puVar5 = &uStack_1c0;
  pppuVar8 = &ppuStack_230;
  lStack_278 = (long)param_1;
  puStack_1f8 = puVar3;
  func_0x0001000e77a0(puVar5,pppuVar8,&lStack_2c0,&uStack_2c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar1 = plStack_1c8;
  ppuStack_230 = &PTR_FUN_110864b38;
  plStack_1c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  plVar1 = plStack_240;
  ppuStack_2a8 = &PTR_DAT_110864b98;
  plStack_240 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_248;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_retain(puVar5);
  puVar11 = puVar5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar11 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar10 = *(undefined ****)((long)puVar12 * 8);
      puVar2 = PTR_PTR_1126b46b0;
      FUN_1050940b4(PTR_PTR_1126b46b0,pppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c0f0700(pppuVar10);
      _objc_retainAutoreleasedReturnValue();
      pppuVar8 = pppuVar10;
      FUN_10508ee3c(param_2,pppuVar10);
      _objc_release(pppuVar10);
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar11 != puVar12);
    puVar11 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  __Unwind_Resume(lVar6);
  _objc_retain();
  _objc_retain(pppuVar8);
  puVar2 = PTR_PTR_1126b46c0;
  puVar7 = PTR_PTR_1126b46b8;
  _objc_alloc(PTR_PTR_1126b46b8);
  func_0x00010c032b20();
  FUN_105091484(puVar2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c25ed40(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(pppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10508ee3c; end: 10508ef1f;  */

void FUN_10508ee3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b46c0;
  puVar1 = PTR_PTR_1126b46b8;
  _objc_alloc(PTR_PTR_1126b46b8);
  func_0x00010c032b20();
  FUN_105091484(puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508ef20; end: 10508efa7;  */

void FUN_10508ef20(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1050914f8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508efa8; end: 10508f09f;  */

void FUN_10508efa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_10508f0a0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b46c0;
    FUN_105091054(PTR_PTR_1126b46c0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar2);
    }
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10508f0a0; end: 10508f2fb;  */

void FUN_10508f0a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b46b8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_105090988();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10508f2fc; end: 10508f603; -[SCProfileChatMediaDataModel initWithOwnerId:chatMediaId:expirationTimestamp:messageId:type:senderUsername:conversationId:sequenceNumber:messageTimeStamp:generalMedia:memoryStories:savedStates:messageType:mediaCardAttributes:isGroupMessage:mentions:retentionInMinutes:senderChatSequenceNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10508f2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined4 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e5e58;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4e0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4e4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4e4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4e8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4ec) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4f0) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4f4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4f8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b4fc) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b500) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b504);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b504) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b508);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b508) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b50c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b50c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271b510) = param_15;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b514);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b514) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271b518) = param_18;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b51c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b51c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b520) = param_21;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11271b524) = param_22;
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10508f604; end: 10508f627; -[SCProfileChatMediaDataModel copyWithZone:] */

undefined8 FUN_10508f604(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10508f628; end: 10508f763; -[SCProfileChatMediaDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10508f628(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b4e0);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b4e4);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uStack_a8 = *(undefined8 *)(param_1 + _DAT_11271b4e8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b4ec);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11271b4f0);
  lStack_98 = -lVar5;
  if (-1 < lVar5) {
    lStack_98 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b4f4);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b4f8);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_80 = *(undefined8 *)(param_1 + _DAT_11271b4fc);
  uStack_78 = *(undefined8 *)(param_1 + _DAT_11271b500);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b504);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b508);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b50c);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lStack_58 = (long)*(char *)(param_1 + _DAT_11271b510);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b514);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_11271b518);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b51c);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + _DAT_11271b520);
  lStack_30 = (long)*(int *)(param_1 + _DAT_11271b524);
  puVar3 = &uStack_b8;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10508f9b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10508f9c0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + (long)_DAT_11271b4e8) ==
             *(long *)((long)param_3 + (long)_DAT_11271b4e8) &&
            (*(long *)((long)puVar3 + (long)_DAT_11271b4f0) ==
             *(long *)((long)param_3 + (long)_DAT_11271b4f0))) &&
           (*(long *)((long)puVar3 + (long)_DAT_11271b4fc) ==
            *(long *)((long)param_3 + (long)_DAT_11271b4fc))) &&
          ((*(long *)((long)puVar3 + (long)_DAT_11271b500) ==
            *(long *)((long)param_3 + (long)_DAT_11271b500) &&
           (*(char *)((long)puVar3 + (long)_DAT_11271b510) ==
            *(char *)((long)param_3 + (long)_DAT_11271b510))))))) &&
        (*(char *)((long)puVar3 + (long)_DAT_11271b518) ==
         *(char *)((long)param_3 + (long)_DAT_11271b518))) &&
       ((*(long *)((long)puVar3 + (long)_DAT_11271b520) ==
         *(long *)((long)param_3 + (long)_DAT_11271b520) &&
        (*(int *)((long)puVar3 + (long)_DAT_11271b524) ==
         *(int *)((long)param_3 + (long)_DAT_11271b524))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b4e0);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b4e0)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b4e4);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b4e4)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b4ec);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b4ec)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b4f4);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b4f4)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b4f8);
              if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b4f8)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b504);
                if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b504)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b508);
                  if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b508)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b50c);
                    if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b50c)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b514);
                      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b514)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271b51c);
                        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271b51c)) {
                          func_0x00010c071ae0();
                          goto LAB_10508f9c0;
                        }
                        goto LAB_10508f9b4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10508f9c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10508f764; end: 10508f9db; -[SCProfileChatMediaDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10508f764(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10508f9b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10508f9c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + (long)_DAT_11271b4e8) == *(long *)(param_3 + (long)_DAT_11271b4e8)
            && (*(long *)(param_1 + (long)_DAT_11271b4f0) ==
                *(long *)(param_3 + (long)_DAT_11271b4f0))) &&
           (*(long *)(param_1 + (long)_DAT_11271b4fc) == *(long *)(param_3 + (long)_DAT_11271b4fc)))
          && ((*(long *)(param_1 + (long)_DAT_11271b500) ==
               *(long *)(param_3 + (long)_DAT_11271b500) &&
              (*(char *)(param_1 + (long)_DAT_11271b510) ==
               *(char *)(param_3 + (long)_DAT_11271b510))))))) &&
        (*(char *)(param_1 + (long)_DAT_11271b518) == *(char *)(param_3 + (long)_DAT_11271b518))) &&
       ((*(long *)(param_1 + (long)_DAT_11271b520) == *(long *)(param_3 + (long)_DAT_11271b520) &&
        (*(int *)(param_1 + (long)_DAT_11271b524) == *(int *)(param_3 + (long)_DAT_11271b524))))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271b4e0);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b4e0)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271b4e4);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b4e4)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11271b4ec);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b4ec)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11271b4f4);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b4f4)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_11271b4f8);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b4f8)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_11271b504);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b504)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_11271b508);
                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b508)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + (long)_DAT_11271b50c);
                    if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b50c)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + (long)_DAT_11271b514);
                      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b514)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + (long)_DAT_11271b51c);
                        if (lVar3 != *(long *)(param_3 + (long)_DAT_11271b51c)) {
                          func_0x00010c071ae0();
                          goto LAB_10508f9c0;
                        }
                        goto LAB_10508f9b4;
                      }
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
LAB_10508f9c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10508f9dc; end: 10508f9eb; -[SCProfileChatMediaDataModel ownerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508f9dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4e0);
}



/* Entry: 10508f9ec; end: 10508f9fb; -[SCProfileChatMediaDataModel chatMediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508f9ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4e4);
}



/* Entry: 10508f9fc; end: 10508fa0b; -[SCProfileChatMediaDataModel expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508f9fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4e8);
}



/* Entry: 10508fa0c; end: 10508fa1b; -[SCProfileChatMediaDataModel messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4ec);
}



/* Entry: 10508fa1c; end: 10508fa2b; -[SCProfileChatMediaDataModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4f0);
}



/* Entry: 10508fa2c; end: 10508fa3b; -[SCProfileChatMediaDataModel senderUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4f4);
}



/* Entry: 10508fa3c; end: 10508fa4b; -[SCProfileChatMediaDataModel conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4f8);
}



/* Entry: 10508fa4c; end: 10508fa5b; -[SCProfileChatMediaDataModel sequenceNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b4fc);
}



/* Entry: 10508fa5c; end: 10508fa6b; -[SCProfileChatMediaDataModel messageTimeStamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b500);
}



/* Entry: 10508fa6c; end: 10508fa7b; -[SCProfileChatMediaDataModel generalMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b504);
}



/* Entry: 10508fa7c; end: 10508fa8b; -[SCProfileChatMediaDataModel memoryStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b508);
}



/* Entry: 10508fa8c; end: 10508fa9b; -[SCProfileChatMediaDataModel savedStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fa8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b50c);
}



/* Entry: 10508fa9c; end: 10508faab; -[SCProfileChatMediaDataModel messageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10508fa9c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11271b510);
}



/* Entry: 10508faac; end: 10508fabb; -[SCProfileChatMediaDataModel mediaCardAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508faac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b514);
}



/* Entry: 10508fabc; end: 10508facb; -[SCProfileChatMediaDataModel isGroupMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10508fabc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271b518);
}



/* Entry: 10508facc; end: 10508fadb; -[SCProfileChatMediaDataModel mentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508facc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b51c);
}



/* Entry: 10508fadc; end: 10508faeb; -[SCProfileChatMediaDataModel retentionInMinutes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fadc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b520);
}



/* Entry: 10508faec; end: 10508fafb; -[SCProfileChatMediaDataModel senderChatSequenceNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10508faec(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11271b524);
}



/* Entry: 10508fafc; end: 10508fbbb; -[SCProfileChatMediaDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508fafc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b51c,0);
  _objc_storeStrong(param_1 + _DAT_11271b514,0);
  _objc_storeStrong(param_1 + _DAT_11271b50c,0);
  _objc_storeStrong(param_1 + _DAT_11271b508,0);
  _objc_storeStrong(param_1 + _DAT_11271b504,0);
  _objc_storeStrong(param_1 + _DAT_11271b4f8,0);
  _objc_storeStrong(param_1 + _DAT_11271b4f4,0);
  _objc_storeStrong(param_1 + _DAT_11271b4ec,0);
  _objc_storeStrong(param_1 + _DAT_11271b4e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b4e0,0);
  return;
}



/* Entry: 10508fbbc; end: 10508fcbb; -[SCProfileChatMediaFetchMetadata initWithOwnerIdentifier:checksum:paginationSequenceNumber:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10508fbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5e60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b528);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b528) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b52c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b52c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b530);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b530) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271b534) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10508fcbc; end: 10508fcdf; -[SCProfileChatMediaFetchMetadata copyWithZone:] */

undefined8 FUN_10508fcbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10508fce0; end: 10508fd7b; -[SCProfileChatMediaFetchMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10508fce0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b528);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271b52c);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b530);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11271b534);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10508fe44:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10508fe50;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11271b534) ==
        *(long *)((long)param_3 + (long)_DAT_11271b534))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b528);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b528)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271b52c);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271b52c)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271b530);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271b530)) {
            func_0x00010c071ae0();
            goto LAB_10508fe50;
          }
          goto LAB_10508fe44;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10508fe50:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10508fd7c; end: 10508fe6b; -[SCProfileChatMediaFetchMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10508fd7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10508fe44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10508fe50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11271b534) == *(long *)(param_3 + (long)_DAT_11271b534))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271b528);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b528)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271b52c);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271b52c)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11271b530);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11271b530)) {
            func_0x00010c071ae0();
            goto LAB_10508fe50;
          }
          goto LAB_10508fe44;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10508fe50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10508fe6c; end: 10508fe7b; -[SCProfileChatMediaFetchMetadata ownerIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fe6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b528);
}



/* Entry: 10508fe7c; end: 10508fe8b; -[SCProfileChatMediaFetchMetadata checksum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fe7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b52c);
}



/* Entry: 10508fe8c; end: 10508fe9b; -[SCProfileChatMediaFetchMetadata paginationSequenceNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fe8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b530);
}



/* Entry: 10508fe9c; end: 10508feab; -[SCProfileChatMediaFetchMetadata expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508fe9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b534);
}



/* Entry: 10508feac; end: 10508fefb; -[SCProfileChatMediaFetchMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508feac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b530,0);
  _objc_storeStrong(param_1 + _DAT_11271b52c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b528,0);
  return;
}



/* Entry: 10508fefc; end: 10509008f; -[SCProfileChatMediaGeneralMediaDataModel initWithMediaContentType:mediaId:mediaKey:mediaIv:thumbnailUrl:miniThumbnailData:isCustomSticker:lensMetadata:timerSec:] */

undefined1 *
FUN_10508fefc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126e5e68;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105090090; end: 1050900b3; -[SCProfileChatMediaGeneralMediaDataModel copyWithZone:] */

undefined8 FUN_105090090(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050900b4; end: 105090193; -[SCProfileChatMediaGeneralMediaDataModel hash] */

long * FUN_1050900b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = -lVar6;
  if (-1 < lVar6) {
    lStack_70 = lVar6;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_30 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uStack_38 = uVar2;
  func_0x000100505190(&lStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == (long *)param_3) {
LAB_1050902c4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050902d0;
    puVar8 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)plVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)((long)plVar4 + 8) == param_3[8])))) {
      fVar10 = ABS(*(float *)((long)plVar4 + 0xc) - *(float *)(param_3 + 0xc));
      fVar9 = ABS(*(float *)((long)plVar4 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)plVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)plVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = *(long *)((long)plVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = *(long *)((long)plVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)plVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)plVar4 + 0x40);
        if (puVar8 != *(undefined1 **)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_1050902d0;
        }
        goto LAB_1050902c4;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1050902d0:
  _objc_release(param_3);
  return (long *)puVar8;
}



/* Entry: 105090194; end: 1050902eb; -[SCProfileChatMediaGeneralMediaDataModel isEqual:] */

long FUN_105090194(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050902c4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050902d0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_1050902d0;
        }
        goto LAB_1050902c4;
      }
    }
    lVar4 = 0;
  }
LAB_1050902d0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1050902ec; end: 1050902f3; -[SCProfileChatMediaGeneralMediaDataModel mediaContentType] */

undefined8 FUN_1050902ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050902f4; end: 1050902fb; -[SCProfileChatMediaGeneralMediaDataModel mediaId] */

undefined8 FUN_1050902f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050902fc; end: 105090303; -[SCProfileChatMediaGeneralMediaDataModel mediaKey] */

undefined8 FUN_1050902fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105090304; end: 10509030b; -[SCProfileChatMediaGeneralMediaDataModel mediaIv] */

undefined8 FUN_105090304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10509030c; end: 105090313; -[SCProfileChatMediaGeneralMediaDataModel thumbnailUrl] */

undefined8 FUN_10509030c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105090314; end: 10509031b; -[SCProfileChatMediaGeneralMediaDataModel miniThumbnailData] */

undefined8 FUN_105090314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10509031c; end: 105090323; -[SCProfileChatMediaGeneralMediaDataModel isCustomSticker] */

undefined1 FUN_10509031c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105090324; end: 10509032b; -[SCProfileChatMediaGeneralMediaDataModel lensMetadata] */

undefined8 FUN_105090324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10509032c; end: 105090333; -[SCProfileChatMediaGeneralMediaDataModel timerSec] */

undefined4 FUN_10509032c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105090334; end: 105090393; -[SCProfileChatMediaGeneralMediaDataModel .cxx_destruct] */

void FUN_105090334(long param_1)

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



/* Entry: 105090394; end: 105090423; -[SCProfileChatMediaParticipantSavedState initWithParticipant:saved:version:] */

undefined1 *
FUN_105090394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5e70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105090424; end: 105090447; -[SCProfileChatMediaParticipantSavedState copyWithZone:] */

undefined8 FUN_105090424(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105090448; end: 1050904bb; -[SCProfileChatMediaParticipantSavedState hash] */

undefined8 * FUN_105090448(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105090550;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_105090550;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105090550;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_105090550:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1050904bc; end: 10509056b; -[SCProfileChatMediaParticipantSavedState isEqual:] */

long FUN_1050904bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105090550;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_105090550;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105090550;
    }
  }
  lVar3 = 1;
LAB_105090550:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10509056c; end: 105090573; -[SCProfileChatMediaParticipantSavedState participant] */

undefined8 FUN_10509056c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105090574; end: 10509057b; -[SCProfileChatMediaParticipantSavedState saved] */

undefined1 FUN_105090574(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10509057c; end: 105090583; -[SCProfileChatMediaParticipantSavedState version] */

undefined8 FUN_10509057c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105090584; end: 10509058f; -[SCProfileChatMediaParticipantSavedState .cxx_destruct] */

void FUN_105090584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105090590; end: 10509062b; -[SCProfileChatMediaMediaCardAttribute initWithStart:end:type:url:] */

undefined1 *
FUN_105090590(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5e78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10509062c; end: 10509064f; -[SCProfileChatMediaMediaCardAttribute copyWithZone:] */

undefined8 FUN_10509062c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105090650; end: 1050906bf; -[SCProfileChatMediaMediaCardAttribute hash] */

ulong * FUN_105090650(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(ulong *)(param_1 + 0xc) & 0xffffffff;
  uStack_38 = *(ulong *)(param_1 + 0xc) >> 0x20;
  lStack_30 = (long)*(char *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_28 = uVar1;
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105090764;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc) ||
         (*(int *)((long)puVar2 + 0x10) != *(int *)(param_3 + 0x10))) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_105090764;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105090764;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_105090764:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 1050906c0; end: 10509077f; -[SCProfileChatMediaMediaCardAttribute isEqual:] */

long FUN_1050906c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105090764;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc) ||
         (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_105090764;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_105090764;
    }
  }
  lVar3 = 1;
LAB_105090764:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105090780; end: 105090787; -[SCProfileChatMediaMediaCardAttribute start] */

undefined4 FUN_105090780(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105090788; end: 10509078f; -[SCProfileChatMediaMediaCardAttribute end] */

undefined4 FUN_105090788(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 105090790; end: 105090797; -[SCProfileChatMediaMediaCardAttribute type] */

long FUN_105090790(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 105090798; end: 10509079f; -[SCProfileChatMediaMediaCardAttribute url] */

undefined8 FUN_105090798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050907a0; end: 1050907ab; -[SCProfileChatMediaMediaCardAttribute .cxx_destruct] */

void FUN_1050907a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1050907ac; end: 105090833; -[SCProfileChatMediaSequenceNumberEntry initWithParticipant:sequenceNumber:] */

undefined1 *
FUN_1050907ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5e80;
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


