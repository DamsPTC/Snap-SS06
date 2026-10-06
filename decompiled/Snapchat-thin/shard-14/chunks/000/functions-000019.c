/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af23d74; end: 10af23e27; +[SCCMemoriesUploadTagsResult valdiMarshallableObjectDescriptor] */

void FUN_10af23d74(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c92b48;
  param_1[1] = &PTR_DAT_110c92b78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23e28; end: 10af23e2f; -[SCMemoriesCloudFSServices snapInfoFetcher] */

undefined8 FUN_10af23e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af23e30; end: 10af23e5f; -[SCMemoriesCloudFSServices .cxx_destruct] */

void FUN_10af23e30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af23e60; end: 10af23e6b; -[SCFriendshipFlashbacksServices .cxx_destruct] */

void FUN_10af23e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af23e6c; end: 10af23fb3; -[SCFriendshipFlashbacksMediaMessage initWithConsistentId:messageType:messageSenderUserId:messageSentTimestamp:analyticsMessageId:contents:] */

undefined1 *
FUN_10af23e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127022a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af23fb4; end: 10af23fd7; -[SCFriendshipFlashbacksMediaMessage copyWithZone:] */

undefined8 FUN_10af23fb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af23fd8; end: 10af2407b; -[SCFriendshipFlashbacksMediaMessage hash] */

undefined8 * FUN_10af23fd8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af24154:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af24160;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10af24160;
              }
              goto LAB_10af24154;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af24160:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af2407c; end: 10af2417b; -[SCFriendshipFlashbacksMediaMessage isEqual:] */

long FUN_10af2407c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af24154:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af24160;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10af24160;
              }
              goto LAB_10af24154;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af24160:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2417c; end: 10af24183; -[SCFriendshipFlashbacksMediaMessage consistentId] */

undefined8 FUN_10af2417c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af24184; end: 10af2418b; -[SCFriendshipFlashbacksMediaMessage messageType] */

undefined8 FUN_10af24184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2418c; end: 10af24193; -[SCFriendshipFlashbacksMediaMessage messageSenderUserId] */

undefined8 FUN_10af2418c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af24194; end: 10af2419b; -[SCFriendshipFlashbacksMediaMessage messageSentTimestamp] */

undefined8 FUN_10af24194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2419c; end: 10af241a3; -[SCFriendshipFlashbacksMediaMessage analyticsMessageId] */

undefined8 FUN_10af2419c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af241a4; end: 10af241ab; -[SCFriendshipFlashbacksMediaMessage contents] */

undefined8 FUN_10af241a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af241ac; end: 10af241ff; -[SCFriendshipFlashbacksMediaMessage .cxx_destruct] */

void FUN_10af241ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af24200; end: 10af24383; -[SCFriendshipFlashbacksDataModel initWithFriendshipFlashbacksId:conversationId:title:subtitle:storyType:mediaMessages:priority:viewedChatMediaIds:] */

undefined1 *
FUN_10af24200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1127022a8;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af24384; end: 10af243a7; -[SCFriendshipFlashbacksDataModel copyWithZone:] */

undefined8 FUN_10af24384(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af243a8; end: 10af24453; -[SCFriendshipFlashbacksDataModel hash] */

undefined8 * FUN_10af243a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af24554:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af24560;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[5] == param_3[5] && (puVar3[7] == param_3[7])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[8];
                if (puVar6 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_10af24560;
                }
                goto LAB_10af24554;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af24560:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af24454; end: 10af2457b; -[SCFriendshipFlashbacksDataModel isEqual:] */

long FUN_10af24454(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af24554:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af24560;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_10af24560;
                }
                goto LAB_10af24554;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af24560:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2457c; end: 10af24583; -[SCFriendshipFlashbacksDataModel friendshipFlashbacksId] */

undefined8 FUN_10af2457c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af24584; end: 10af2458b; -[SCFriendshipFlashbacksDataModel conversationId] */

undefined8 FUN_10af24584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2458c; end: 10af24593; -[SCFriendshipFlashbacksDataModel title] */

undefined8 FUN_10af2458c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af24594; end: 10af2459b; -[SCFriendshipFlashbacksDataModel subtitle] */

undefined8 FUN_10af24594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2459c; end: 10af245a3; -[SCFriendshipFlashbacksDataModel storyType] */

undefined8 FUN_10af2459c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af245a4; end: 10af245ab; -[SCFriendshipFlashbacksDataModel mediaMessages] */

undefined8 FUN_10af245a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af245ac; end: 10af245b3; -[SCFriendshipFlashbacksDataModel priority] */

undefined8 FUN_10af245ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af245b4; end: 10af245bb; -[SCFriendshipFlashbacksDataModel viewedChatMediaIds] */

undefined8 FUN_10af245b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af245bc; end: 10af2461b; -[SCFriendshipFlashbacksDataModel .cxx_destruct] */

void FUN_10af245bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2461c; end: 10af2469f; +[SCMemoriesShakeToReportLoggingDatabase schema] */

void FUN_10af2461c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f6e152c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af246a0; end: 10af246c7; -[SCMemoriesShakeToReportLoggingDatabase getConn] */

void FUN_10af246a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af246c8; end: 10af2474f; -[SCMemoriesShakeToReportLoggingDatabase initWithSqliteConnection:] */

undefined1 * FUN_10af246c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127022b0;
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



/* Entry: 10af24750; end: 10af247bb; -[SCMemoriesShakeToReportLoggingDatabase .cxx_destruct] */

void FUN_10af24750(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af247bc; end: 10af247c7; -[SCMemoriesShakeToReportLoggingDatabase .cxx_construct] */

void FUN_10af247bc(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10af247c8; end: 10af248f7;  */

void FUN_10af247c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10e539378,0x52);
      func_0x00010bccb848(param_1);
      func_0x000107c30760(lVar1,FUN_10af248f8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af248f8; end: 10af24a97;  */

void FUN_10af248f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126dea10;
  _objc_alloc(PTR_PTR_1126dea10);
  uVar2 = param_2;
  FUN_10b5ef268(param_2,0);
  uVar3 = param_2;
  FUN_10b5ef268(param_2,1);
  func_0x00010b5ef2a0(param_2,2);
  uVar4 = param_2;
  func_0x000107c30768(param_2,3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000107c30768(param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x000107c30768(param_2,5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x000107c30768(param_2,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30768(param_2,7);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af24de8(param_1,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_2);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af24a98; end: 10af24bc7;  */

void FUN_10af24a98(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x18;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10e5393cb,0x51);
      func_0x00010bccb848(param_1);
      func_0x000107c30760(lVar1,FUN_10af248f8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af24bc8; end: 10af24de7;  */

void FUN_10af24bc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 uStack_64;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2 + 0x20;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10e53941d,0xbf);
      func_0x000107c3140c();
      uStack_64 = 3;
      func_0x00010bccb848(param_1,lVar1,2);
      func_0x000107c3075c(lVar1,&uStack_64,param_4);
      func_0x000107c3075c(lVar1,&uStack_64,param_5);
      func_0x000107c3075c(lVar1,&uStack_64,param_6);
      func_0x000107c3075c(lVar1,&uStack_64,param_7);
      func_0x000107c3075c(lVar1,&uStack_64,param_8);
      FUN_10b5ef0d0(lVar1);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af24de8; end: 10af24f47;  */

undefined1 *
FUN_10af24de8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1127022b8;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      *(undefined8 *)((long)plVar1 + 0x18) = param_1;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 10af24f48; end: 10af24f6b; -[SCMemoriesS2RLogs copyWithZone:] */

undefined8 FUN_10af24f48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af24f6c; end: 10af25033; -[SCMemoriesS2RLogs hash] */

undefined8 * FUN_10af24f6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_70,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10af25150:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af2515c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x40);
        if (puVar8 != *(undefined1 **)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10af2515c;
        }
        goto LAB_10af25150;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10af2515c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10af25034; end: 10af25177; -[SCMemoriesS2RLogs isEqual:] */

long FUN_10af25034(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af25150:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2515c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10af2515c;
        }
        goto LAB_10af25150;
      }
    }
    lVar4 = 0;
  }
LAB_10af2515c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af25178; end: 10af251cb; -[SCMemoriesS2RLogs .cxx_destruct] */

void FUN_10af25178(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af251cc; end: 10af251d7; -[SCMemoriesFileManagerServices .cxx_destruct] */

void FUN_10af251cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af251d8; end: 10af251e3; -[SCMemoriesSnapDocDownloadingServices .cxx_destruct] */

void FUN_10af251d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af251e4; end: 10af25257; -[SCMemoriesEntryChangeRequest _initWithGalleryEntryChangeRequest:] */

undefined1 * FUN_10af251e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127022d0;
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



/* Entry: 10af25258; end: 10af252cf; +[SCMemoriesEntryChangeRequest changeRequestForMemoriesEntry:] */

void FUN_10af25258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35080(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126dea18;
  _objc_alloc(PTR_PTR_1126dea18);
  func_0x00010be3ac20();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af252d0; end: 10af2530f; -[SCMemoriesEntryChangeRequest removeSyncedSnaps:] */

void FUN_10af252d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af2564c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e860(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af25310; end: 10af25373; -[SCMemoriesEntryChangeRequest insertSyncedSnaps:atIndexes:] */

void FUN_10af25310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010af2564c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0670a0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af25374; end: 10af2537b; -[SCMemoriesEntryChangeRequest setPendingSyncs:] */

void FUN_10af25374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1da4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setPendingSyncs__112654360);
  return;
}



/* Entry: 10af2537c; end: 10af25383; -[SCMemoriesEntryChangeRequest galleryEntryChangeRequest] */

undefined8 FUN_10af2537c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af25384; end: 10af2538f; -[SCMemoriesEntryChangeRequest .cxx_destruct] */

void FUN_10af25384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af25390; end: 10af25397; -[SCMemoriesDBBridgeServices dataModelFetcher] */

undefined8 FUN_10af25390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af25398; end: 10af2539f; -[SCMemoriesDBBridgeServices dataModelMutator] */

undefined8 FUN_10af25398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af253a0; end: 10af253cf; -[SCMemoriesDBBridgeServices .cxx_destruct] */

void FUN_10af253a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af253d0; end: 10af25443; -[SCMemoriesBackupOperationSnapshot initWithCloudSyncOperationSnapshot:] */

undefined1 * FUN_10af253d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127022e0;
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



/* Entry: 10af25444; end: 10af25467; -[SCMemoriesBackupOperationSnapshot copyWithZone:] */

undefined8 FUN_10af25444(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af25468; end: 10af254f3; -[SCMemoriesBackupOperationSnapshot isEqual:] */

ulong FUN_10af25468(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126bc7e8;
    _objc_opt_class(PTR_PTR_1126bc7e8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c071e60(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10af254f4; end: 10af2553f; -[SCMemoriesBackupOperationSnapshot isEqualToMemoriesBackupOperation:] */

undefined8 FUN_10af254f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10af25540; end: 10af25547; -[SCMemoriesBackupOperationSnapshot hash] */

void FUN_10af25540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af25548; end: 10af2554f; -[SCMemoriesBackupOperationSnapshot objectID] */

void FUN_10af25548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectID_112615a70);
  return;
}



/* Entry: 10af25550; end: 10af25557; -[SCMemoriesBackupOperationSnapshot createTimeUtc] */

void FUN_10af25550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 10af25558; end: 10af2555f; -[SCMemoriesBackupOperationSnapshot payload] */

void FUN_10af25558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_payload_11261b328);
  return;
}



/* Entry: 10af25560; end: 10af25567; -[SCMemoriesBackupOperationSnapshot requestID] */

void FUN_10af25560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1356f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_requestID_11262afd8);
  return;
}



/* Entry: 10af25568; end: 10af2556f; -[SCMemoriesBackupOperationSnapshot seqNum] */

void FUN_10af25568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_seqNum_112635368);
  return;
}



/* Entry: 10af25570; end: 10af25577; -[SCMemoriesBackupOperationSnapshot tacomaOperationId_DEPRECATED] */

void FUN_10af25570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2680b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_tacomaOperationId_DEPRECATED_112677a50);
  return;
}



/* Entry: 10af25578; end: 10af2557f; -[SCMemoriesBackupOperationSnapshot targetEntryID] */

void FUN_10af25578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_targetEntryId_1126781e0)
  ;
  return;
}



/* Entry: 10af25580; end: 10af25587; -[SCMemoriesBackupOperationSnapshot cloudSyncOperationSnapshot] */

undefined8 FUN_10af25580(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af25588; end: 10af25593; -[SCMemoriesBackupOperationSnapshot .cxx_destruct] */

void FUN_10af25588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af25594; end: 10af256b7;  */

void FUN_10af25594(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_110c92bb8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af256b8; end: 10af256bf;  */

void FUN_10af256b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbd770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_gallerySnap_1125ccf80);
  return;
}



/* Entry: 10af256c0; end: 10af2577f;  */

void FUN_10af256c0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(param_2);
    puVar2 = param_1;
    func_0x00010c246ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af25780; end: 10af258d7;  */

long FUN_10af25780(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    lVar3 = 1;
    if (lVar4 != 0) {
      lVar3 = -1;
    }
    if (lVar4 == 0 && lVar5 == 0) {
      lVar2 = param_2;
      func_0x00010bf59960(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf59960(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf433a0(lVar2);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
  }
  else {
    lVar3 = lVar4;
    func_0x00010bf433a0(lVar4);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 10af258d8; end: 10af259fb;  */

void FUN_10af258d8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_110c92c68);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af259fc; end: 10af25a03;  */

void FUN_10af259fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapAsset_11266d728);
  return;
}



/* Entry: 10af25a04; end: 10af25b0f;  */

void FUN_10af25a04(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_110c92ce8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af25b10; end: 10af25b17;  */

void FUN_10af25b10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cloudSyncOperationSnapshot_1125ad2f8);
  return;
}



/* Entry: 10af25b18; end: 10af25b8b; -[SCMemoriesEntry initWithGalleryEntry:] */

undefined1 * FUN_10af25b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127022e8;
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



/* Entry: 10af25b8c; end: 10af25baf; -[SCMemoriesEntry copyWithZone:] */

undefined8 FUN_10af25b8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af25bb0; end: 10af25c3b; -[SCMemoriesEntry isEqual:] */

ulong FUN_10af25bb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126bc7b0;
    _objc_opt_class(PTR_PTR_1126bc7b0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c071e80(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10af25c3c; end: 10af25ccb; -[SCMemoriesEntry isEqualToMemoriesEntry:] */

undefined8 FUN_10af25c3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bfbcca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10af25ccc; end: 10af25cd3; -[SCMemoriesEntry hash] */

void FUN_10af25ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af25cd4; end: 10af25cdb; -[SCMemoriesEntry objectID] */

void FUN_10af25cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectID_112615a70);
  return;
}



/* Entry: 10af25cdc; end: 10af25ce3; -[SCMemoriesEntry createTimeUtc] */

void FUN_10af25cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 10af25ce4; end: 10af25ceb; -[SCMemoriesEntry entryId] */

void FUN_10af25ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 10af25cec; end: 10af25cf3; -[SCMemoriesEntry galleryType] */

void FUN_10af25cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_galleryType_1125cd110);
  return;
}



/* Entry: 10af25cf4; end: 10af25cfb; -[SCMemoriesEntry isPrivate] */

void FUN_10af25cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isPrivate_1125fc6a0);
  return;
}



/* Entry: 10af25cfc; end: 10af25d03; -[SCMemoriesEntry pendingSyncs] */

void FUN_10af25cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_pendingSyncs_11261b8a8);
  return;
}



/* Entry: 10af25d04; end: 10af25d0b; -[SCMemoriesEntry seqNum] */

void FUN_10af25d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_seqNum_112635368);
  return;
}



/* Entry: 10af25d0c; end: 10af25d13; -[SCMemoriesEntry externalId] */

void FUN_10af25d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_externalId_1125c51f8);
  return;
}



/* Entry: 10af25d14; end: 10af25d1b; -[SCMemoriesEntry duplicateTimeUtc] */

void FUN_10af25d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_duplicateTimeUtc_1125c05d0);
  return;
}



/* Entry: 10af25d1c; end: 10af25d23; -[SCMemoriesEntry title] */

void FUN_10af25d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_title_112679e90);
  return;
}



/* Entry: 10af25d24; end: 10af25d2b; -[SCMemoriesEntry syncedIsPrivate] */

void FUN_10af25d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_syncedIsPrivate_1126774d0);
  return;
}



/* Entry: 10af25d2c; end: 10af25d33; -[SCMemoriesEntry syncedTitle] */

void FUN_10af25d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_syncedTitle_1126774f0);
  return;
}



/* Entry: 10af25d34; end: 10af25d3b; -[SCMemoriesEntry autosaveTimeUtc] */

void FUN_10af25d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf12230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_autosaveTimeUtc_1125a2230);
  return;
}



/* Entry: 10af25d3c; end: 10af25d43; -[SCMemoriesEntry syncedAutosaveTimeUtc] */

void FUN_10af25d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_syncedAutosaveTimeUtc_112677488);
  return;
}



/* Entry: 10af25d44; end: 10af25d4b; -[SCMemoriesEntry snapsOrder] */

void FUN_10af25d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c245810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapsOrder_11266f028);
  return;
}



/* Entry: 10af25d4c; end: 10af25d53; -[SCMemoriesEntry galleryEntry] */

undefined8 FUN_10af25d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af25d54; end: 10af25d5f; -[SCMemoriesEntry .cxx_destruct] */

void FUN_10af25d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af25d60; end: 10af25dd3; -[SCMemoriesGenericAsset initWithSnapAsset:] */

undefined1 * FUN_10af25d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127022f0;
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



/* Entry: 10af25dd4; end: 10af25e6b; -[SCMemoriesGenericAsset initWithAssetId:assetType:downloadURL:] */

undefined8
FUN_10af25dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d83d8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4420();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010c0471c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}


