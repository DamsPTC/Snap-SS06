/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bf09fc; end: 100bf0a07; -[SCSnapchattersDataRequestTracker isFriendsDataFullySynced] */

byte FUN_100bf09fc(long param_1)

{
  return *(byte *)(param_1 + 0x60) & 1;
}



/* Entry: 100bf0a08; end: 100bf0a4f; -[SCSnapchattersGrapheneLogger logUserIdToSnapchattersFetchBeforeDataFullySynced] */

void FUN_100bf0a08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x000107c43adc(PTR_PTR_1126db0d8);
  func_0x000107c61180();
  func_0x000107c45318(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bf0a50; end: 100bf0a7b; +[SCGrapheneSnapchattersMetric friendsFetchBeforeSynced] */

void FUN_100bf0a50(void)

{
  func_0x000107c610f4(PTR_PTR_1126db0d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf0a7c; end: 100bf0a97;  */

void FUN_100bf0a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf0a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 100bf0a98; end: 100bf0abf;  */

void FUN_100bf0a98(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100bf0ac0; end: 100bf0b2b;  */

void FUN_100bf0ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar1 = param_2;
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bf0b2c; end: 100bf0baf; -[SCFeedSnapchattersRepository _friendsFeedEntityForSnapchatter:] */

void FUN_100bf0b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c4a4cc();
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126b14d8;
  func_0x000107c5b494(PTR_PTR_1126b14d8,param_2,param_3,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bf0bb0; end: 100bf0c4f; -[SCChatEligibilityProvider isSnapchatterNonFriendMessagingEligible:] */

uint FUN_100bf0bb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c61174(param_3);
  if (((*(char *)(param_1 + 0x4d) == '\x01') &&
      (uVar1 = param_3, func_0x000107c49ac4(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_3, FUN_100bf0c60(param_3,0), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x000107c5b37c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4adac();
    func_0x000107c61170(uVar1);
    if (uVar2 == 0) {
      uVar1 = param_3;
      FUN_100bf119c(param_3);
      uVar3 = (uint)uVar1 ^ 1;
      goto LAB_100bf0c24;
    }
  }
  uVar3 = 0;
LAB_100bf0c24:
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100bf0c50; end: 100bf0c5f; -[SCSnapchatter isBlocked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100bf0c50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127912bc);
}



/* Entry: 100bf0c60; end: 100bf0d4b;  */

ulong FUN_100bf0c60(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar1 = param_1;
  FUN_100bf0d4c(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar1 = param_2;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    func_0x000107c61174(uVar1);
    if (uVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1;
      func_0x000107c49d0c();
      if (((uVar3 & 1) == 0) && (uVar3 = uVar1, func_0x000107c49d0c(), (uVar3 & 1) == 0)) {
        uVar3 = uVar1;
        FUN_100bec4d0(uVar1);
      }
      else {
        uVar3 = 1;
      }
    }
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  else {
    uVar3 = 1;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 100bf0d4c; end: 100bf0de3;  */

ulong FUN_100bf0d4c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar1 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = param_2;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  func_0x000107c49d0c();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    FUN_100bec1f0(param_1,param_2);
  }
  else {
    uVar2 = 1;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100bf0de4; end: 100bf0e4f; +[SCFriendsFeedEntity snapchatterWithSnapchatter:isNonFriendConversation:] */

void FUN_100bf0de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b14d8;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bf0e50; end: 100bf0e93; -[SCFriendsFeedEntity internalInit] */

void FUN_100bf0e50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112703a50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf0e94; end: 100bf10a3; -[SCSnapchatter _swizzled_getUsername] */

void FUN_100bf0e94(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b15c8;
  func_0x000107c3ac5c();
  if ((int)puVar1 == 0) {
    puVar2 = PTR_PTR_1126b15c8;
    func_0x000107c3ac60();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_1;
    if ((int)puVar2 == 0) {
      func_0x000107c4d2ec();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c3ca20(param_1);
        func_0x000107c61180();
        goto LAB_100bf1084;
      }
    }
    else {
      puVar2 = param_1;
      func_0x000107c4d2ec(param_1);
      func_0x000107c61180();
      func_0x000107c4a0ec(puVar1,param_2,puVar2);
      func_0x000107c61170(puVar2);
      if ((int)puVar1 != 0) {
        puVar1 = param_1;
        func_0x000107c4ad90();
        func_0x000107c61180();
        if (puVar1 == (undefined *)0x0) {
          func_0x000107c3ca20(param_1);
          func_0x000107c61180();
        }
        else {
          func_0x000107c61174(puVar1);
          puVar3 = puVar1;
        }
        func_0x000107c61170(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c3b074(param_1,param_2,puVar3);
        func_0x000107c61180();
        func_0x000107c51804(puVar1,param_2,&PTR____CFConstantStringClassReference_110f17fb8);
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        param_1 = puVar1;
        goto LAB_100bf1084;
      }
      puVar1 = param_1;
      func_0x000107c4d2ec();
      func_0x000107c61180();
      func_0x000107c3b074(param_1,param_2,puVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c4ad90(param_1);
      func_0x000107c61180();
      puVar1 = puVar3;
      func_0x000107c49d0c(puVar3,param_2,param_1);
      func_0x000107c61170(param_1);
      if ((int)puVar1 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f17fd8;
        goto LAB_100bf0ef4;
      }
    }
  }
  else {
    func_0x000107c3ca20();
    func_0x000107c61180();
    puVar1 = param_1;
    func_0x000107c44a40();
    puVar3 = param_1;
    if ((int)puVar1 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f17f98;
LAB_100bf0ef4:
      param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar4);
      func_0x000107c61180();
      goto LAB_100bf1084;
    }
  }
  func_0x000107c61174(puVar3);
  param_1 = puVar3;
LAB_100bf1084:
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100bf10a4; end: 100bf110f; +[SCSnapchatter UseMockMutation] */

undefined1 FUN_100bf10a4(void)

{
  if (lRam0000000113730690 != -1) {
    func_0x00010002a2fc(0x113730690,&PTR___NSConcreteGlobalBlock_110ad3bb0);
  }
  return uRam0000000113730688;
}



/* Entry: 100bf1110; end: 100bf117b; +[SCSnapchatter UseMutationTestIcon] */

undefined1 FUN_100bf1110(void)

{
  if (lRam0000000113730698 != -1) {
    func_0x00010002a2fc(0x113730698,&PTR___NSConcreteGlobalBlock_110ad3bd0);
  }
  return uRam0000000113730689;
}



/* Entry: 100bf117c; end: 100bf118b; -[SCSnapchatter mutableUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bf117c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912d4);
}



/* Entry: 100bf118c; end: 100bf119b; -[SCSnapchatter snapProId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bf118c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912d0);
}



/* Entry: 100bf119c; end: 100bf1207;  */

bool FUN_100bf119c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c439a8();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar2 != 0;
}



/* Entry: 100bf1208; end: 100bf1217; -[SCSnapchatter friendInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bf1208(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912c0);
}



/* Entry: 100bf1218; end: 100bf121f; -[SCSnapchattersFriendInfo subtypeInfo] */

undefined8 FUN_100bf1218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bf1220; end: 100bf12f3; -[SCSnapchattersFriendSubtypeInfo asMutualFriendInfo] */

void FUN_100bf1220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10b653670;
  puStack_30 = &UNK_10b653680;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100bf13a4;
  puStack_60 = &UNK_11088eb38;
  puStack_48 = puStack_58;
  func_0x000107c4c628(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d27498,
                      &PTR___NSConcreteGlobalBlock_110d274b8,&puStack_78);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bf12f4; end: 100bf13a3; -[SCSnapchattersFriendSubtypeInfo matchFollowingFriendInfo:pendingFriendInfo:mutualFriendInfo:] */

/* WARNING: Possible PIC construction at 0x000100bf1384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf1388) */

void FUN_100bf12f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 3) {
    if (param_5 == 0) goto LAB_100bf1380;
    lVar1 = 0x20;
    param_4 = param_5;
  }
  else if (lVar1 == 2) {
    if (param_4 == 0) goto LAB_100bf1380;
    lVar1 = 0x18;
  }
  else {
    if ((lVar1 != 1) || (param_3 == 0)) goto LAB_100bf1380;
    lVar1 = 0x10;
    param_4 = param_3;
  }
  (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + lVar1));
LAB_100bf1380:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100bf13a4; end: 100bf13db;  */

void FUN_100bf13a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bf13dc; end: 100bf151b;  */

void FUN_100bf13dc(long param_1)

{
  long lVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    do {
      func_0x0001007bbd18(param_1,&uStack_58);
      uStack_a8 = uStack_50;
      uStack_b0 = uStack_58;
      uStack_98 = uStack_40;
      uStack_a0 = uStack_48;
      uStack_90 = uStack_38;
      func_0x0001007bbd54(auStack_80,&uStack_b0);
      func_0x0001007bbff0(auStack_80);
      param_1 = param_1 + 0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 100bf151c; end: 100bf15d3; -[SCFriendsFeedEntity matchSnapchatter:group:multiRecipient:] */

/* WARNING: Possible PIC construction at 0x000100bf15b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf15b8) */

void FUN_100bf151c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_100bf15b0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    param_4 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
      }
      goto LAB_100bf15b0;
    }
    if (param_4 == 0) goto LAB_100bf15b0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_4 + 0x10);
  }
  (*pcVar3)(param_4,uVar1);
LAB_100bf15b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100bf15d4; end: 100bf1613;  */

void FUN_100bf15d4(long param_1,undefined8 param_2)

{
  FUN_100bec1f0(param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0,
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 100bf1614; end: 100bf178b;  */

void FUN_100bf1614(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d60398,&UNK_10d92e0c0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_100bf16f4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        lVar10 = (LZCOUNT(uVar7) | lVar9 << 6) * 0x28;
        func_0x0001007bbd18(*(long *)(lVar8 + 0x30) + lVar10,&uStack_78);
        puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + lVar10);
        puVar2[4] = uStack_58;
        puVar2[1] = uStack_70;
        *puVar2 = uStack_78;
        puVar2[3] = uStack_60;
        puVar2[2] = uStack_68;
        if (uVar5 != 0) break;
LAB_100bf16f4:
        do {
          lVar10 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf178c);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar10) goto LAB_100bf1760;
          uVar5 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar10;
      }
    } while( true );
  }
LAB_100bf1760:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 100bf178c; end: 100bf19ef;  */

void FUN_100bf178c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar9 = 0x112d60398;
  func_0x0001000285a8(0x112d60398,&UNK_10d92e0c0);
  lVar4 = lVar14;
  func_0x000107c602e0(lVar14,lVar1,1,uVar9);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_100bf19bc:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar4;
    return;
  }
  puVar15 = (ulong *)(lVar14 + 0x38);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *puVar15;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf19ec);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar16) {
          uVar13 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
          if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
            *puVar15 = -1L << (uVar13 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar15,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar14 + 0x10) = 0;
          goto LAB_100bf19bc;
        }
        uVar13 = puVar15[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar16 = lVar7;
    }
    puVar8 = (undefined8 *)(*(long *)(lVar14 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 0x28);
    uVar18 = puVar8[1];
    uVar17 = *puVar8;
    uVar20 = puVar8[3];
    uVar19 = puVar8[2];
    uVar9 = puVar8[4];
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c602c4();
    uVar12 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar12 >> 6;
      do {
        uVar5 = uVar10 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf19f0);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar5 != uVar6) {
          uVar10 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    puVar8 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 0x28);
    puVar8[1] = uVar18;
    *puVar8 = uVar17;
    puVar8[3] = uVar20;
    puVar8[2] = uVar19;
    puVar8[4] = uVar9;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 100bf19f0; end: 100bf19f3;  */

void FUN_100bf19f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bf19f4; end: 100bf1a17;  */

void FUN_100bf19f4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf1a18; end: 100bf1a5f;  */

/* WARNING: Possible PIC construction at 0x000100bf1a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf1a50) */

void FUN_100bf1a18(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4fcd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bf1a60; end: 100bf1b97; -[SCComposerActiveUserSessionVideoLoadersRegistryEntryPoint registerVideoLoaders:] */

/* WARNING: Possible PIC construction at 0x000100bf1adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf1af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf1b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf1b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf1b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf1b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf1b64) */
/* WARNING: Removing unreachable block (ram,0x000100bf1b2c) */
/* WARNING: Removing unreachable block (ram,0x000100bf1b10) */
/* WARNING: Removing unreachable block (ram,0x000100bf1afc) */
/* WARNING: Removing unreachable block (ram,0x000100bf1ae0) */
/* WARNING: Removing unreachable block (ram,0x000100bf1b80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf1a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112729b70) & 1) != 0) {
    return;
  }
  lVar3 = (long)_DAT_112729b74;
  func_0x000107c61174(param_3);
  puVar2 = (undefined *)(param_1 + lVar3);
  func_0x000107c61148();
  func_0x000107c3ecf4();
  func_0x000107c61180();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x000107c61174(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bf1b98; end: 100bf1bf7; -[_TtC53SCComposerActiveUserSessionVideoLoadersPluginRegistry57SCComposerActiveUserSessionVideoLoadersPluginSaberService buildSaberPlugins] */

void FUN_100bf1b98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bf1bf8();
  func_0x000107c61170(param_1);
  uVar2 = 0x112e149d0;
  func_0x0001000285a8(0x112e149d0,&UNK_10d9f15f0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100bf1bf8; end: 100bf1d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf1bf8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x00010008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_100bf4e94(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_100bf4e94(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 100bf1d80; end: 100bf1dbf;  */

void FUN_100bf1d80(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100bf1d00(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SingleSnapPlayerVideoLoaderPluginProvider",0x29,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf1dc0; end: 100bf1e33;  */

void FUN_100bf1dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar1 = 0;
  FUN_100bf4d8c(0);
  func_0x000107c610f8();
  FUN_100bf4e04(uStack_38,uStack_40,uVar1);
  *param_1 = uStack_38;
  return;
}



/* Entry: 100bf1e34; end: 100bf1e3b;  */

void FUN_100bf1e34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf1e3c; end: 100bf1e8f;  */

void FUN_100bf1e3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf1e90; end: 100bf1ea3;  */

void FUN_100bf1e90(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002c32b0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_100bf4530(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  FUN_100bf45bc();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_100bf4658();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bf1ea4; end: 100bf20bf;  */

void FUN_100bf1ea4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002c32b0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_100bf4530(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100bf45bc();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_100bf4658();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100bf20c0; end: 100bf20c7;  */

void FUN_100bf20c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf20c8; end: 100bf211b;  */

void FUN_100bf20c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf211c; end: 100bf2147; +[SCGrapheneGhostToFeedMetric g2fFetchSnapchatter] */

void FUN_100bf211c(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba080);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf2148; end: 100bf2157;  */

void FUN_100bf2148(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002b71c4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_100bf2300(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100bf23b4();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_100bf2464();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bf2158; end: 100bf22ff;  */

void FUN_100bf2158(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002b71c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_100bf2300(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100bf23b4();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100bf2464();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100bf2300; end: 100bf2387;  */

void FUN_100bf2300(undefined8 param_1)

{
  if (lRam0000000112e341f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e694c0c);
  return;
}



/* Entry: 100bf2388; end: 100bf23b3; +[SCGrapheneGhostToFeedMetric g2fFetchEntity] */

void FUN_100bf2388(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba080);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf23b4; end: 100bf2443;  */

void FUN_100bf23b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
    *(undefined8 *)(unaff_x20 + 0x28) = param_5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf2444);
  (*pcVar1)();
}



/* Entry: 100bf2444; end: 100bf2463;  */

void FUN_100bf2444(void)

{
  func_0x000107c61168(&PTR_PTR_112e34970);
  return;
}



/* Entry: 100bf2464; end: 100bf255b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf2464(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar4 = _DAT_112fdcd30;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11307a4d8);
  lVar5 = 0;
  FUN_100bf2444();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  func_0x000100996f58(lVar2 + lVar4,lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x48) = uVar9;
  ppuStack_58 = &PTR_DAT_1104912d0;
  uVar7 = 0;
  alStack_78[0] = lVar6;
  lStack_60 = lVar5;
  FUN_100bf255c();
  uVar8 = uVar7;
  func_0x000107c613fc();
  ppuStack_80 = &PTR_DAT_110491760;
  auStack_a0[0] = uVar8;
  uStack_88 = uVar7;
  func_0x0001002bad34(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(uVar9);
  FUN_100bf257c(alStack_78,auStack_a0);
  return;
}



/* Entry: 100bf255c; end: 100bf257b;  */

void FUN_100bf255c(void)

{
  func_0x000107c61168(&PTR_PTR_112e34d78);
  return;
}



/* Entry: 100bf257c; end: 100bf260b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100bf257c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_100bf260c(param_1,unaff_x20 + _DAT_112ff7a70);
  FUN_100bf260c(param_2,unaff_x20 + _DAT_112ff7a78);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 100bf260c; end: 100bf264f;  */

long FUN_100bf260c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100bf2650; end: 100bf2693;  */

void FUN_100bf2650(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf2694; end: 100bf269b;  */

void FUN_100bf2694(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf269c; end: 100bf26ef;  */

void FUN_100bf269c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf26f0; end: 100bf2703;  */

void FUN_100bf26f0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002ba348();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_100bf2920(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  FUN_100bf29a4();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_100bf2a00();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bf2704; end: 100bf291f;  */

void FUN_100bf2704(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002ba348();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_100bf2920(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100bf29a4();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_100bf2a00();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100bf2920; end: 100bf29a3;  */

void FUN_100bf2920(undefined8 param_1)

{
  if (lRam0000000112e32548 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e693b7c);
  return;
}



/* Entry: 100bf29a4; end: 100bf29ff;  */

void FUN_100bf29a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 100bf2a00; end: 100bf2b27;  */

undefined * FUN_100bf2a00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112e32508,&UNK_10da1b940);
  func_0x000107c613fc();
  func_0x000107c6157c();
  puVar1 = &UNK_101e4bab0;
  func_0x0001000bdd8c(&UNK_101e4bab0);
  func_0x0001000285a8(0x112e32510,&UNK_10da1b948);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar2 = &UNK_101e4bad4;
  func_0x0001000bdd8c(&UNK_101e4bad4,puVar1);
  func_0x0001000285a8(0x112e32518,&UNK_10da1b950);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar3 = &UNK_101e4bb08;
  func_0x0001000bdd8c(&UNK_101e4bb08,puVar1);
  puVar4 = puVar3;
  func_0x0001000bf56c();
  uVar5 = 0;
  func_0x0001002bd210(0);
  func_0x000107c610f8();
  FUN_100bf334c(puVar4,puVar3,uVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return puVar4;
}



/* Entry: 100bf2b28; end: 100bf2b47;  */

void FUN_100bf2b28(void)

{
  func_0x000107c61168(&PTR_PTR_112e323e0);
  return;
}



/* Entry: 100bf2b48; end: 100bf3037;  */

void FUN_100bf2b48(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  
  func_0x000107c61174(param_2);
  uVar2 = param_2;
  func_0x000107c3d15c();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c42f24(param_2);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar12);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0xd0);
  uVar3 = param_2;
  func_0x000107c42f24(param_2);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar13 == 0) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0xd8);
    uVar4 = param_2;
    func_0x000107c42f24(param_2);
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (lVar14 == 0) {
      lVar18 = *(long *)(*(long *)(param_1 + 0x28) + 0xb0);
      uVar5 = param_2;
      func_0x000107c42f24(param_2);
      func_0x000107c61180();
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
    }
    else {
      func_0x000107c61174(lVar14);
      lVar18 = lVar14;
    }
    func_0x000107c61170(lVar14);
    func_0x000107c61170(uVar4);
  }
  else {
    func_0x000107c61174(lVar13);
    lVar18 = lVar13;
  }
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar3);
  lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0xb8);
  uVar3 = param_2;
  func_0x000107c42f24(param_2);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0xc0);
    uVar3 = param_2;
    func_0x000107c42f24(param_2);
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
  }
  else {
    lVar14 = 0;
  }
  if ((*(char *)(param_1 + 0x49) == '\x01') && (uVar3 = uVar2, FUN_100bf37c4(), (int)uVar3 != 0)) {
    func_0x000107c61170(lVar14);
    lVar14 = 0;
  }
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe0);
  uVar3 = param_2;
  func_0x000107c3d15c(param_2);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40674();
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
  uVar3 = param_2;
  func_0x000107c42f24(param_2);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000107c3c734();
  if (iVar1 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c49bbc();
    if (((uVar3 & 1) == 0) && (((lVar18 != 0 || (lVar13 != 0)) || (lVar14 != 0)))) {
      lVar17 = lVar18;
      FUN_100bf3e24(lVar18,lVar13,lVar14,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x120));
      func_0x000107c61180();
    }
    else {
      lVar17 = 0;
    }
    puVar19 = PTR_PTR_1126b14e0;
    func_0x000107c610f4();
    uVar3 = param_2;
    func_0x000107c42f24(param_2);
    func_0x000107c61180();
    func_0x000107c468c0();
    func_0x000107c61170(uVar3);
    puVar6 = puVar19;
    func_0x000100bf377c();
    puVar7 = puVar19;
    FUN_100bf39e4();
    puVar8 = puVar19;
    func_0x000107c3d15c();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c4069c();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar8);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x000107c3c704();
    if (iVar1 != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      puVar8 = puVar19;
      func_0x000107c3d15c(puVar19);
      func_0x000107c61180();
      puVar10 = puVar8;
      func_0x000107c40674();
      func_0x000107c61180();
      func_0x000107c3d798(uVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar8);
    }
    if (((((uint)puVar7 | (uint)puVar6 ^ 0xffffffff) & 1) == 0) && (puVar9 == (undefined *)0x0)) {
      func_0x000107c3d798(*(undefined8 *)(param_1 + 0x38));
    }
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    puVar6 = puVar19;
    func_0x000107c42f24(puVar19);
    func_0x000107c61180();
    func_0x000107c3d798(uVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar17);
  }
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 100bf3038; end: 100bf303f; -[SCFriendsFeedActiveMessageData conversationId] */

undefined8 FUN_100bf3038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bf3040; end: 100bf317f; -[SCFriendsFeedDataCoordinator _shouldDisplayFriendsFeedEntity:activeMessageData:] */

undefined1
FUN_100bf3040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x000107c61174(param_4);
  func_0x000107c4c728(param_3);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  func_0x000107c61170(param_4);
  func_0x000107c60bcc(&uStack_70,8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100bf3180; end: 100bf3207;  */

/* WARNING: Possible PIC construction at 0x000100bf31f0: Changing call to branch */

void FUN_100bf3180(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  FUN_100bec110();
  if (iVar1 == 0) {
    param_2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = param_2;
    func_0x000107c4a4c8();
    *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bf3208; end: 100bf334b; -[SCChatEligibilityProvider isSnapchatterEligibleForFriendsFeedDisplay:] */

undefined8 FUN_100bf3208(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  FUN_100bec1f0(param_3,0);
  if ((int)lVar1 == 0) {
LAB_100bf3264:
    lVar1 = param_3;
    func_0x000107c439a8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      func_0x000107c611ec(param_1 + 0x48);
      if (*(char *)(param_1 + 0x38) == '\x01') {
        uVar2 = *(ulong *)(param_1 + 0x40);
        func_0x000107c5da94();
        func_0x000107c61180();
        puVar3 = PTR_PTR_1126b29b8;
        func_0x000107c42b14(PTR_PTR_1126b29b8);
        func_0x000107c61180();
        uVar4 = uVar2;
        func_0x000107c49cec();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar2);
        if ((uVar4 & 1) == 0) goto LAB_100bf32ec;
LAB_100bf3304:
        uVar5 = 1;
      }
      else {
LAB_100bf32ec:
        lVar1 = param_3;
        func_0x000107c2aab4();
        if ((int)lVar1 != 0) {
          uVar4 = *(ulong *)(param_1 + 0x40);
          func_0x000107c3dbfc();
          if ((uVar4 & 1) != 0) goto LAB_100bf3304;
        }
        uVar5 = 0;
      }
      func_0x000107c611f0(param_1 + 0x48);
      goto LAB_100bf3318;
    }
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar2);
    if ((uVar4 & 1) == 0) goto LAB_100bf3264;
  }
  uVar5 = 1;
LAB_100bf3318:
  func_0x000107c61170(param_3);
  return uVar5;
}



/* Entry: 100bf334c; end: 100bf33af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf334c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fec8a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fec8a8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf33b0; end: 100bf3403;  */

void FUN_100bf33b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf3404; end: 100bf3413; -[SCFriendsFeedActiveMessageData isConversationLocked] */

undefined1 FUN_100bf3404(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100bf3414; end: 100bf3467;  */

void FUN_100bf3414(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bf3468; end: 100bf3473;  */

void FUN_100bf3468(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002bfeb4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_100bf354c(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_100bf3d38(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_100bf44c8();
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bf3474; end: 100bf354b;  */

void FUN_100bf3474(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002bfeb4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_100bf354c(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_100bf3d38(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  FUN_100bf44c8();
  *(undefined8 *)(param_2 + 0x28) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 100bf354c; end: 100bf3583;  */

void FUN_100bf354c(undefined8 param_1)

{
  if (lRam0000000112e321a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e693a54);
  return;
}



/* Entry: 100bf3584; end: 100bf36ef; -[SCFriendsFeedItem initWithFeedId:activeMessageData:entity:story:activePresenceInfo:pinnedTimestamp:] */

undefined1 *
FUN_100bf3584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112703988;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bf36f0; end: 100bf3733;  */

void FUN_100bf36f0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 100bf3734; end: 100bf3757; -[SCFriendsFeedActiveMessageData copyWithZone:] */

undefined8 FUN_100bf3734(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf3758; end: 100bf37bb; -[SCFriendsFeedEntity copyWithZone:] */

undefined8 FUN_100bf3758(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf37bc; end: 100bf37c3; -[SCFriendsFeedItem activeMessageData] */

undefined8 FUN_100bf37bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bf37c4; end: 100bf383f;  */

ulong FUN_100bf37c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c406e8();
  if ((uVar1 == 1) || (uVar1 = param_1, func_0x000107c4a3d0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x000107c4cda8(param_1);
    func_0x000107c61180();
    uVar2 = uVar1;
    FUN_100bf3858();
    func_0x000107c61170(uVar1);
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100bf3840; end: 100bf3847; -[SCFriendsFeedActiveMessageData conversationType] */

undefined8 FUN_100bf3840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bf3848; end: 100bf384f; -[SCFriendsFeedActiveMessageData isSentByUser] */

undefined1 FUN_100bf3848(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100bf3850; end: 100bf3857; -[SCFriendsFeedActiveMessageData messageContent] */

undefined8 FUN_100bf3850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bf3858; end: 100bf39e3;  */

undefined1 FUN_100bf3858(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x000107c4c710(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100bf39e4; end: 100bf3a1f;  */

undefined8 FUN_100bf39e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3d15c();
  func_0x000107c61180();
  uVar1 = param_1;
  FUN_100bec110();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100bf3a20; end: 100bf3a27; -[SCFriendsFeedActiveMessageData conversationInvitationMetadata] */

undefined8 FUN_100bf3a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100bf3a28; end: 100bf3bf3; -[SCFriendsFeedDataCoordinator _shouldAddToConsumableConversationIds:hasConsumableContent:isCampaign:isAppInBackground:countMutedGroupAsConsumableConversation:] */

undefined8
FUN_100bf3a28(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,ulong param_5,
             int param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  if (((param_5 & 1) == 0) && (param_4 != 0)) {
    uVar1 = param_3;
    func_0x000107c3d15c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4cda8();
    func_0x000107c61180();
    uVar3 = uVar2;
    FUN_100bf426c();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_3;
      func_0x000107c3d15c();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c4069c();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar1);
      if (uVar2 == 0) {
        uVar1 = param_3;
        func_0x000107c3d15c();
        func_0x000107c61180();
        uVar2 = uVar1;
        func_0x000107c49bb8();
        func_0x000107c61170(uVar1);
        if ((int)uVar2 == 0) {
LAB_100bf3bc4:
          uVar4 = 1;
          goto LAB_100bf3adc;
        }
        puStack_58 = &uStack_60;
        uStack_60 = 0;
        uStack_50 = 0x2020000000;
        uStack_48 = 0;
        uVar1 = param_3;
        func_0x000107c42924(param_3);
        func_0x000107c61180();
        func_0x000107c4c728();
        func_0x000107c61170(uVar1);
        if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
          func_0x000107c60bcc(&uStack_60,8);
        }
        else {
          func_0x000107c60bcc(&uStack_60,8);
          if ((param_6 != 0) && ((param_7 & 1) != 0)) goto LAB_100bf3bc4;
        }
      }
    }
  }
  uVar4 = 0;
LAB_100bf3adc:
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 100bf3bf4; end: 100bf3bfb; -[SCFriendsFeedItem feedId] */

undefined8 FUN_100bf3bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bf3bfc; end: 100bf3d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf3bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a9658;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_100bf3e04();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar5 + 0x10) = puVar2;
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  *(undefined **)(lVar5 + 0x30) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x0001000d224c(alStack_78);
  plVar6 = alStack_78;
  func_0x0001000a8868(plVar6,lStack_60);
  uVar7 = 2;
  func_0x000100774b74(2,0x27,1,lStack_60,ppuStack_58,plVar6);
  func_0x000107c61170(param_1);
  *(undefined8 *)(lVar5 + 0x20) = uVar7;
  func_0x0001000834e4(alStack_78);
  ppuStack_58 = &PTR_DAT_11048d510;
  alStack_78[0] = lVar5;
  lStack_60 = lVar4;
  func_0x0001002c2f64(0);
  func_0x000107c610f8();
  plVar6 = alStack_78;
  FUN_100bf4414();
  *(long **)(unaff_x20 + 0x10) = plVar6;
  return;
}



/* Entry: 100bf3d38; end: 100bf3d8f;  */

undefined8 FUN_100bf3d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100bf3bfc(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100bf3d90; end: 100bf3e03; -[SCGrapheneSingleSnapPlayerMetric2 init] */

undefined1 * FUN_100bf3d90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eacd0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100bf3e04; end: 100bf3e23;  */

void FUN_100bf3e04(void)

{
  func_0x000107c61168(&PTR_PTR_112e320f0);
  return;
}



/* Entry: 100bf3e24; end: 100bf3f97;  */

void FUN_100bf3e24(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  puVar3 = PTR_PTR_1126cb170;
  if (param_1 == 0) {
    if (param_2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x000107c4f634();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c5c090();
    func_0x000107c61180();
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  if (param_3 == 0) {
    if (puVar3 != (undefined *)0x0) {
LAB_100bf3f14:
      func_0x000107c61174(puVar3);
      puVar5 = puVar3;
      goto LAB_100bf3f54;
    }
    puVar4 = (undefined *)0x0;
LAB_100bf3f30:
    puVar2 = puVar4;
    func_0x000107cfb95c(puVar4,param_4);
    puVar5 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
  }
  else {
    puVar4 = PTR_PTR_1126cb170;
    func_0x000107c5b98c();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) goto LAB_100bf3f30;
    if (puVar4 == (undefined *)0x0) goto LAB_100bf3f14;
    puVar2 = puVar3;
    func_0x000107cfb95c(puVar3,param_4);
    puVar1 = puVar4;
    func_0x000107cfb95c(puVar4,param_4);
    puVar5 = puVar4;
    if (puVar1 <= puVar2) {
      puVar5 = puVar3;
    }
  }
  func_0x000107c61174(puVar5);
  func_0x000107c61170(puVar4);
LAB_100bf3f54:
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bf3f98; end: 100bf3ffb; +[SCFriendsFeedItemStory storyWithStory:] */

void FUN_100bf3f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126cb170;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bf3ffc; end: 100bf403f; -[SCFriendsFeedItemStory internalInit] */

void FUN_100bf3ffc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112703990;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf4040; end: 100bf4063; -[SCFriendsFeedItemStory copyWithZone:] */

undefined8 FUN_100bf4040(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf4064; end: 100bf4217; -[SCFriendsFeedMessageContent matchSnap:call:screenshot:mediaSave:chat:multiRecipient:reaction:reply:] */

/* WARNING: Possible PIC construction at 0x000100bf41c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf41d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf41e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf41f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf41e8) */
/* WARNING: Removing unreachable block (ram,0x000100bf41d8) */
/* WARNING: Removing unreachable block (ram,0x000100bf41c8) */
/* WARNING: Removing unreachable block (ram,0x000100bf41f8) */

void FUN_100bf4064(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 == 0) goto LAB_100bf41c0;
        lVar1 = 0x10;
        param_7 = param_3;
      }
      else {
        if ((lVar1 != 1) || (param_4 == 0)) goto LAB_100bf41c0;
        lVar1 = 0x18;
        param_7 = param_4;
      }
    }
    else if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_100bf41c0;
      lVar1 = 0x20;
      param_7 = param_5;
    }
    else {
      if ((lVar1 != 3) || (param_6 == 0)) goto LAB_100bf41c0;
      lVar1 = 0x28;
      param_7 = param_6;
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
      if (param_7 == 0) goto LAB_100bf41c0;
      lVar1 = 0x30;
    }
    else {
      if ((lVar1 != 5) || (param_8 == 0)) goto LAB_100bf41c0;
      lVar1 = 0x38;
      param_7 = param_8;
    }
  }
  else if (lVar1 == 6) {
    if (param_9 == 0) goto LAB_100bf41c0;
    lVar1 = 0x40;
    param_7 = param_9;
  }
  else {
    if ((lVar1 != 7) || (param_10 == 0)) goto LAB_100bf41c0;
    lVar1 = 0x48;
    param_7 = param_10;
  }
  (**(code **)(param_7 + 0x10))(param_7,*(undefined8 *)(param_1 + lVar1));
LAB_100bf41c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 100bf4218; end: 100bf4263;  */

void FUN_100bf4218(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c5d328();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c4adac();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bf4264; end: 100bf426b; -[SCFriendsFeedSnapMessage unopenedSnapMessageId] */

undefined8 FUN_100bf4264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


