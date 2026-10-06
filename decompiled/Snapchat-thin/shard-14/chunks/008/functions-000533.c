/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b654b6c; end: 10b654b73; -[SCSnapchattersCreatorSnapchatterInfo isOfficial] */

undefined1 FUN_10b654b6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b654b74; end: 10b654b7b; -[SCSnapchattersCreatorSnapchatterInfo unifiedProfileId] */

undefined8 FUN_10b654b74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b654b7c; end: 10b654b83; -[SCSnapchattersCreatorSnapchatterInfo tier] */

undefined4 FUN_10b654b7c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b654b84; end: 10b654b8b; -[SCSnapchattersCreatorSnapchatterInfo profileType] */

undefined4 FUN_10b654b84(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b654b8c; end: 10b654b93; -[SCSnapchattersCreatorSnapchatterInfo badgeType] */

undefined4 FUN_10b654b8c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b654b94; end: 10b654b9b; -[SCSnapchattersCreatorSnapchatterInfo defaultLandingProfilePageType] */

undefined4 FUN_10b654b94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b654b9c; end: 10b654ba3; -[SCSnapchattersCreatorSnapchatterInfo profileLogoType] */

undefined4 FUN_10b654b9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10b654ba4; end: 10b654bab; -[SCSnapchattersCreatorSnapchatterInfo profileLogo] */

undefined8 FUN_10b654ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b654bac; end: 10b654bdb; -[SCSnapchattersCreatorSnapchatterInfo .cxx_destruct] */

void FUN_10b654bac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b654bdc; end: 10b654bff; -[SCSnapchattersFriendmoji copyWithZone:] */

undefined8 FUN_10b654bdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b654c00; end: 10b654c8b; -[SCSnapchattersFriendmoji hash] */

void FUN_10b654c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = puVar2[2];
  func_0x00010bfde980();
  uVar5 = ~puVar2[3] + puVar2[3] * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uStack_98 = (ulong)*(byte *)(puVar2 + 1);
  uStack_90 = (ulong)*(byte *)((long)puVar2 + 9);
  uVar5 = ~puVar2[4] + puVar2[4] * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_88 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uStack_80 = (ulong)*(byte *)((long)puVar2 + 10);
  uStack_78 = (ulong)*(byte *)((long)puVar2 + 0xb);
  uVar5 = ~puVar2[5] + puVar2[5] * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_a8 = uVar1;
  func_0x000107c3191c(&uStack_a8,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bb6d0;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  *(undefined8 *)(puVar4 + 8) = 1;
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b654c8c; end: 10b654d6f; -[SCSnapchattersFriendInfo hash] */

void FUN_10b654c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_60 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_48 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uVar4 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_30 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_68 = uVar1;
  func_0x000107c3191c(&uStack_68,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bb6d0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 8) = 1;
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b654d70; end: 10b654dd7; +[SCSnapchattersFriendSubtypeInfo followingFriendInfoWithFollowingFriendInfo:] */

void FUN_10b654d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb6d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b654dd8; end: 10b654e43; +[SCSnapchattersFriendSubtypeInfo pendingFriendInfoWithPendingFriendInfo:] */

void FUN_10b654dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb6d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b654e44; end: 10b654ec7; -[SCSnapchattersFriendSubtypeInfo hash] */

undefined8 * FUN_10b654e44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  if (param_3 != 0) {
    return (undefined8 *)(ulong)(puVar3[1] == *(long *)(param_3 + 8));
  }
  return (undefined8 *)0x0;
}



/* Entry: 10b654ec8; end: 10b654ee7; -[SCSnapchattersFriendSubtypeInfo isSameSubtype:] */

bool FUN_10b654ec8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10b654ee8; end: 10b654eef; -[SCSnapchattersFriendSubtypeInfo subtype] */

undefined8 FUN_10b654ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b654ef0; end: 10b654fc3; -[SCSnapchattersFriendSubtypeInfo asFollowingFriendInfo] */

void FUN_10b654ef0(undefined8 param_1,undefined8 param_2)

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
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b653670;
  uStack_30 = 0x10b653680;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b654fc4;
  puStack_60 = &UNK_11091a7f8;
  puStack_48 = puStack_58;
  func_0x00010c0bdea0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110d273f8,
                      &PTR___NSConcreteGlobalBlock_110d27438);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b654fc4; end: 10b654ffb;  */

void FUN_10b654fc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b654ffc; end: 10b655003;  */

void FUN_10b654ffc(void)

{
  return;
}



/* Entry: 10b655004; end: 10b6550d7; -[SCSnapchattersFriendSubtypeInfo asPendingFriendInfo] */

void FUN_10b655004(undefined8 param_1,undefined8 param_2)

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
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b653670;
  uStack_30 = 0x10b653680;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b6550dc;
  puStack_60 = &UNK_11091a828;
  puStack_48 = puStack_58;
  func_0x00010c0bdea0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d27458,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110d27478);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6550d8; end: 10b6550db;  */

void FUN_10b6550d8(void)

{
  return;
}



/* Entry: 10b6550dc; end: 10b655113;  */

void FUN_10b6550dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b655114; end: 10b65511f;  */

void FUN_10b655114(void)

{
  return;
}



/* Entry: 10b655120; end: 10b655197; -[SCSnapchattersFollowingFriendInfo initWithBirthday:] */

undefined1 * FUN_10b655120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127075c0;
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



/* Entry: 10b655198; end: 10b6551bb; -[SCSnapchattersFollowingFriendInfo copyWithZone:] */

undefined8 FUN_10b655198(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6551bc; end: 10b6551c3; -[SCSnapchattersFollowingFriendInfo hash] */

void FUN_10b6551bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b6551c4; end: 10b655253; -[SCSnapchattersFollowingFriendInfo isEqual:] */

long FUN_10b6551c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b655238;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b655238;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b655238;
    }
  }
  lVar3 = 1;
LAB_10b655238:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b655254; end: 10b65525b; -[SCSnapchattersFollowingFriendInfo birthday] */

undefined8 FUN_10b655254(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b65525c; end: 10b655267; -[SCSnapchattersFollowingFriendInfo .cxx_destruct] */

void FUN_10b65525c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b655268; end: 10b65528b; -[SCSnapchattersPendingFriendInfo copyWithZone:] */

undefined8 FUN_10b655268(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b65528c; end: 10b6552fb; -[SCSnapchattersPendingFriendInfo isEqual:] */

uint FUN_10b65528c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 10b6552fc; end: 10b65531f; -[SCSnapchattersMutualFriendInfo copyWithZone:] */

undefined8 FUN_10b6552fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b655320; end: 10b6553df; -[SCSnapchattersMutualFriendInfo hash] */

undefined8 * FUN_10b655320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  lStack_78 = (long)*(int *)(param_1 + 0x10);
  lStack_50 = (long)*(int *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uStack_58 = (ulong)*(byte *)(param_1 + 10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  lStack_38 = (long)*(int *)(param_1 + 0x18);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined8 *)(long)*(int *)((long)puVar3 + 8);
}



/* Entry: 10b6553e0; end: 10b6553e7; -[SCSnapchattersReverseBestFriendRank hash] */

long FUN_10b6553e0(long param_1)

{
  return (long)*(int *)(param_1 + 8);
}



/* Entry: 10b6553e8; end: 10b6554bf; -[SCSnapchattersIncomingFriendInfo hash] */

undefined8 *
FUN_10b6553e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  lVar6 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  uStack_70 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_c8 = PTR_PTR_1127075e0;
  puStack_d0 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
  uVar1 = uStack_70;
  if (ppuVar3 != (undefined1 **)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined8 *)((long)ppuVar3 + 0x10) = uVar4;
    _objc_release(uVar7);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar4;
    _objc_release(uVar7);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x20);
    *(undefined8 *)((long)ppuVar3 + 0x20) = uVar4;
    _objc_release(uVar7);
    *(undefined1 *)((long)ppuVar3 + 8) = param_6;
    *(undefined1 *)((long)ppuVar3 + 9) = param_7;
    *(undefined1 *)((long)ppuVar3 + 10) = param_8;
    *(undefined8 *)((long)ppuVar3 + 0x28) = uVar1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined8 *)(undefined1 *)ppuVar3;
}



/* Entry: 10b6554c0; end: 10b6555c7; -[SCSnapchattersSuggestedSnapchatterInfo initWithSuggestReason:abbreviatedSuggestReason:suggestedToken:isViewed:isRecentlyActive:isHighQuality:impressionCount:] */

undefined1 *
FUN_10b6554c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

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
  puStack_58 = PTR_PTR_1127075e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6555c8; end: 10b6555eb; -[SCSnapchattersSuggestedSnapchatterInfo copyWithZone:] */

undefined8 FUN_10b6555c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6555ec; end: 10b65568b; -[SCSnapchattersSuggestedSnapchatterInfo hash] */

undefined8 * FUN_10b6555ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b655764:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b655770;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(char *)((long)puVar3 + 10) == param_3[10])))) &&
       (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b655770;
          }
          goto LAB_10b655764;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b655770:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b65568c; end: 10b65578b; -[SCSnapchattersSuggestedSnapchatterInfo isEqual:] */

long FUN_10b65568c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b655764:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b655770;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b655770;
          }
          goto LAB_10b655764;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b655770:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b65578c; end: 10b655793; -[SCSnapchattersSuggestedSnapchatterInfo suggestReason] */

undefined8 FUN_10b65578c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b655794; end: 10b65579b; -[SCSnapchattersSuggestedSnapchatterInfo abbreviatedSuggestReason] */

undefined8 FUN_10b655794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b65579c; end: 10b6557a3; -[SCSnapchattersSuggestedSnapchatterInfo suggestedToken] */

undefined8 FUN_10b65579c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6557a4; end: 10b6557ab; -[SCSnapchattersSuggestedSnapchatterInfo isViewed] */

undefined1 FUN_10b6557a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6557ac; end: 10b6557b3; -[SCSnapchattersSuggestedSnapchatterInfo isRecentlyActive] */

undefined1 FUN_10b6557ac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6557b4; end: 10b6557bb; -[SCSnapchattersSuggestedSnapchatterInfo isHighQuality] */

undefined1 FUN_10b6557b4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b6557bc; end: 10b6557c3; -[SCSnapchattersSuggestedSnapchatterInfo impressionCount] */

undefined8 FUN_10b6557bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6557c4; end: 10b6557ff; -[SCSnapchattersSuggestedSnapchatterInfo .cxx_destruct] */

void FUN_10b6557c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b655800; end: 10b655887; -[SCSnapchattersContactSnapchatterInfo initWithPhoneNumbers:contactSource:] */

undefined1 *
FUN_10b655800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127075e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b655888; end: 10b6558ab; -[SCSnapchattersContactSnapchatterInfo copyWithZone:] */

undefined8 FUN_10b655888(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6558ac; end: 10b655917; -[SCSnapchattersContactSnapchatterInfo hash] */

undefined8 * FUN_10b6558ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b65599c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b65599c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b65599c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b65599c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b655918; end: 10b6559b7; -[SCSnapchattersContactSnapchatterInfo isEqual:] */

long FUN_10b655918(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b65599c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b65599c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b65599c;
    }
  }
  lVar3 = 1;
LAB_10b65599c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6559b8; end: 10b6559bf; -[SCSnapchattersContactSnapchatterInfo phoneNumbers] */

undefined8 FUN_10b6559b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6559c0; end: 10b6559c7; -[SCSnapchattersContactSnapchatterInfo contactSource] */

undefined4 FUN_10b6559c0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6559c8; end: 10b6559d3; -[SCSnapchattersContactSnapchatterInfo .cxx_destruct] */

void FUN_10b6559c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6559d4; end: 10b655a87; -[SCSnapchattersActionmojiInfo initWithPetImageUrl:showPetInPresence:petName:] */

undefined1 *
FUN_10b6559d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127075f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b655a88; end: 10b655aab; -[SCSnapchattersActionmojiInfo copyWithZone:] */

undefined8 FUN_10b655a88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b655aac; end: 10b655b23; -[SCSnapchattersActionmojiInfo hash] */

undefined8 * FUN_10b655aac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
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
LAB_10b655bb4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b655bc0;
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
          goto LAB_10b655bc0;
        }
        goto LAB_10b655bb4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b655bc0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b655b24; end: 10b655bdb; -[SCSnapchattersActionmojiInfo isEqual:] */

long FUN_10b655b24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b655bb4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b655bc0;
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
          goto LAB_10b655bc0;
        }
        goto LAB_10b655bb4;
      }
    }
    lVar3 = 0;
  }
LAB_10b655bc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b655bdc; end: 10b655be3; -[SCSnapchattersActionmojiInfo petImageUrl] */

undefined8 FUN_10b655bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b655be4; end: 10b655beb; -[SCSnapchattersActionmojiInfo showPetInPresence] */

undefined1 FUN_10b655be4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b655bec; end: 10b655bf3; -[SCSnapchattersActionmojiInfo petName] */

undefined8 FUN_10b655bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b655bf4; end: 10b655c23; -[SCSnapchattersActionmojiInfo .cxx_destruct] */

void FUN_10b655bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b655c24; end: 10b655cb3; -[SCSnapchattersPlusInfo initWithProfileTheme:isSubscriber:isMemoryOnlySubscriber:] */

undefined1 *
FUN_10b655c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127075f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b655cb4; end: 10b655cd7; -[SCSnapchattersPlusInfo copyWithZone:] */

undefined8 FUN_10b655cb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b655cd8; end: 10b655d4b; -[SCSnapchattersPlusInfo hash] */

undefined8 * FUN_10b655cd8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b655de0;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b655de0;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b655de0;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b655de0:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b655d4c; end: 10b655dfb; -[SCSnapchattersPlusInfo isEqual:] */

long FUN_10b655d4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b655de0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10b655de0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b655de0;
    }
  }
  lVar3 = 1;
LAB_10b655de0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b655dfc; end: 10b655e03; -[SCSnapchattersPlusInfo profileTheme] */

undefined8 FUN_10b655dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b655e04; end: 10b655e0b; -[SCSnapchattersPlusInfo isSubscriber] */

undefined1 FUN_10b655e04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b655e0c; end: 10b655e13; -[SCSnapchattersPlusInfo isMemoryOnlySubscriber] */

undefined1 FUN_10b655e0c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b655e14; end: 10b655e1f; -[SCSnapchattersPlusInfo .cxx_destruct] */

void FUN_10b655e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b655e20; end: 10b655e97; -[SCSnapchattersSaturnInfo initWithSaturnId:] */

undefined1 * FUN_10b655e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112707600;
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



/* Entry: 10b655e98; end: 10b655ebb; -[SCSnapchattersSaturnInfo copyWithZone:] */

undefined8 FUN_10b655e98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b655ebc; end: 10b655ec3; -[SCSnapchattersSaturnInfo hash] */

void FUN_10b655ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b655ec4; end: 10b655f53; -[SCSnapchattersSaturnInfo isEqual:] */

long FUN_10b655ec4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b655f38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b655f38;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b655f38;
    }
  }
  lVar3 = 1;
LAB_10b655f38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b655f54; end: 10b655f5b; -[SCSnapchattersSaturnInfo saturnId] */

undefined8 FUN_10b655f54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b655f5c; end: 10b655f67; -[SCSnapchattersSaturnInfo .cxx_destruct] */

void FUN_10b655f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b655f68; end: 10b65608b;  */

long FUN_10b655f68(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1c000();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1af00();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x20) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1af20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x28) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1ad40();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x30) = lVar1;
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b65608c; end: 10b6560d3;  */

void FUN_10b65608c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126b14b8);
    func_0x00010bff7be0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6560d4; end: 10b6561af;  */

long FUN_10b6560d4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x00010c078f60();
  *(char *)(param_1 + 1) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010c280020();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_2;
  func_0x00010c26e7a0();
  *(int *)(param_1 + 0x10) = (int)lVar1;
  lVar1 = param_2;
  func_0x00010c1173c0();
  *(int *)(param_1 + 0x14) = (int)lVar1;
  lVar1 = param_2;
  func_0x00010bf15520();
  *(int *)(param_1 + 0x18) = (int)lVar1;
  lVar1 = param_2;
  func_0x00010bf699c0();
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  lVar1 = param_2;
  func_0x00010c116d00();
  *(int *)(param_1 + 0x20) = (int)lVar1;
  lVar1 = param_2;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x28) = lVar1;
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b6561b0; end: 10b6561df;  */

long FUN_10b6561b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b6561e0; end: 10b656253;  */

long FUN_10b6561e0(long param_1,long param_2)

{
  *(bool *)param_1 = param_2 == 0;
  func_0x00010bf1a5c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30824(param_1 + 1,param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b656254; end: 10b6562d3;  */

void FUN_10b656254(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  _objc_retain(param_2);
  plVar3 = *(long **)(param_1 + 0x20);
  lVar1 = 4;
  __Znwm();
  FUN_10b6561e0();
  lVar2 = *plVar3;
  *plVar3 = lVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b6562d4; end: 10b65633f;  */

void FUN_10b6562d4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = 1;
  __Znwm();
  *(bool *)uVar1 = param_2 == 0;
  lVar2 = *(long *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = uVar1;
  if (lVar2 != 0) {
    __ZdlPv(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b656340; end: 10b6563c3;  */

long FUN_10b656340(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = param_1[1];
    param_1[1] = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    lVar2 = param_1[2];
    param_1[2] = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    lVar2 = 4;
    __Znwm();
    FUN_10b6561e0();
    lVar1 = *param_1;
    *param_1 = lVar2;
    if (lVar1 != 0) {
      __ZdlPv();
      lVar2 = *param_1;
    }
  }
  return lVar2;
}



/* Entry: 10b6563c4; end: 10b6564bb;  */

long * FUN_10b6563c4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b6564bc; end: 10b65659b;  */

long FUN_10b6564bc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x00010befb8c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 8) = lVar1;
  func_0x00010befcae0(param_3);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  lVar1 = param_3;
  func_0x00010c0737e0();
  *(char *)(param_2 + 0x18) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c073820();
  *(char *)(param_2 + 0x19) = (char)lVar1;
  func_0x00010c11fc60(param_3);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  lVar1 = param_3;
  func_0x00010bfdadc0();
  *(char *)(param_2 + 0x28) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c074d00();
  *(char *)(param_2 + 0x29) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010bf490c0();
  *(char *)(param_2 + 0x2a) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010bfea820();
  *(long *)(param_2 + 0x30) = lVar1;
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10b65659c; end: 10b656607;  */

void FUN_10b65659c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126c2818);
    func_0x00010bff2420(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b656608; end: 10b6566ff;  */

long FUN_10b656608(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_2;
  func_0x00010beec460();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = param_2;
  func_0x00010c083540();
  *(char *)(param_1 + 0x20) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010c07be00();
  *(char *)(param_1 + 0x21) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010c074ce0();
  *(char *)(param_1 + 0x22) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010bfea820();
  *(long *)(param_1 + 0x28) = lVar1;
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b656700; end: 10b65675f;  */

void FUN_10b656700(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126bb3f8);
    func_0x00010c04f5a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b656760; end: 10b656cc7;  */

long FUN_10b656760(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = param_2;
  func_0x00010c07a6a0();
  *(char *)(param_1 + 0x20) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x28) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b655f68(param_1 + 0x30,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x68) = lVar1;
  lVar1 = param_2;
  func_0x00010c06d560();
  *(char *)(param_1 + 0x70) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30838(param_1 + 0x78,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfebe20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b6564bc(param_1 + 0xc0,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c262240(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b656608(param_1 + 0xf8,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_1 + 0x128) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x130) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf4a480();
  *(int *)(param_1 + 0x138) = (int)lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x140) = lVar1;
  lVar1 = param_2;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x148) = lVar1;
  lVar1 = param_2;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x150) = lVar1;
  lVar1 = param_2;
  func_0x00010c102000();
  *(int *)(param_1 + 0x158) = (int)lVar1;
  lVar1 = param_2;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x160) = lVar1;
  lVar1 = param_2;
  func_0x00010bf5b820(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b6560d4(param_1 + 0x168,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_1 + 0x198) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c0fa820();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x1a0) = lVar2;
  lVar2 = lVar1;
  func_0x00010c238fc0();
  *(char *)(param_1 + 0x1a8) = (char)lVar2;
  lVar2 = lVar1;
  func_0x00010c0fa880();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x1b0) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x1b8) = lVar1;
  lVar1 = param_2;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_1 + 0x1c0) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c117320();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x1c8) = lVar2;
  lVar2 = lVar1;
  func_0x00010c080200();
  *(char *)(param_1 + 0x1d0) = (char)lVar2;
  lVar2 = lVar1;
  func_0x00010c077ac0();
  *(char *)(param_1 + 0x1d1) = (char)lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_1 + 0x1d8) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c149b40();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x1e0) = lVar2;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c06bb80();
  *(char *)(param_1 + 0x1e8) = (char)lVar1;
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b656cc8; end: 10b656cf7;  */

long FUN_10b656cc8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b656cf8; end: 10b6570f7;  */

void FUN_10b656cf8(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_b0;
  undefined *puStack_90;
  
  if (((*param_1 == '\x01') && (param_1[0x30] == '\x01')) && (param_1[0x78] == '\x01')) {
    iVar8 = (int)param_1 + 0x80;
    func_0x000107c3082c();
    if (((((iVar8 != 0) && (param_1[0xc0] == '\x01')) &&
         ((param_1[0xf8] == '\x01' && ((param_1[0x128] == '\x01' && (param_1[0x168] == '\x01'))))))
        && (param_1[0x198] == '\x01')) &&
       ((param_1[0x1c0] == '\x01' && ((param_1[0x1d8] & 1U) != 0)))) {
      puVar14 = (undefined *)0x0;
      goto LAB_10b65703c;
    }
  }
  puVar14 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  cVar6 = param_1[0x20];
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  pcVar9 = param_1 + 0x30;
  FUN_10b65608c();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  cVar7 = param_1[0x70];
  pcVar10 = param_1 + 0x78;
  func_0x000107c30840();
  _objc_retainAutoreleasedReturnValue();
  pcVar11 = param_1 + 0xc0;
  FUN_10b65659c();
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = param_1 + 0xf8;
  FUN_10b656700();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1[0x128] & 1U) == 0) {
    puStack_90 = PTR_PTR_1126bb3e0;
    _objc_alloc();
    func_0x00010c035b60();
  }
  else {
    puStack_90 = (undefined *)0x0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  uVar16 = *(undefined8 *)(param_1 + 0x150);
  uVar5 = *(undefined4 *)(param_1 + 0x158);
  if ((param_1[0x168] & 1U) == 0) {
    puStack_b0 = PTR_PTR_1126bb3e8;
    _objc_alloc();
    func_0x00010c01f2e0();
  }
  else {
    puStack_b0 = (undefined *)0x0;
  }
  if ((param_1[0x198] & 1U) == 0) {
    puVar17 = PTR_PTR_1126db2d0;
    _objc_alloc();
    func_0x00010c0357e0();
  }
  else {
    puVar17 = (undefined *)0x0;
  }
  if ((param_1[0x1c0] & 1U) == 0) {
    puVar19 = PTR_PTR_1126db2d8;
    _objc_alloc();
    func_0x00010c03b280();
  }
  else {
    puVar19 = (undefined *)0x0;
  }
  if ((param_1[0x1d8] & 1U) == 0) {
    puVar20 = PTR_PTR_1126db2e0;
    _objc_alloc();
    func_0x00010c041480();
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  func_0x00010c05c0e0(puVar14,param_2,uVar1,uVar3,uVar18,cVar6,uVar15,pcVar9,uVar13,cVar7,pcVar10,
                      pcVar11,pcVar12,puStack_90,uVar2,uVar4,uVar16,uVar5);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puStack_b0);
  _objc_release(puStack_90);
  _objc_release(pcVar12);
  _objc_release(pcVar11);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
LAB_10b65703c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10b6570f8; end: 10b657357;  */

void FUN_10b6570f8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  FUN_10b655f68(auStack_58);
  param_1[0x30] = auStack_58[0];
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uStack_50;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_48;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uStack_40;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uStack_38;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uStack_30;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uStack_28;
  _objc_release(uVar1);
  return;
}



/* Entry: 10b657358; end: 10b65735b; -[AdCtaCollectionCardType__Enum init] */

void FUN_10b657358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b65735c; end: 10b657363; -[SCAdCtaAnimationType__Enum init] */

void FUN_10b65735c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b657364; end: 10b657373; -[SCAdCtaButtonColor__Enum init] */

void FUN_10b657364(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133ba438,5);
  return;
}



/* Entry: 10b657374; end: 10b657377; -[SCAdCtaInfoCardType__Enum init] */

void FUN_10b657374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b657378; end: 10b65737f; -[SCAdCtaSpotlightType__Enum init] */

void FUN_10b657378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b657380; end: 10b657387; -[SCAdCtaType__Enum init] */

void FUN_10b657380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}


