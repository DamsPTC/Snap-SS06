/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100016330; end: 100016353; -[SCExtensionGroup copyWithZone:] */

undefined8 FUN_100016330(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100016354; end: 1000163ef; -[SCExtensionGroup encodeWithCoder:] */

void FUN_100016354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010001fa80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_100029058);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_100029078);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_100029098);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_1000290b8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_1000290d8);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 1000163f0; end: 100016487; -[SCExtensionGroup hash] */

undefined8 * FUN_1000163f0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010001f340();
  uStack_30 = uVar1;
  func_0x00010001d4a4(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_100016550:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10001655c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010001f5e0();
                goto LAB_10001655c;
              }
              goto LAB_100016550;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10001655c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 100016488; end: 100016577; -[SCExtensionGroup isEqual:] */

long FUN_100016488(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100016550:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10001655c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010001f5e0();
                goto LAB_10001655c;
              }
              goto LAB_100016550;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10001655c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100016578; end: 10001657f; -[SCExtensionGroup groupId] */

undefined8 FUN_100016578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100016580; end: 100016587; -[SCExtensionGroup groupName] */

undefined8 FUN_100016580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100016588; end: 10001658f; -[SCExtensionGroup groupParticipants] */

undefined8 FUN_100016588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100016590; end: 100016597; -[SCExtensionGroup groupParticipantsUserNames] */

undefined8 FUN_100016590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100016598; end: 10001659f; -[SCExtensionGroup bitmojiInfos] */

undefined8 FUN_100016598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1000165a0; end: 1000165f3; -[SCExtensionGroup .cxx_destruct] */

void FUN_1000165a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 1000165f4; end: 1000167cf; -[SCExtensionSnapchatter initWithCoder:] */

undefined1 * FUN_1000165f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f3e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efa0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000167d0; end: 1000169d3; -[SCExtensionSnapchatter initWithUserId:username:nameToDisplay:conversationId:friendmojis:topPriorityFriendmoji:bitmojiInfo:streakInfo:birthday:isMutualFriend:] */

undefined8 *
FUN_1000167d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_10002f3e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001eea0();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010001eea0();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010001eea0();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010001eea0();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010001eea0();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010001eea0();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010001eea0();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010001eea0();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010001eea0();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_12;
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
  return puVar1;
}



/* Entry: 1000169d4; end: 1000169f7; -[SCExtensionSnapchatter copyWithZone:] */

undefined8 FUN_1000169d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1000169f8; end: 100016af7; -[SCExtensionSnapchatter encodeWithCoder:] */

void FUN_1000169f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010001fa80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_1000290f8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_100029118);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_100029138);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_100029158);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_100029178);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_100029198);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_1000291b8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_1000291d8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_1000291f8);
  func_0x00010001f0e0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_100029218);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 100016af8; end: 100016bc3; -[SCExtensionSnapchatter hash] */

undefined8 * FUN_100016af8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010001f340();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_78;
  uStack_38 = uVar1;
  func_0x00010001d4a4(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_100016cfc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_100016d08;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
                      puVar6 = (undefined8 *)puVar3[10];
                      if (puVar6 != (undefined8 *)param_3[10]) {
                        func_0x00010001f5e0();
                        goto LAB_100016d08;
                      }
                      goto LAB_100016cfc;
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
LAB_100016d08:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 100016bc4; end: 100016d23; -[SCExtensionSnapchatter isEqual:] */

long FUN_100016bc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100016cfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100016d08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010001f5e0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010001f5e0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010001f5e0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010001f5e0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010001f5e0();
                        goto LAB_100016d08;
                      }
                      goto LAB_100016cfc;
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
LAB_100016d08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100016d24; end: 100016d2b; -[SCExtensionSnapchatter userId] */

undefined8 FUN_100016d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100016d2c; end: 100016d33; -[SCExtensionSnapchatter username] */

undefined8 FUN_100016d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100016d34; end: 100016d3b; -[SCExtensionSnapchatter nameToDisplay] */

undefined8 FUN_100016d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100016d3c; end: 100016d43; -[SCExtensionSnapchatter conversationId] */

undefined8 FUN_100016d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100016d44; end: 100016d4b; -[SCExtensionSnapchatter friendmojis] */

undefined8 FUN_100016d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100016d4c; end: 100016d53; -[SCExtensionSnapchatter topPriorityFriendmoji] */

undefined8 FUN_100016d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100016d54; end: 100016d5b; -[SCExtensionSnapchatter bitmojiInfo] */

undefined8 FUN_100016d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100016d5c; end: 100016d63; -[SCExtensionSnapchatter streakInfo] */

undefined8 FUN_100016d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100016d64; end: 100016d6b; -[SCExtensionSnapchatter birthday] */

undefined8 FUN_100016d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100016d6c; end: 100016d73; -[SCExtensionSnapchatter isMutualFriend] */

undefined1 FUN_100016d6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100016d74; end: 100016df7; -[SCExtensionSnapchatter .cxx_destruct] */

void FUN_100016d74(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 0x10,0);
  return;
}



/* Entry: 100016df8; end: 100016f03; -[SCExtensionSnapchatterRepository initWithBestFriends:recents:friends:groups:] */

undefined1 *
FUN_100016df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_10002f3f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100016f04; end: 100017003; -[SCExtensionSnapchatterRepository initWithCoder:] */

undefined1 * FUN_100016f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f3f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100017004; end: 100017027; -[SCExtensionSnapchatterRepository copyWithZone:] */

undefined8 FUN_100017004(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100017028; end: 1000170af; -[SCExtensionSnapchatterRepository encodeWithCoder:] */

void FUN_100017028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010001fa80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_100029238);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_100029258);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_100029278);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_100029298);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 1000170b0; end: 10001713b; -[SCExtensionSnapchatterRepository hash] */

undefined8 * FUN_1000170b0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010001f340();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x00010001d4a4(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1000171ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1000171f8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010001f5e0();
              goto LAB_1000171f8;
            }
            goto LAB_1000171ec;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1000171f8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10001713c; end: 100017213; -[SCExtensionSnapchatterRepository isEqual:] */

long FUN_10001713c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1000171ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1000171f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010001f5e0();
              goto LAB_1000171f8;
            }
            goto LAB_1000171ec;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1000171f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100017214; end: 10001721b; -[SCExtensionSnapchatterRepository bestFriends] */

undefined8 FUN_100017214(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10001721c; end: 100017223; -[SCExtensionSnapchatterRepository recents] */

undefined8 FUN_10001721c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100017224; end: 10001722b; -[SCExtensionSnapchatterRepository friends] */

undefined8 FUN_100017224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10001722c; end: 100017233; -[SCExtensionSnapchatterRepository groups] */

undefined8 FUN_10001722c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100017234; end: 10001727b; -[SCExtensionSnapchatterRepository .cxx_destruct] */

void FUN_100017234(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001727c; end: 10001741b; -[SCExtensionBitmojiAvatarInfo initWithCoder:] */

undefined1 * FUN_10001727c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f3f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10001741c; end: 1000175e3; -[SCExtensionBitmojiAvatarInfo initWithUserId:bitmojiDownloadUrl:bitmojiBiggieDownloadUrl:bitmoji3DBiggieDownloadUrl:bitmojiAttribution:silhouetteColor:avatarId:backgroundId:] */

undefined1 *
FUN_10001741c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_10002f3f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 1000175e4; end: 100017607; -[SCExtensionBitmojiAvatarInfo copyWithZone:] */

undefined8 FUN_1000175e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100017608; end: 1000176df; -[SCExtensionBitmojiAvatarInfo encodeWithCoder:] */

void FUN_100017608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010001fa80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_1000290f8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_1000292b8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_1000292d8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_1000292f8);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_100029318);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_100029338);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_100029358);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_100029378);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 1000176e0; end: 10001779b; -[SCExtensionBitmojiAvatarInfo hash] */

undefined8 * FUN_1000176e0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010001f340();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010001f340();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x00010001d4a4(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1000178ac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1000178b8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010001f600(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010001f5e0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x00010001f5e0();
                      goto LAB_1000178b8;
                    }
                    goto LAB_1000178ac;
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
LAB_1000178b8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10001779c; end: 1000178d3; -[SCExtensionBitmojiAvatarInfo isEqual:] */

long FUN_10001779c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1000178ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1000178b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010001f5e0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010001f600(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010001f5e0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x00010001f5e0();
                      goto LAB_1000178b8;
                    }
                    goto LAB_1000178ac;
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
LAB_1000178b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1000178d4; end: 1000178db; -[SCExtensionBitmojiAvatarInfo userId] */

undefined8 FUN_1000178d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000178dc; end: 1000178e3; -[SCExtensionBitmojiAvatarInfo bitmojiDownloadUrl] */

undefined8 FUN_1000178dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1000178e4; end: 1000178eb; -[SCExtensionBitmojiAvatarInfo bitmojiBiggieDownloadUrl] */

undefined8 FUN_1000178e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1000178ec; end: 1000178f3; -[SCExtensionBitmojiAvatarInfo bitmoji3DBiggieDownloadUrl] */

undefined8 FUN_1000178ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000178f4; end: 1000178fb; -[SCExtensionBitmojiAvatarInfo bitmojiAttribution] */

undefined8 FUN_1000178f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1000178fc; end: 100017903; -[SCExtensionBitmojiAvatarInfo silhouetteColor] */

undefined8 FUN_1000178fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100017904; end: 10001790b; -[SCExtensionBitmojiAvatarInfo avatarId] */

undefined8 FUN_100017904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10001790c; end: 100017913; -[SCExtensionBitmojiAvatarInfo backgroundId] */

undefined8 FUN_10001790c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100017914; end: 10001798b; -[SCExtensionBitmojiAvatarInfo .cxx_destruct] */

void FUN_100017914(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001798c; end: 100017a27; -[SCExtensionSnapchatterStreakInfo initWithCoder:] */

undefined1 * FUN_10001798c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f400;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001efc0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100017a28; end: 100017aaf; -[SCExtensionSnapchatterStreakInfo initWithStreakCount:expirationDate:] */

undefined1 *
FUN_100017a28(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_10002f400;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100017ab0; end: 100017ad3; -[SCExtensionSnapchatterStreakInfo copyWithZone:] */

undefined8 FUN_100017ab0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100017ad4; end: 100017b33; -[SCExtensionSnapchatterStreakInfo encodeWithCoder:] */

void FUN_100017ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010001f100(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_100029398);
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_1000293b8);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 100017b34; end: 100017b97; -[SCExtensionSnapchatterStreakInfo hash] */

long * FUN_100017b34(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_100028200;
  lStack_28 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010001f340();
  plVar2 = &lStack_28;
  uStack_20 = uVar1;
  func_0x00010001d4a4(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar4 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_100017c1c;
    plVar4 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar4);
    if ((((ulong)plVar3 & 1) == 0) || ((int)plVar2[1] != (int)param_3[1])) {
      plVar4 = (long *)0x0;
      goto LAB_100017c1c;
    }
    plVar4 = (long *)plVar2[2];
    if (plVar4 != (long *)param_3[2]) {
      func_0x00010001f5e0();
      goto LAB_100017c1c;
    }
  }
  plVar4 = (long *)0x1;
LAB_100017c1c:
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 100017b98; end: 100017c37; -[SCExtensionSnapchatterStreakInfo isEqual:] */

long FUN_100017b98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100017c1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_100017c1c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010001f5e0();
      goto LAB_100017c1c;
    }
  }
  lVar3 = 1;
LAB_100017c1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100017c38; end: 100017c3f; -[SCExtensionSnapchatterStreakInfo streakCount] */

undefined4 FUN_100017c38(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 100017c40; end: 100017c47; -[SCExtensionSnapchatterStreakInfo expirationDate] */

undefined8 FUN_100017c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100017c48; end: 100017c53; -[SCExtensionSnapchatterStreakInfo .cxx_destruct] */

void FUN_100017c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 0x10,0);
  return;
}



/* Entry: 100017c54; end: 100017cc7; -[SCAppExtensionDefaultsImpl initWithNSUserDefaults:] */

undefined1 * FUN_100017c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100017cc8; end: 100017ccf; -[SCAppExtensionDefaultsImpl objectForKey:] */

void FUN_100017cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__10002f038)
  ;
  return;
}



/* Entry: 100017cd0; end: 100017cd7; -[SCAppExtensionDefaultsImpl setObject:forKey:] */

void FUN_100017cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__10002f108);
  return;
}



/* Entry: 100017cd8; end: 100017cdf; -[SCAppExtensionDefaultsImpl stringForKey:] */

void FUN_100017cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(*(undefined8 *)(param_1 + 8),PTR_s_stringForKey__10002f148)
  ;
  return;
}



/* Entry: 100017ce0; end: 100017ce7; -[SCAppExtensionDefaultsImpl setString:forKey:] */

void FUN_100017ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__10002f108);
  return;
}



/* Entry: 100017ce8; end: 100017cef; -[SCAppExtensionDefaultsImpl boolForKey:] */

void FUN_100017ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(*(undefined8 *)(param_1 + 8),PTR_s_boolForKey__10002ed50);
  return;
}



/* Entry: 100017cf0; end: 100017cf7; -[SCAppExtensionDefaultsImpl setBool:forKey:] */

void FUN_100017cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__10002f0d0);
  return;
}



/* Entry: 100017cf8; end: 100017cff; -[SCAppExtensionDefaultsImpl integerForKey:] */

void FUN_100017cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_integerForKey__10002ef68);
  return;
}



/* Entry: 100017d00; end: 100017d07; -[SCAppExtensionDefaultsImpl setInteger:forKey:] */

void FUN_100017d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInteger_forKey__10002f0e8);
  return;
}



/* Entry: 100017d08; end: 100017d0f; -[SCAppExtensionDefaultsImpl removeObjectForKey:] */

void FUN_100017d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__10002f0a8);
  return;
}



/* Entry: 100017d10; end: 100017d1b; -[SCAppExtensionDefaultsImpl .cxx_destruct] */

void FUN_100017d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 100017d1c; end: 100017e4b; +[SCAppExtensionStorageServiceImpl sharedInstance] */

void FUN_100017d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_10002f2e8;
  func_0x00010001f740(PTR__OBJC_CLASS___NSBundle_10002f2e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010001faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_10002f2f0;
  _objc_alloc();
  func_0x00010001f540();
  puVar1 = PTR_PTR_10002f2f8;
  puStack_68 = PTR___NSConcreteStackBlock_1000281e0;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100017e4c;
  puStack_50 = &UNK_100028b08;
  puStack_48 = puVar3;
  _objc_retain();
  func_0x00010001ed00(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_10002f2f8;
  func_0x00010001ed00(PTR_PTR_10002f2f8,param_2,&PTR___NSConcreteGlobalBlock_100028b58);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_10002f318;
  _objc_alloc(PTR_PTR_10002f318);
  func_0x00010001f3e0();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar5);
  return;
}



/* Entry: 100017e4c; end: 100017e7b;  */

void FUN_100017e4c(void)

{
  _objc_alloc(PTR_PTR_10002f300);
  func_0x00010001f4a0();
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 100017e7c; end: 100017e8b;  */

void FUN_100017e7c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100028168)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100017e8c; end: 100017ee7;  */

void FUN_100017e8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_10002f308;
  _objc_alloc(PTR_PTR_10002f308);
  func_0x00010001f4e0();
  puVar2 = PTR_PTR_10002f310;
  _objc_alloc(PTR_PTR_10002f310);
  func_0x00010001f400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar2);
  return;
}



/* Entry: 100017ee8; end: 100017f8b; -[SCUserExtensionDefaultsImpl initWithNSUserDefaults:withUserId:] */

undefined1 *
FUN_100017ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_10002f410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
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



/* Entry: 100017f8c; end: 100017ff7; -[SCUserExtensionDefaultsImpl objectForKey:] */

void FUN_100017f8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_2,
                      &PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f8a0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar2);
  return;
}



/* Entry: 100017ff8; end: 10001807f; -[SCUserExtensionDefaultsImpl setObject:forKey:] */

void FUN_100017ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_10002f320;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010001fd00(puVar2,param_2,&PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fbe0(uVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar2);
  return;
}



/* Entry: 100018080; end: 1000180eb; -[SCUserExtensionDefaultsImpl stringForKey:] */

void FUN_100018080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_2,
                      &PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fce0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar2);
  return;
}



/* Entry: 1000180ec; end: 100018173; -[SCUserExtensionDefaultsImpl setString:forKey:] */

void FUN_1000180ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_10002f320;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010001fd00(puVar2,param_2,&PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fbe0(uVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar2);
  return;
}



/* Entry: 100018174; end: 1000181d7; -[SCUserExtensionDefaultsImpl boolForKey:] */

undefined8 FUN_100018174(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_2,
                      &PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ed40(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1000181d8; end: 10001823f; -[SCUserExtensionDefaultsImpl setBool:forKey:] */

void FUN_1000181d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_2,
                      &PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fb00(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar2);
  return;
}



/* Entry: 100018240; end: 1000182a3; -[SCUserExtensionDefaultsImpl integerForKey:] */

undefined8 FUN_100018240(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_2,
                      &PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f560(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1000182a4; end: 10001830b; -[SCUserExtensionDefaultsImpl setInteger:forKey:] */

void FUN_1000182a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_10002f320;
  func_0x00010001fd00(PTR__OBJC_CLASS___NSString_10002f320,param_2,
                      &PTR____CFConstantStringClassReference_1000293f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fb60(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar2);
  return;
}



/* Entry: 10001830c; end: 100018313; -[SCUserExtensionDefaultsImpl removeObjectForKey:] */

void FUN_10001830c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__10002f0a8);
  return;
}



/* Entry: 100018314; end: 100018343; -[SCUserExtensionDefaultsImpl .cxx_destruct] */

void FUN_100018314(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 100018344; end: 1000184d7; +[SCUserExtensionStorageServiceImpl sharedInstanceWithUserId:] */

void FUN_100018344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSBundle_10002f2e8;
  func_0x00010001f740(PTR__OBJC_CLASS___NSBundle_10002f2e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010001faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_10002f2f0;
  _objc_alloc();
  func_0x00010001f540();
  puVar4 = PTR_PTR_10002f2f8;
  puVar1 = PTR___NSConcreteStackBlock_1000281e0;
  puStack_80 = PTR___NSConcreteStackBlock_1000281e0;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1000184d8;
  puStack_68 = &UNK_100028b78;
  puStack_60 = puVar3;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(puVar3);
  func_0x00010001ed00(puVar4,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_10002f2f8;
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x100018558;
  puStack_90 = &UNK_100028b08;
  uStack_88 = param_3;
  _objc_retain(param_3);
  func_0x00010001ed00(puVar5,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_10002f330;
  _objc_alloc(PTR_PTR_10002f330);
  func_0x00010001f3e0();
  _objc_release(puVar5);
  _objc_release(uStack_88);
  _objc_release(puVar4);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar1);
  return;
}



/* Entry: 1000184d8; end: 1000185bb;  */

void FUN_1000184d8(void)

{
  _objc_alloc(PTR_PTR_10002f328);
  func_0x00010001f4c0();
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 1000185bc; end: 10001862f; -[SCAppGroupPlistStorage initWithFile:] */

undefined1 * FUN_1000185bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f418;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100018630; end: 100018787; -[SCAppGroupPlistStorage _objectForKey:] */

void FUN_100018630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010001f980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001000186c4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010001f8a0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar3);
  return;
}



/* Entry: 100018788; end: 100018853; -[SCAppGroupPlistStorage _setObject:forKey:] */

void FUN_100018788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_68 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_1000281e0;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100018854;
  puStack_48 = &UNK_100028ba8;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010001f7a0(uVar1,param_2,&puStack_60,&uStack_68);
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 100018854; end: 1000188d7;  */

void FUN_100018854(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x0001000186c4();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSMutableDictionary_10002f338;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_10002f338);
  }
  func_0x00010001fc00(param_2);
  puVar1 = PTR__OBJC_CLASS___NSPropertyListSerialization_10002f340;
  func_0x00010001ef80(PTR__OBJC_CLASS___NSPropertyListSerialization_10002f340);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar1);
  return;
}



/* Entry: 1000188d8; end: 100018913; -[SCAppGroupPlistStorage boolForKey:] */

undefined8 FUN_1000188d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010001ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010001ed60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 100018914; end: 100018983; -[SCAppGroupPlistStorage setBool:forKey:] */

void FUN_100018914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_10002f348;
  _objc_retain(param_4);
  func_0x00010001f840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ec00(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar1);
  return;
}



/* Entry: 100018984; end: 1000189bf; -[SCAppGroupPlistStorage integerForKey:] */

undefined8 FUN_100018984(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010001ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010001f580();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1000189c0; end: 100018a2f; -[SCAppGroupPlistStorage setInteger:forKey:] */

void FUN_1000189c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_10002f348;
  _objc_retain(param_4);
  func_0x00010001f860(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ec00(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar1);
  return;
}



/* Entry: 100018a30; end: 100018a33; -[SCAppGroupPlistStorage objectForKey:] */

void FUN_100018a30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(param_1,PTR_s__objectForKey__10002ecf0);
  return;
}



/* Entry: 100018a34; end: 100018a37; -[SCAppGroupPlistStorage setObject:forKey:] */

void FUN_100018a34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(param_1,PTR_s__setObject_forKey__10002ed00);
  return;
}


