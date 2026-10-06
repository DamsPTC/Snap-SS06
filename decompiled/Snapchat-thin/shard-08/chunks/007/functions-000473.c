/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064e4a3c; end: 1064e4b37;  */

long FUN_1064e4a3c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  uVar2 = param_4;
  dVar4 = param_1;
  func_0x00010bfebe20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  dVar5 = dVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (dVar4 <= param_1) {
    uVar1 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcae0();
    uVar2 = param_4;
    dVar4 = dVar5;
    func_0x00010bfebe20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar3 = -(ulong)(dVar4 < dVar5);
  }
  else {
    lVar3 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1064e4b38; end: 1064e4bdf; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _performRefetch] */

void FUN_1064e4b38(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064e4be0; end: 1064e4c0b;  */

void FUN_1064e4be0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be880c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e4c0c; end: 1064e4cb7; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _handleViewHasPartiallyAppearedAtLeastOnce] */

void FUN_1064e4c0c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bec6a20();
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064e4cb8; end: 1064e4ce3;  */

void FUN_1064e4cb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e4ce4; end: 1064e4d0b; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _viewHasPartiallyAppearedAtLeastOnce] */

void FUN_1064e4ce4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c19b060(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010be880d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refetch_11257f9d0);
  return;
}



/* Entry: 1064e4d0c; end: 1064e4e53; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _subscribeIncomingFriendsChange] */

void FUN_1064e4d0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1064e4e54; end: 1064e4e9b;  */

void FUN_1064e4e54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5f7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e4e9c; end: 1064e4edf; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _mergeAfterViewDidAppeared:] */

void FUN_1064e4e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfa3c40();
  if ((int)uVar1 != 0) {
    func_0x00010be5f8c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064e4ee0; end: 1064e4f83; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _processContactNonSnapchatters:contactPhotos:] */

void FUN_1064e4ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_1064e555c(param_3,param_4,uVar1,0,*(undefined8 *)(param_1 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064e4f84; end: 1064e4f8b; -[SCDefaultFriendsFeedAddFriendsDataCoordinator feedHasAppeared] */

undefined1 FUN_1064e4f84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 1064e4f8c; end: 1064e4f93; -[SCDefaultFriendsFeedAddFriendsDataCoordinator setFeedHasAppeared:] */

void FUN_1064e4f8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 1064e4f94; end: 1064e5077; -[SCDefaultFriendsFeedAddFriendsDataCoordinator .cxx_destruct] */

void FUN_1064e4f94(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1064e5078; end: 1064e5183; -[SCFriendsFeedAddFriendsData initWithSuggestedFriends:incomingFriends:contactSnapchatters:contactNonSnapchatters:] */

undefined1 *
FUN_1064e5078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1850;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
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



/* Entry: 1064e5184; end: 1064e51a7; -[SCFriendsFeedAddFriendsData copyWithZone:] */

undefined8 FUN_1064e5184(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1064e51a8; end: 1064e5233; -[SCFriendsFeedAddFriendsData hash] */

undefined8 * FUN_1064e51a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1064e52e4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1064e52f0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_1064e52f0;
            }
            goto LAB_1064e52e4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1064e52f0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1064e5234; end: 1064e530b; -[SCFriendsFeedAddFriendsData isEqual:] */

long FUN_1064e5234(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1064e52e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1064e52f0;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1064e52f0;
            }
            goto LAB_1064e52e4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1064e52f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1064e530c; end: 1064e5313; -[SCFriendsFeedAddFriendsData suggestedFriends] */

undefined8 FUN_1064e530c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064e5314; end: 1064e531b; -[SCFriendsFeedAddFriendsData incomingFriends] */

undefined8 FUN_1064e5314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064e531c; end: 1064e5323; -[SCFriendsFeedAddFriendsData contactSnapchatters] */

undefined8 FUN_1064e531c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064e5324; end: 1064e532b; -[SCFriendsFeedAddFriendsData contactNonSnapchatters] */

undefined8 FUN_1064e5324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1064e532c; end: 1064e5373; -[SCFriendsFeedAddFriendsData .cxx_destruct] */

void FUN_1064e532c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064e5374; end: 1064e555b;  */

long FUN_1064e5374(double param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c070aa0();
  lVar2 = param_4;
  func_0x00010c070aa0();
  if ((int)lVar1 == (int)lVar2) {
    func_0x00010c150c20(param_3);
    dVar6 = param_1;
    func_0x00010c150c20(param_4);
    if (param_1 == dVar6) {
      lVar1 = param_3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c08fa60();
      if ((lVar5 == 0) && (lVar5 = lVar2, func_0x00010c08fa60(), lVar5 == 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar1;
        func_0x00010c08fa60();
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        else {
          lVar5 = lVar2;
          func_0x00010c08fa60();
          if (lVar5 == 0) {
            lVar5 = -1;
          }
          else {
            func_0x00010bf35920(lVar1);
            func_0x00010bf35920(lVar2);
            puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c0989a0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf359c0();
            if (((int)puVar4 == 0) || (puVar4 = puVar3, func_0x00010bf359c0(), (int)puVar4 != 0)) {
              puVar4 = puVar3;
              func_0x00010bf359c0();
              if ((((ulong)puVar4 & 1) == 0) &&
                 (puVar4 = puVar3, func_0x00010bf359c0(), ((ulong)puVar4 & 1) != 0)) {
                lVar5 = 1;
              }
              else {
                lVar5 = lVar1;
                func_0x00010c09e440(lVar1);
              }
            }
            else {
              lVar5 = -1;
            }
            _objc_release(puVar3);
          }
        }
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c150c20();
      dVar7 = dVar6;
      func_0x00010c150c20(param_4);
      lVar5 = -1;
      if (dVar6 <= dVar7) {
        lVar5 = 1;
      }
    }
  }
  else {
    lVar5 = -1;
    if ((int)lVar1 != 0) {
      lVar5 = 1;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1064e555c; end: 1064e5a3f;  */

undefined1 *
FUN_1064e555c(long param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 unaff_x22;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_16c;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_178 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_5);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_188 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = param_5;
  puStack_190 = puVar12;
  if (param_3 == 0) {
    uStack_198 = 0;
  }
  else {
    func_0x000108c7c87c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_5;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uVar9;
    _objc_release(param_5);
  }
  lVar13 = lStack_188;
  uVar9 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  puStack_150 = (undefined *)0x0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lStack_188);
  ppuVar10 = &puStack_150;
  puVar11 = auStack_110;
  func_0x00010bf52a60();
  lStack_160 = lVar13;
  if (lVar13 != 0) {
    lVar13 = *plStack_140;
    uStack_180 = *(undefined8 *)PTR__NSLocaleCountryCode_11034aa58;
    lStack_1a8 = lVar13;
    uStack_19c = param_4;
    do {
      lVar15 = 0;
      do {
        if (*plStack_140 != lVar13) {
          _objc_enumerationMutation(lStack_188);
        }
        puVar12 = PTR_PTR_1126aed98;
        lVar16 = *(long *)(lStack_148 + lVar15 * 8);
        if (param_3 == 0) {
          uVar14 = 0;
        }
        else {
          lVar1 = lVar16;
          func_0x00010c0faf60(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfc9820(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          uVar2 = uStack_198;
          func_0x00010bf4b900();
          _objc_release(puVar12);
          uVar14 = (uint)uVar2 ^ 1;
        }
        lVar1 = lVar16;
        func_0x00010c0faf60();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        lVar3 = lVar1;
        func_0x00010c08fa60();
        puVar12 = PTR_PTR_1126aed98;
        if (lVar3 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(lVar1);
        _objc_release(lVar1);
        puVar4 = puVar12;
        func_0x00010c08fa60();
        if (puVar4 == (undefined *)0x0) {
          unaff_x22 = 0;
        }
        else {
          uVar2 = uStack_178;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = uVar2;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
        }
        if ((param_4 & uVar14 & 1) == 0) {
          puVar4 = PTR_PTR_1126bb3f0;
          _objc_alloc();
          lVar1 = lVar16;
          puStack_168 = puVar4;
          func_0x00010c0faf60(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar16;
          uStack_158 = unaff_x22;
          func_0x00010bf85d80(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0891c0(lVar16);
          lVar13 = lVar16;
          uVar2 = uVar9;
          func_0x00010c089f40();
          uStack_16c = (undefined4)lVar13;
          func_0x00010c089f60(lVar16);
          uVar17 = uVar2;
          func_0x00010c150c20(lVar16);
          lVar6 = lVar16;
          func_0x00010c0fb380();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar16;
          func_0x00010bfded40(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c260ca0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puStack_168;
          lStack_1c0 = lVar16;
          func_0x00010c0359a0(uVar9,uVar2,uVar17,puStack_168);
          _objc_release(lVar16);
          lVar13 = lStack_1a8;
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar3);
          unaff_x22 = uStack_158;
          _objc_release(lVar1);
          func_0x00010befa120(puStack_190);
          param_4 = uStack_19c;
          _objc_release(puVar4);
        }
        _objc_release(puVar12);
        _objc_release(unaff_x22);
        lVar15 = lVar15 + 1;
      } while (lStack_160 != lVar15);
      ppuVar10 = &puStack_150;
      puVar11 = auStack_110;
      lVar15 = lStack_188;
      func_0x00010bf52a60();
      lStack_160 = lVar15;
    } while (lVar15 != 0);
  }
  _objc_release(lStack_188);
  puVar12 = puStack_190;
  _objc_retain(puStack_190);
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar12 != (undefined *)0x0) {
    ppuVar10 = &PTR___NSConcreteGlobalBlock_110927bf0;
    puVar4 = puStack_190;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = puStack_190;
  uVar9 = uStack_1b0;
  _objc_release(puStack_190);
  _objc_release(uStack_198);
  _objc_release(puVar12);
  _objc_release(uVar9);
  _objc_release(uStack_178);
  lVar13 = lStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_200;
  puStack_1e8 = puVar12;
  uStack_1e0 = uVar9;
  pcStack_1c8 = FUN_1064e5a40;
  uStack_1f0 = unaff_x22;
  puStack_1d8 = puVar4;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  _objc_retain(puVar11);
  puStack_1f8 = PTR_PTR_1126f1858;
  lStack_200 = lVar13;
  _objc_msgSendSuper2(&lStack_200,PTR_s_init_1125d9248);
  if (plVar8 != (long *)0x0) {
    _objc_retain(puVar11);
    uVar9 = *(undefined8 *)((long)plVar8 + 8);
    *(undefined1 **)((long)plVar8 + 8) = puVar11;
    _objc_release(uVar9);
    _objc_retain(ppuVar10);
    uVar9 = *(undefined8 *)((long)plVar8 + 0x10);
    *(undefined ***)((long)plVar8 + 0x10) = ppuVar10;
    _objc_release(uVar9);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar10);
  return (undefined1 *)plVar8;
}



/* Entry: 1064e5a40; end: 1064e5ae3; -[SCFriendsFeedEntityGroupUpdatesProcessor initWithBlockedSnapchatterSynchronousFetcher:userId:] */

undefined1 *
FUN_1064e5a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1858;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064e5ae4; end: 1064e5b9b; -[SCFriendsFeedEntityGroupUpdatesProcessor processLeaveGroupWithId:transactionContext:] */

void FUN_1064e5ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar12 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar13 = 1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  FUN_1064ecd50(param_4,puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  puVar4 = PTR_PTR_1126cb208;
  _objc_alloc();
  puVar5 = (undefined1 *)puVar12;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar3 + 8);
  uVar2 = *(undefined8 *)(puVar3 + 0x10);
  _objc_retain(puVar12);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar6 = (undefined1 *)puVar12;
  func_0x000108ef2144(puVar12,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010050471c();
  puVar8 = puVar7;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000108ef5d54();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1064e5f0c;
  puStack_d0 = &UNK_110927c10;
  _objc_retain(puVar7);
  puStack_c8 = puVar7;
  _objc_retain(puVar9);
  puVar8 = puVar6;
  puStack_c0 = puVar9;
  func_0x000100504554(puVar6,&puStack_e8);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_1064e6140;
  uStack_f8 = 0x1064e6150;
  uStack_f0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  puVar10 = (undefined1 *)puVar12;
  func_0x00010c261460(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcca0();
  _objc_release(puVar10);
  puVar3 = PTR_PTR_1126cb218;
  _objc_alloc(PTR_PTR_1126cb218);
  puVar10 = (undefined1 *)puVar12;
  func_0x00010bfcef60(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018a80(puVar3);
  _objc_release(puVar10);
  puVar11 = PTR_PTR_1126cb220;
  func_0x00010bfcf400(PTR_PTR_1126cb220);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  _objc_release(puVar8);
  _objc_release(puStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar12);
  func_0x00010c012540(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar5);
  FUN_1064ec918(uVar13,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar13);
  _objc_release(puVar12);
  return;
}



/* Entry: 1064e5b9c; end: 1064e5edb; -[SCFriendsFeedEntityGroupUpdatesProcessor processChangeGroupInfoWithGroup:transactionContext:] */

void FUN_1064e5b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126cb208;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  uVar5 = param_3;
  func_0x000108ef2144(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010050471c();
  uVar7 = uVar6;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000108ef5d54();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1064e5f0c;
  puStack_90 = &UNK_110927c10;
  _objc_retain(uVar6);
  uStack_88 = uVar6;
  _objc_retain(uVar8);
  uVar7 = uVar5;
  uStack_80 = uVar8;
  func_0x000100504554(uVar5,&puStack_a8);
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1064e6140;
  uStack_b8 = 0x1064e6150;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  uVar9 = param_3;
  func_0x00010c261460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcca0();
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126cb218;
  _objc_alloc(PTR_PTR_1126cb218);
  uVar9 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018a80(puVar10);
  _objc_release(uVar9);
  puVar11 = PTR_PTR_1126cb220;
  func_0x00010bfcf400(PTR_PTR_1126cb220);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(uVar7);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010c012540(puVar3);
  _objc_release(puVar11);
  _objc_release(uVar4);
  FUN_1064ec918(param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e5edc; end: 1064e5f0b; -[SCFriendsFeedEntityGroupUpdatesProcessor .cxx_destruct] */

void FUN_1064e5edc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064e5f0c; end: 1064e613f;  */

void FUN_1064e5f0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1c000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf1af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b14c0;
  _objc_alloc(PTR_PTR_1126b14c0);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c020(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126cb210;
  _objc_alloc(PTR_PTR_1126cb210);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe1180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x000108ef5348(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff73c0(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064e6140; end: 1064e6157;  */

void FUN_1064e6140(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064e6158; end: 1064e61bb;  */

void FUN_1064e6158(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e61bc; end: 1064e61e3;  */

void FUN_1064e61bc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1064e61e4; end: 1064e61eb;  */

void FUN_1064e61e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_nameToDisplay_112612e68);
  return;
}



/* Entry: 1064e61ec; end: 1064e61f3; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator removeDataUpdateListener:] */

void FUN_1064e61ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1064e61f4; end: 1064e6223;  */

void FUN_1064e61f4(void)

{
  _objc_alloc(PTR_PTR_1126cb228);
  func_0x00010bff8e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064e6224; end: 1064e6227; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator handleDataRequest:] */

void FUN_1064e6224(void)

{
  return;
}



/* Entry: 1064e6228; end: 1064e63b7; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator didGroupsUpdateDataRequest:] */

void FUN_1064e6228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064e63b8;
  puStack_68 = &UNK_11085a5a8;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1064e6474;
  puStack_90 = &UNK_110842c58;
  _objc_copyWeak(auStack_88,auStack_58);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1064e64bc;
  puStack_b8 = &UNK_110843540;
  _objc_copyWeak(auStack_b0,auStack_58);
  _objc_copyWeak(auStack_d8,auStack_58);
  func_0x00010c0c0fa0(param_3);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e63b8; end: 1064e6473;  */

void FUN_1064e63b8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bee4880(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4880();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e6474; end: 1064e6503;  */

void FUN_1064e6474(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e6504; end: 1064e665f;  */

void FUN_1064e6504(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126b2990;
  func_0x00010bfb9f60(PTR_PTR_1126b2990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1064e6660; end: 1064e668b;  */

void FUN_1064e6660(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e668c; end: 1064e668f; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator didUpdateGroupsDataRequest:groupId:] */

void FUN_1064e668c(void)

{
  return;
}



/* Entry: 1064e6690; end: 1064e6783; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _didFinishLoadingGroups] */

void FUN_1064e6690(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2320(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064e6784; end: 1064e67f3;  */

void FUN_1064e6784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee4880(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e67f4; end: 1064e6917; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _updateWithGroups:] */

void FUN_1064e67f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1064e6918;
  puStack_60 = &UNK_1108851a8;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_80,auStack_48);
  func_0x00010c0f8500(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e6918; end: 1064e6a4b;  */

void FUN_1064e6918(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010be80960();
      _objc_release(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdcc080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e6a4c; end: 1064e6a7b;  */

void FUN_1064e6a4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e6a7c; end: 1064e6b9f; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _didBeginLeavingGroupWithId:] */

void FUN_1064e6a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1064e6ba0;
  puStack_60 = &UNK_1108851a8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_80,auStack_48);
  func_0x00010c0f8500(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e6ba0; end: 1064e6bf3;  */

void FUN_1064e6ba0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e6bf4; end: 1064e6c23;  */

void FUN_1064e6bf4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e6c24; end: 1064e6c93; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _processLeaveGroupWithId:transactionContext:] */

void FUN_1064e6c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114e40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064e6c94; end: 1064e6d03; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _processChangeInfoWithGroup:transactionContext:] */

void FUN_1064e6c94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1146e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064e6d04; end: 1064e6d47; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _announceLegacyGroupUpdatesWithDataRequest:] */

void FUN_1064e6d04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e6d48; end: 1064e6d9b; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator .cxx_destruct] */

void FUN_1064e6d48(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064e6d9c; end: 1064e6de3; -[SCFriendsFeedFetcher dealloc] */

void FUN_1064e6d9c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126f1868;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1064e6de4; end: 1064e6e23; -[SCFriendsFeedFetcher hasMoreFeedEntries] */

undefined8 FUN_1064e6de4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9360();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1064e6e24; end: 1064e6ea7; -[SCFriendsFeedFetcher hasMoreFeedEntriesObservable] */

void FUN_1064e6e24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bfbc400(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064e6ea8; end: 1064e6fa3;  */

void FUN_1064e6ea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1064e6fa4;
  uStack_30 = 0x1064e6fb4;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064e6fa4; end: 1064e6fbb;  */

void FUN_1064e6fa4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064e6fbc; end: 1064e705f;  */

void FUN_1064e6fbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfc56e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfd9380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e7060; end: 1064e70a7; -[SCFriendsFeedFetcher queryFeedParameters] */

void FUN_1064e7060(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064e70a8; end: 1064e70bb; -[SCFriendsFeedFetcher configureForWarmStart] */

void FUN_1064e70a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_valueWithCompletion_performer__1126836c0,
             &PTR___NSConcreteGlobalBlock_110927d40,0);
  return;
}



/* Entry: 1064e70bc; end: 1064e70ef;  */

void FUN_1064e70bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc56e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e70f0; end: 1064e721f; -[SCFriendsFeedFetcher loadMoreConversationsIfPossibleForceOnFailed:] */

void FUN_1064e70f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09d440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uVar4 = uVar3;
  uStack_50 = param_3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1064e7220; end: 1064e72c7;  */

void FUN_1064e7220(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be4e060(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1064e72c8; end: 1064e72cf;  */

void FUN_1064e72c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadingStatus_112604f20);
  return;
}



/* Entry: 1064e72d0; end: 1064e7387; -[SCFriendsFeedFetcher fetchAndSyncFeedForConversationIds:completion:] */

void FUN_1064e72d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064e7388;
  puStack_48 = &UNK_1108943c0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1,param_2,&puStack_60,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e7388; end: 1064e73c3;  */

void FUN_1064e7388(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc56e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e73c4; end: 1064e745b; -[SCFriendsFeedFetcher _loadMoreConversationsIfPossibleWithOverrideableForceOnFailed:loadingStatusProvider:] */

void FUN_1064e73c4(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfd9360();
  if (((param_3 & 1) != 0) || ((int)lVar1 != 0)) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf49000();
    _objc_release(uVar2);
    lVar1 = param_4;
    (**(code **)(param_4 + 0x10))();
    if (lVar1 == 3 && uVar3 < 3) {
      param_3 = 1;
    }
    func_0x00010be4e040(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064e745c; end: 1064e74af; -[SCFriendsFeedFetcher _loadMoreConversationsIfPossibleForceOnFailed:loadingStatusProvider:] */

void FUN_1064e745c(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))();
  if ((1 < param_4 - 1U) && (param_4 != 3 || param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be4e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadMoreConversations_1125711a0);
    return;
  }
  return;
}



/* Entry: 1064e74b0; end: 1064e75ab; -[SCFriendsFeedFetcher _loadMoreConversations] */

/* WARNING: Possible PIC construction at 0x0001064e74d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001064e74d4) */
/* WARNING: Removing unreachable block (ram,0x0001064e758c) */
/* WARNING: Removing unreachable block (ram,0x0001064e74e0) */

void FUN_1064e74b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateLoadingStatus_triggerType_112594540,1,6);
  return;
}



/* Entry: 1064e75ac; end: 1064e75e7;  */

void FUN_1064e75ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc56e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e75e8; end: 1064e7647; -[SCFriendsFeedFetcher .cxx_destruct] */

void FUN_1064e75e8(long param_1)

{
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



/* Entry: 1064e7648; end: 1064e7877;  */

void FUN_1064e7648(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110927df0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110927df0,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_1064e7648(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064e7878; end: 1064e790b;  */

void FUN_1064e7878(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_1064e7648(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064e790c; end: 1064e7b3b;  */

void FUN_1064e790c(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110927e40;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110927e40,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e7b3c;
  if (puVar2 != (undefined *)0x0) {
    plVar4 = *(long **)(puVar2 + 8);
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar4 + 0x28))(plVar4,&UNK_110927e90);
    if ((int)plVar4 != 0) {
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_110927e90,&uStack_e0,puVar1);
      puStack_c8 = (undefined1 *)&uStack_e0;
      func_0x00010007e5dc(&puStack_c8);
    }
  }
  return;
}



/* Entry: 1064e7b3c; end: 1064e7bd3;  */

void FUN_1064e7b3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110927e90);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_110927e90,&uStack_40,param_2);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 1064e7bd4; end: 1064e7e27;  */

void FUN_1064e7bd4(long param_1,undefined *param_2,undefined *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110927ee0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110927ee0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f38117f;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_110927ee0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110927ee0,&uStack_98,param_4 * 10);
      puStack_80 = &uStack_98;
      func_0x00010007e5dc(&puStack_80);
      lVar4 = 0;
      do {
        if ((&cStack_49)[lVar4] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1064e7e28;
  if (puVar3 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110927f30,&uStack_e0,puVar2);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1064e7e28; end: 1064e7e9f;  */

void FUN_1064e7e28(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110927f30,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064e7ea0; end: 1064e80cf;  */

void FUN_1064e7ea0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110927f80;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110927f80,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e80d0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f38117f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110927fd0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110927fd0,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1064e8300;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_110928020;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110928020,puVar9,uVar11);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1064e8530;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_240,puVar1);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar3 = &UNK_110928070;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110928070,&uStack_260,puVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar1;
  __Unwind_Resume();
  puStack_288 = (undefined1 *)&uStack_2a0;
  pcStack_268 = FUN_1064e86a4;
  if (puVar7 != (undefined *)0x0) {
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    puStack_280 = puVar1;
    puStack_278 = puVar4;
    pppuStack_270 = &pppuStack_1f0;
    (**(code **)(**(long **)(puVar7 + 8) + 0x18))
              (*(long **)(puVar7 + 8),&UNK_1109280c0,&uStack_2a0,puVar3);
    func_0x00010007e5dc(&puStack_288);
  }
  return;
}



/* Entry: 1064e80d0; end: 1064e82ff;  */

void FUN_1064e80d0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110927fd0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110927fd0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar5 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e8300;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f38117f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110928020;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110928020,puVar8,uVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar10 = 0;
    puVar5 = auStack_118;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1064e8530;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_110928070;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110928070,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1e8 = (undefined1 *)&uStack_200;
  pcStack_1c8 = FUN_1064e86a4;
  if (puVar3 != (undefined *)0x0) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar1;
    puStack_1d8 = puVar7;
    pppuStack_1d0 = &ppuStack_150;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1109280c0,&uStack_200,puVar4);
    func_0x00010007e5dc(&puStack_1e8);
  }
  return;
}



/* Entry: 1064e8300; end: 1064e852f;  */

void FUN_1064e8300(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110928020;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110928020,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e8530;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f38117f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_110928070;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110928070,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_1064e86a4;
  if (puVar4 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar3;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_1109280c0,&uStack_160,puVar5);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 1064e8530; end: 1064e86a3;  */

void FUN_1064e8530(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110928070;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110928070,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1064e86a4;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1109280c0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1064e86a4; end: 1064e871b;  */

void FUN_1064e86a4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109280c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064e871c; end: 1064e8793;  */

void FUN_1064e871c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110928110,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064e8794; end: 1064e8907;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e8794(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined1 *puStack_978;
  undefined8 *puStack_970;
  undefined8 *puStack_968;
  undefined8 ***pppuStack_960;
  code *pcStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined1 *puStack_938;
  undefined8 auStack_930 [2];
  char cStack_919;
  long lStack_918;
  undefined8 *puStack_910;
  undefined8 *puStack_908;
  undefined8 *puStack_900;
  undefined8 *puStack_8f8;
  undefined8 *puStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 ***pppuStack_8e0;
  code *pcStack_8d8;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 *puStack_8b0;
  undefined8 auStack_8a8 [2];
  char cStack_891;
  undefined8 auStack_890 [2];
  char cStack_879;
  long lStack_878;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  long *plStack_858;
  undefined8 *puStack_850;
  undefined8 *puStack_848;
  undefined8 ***pppuStack_840;
  code *pcStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 *puStack_818;
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 ***pppuStack_7c0;
  code *pcStack_7b8;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 *puStack_790;
  undefined8 auStack_788 [2];
  char cStack_771;
  undefined8 auStack_770 [2];
  char cStack_759;
  long lStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  long *plStack_738;
  undefined8 *puStack_730;
  undefined8 *puStack_728;
  undefined8 ***pppuStack_720;
  code *pcStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 *puStack_6f8;
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 ***pppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 *puStack_670;
  undefined8 auStack_668 [3];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 auStack_5c8 [3];
  undefined8 auStack_5b0 [2];
  char cStack_599;
  long lStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  undefined8 auStack_530 [3];
  undefined1 auStack_518 [24];
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [3];
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [3];
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_110928160;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = puVar3;
      param_4 = param_3;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_100;
  pcStack_88 = FUN_1064e8908;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar10 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = (undefined8 *)&UNK_1109281b0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar10 = puVar9;
    param_4 = puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar10 = puVar9;
      param_4 = puVar4;
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_108 = FUN_1064e8a7c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar3 = puVar10;
  puVar9 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar10);
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar6 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_160,puVar2);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar2 = (undefined8 *)&UNK_110928200;
    puVar3 = &uStack_198;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_180 = &uStack_198;
    func_0x00010007e5dc(&puStack_180);
    lVar14 = 0;
    puVar9 = param_4;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar4 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar11 = &uStack_220;
  pcStack_1a8 = FUN_1064e8c68;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar10 = puVar3;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar2);
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar4);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar6 = (undefined8 *)&UNK_110928250;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar10 = puVar11;
    puVar9 = puVar3;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar10 = puVar11;
      puVar9 = puVar3;
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_228 = FUN_1064e8ddc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar3 = puVar10;
  puVar7 = puVar9;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar6);
  _objc_retain(puVar10);
  puVar11 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_280,puVar2);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar2 = (undefined8 *)&UNK_1109282a0;
    unaff_x23 = &uStack_2b8;
    puVar3 = &uStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar14 = 0;
    puVar11 = auStack_298;
    puVar7 = puVar9;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar6);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_2c8 = FUN_1064e900c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar8 = puVar3;
  puVar13 = puVar7;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar11;
  puStack_2e8 = puVar4;
  puStack_2e0 = puVar10;
  puStack_2d8 = puVar6;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_320,puVar4);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar9 = (undefined8 *)&UNK_1109282f0;
    unaff_x23 = &uStack_358;
    puVar8 = &uStack_358;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_340 = unaff_x23;
    func_0x00010007e5dc(&puStack_340);
    lVar14 = 0;
    puVar4 = auStack_338;
    puVar13 = puVar7;
    do {
      if ((&cStack_309)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_368 = FUN_1064e923c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar11 = puVar8;
  puVar5 = puVar13;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar4;
  puStack_388 = puVar6;
  puStack_380 = puVar3;
  puStack_378 = puVar2;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x24 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar8 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_3c0,puVar1);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar10 = (undefined8 *)&UNK_110928340;
    puVar8 = &uStack_3f8;
    puVar11 = &uStack_3f8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_3e0 = puVar8;
    func_0x00010007e5dc(&puStack_3e0);
    lVar14 = 0;
    puVar2 = auStack_3d8;
    puVar5 = puVar13;
    do {
      if ((&cStack_3a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar7 = puVar4;
  __Unwind_Resume();
  pcStack_408 = FUN_1064e9424;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar6 = puVar11;
  puVar13 = puVar5;
  puStack_440 = unaff_x24;
  puStack_438 = unaff_x23;
  puStack_430 = puVar8;
  puStack_428 = puVar2;
  puStack_420 = puVar4;
  puStack_418 = puVar9;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(puVar10);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar10;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_478;
    func_0x00010002b838(auStack_478,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar11 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_460,puVar1);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x00010007e1e8(&uStack_498,auStack_478,&lStack_448,2);
    puVar3 = (undefined8 *)&UNK_110928390;
    puVar11 = &uStack_498;
    puVar6 = &uStack_498;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_480 = puVar11;
    func_0x00010007e5dc(&puStack_480);
    lVar14 = 0;
    puVar2 = auStack_478;
    puVar13 = puVar5;
    do {
      if ((&cStack_449)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar4 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar8 = puVar4;
  __Unwind_Resume();
  puVar12 = &uStack_550;
  pcStack_4a8 = FUN_1064e960c;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar7 = puVar6;
  puVar5 = puVar13;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar11;
  puStack_4c8 = puVar2;
  puStack_4c0 = puVar4;
  puStack_4b8 = puVar10;
  pppuStack_4b0 = &pppuStack_410;
  _objc_retain(puVar6);
  _objc_retain(puVar13);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar3 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_530,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_518,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      unaff_x24 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_500,unaff_x24);
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    func_0x00010007e1e8(&uStack_550,auStack_530,&lStack_4e8,3);
    puVar9 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_550,param_5);
    puStack_538 = (undefined1 *)&uStack_550;
    func_0x00010007e5dc(&puStack_538);
    lVar14 = 0;
    puVar3 = auStack_530;
    puVar7 = puVar12;
    puVar5 = param_5;
    do {
      if ((&cStack_4e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar13);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  puVar4 = auStack_530;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puVar4);
  _objc_release(puVar13);
  _objc_release(puVar6);
  puVar8 = puVar2;
  __Unwind_Resume();
  pcStack_558 = FUN_1064e9880;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar11 = puVar7;
  puVar12 = puVar5;
  puStack_590 = unaff_x24;
  puStack_588 = puVar4;
  puStack_580 = puVar3;
  puStack_578 = puVar2;
  puStack_570 = puVar13;
  puStack_568 = puVar6;
  pppuStack_560 = &pppuStack_4b0;
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar10 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar4 = puVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x24 = auStack_5c8;
      func_0x00010002b838(auStack_5c8,puVar4);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar7 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_5b0,puVar1);
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      func_0x00010007e1e8(&uStack_5e8,auStack_5c8,&lStack_598,2);
      puVar10 = (undefined8 *)&UNK_110928430;
      puVar7 = &uStack_5e8;
      puVar11 = &uStack_5e8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar11,puVar5);
      puStack_5d0 = puVar7;
      func_0x00010007e5dc(&puStack_5d0);
      lVar14 = 0;
      puVar8 = auStack_5c8;
      puVar12 = puVar5;
      do {
        if ((&cStack_599)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5b0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_5f8 = FUN_1064e9a88;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar6 = puVar11;
  puVar13 = puVar12;
  puStack_630 = unaff_x24;
  puStack_628 = puVar4;
  puStack_620 = puVar7;
  puStack_618 = puVar8;
  puStack_610 = puVar2;
  puStack_608 = puVar9;
  pppuStack_600 = &pppuStack_560;
  _objc_retain(puVar10);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    puVar3 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar5[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar4 = puVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x24 = auStack_668;
      func_0x00010002b838(auStack_668,puVar4);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_650,puVar1);
      uStack_688 = 0;
      uStack_680 = 0;
      uStack_678 = 0;
      func_0x00010007e1e8(&uStack_688,auStack_668,&lStack_638,2);
      puVar3 = (undefined8 *)&UNK_110928480;
      puVar11 = &uStack_688;
      puVar6 = &uStack_688;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar6,puVar12);
      puStack_670 = puVar11;
      func_0x00010007e5dc(&puStack_670);
      lVar14 = 0;
      puVar5 = auStack_668;
      puVar13 = puVar12;
      do {
        if ((&cStack_639)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_710;
  pcStack_698 = FUN_1064e9c90;
  lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar8 = puVar6;
  puStack_6d0 = unaff_x24;
  puStack_6c8 = puVar4;
  puStack_6c0 = puVar11;
  puStack_6b8 = puVar5;
  puStack_6b0 = puVar2;
  puStack_6a8 = puVar10;
  pppuStack_6a0 = &pppuStack_600;
  _objc_retain(puVar3);
  plVar15 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar4 = auStack_6f0;
    func_0x00010002b838(auStack_6f0,puVar2);
    uStack_710 = 0;
    uStack_708 = 0;
    uStack_700 = 0;
    func_0x00010007e1e8(&uStack_710,auStack_6f0,&lStack_6d8,1);
    puVar9 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_710,puVar6);
    puStack_6f8 = (undefined1 *)&uStack_710;
    func_0x00010007e5dc(&puStack_6f8);
    puVar8 = puVar12;
    puVar13 = puVar6;
    puVar11 = &uStack_710;
    if (cStack_6d9 < '\0') {
      __ZdlPv(auStack_6f0[0]);
      puVar8 = puVar12;
      puVar13 = puVar6;
      puVar11 = &uStack_710;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_718 = FUN_1064e9e04;
  lStack_758 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar9;
  puVar10 = puVar8;
  puVar5 = puVar13;
  puStack_750 = unaff_x24;
  puStack_748 = puVar4;
  puStack_740 = puVar11;
  plStack_738 = plVar15;
  puStack_730 = puVar2;
  puStack_728 = puVar3;
  pppuStack_720 = &pppuStack_6a0;
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar4 = auStack_788;
    func_0x00010002b838(auStack_788,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_770,puVar2);
    uStack_7a8 = 0;
    uStack_7a0 = 0;
    uStack_798 = 0;
    func_0x00010007e1e8(&uStack_7a8,auStack_788,&lStack_758,2);
    puVar6 = (undefined8 *)&UNK_110928520;
    puVar9 = &uStack_7a8;
    puVar10 = &uStack_7a8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar10,puVar13);
    puStack_790 = puVar9;
    func_0x00010007e5dc(&puStack_790);
    lVar14 = 0;
    puVar2 = auStack_788;
    puVar5 = puVar13;
    do {
      if ((&cStack_759)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_770 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_758) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_771 < '\0') {
      __ZdlPv(auStack_788[0]);
    }
    _objc_release(puVar8);
    puVar7 = puVar3;
    __Unwind_Resume();
    puVar12 = &uStack_830;
    pcStack_7b8 = FUN_1064e9ff0;
    lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar6;
    puVar13 = puVar10;
    puStack_7f0 = unaff_x24;
    puStack_7e8 = puVar4;
    puStack_7e0 = puVar9;
    puStack_7d8 = puVar2;
    puStack_7d0 = puVar3;
    puStack_7c8 = puVar8;
    pppuStack_7c0 = &pppuStack_720;
    _objc_retain(puVar6);
    plVar15 = (long *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar7[1];
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      puVar4 = auStack_810;
      func_0x00010002b838(auStack_810,puVar2);
      uStack_830 = 0;
      uStack_828 = 0;
      uStack_820 = 0;
      func_0x00010007e1e8(&uStack_830,auStack_810,&lStack_7f8,1);
      puVar11 = (undefined8 *)&UNK_1109285c0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_830,puVar10);
      puStack_818 = (undefined1 *)&uStack_830;
      func_0x00010007e5dc(&puStack_818);
      puVar13 = puVar12;
      puVar5 = puVar10;
      puVar9 = &uStack_830;
      if (cStack_7f9 < '\0') {
        __ZdlPv(auStack_810[0]);
        puVar13 = puVar12;
        puVar5 = puVar10;
        puVar9 = &uStack_830;
      }
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7f8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar7 = puVar2;
    __Unwind_Resume();
    pcStack_838 = FUN_1064ea164;
    lStack_878 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar11;
    puVar10 = puVar13;
    puStack_870 = unaff_x24;
    puStack_868 = puVar4;
    puStack_860 = puVar9;
    plStack_858 = plVar15;
    puStack_850 = puVar2;
    puStack_848 = puVar6;
    pppuStack_840 = &pppuStack_7c0;
    _objc_retain(puVar13);
    puVar2 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar7[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      puVar4 = auStack_8a8;
      func_0x00010002b838(auStack_8a8,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_890,puVar2);
      uStack_8c8 = 0;
      uStack_8c0 = 0;
      uStack_8b8 = 0;
      func_0x00010007e1e8(&uStack_8c8,auStack_8a8,&lStack_878,2);
      puVar3 = (undefined8 *)&UNK_110928610;
      puVar11 = &uStack_8c8;
      puVar10 = &uStack_8c8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar10,puVar5);
      puStack_8b0 = puVar11;
      func_0x00010007e5dc(&puStack_8b0);
      lVar14 = 0;
      puVar2 = auStack_8a8;
      do {
        if ((&cStack_879)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_890 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar6 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_878) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_891 < '\0') {
      __ZdlPv(auStack_8a8[0]);
    }
    _objc_release(puVar13);
    puVar7 = puVar6;
    __Unwind_Resume();
    pcStack_8d8 = FUN_1064ea350;
    lStack_918 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar3;
    puStack_910 = unaff_x24;
    puStack_908 = puVar4;
    puStack_900 = puVar11;
    puStack_8f8 = puVar2;
    puStack_8f0 = puVar6;
    puStack_8e8 = puVar13;
    pppuStack_8e0 = &pppuStack_840;
    _objc_retain(puVar3);
    if (puVar7 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar7[1];
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_930,puVar2);
      uStack_950 = 0;
      uStack_948 = 0;
      uStack_940 = 0;
      func_0x00010007e1e8(&uStack_950,auStack_930,&lStack_918,1);
      puVar9 = (undefined8 *)&UNK_1109286b0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_950,puVar10);
      puStack_938 = (undefined1 *)&uStack_950;
      func_0x00010007e5dc(&puStack_938);
      if (cStack_919 < '\0') {
        __ZdlPv(auStack_930[0]);
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_918) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      puVar4 = puVar2;
      __Unwind_Resume();
      puStack_978 = (undefined1 *)&uStack_990;
      pcStack_958 = FUN_1064ea4c4;
      if (puVar4 != (undefined8 *)0x0) {
        uStack_990 = 0;
        uStack_988 = 0;
        uStack_980 = 0;
        puStack_970 = puVar2;
        puStack_968 = puVar3;
        pppuStack_960 = &pppuStack_8e0;
        (**(code **)(*(long *)puVar4[1] + 0x18))
                  ((long *)puVar4[1],&UNK_110928700,&uStack_990,puVar9);
        func_0x00010007e5dc(&puStack_978);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e8908; end: 1064e8a7b;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e8908(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined1 *puStack_8f8;
  undefined8 *puStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 ***pppuStack_8e0;
  code *pcStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined1 *puStack_8b8;
  undefined8 auStack_8b0 [2];
  char cStack_899;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 *puStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 *puStack_830;
  undefined8 auStack_828 [2];
  char cStack_811;
  undefined8 auStack_810 [2];
  char cStack_7f9;
  long lStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 *puStack_7e0;
  long *plStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 ***pppuStack_7c0;
  code *pcStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 *puStack_798;
  undefined8 auStack_790 [2];
  char cStack_779;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 *puStack_710;
  undefined8 auStack_708 [2];
  char cStack_6f1;
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  long *plStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 ***pppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 ***pppuStack_620;
  code *pcStack_618;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 auStack_5e8 [3];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 ***pppuStack_580;
  code *pcStack_578;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 *puStack_550;
  undefined8 auStack_548 [3];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 auStack_4b0 [3];
  undefined1 auStack_498 [24];
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [3];
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [3];
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_1109281b0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1064e8a7c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar11 = puVar5;
  puVar9 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar2 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar8 = (undefined8 *)&UNK_110928200;
    puVar11 = &uStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar14 = 0;
    puVar9 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  __Unwind_Resume();
  puVar10 = &uStack_1a0;
  pcStack_128 = FUN_1064e8c68;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar3 = puVar11;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar8);
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar5 = (undefined8 *)&UNK_110928250;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar3 = puVar10;
    puVar9 = puVar11;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar3 = puVar10;
      puVar9 = puVar11;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  pcStack_1a8 = FUN_1064e8ddc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  puVar11 = puVar3;
  puVar6 = puVar9;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  puVar10 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar2 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar2);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar8 = (undefined8 *)&UNK_1109282a0;
    unaff_x23 = &uStack_238;
    puVar11 = &uStack_238;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar14 = 0;
    puVar10 = auStack_218;
    puVar6 = puVar9;
    do {
      if ((&cStack_1e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_1064e900c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  puVar7 = puVar11;
  puVar13 = puVar6;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar10;
  puStack_268 = puVar2;
  puStack_260 = puVar3;
  puStack_258 = puVar5;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_2a0,puVar2);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar9 = (undefined8 *)&UNK_1109282f0;
    unaff_x23 = &uStack_2d8;
    puVar7 = &uStack_2d8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2c0);
    lVar14 = 0;
    puVar2 = auStack_2b8;
    puVar13 = puVar6;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar11);
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1064e923c;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar10 = puVar7;
  puVar4 = puVar13;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar2;
  puStack_308 = puVar5;
  puStack_300 = puVar11;
  puStack_2f8 = puVar8;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x24 = auStack_358;
    func_0x00010002b838(auStack_358,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_340,puVar1);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar3 = (undefined8 *)&UNK_110928340;
    puVar7 = &uStack_378;
    puVar10 = &uStack_378;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_360 = puVar7;
    func_0x00010007e5dc(&puStack_360);
    lVar14 = 0;
    puVar2 = auStack_358;
    puVar4 = puVar13;
    do {
      if ((&cStack_329)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_388 = FUN_1064e9424;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puVar13 = puVar4;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar7;
  puStack_3a8 = puVar2;
  puStack_3a0 = puVar5;
  puStack_398 = puVar9;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(puVar3);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_3f8;
    func_0x00010002b838(auStack_3f8,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_3e0,puVar1);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
    puVar8 = (undefined8 *)&UNK_110928390;
    puVar10 = &uStack_418;
    puVar11 = &uStack_418;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_400 = puVar10;
    func_0x00010007e5dc(&puStack_400);
    lVar14 = 0;
    puVar2 = auStack_3f8;
    puVar13 = puVar4;
    do {
      if ((&cStack_3c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar7 = puVar5;
  __Unwind_Resume();
  puVar12 = &uStack_4d0;
  pcStack_428 = FUN_1064e960c;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  puVar6 = puVar11;
  puVar4 = puVar13;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar10;
  puStack_448 = puVar2;
  puStack_440 = puVar5;
  puStack_438 = puVar3;
  pppuStack_430 = &pppuStack_390;
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar8 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_4b0,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_498,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      unaff_x24 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_480,unaff_x24);
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    func_0x00010007e1e8(&uStack_4d0,auStack_4b0,&lStack_468,3);
    puVar9 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_4d0,param_5);
    puStack_4b8 = (undefined1 *)&uStack_4d0;
    func_0x00010007e5dc(&puStack_4b8);
    lVar14 = 0;
    puVar8 = auStack_4b0;
    puVar6 = puVar12;
    puVar4 = param_5;
    do {
      if ((&cStack_469)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar13);
  puVar2 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  puVar5 = auStack_4b0;
  do {
    puVar8 = puVar8 + -3;
  } while (puVar8 != puVar5);
  _objc_release(puVar13);
  _objc_release(puVar11);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_4d8 = FUN_1064e9880;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar10 = puVar6;
  puVar12 = puVar4;
  puStack_510 = unaff_x24;
  puStack_508 = puVar5;
  puStack_500 = puVar8;
  puStack_4f8 = puVar2;
  puStack_4f0 = puVar13;
  puStack_4e8 = puVar11;
  pppuStack_4e0 = &pppuStack_430;
  _objc_retain(puVar9);
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    puVar3 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar7[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar5 = puVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x24 = auStack_548;
      func_0x00010002b838(auStack_548,puVar5);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar6 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_530,puVar1);
      uStack_568 = 0;
      uStack_560 = 0;
      uStack_558 = 0;
      func_0x00010007e1e8(&uStack_568,auStack_548,&lStack_518,2);
      puVar3 = (undefined8 *)&UNK_110928430;
      puVar6 = &uStack_568;
      puVar10 = &uStack_568;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar10,puVar4);
      puStack_550 = puVar6;
      func_0x00010007e5dc(&puStack_550);
      lVar14 = 0;
      puVar7 = auStack_548;
      puVar12 = puVar4;
      do {
        if ((&cStack_519)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_578 = FUN_1064e9a88;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar3;
    puVar11 = puVar10;
    puVar13 = puVar12;
    puStack_5b0 = unaff_x24;
    puStack_5a8 = puVar5;
    puStack_5a0 = puVar6;
    puStack_598 = puVar7;
    puStack_590 = puVar2;
    puStack_588 = puVar9;
    pppuStack_580 = &pppuStack_4e0;
    _objc_retain(puVar3);
    if (puVar4 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar4[1];
      puVar8 = (undefined8 *)&UNK_110928480;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = (long *)puVar4[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar5 = puVar3;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        unaff_x24 = auStack_5e8;
        func_0x00010002b838(auStack_5e8,puVar5);
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar10 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        func_0x00010002b838(auStack_5d0,puVar1);
        uStack_608 = 0;
        uStack_600 = 0;
        uStack_5f8 = 0;
        func_0x00010007e1e8(&uStack_608,auStack_5e8,&lStack_5b8,2);
        puVar8 = (undefined8 *)&UNK_110928480;
        puVar10 = &uStack_608;
        puVar11 = &uStack_608;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar11,puVar12);
        puStack_5f0 = puVar10;
        func_0x00010007e5dc(&puStack_5f0);
        lVar14 = 0;
        puVar4 = auStack_5e8;
        puVar13 = puVar12;
        do {
          if ((&cStack_5b9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar6 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_690;
    pcStack_618 = FUN_1064e9c90;
    lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar8;
    puVar7 = puVar11;
    puStack_650 = unaff_x24;
    puStack_648 = puVar5;
    puStack_640 = puVar10;
    puStack_638 = puVar4;
    puStack_630 = puVar2;
    puStack_628 = puVar3;
    pppuStack_620 = &pppuStack_580;
    _objc_retain(puVar8);
    plVar15 = (long *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar6[1];
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar5 = auStack_670;
      func_0x00010002b838(auStack_670,puVar2);
      uStack_690 = 0;
      uStack_688 = 0;
      uStack_680 = 0;
      func_0x00010007e1e8(&uStack_690,auStack_670,&lStack_658,1);
      puVar9 = (undefined8 *)&UNK_1109284d0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_690,puVar11);
      puStack_678 = (undefined1 *)&uStack_690;
      func_0x00010007e5dc(&puStack_678);
      puVar7 = puVar12;
      puVar13 = puVar11;
      puVar10 = &uStack_690;
      if (cStack_659 < '\0') {
        __ZdlPv(auStack_670[0]);
        puVar7 = puVar12;
        puVar13 = puVar11;
        puVar10 = &uStack_690;
      }
    }
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_698 = FUN_1064e9e04;
    lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar9;
    puVar11 = puVar7;
    puVar4 = puVar13;
    puStack_6d0 = unaff_x24;
    puStack_6c8 = puVar5;
    puStack_6c0 = puVar10;
    plStack_6b8 = plVar15;
    puStack_6b0 = puVar2;
    puStack_6a8 = puVar8;
    pppuStack_6a0 = &pppuStack_620;
    _objc_retain(puVar7);
    puVar2 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar6[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar9 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      puVar5 = auStack_708;
      func_0x00010002b838(auStack_708,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_6f0,puVar2);
      uStack_728 = 0;
      uStack_720 = 0;
      uStack_718 = 0;
      func_0x00010007e1e8(&uStack_728,auStack_708,&lStack_6d8,2);
      puVar3 = (undefined8 *)&UNK_110928520;
      puVar9 = &uStack_728;
      puVar11 = &uStack_728;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar11,puVar13);
      puStack_710 = puVar9;
      func_0x00010007e5dc(&puStack_710);
      lVar14 = 0;
      puVar2 = auStack_708;
      puVar4 = puVar13;
      do {
        if ((&cStack_6d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar8 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      if (cStack_6f1 < '\0') {
        __ZdlPv(auStack_708[0]);
      }
      _objc_release(puVar7);
      puVar6 = puVar8;
      __Unwind_Resume();
      puVar12 = &uStack_7b0;
      pcStack_738 = FUN_1064e9ff0;
      lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar3;
      puVar13 = puVar11;
      puStack_770 = unaff_x24;
      puStack_768 = puVar5;
      puStack_760 = puVar9;
      puStack_758 = puVar2;
      puStack_750 = puVar8;
      puStack_748 = puVar7;
      pppuStack_740 = &pppuStack_6a0;
      _objc_retain(puVar3);
      plVar15 = (long *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar6[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar2 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        puVar5 = auStack_790;
        func_0x00010002b838(auStack_790,puVar2);
        uStack_7b0 = 0;
        uStack_7a8 = 0;
        uStack_7a0 = 0;
        func_0x00010007e1e8(&uStack_7b0,auStack_790,&lStack_778,1);
        puVar10 = (undefined8 *)&UNK_1109285c0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_7b0,puVar11);
        puStack_798 = (undefined1 *)&uStack_7b0;
        func_0x00010007e5dc(&puStack_798);
        puVar13 = puVar12;
        puVar4 = puVar11;
        puVar9 = &uStack_7b0;
        if (cStack_779 < '\0') {
          __ZdlPv(auStack_790[0]);
          puVar13 = puVar12;
          puVar4 = puVar11;
          puVar9 = &uStack_7b0;
        }
      }
      puVar2 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_778) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(puVar3);
        puVar6 = puVar2;
        __Unwind_Resume();
        pcStack_7b8 = FUN_1064ea164;
        lStack_7f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar8 = puVar10;
        puVar11 = puVar13;
        puStack_7f0 = unaff_x24;
        puStack_7e8 = puVar5;
        puStack_7e0 = puVar9;
        plStack_7d8 = plVar15;
        puStack_7d0 = puVar2;
        puStack_7c8 = puVar3;
        pppuStack_7c0 = &pppuStack_740;
        _objc_retain(puVar13);
        puVar2 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          plVar15 = (long *)puVar6[1];
          puVar1 = &UNK_10f3812c5;
          if ((int)puVar10 == 0) {
            puVar1 = &UNK_10f3812ca;
          }
          puVar5 = auStack_828;
          func_0x00010002b838(auStack_828,puVar1);
          _objc_retain(puVar13);
          if (puVar13 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f38117f;
          }
          else {
            _objc_retainAutorelease(puVar13);
            puVar2 = puVar13;
            func_0x00010bdc3520(puVar13);
          }
          _objc_release(puVar13);
          func_0x00010002b838(auStack_810,puVar2);
          uStack_848 = 0;
          uStack_840 = 0;
          uStack_838 = 0;
          func_0x00010007e1e8(&uStack_848,auStack_828,&lStack_7f8,2);
          puVar8 = (undefined8 *)&UNK_110928610;
          puVar10 = &uStack_848;
          puVar11 = &uStack_848;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar11,puVar4);
          puStack_830 = puVar10;
          func_0x00010007e5dc(&puStack_830);
          lVar14 = 0;
          puVar2 = auStack_828;
          do {
            if ((&cStack_7f9)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_810 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x30);
        }
        puVar3 = puVar13;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7f8) {
          ___stack_chk_fail();
          _objc_release(puVar13);
          if (cStack_811 < '\0') {
            __ZdlPv(auStack_828[0]);
          }
          _objc_release(puVar13);
          puVar6 = puVar3;
          __Unwind_Resume();
          pcStack_858 = FUN_1064ea350;
          lStack_898 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar9 = puVar8;
          puStack_890 = unaff_x24;
          puStack_888 = puVar5;
          puStack_880 = puVar10;
          puStack_878 = puVar2;
          puStack_870 = puVar3;
          puStack_868 = puVar13;
          pppuStack_860 = &pppuStack_7c0;
          _objc_retain(puVar8);
          if (puVar6 != (undefined8 *)0x0) {
            plVar15 = (long *)puVar6[1];
            _objc_retain(puVar8);
            if (puVar8 == (undefined8 *)0x0) {
              puVar2 = (undefined8 *)&UNK_10f38117f;
            }
            else {
              puVar2 = puVar8;
              _objc_retainAutorelease(puVar8);
              func_0x00010bdc3520();
            }
            _objc_release(puVar8);
            func_0x00010002b838(auStack_8b0,puVar2);
            uStack_8d0 = 0;
            uStack_8c8 = 0;
            uStack_8c0 = 0;
            func_0x00010007e1e8(&uStack_8d0,auStack_8b0,&lStack_898,1);
            puVar9 = (undefined8 *)&UNK_1109286b0;
            (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_8d0,puVar11);
            puStack_8b8 = (undefined1 *)&uStack_8d0;
            func_0x00010007e5dc(&puStack_8b8);
            if (cStack_899 < '\0') {
              __ZdlPv(auStack_8b0[0]);
            }
          }
          puVar2 = puVar8;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_898) {
            ___stack_chk_fail();
            _objc_release(puVar8);
            _objc_release(puVar8);
            puVar5 = puVar2;
            __Unwind_Resume();
            puStack_8f8 = (undefined1 *)&uStack_910;
            pcStack_8d8 = FUN_1064ea4c4;
            if (puVar5 != (undefined8 *)0x0) {
              uStack_910 = 0;
              uStack_908 = 0;
              uStack_900 = 0;
              puStack_8f0 = puVar2;
              puStack_8e8 = puVar8;
              pppuStack_8e0 = &pppuStack_860;
              (**(code **)(*(long *)puVar5[1] + 0x18))
                        ((long *)puVar5[1],&UNK_110928700,&uStack_910,puVar9);
              func_0x00010007e5dc(&puStack_8f8);
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e8a7c; end: 1064e8c67;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e8a7c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined1 *puStack_878;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 *puStack_838;
  undefined8 auStack_830 [2];
  char cStack_819;
  long lStack_818;
  undefined8 *puStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 ***pppuStack_7e0;
  code *pcStack_7d8;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 auStack_7a8 [2];
  char cStack_791;
  undefined8 auStack_790 [2];
  char cStack_779;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  long *plStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 *puStack_690;
  undefined8 auStack_688 [2];
  char cStack_671;
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  long *plStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 ***pppuStack_620;
  code *pcStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 *puStack_5f8;
  undefined8 auStack_5f0 [2];
  char cStack_5d9;
  long lStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 ***pppuStack_5a0;
  code *pcStack_598;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 *puStack_570;
  undefined8 auStack_568 [3];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 auStack_4c8 [3];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 *puStack_438;
  undefined8 auStack_430 [3];
  undefined1 auStack_418 [24];
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [3];
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [3];
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f3812c5;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_110928200;
    puVar5 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar4 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar11 = &uStack_120;
  pcStack_a8 = FUN_1064e8c68;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar10 = puVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = (undefined8 *)&UNK_110928250;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar10 = puVar11;
    puVar4 = puVar5;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar10 = puVar11;
      puVar4 = puVar5;
    }
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_128 = FUN_1064e8ddc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar3 = puVar10;
  puVar8 = puVar4;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  puVar11 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar2 = (undefined8 *)&UNK_1109282a0;
    unaff_x23 = &uStack_1b8;
    puVar3 = &uStack_1b8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar14 = 0;
    puVar11 = auStack_198;
    puVar8 = puVar4;
    do {
      if ((&cStack_169)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar5 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1064e900c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar9 = puVar3;
  puVar13 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar11;
  puStack_1e8 = puVar5;
  puStack_1e0 = puVar10;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar5);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar4 = (undefined8 *)&UNK_1109282f0;
    unaff_x23 = &uStack_258;
    puVar9 = &uStack_258;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar14 = 0;
    puVar5 = auStack_238;
    puVar13 = puVar8;
    do {
      if ((&cStack_209)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_268 = FUN_1064e923c;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar11 = puVar9;
  puVar6 = puVar13;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar5;
  puStack_288 = puVar7;
  puStack_280 = puVar3;
  puStack_278 = puVar2;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_2c0,puVar1);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar10 = (undefined8 *)&UNK_110928340;
    puVar9 = &uStack_2f8;
    puVar11 = &uStack_2f8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2e0 = puVar9;
    func_0x00010007e5dc(&puStack_2e0);
    lVar14 = 0;
    puVar2 = auStack_2d8;
    puVar6 = puVar13;
    do {
      if ((&cStack_2a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar8 = puVar5;
    __Unwind_Resume();
    pcStack_308 = FUN_1064e9424;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar10;
    puVar7 = puVar11;
    puVar13 = puVar6;
    puStack_340 = unaff_x24;
    puStack_338 = unaff_x23;
    puStack_330 = puVar9;
    puStack_328 = puVar2;
    puStack_320 = puVar5;
    puStack_318 = puVar4;
    pppuStack_310 = &pppuStack_270;
    _objc_retain(puVar10);
    puVar2 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        unaff_x23 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        unaff_x23 = puVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x24 = auStack_378;
      func_0x00010002b838(auStack_378,unaff_x23);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_360,puVar1);
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_388 = 0;
      func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
      puVar3 = (undefined8 *)&UNK_110928390;
      puVar11 = &uStack_398;
      puVar7 = &uStack_398;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_380 = puVar11;
      func_0x00010007e5dc(&puStack_380);
      lVar14 = 0;
      puVar2 = auStack_378;
      puVar13 = puVar6;
      do {
        if ((&cStack_349)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar5 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar10);
    puVar9 = puVar5;
    __Unwind_Resume();
    puVar12 = &uStack_450;
    pcStack_3a8 = FUN_1064e960c;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar3;
    puVar8 = puVar7;
    puVar6 = puVar13;
    puStack_3e0 = unaff_x24;
    puStack_3d8 = unaff_x23;
    puStack_3d0 = puVar11;
    puStack_3c8 = puVar2;
    puStack_3c0 = puVar5;
    puStack_3b8 = puVar10;
    pppuStack_3b0 = &pppuStack_310;
    _objc_retain(puVar7);
    _objc_retain(puVar13);
    if (puVar9 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar9[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar3 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_430,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_418,puVar2);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        unaff_x24 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar13);
        unaff_x24 = puVar13;
        func_0x00010bdc3520();
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_400,unaff_x24);
      uStack_450 = 0;
      uStack_448 = 0;
      uStack_440 = 0;
      func_0x00010007e1e8(&uStack_450,auStack_430,&lStack_3e8,3);
      puVar4 = (undefined8 *)&UNK_1109283e0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_450,param_5);
      puStack_438 = (undefined1 *)&uStack_450;
      func_0x00010007e5dc(&puStack_438);
      lVar14 = 0;
      puVar3 = auStack_430;
      puVar8 = puVar12;
      puVar6 = param_5;
      do {
        if ((&cStack_3e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x48);
    }
    _objc_release(puVar13);
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    puVar5 = auStack_430;
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != puVar5);
    _objc_release(puVar13);
    _objc_release(puVar7);
    puVar9 = puVar2;
    __Unwind_Resume();
    pcStack_458 = FUN_1064e9880;
    lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar4;
    puVar11 = puVar8;
    puVar12 = puVar6;
    puStack_490 = unaff_x24;
    puStack_488 = puVar5;
    puStack_480 = puVar3;
    puStack_478 = puVar2;
    puStack_470 = puVar13;
    puStack_468 = puVar7;
    pppuStack_460 = &pppuStack_3b0;
    _objc_retain(puVar4);
    if (puVar9 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar9[1];
      puVar10 = (undefined8 *)&UNK_110928430;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = (long *)puVar9[1];
        _objc_retain(puVar4);
        if (puVar4 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar5 = puVar4;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(puVar4);
        unaff_x24 = auStack_4c8;
        func_0x00010002b838(auStack_4c8,puVar5);
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar8 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        func_0x00010002b838(auStack_4b0,puVar1);
        uStack_4e8 = 0;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        func_0x00010007e1e8(&uStack_4e8,auStack_4c8,&lStack_498,2);
        puVar10 = (undefined8 *)&UNK_110928430;
        puVar8 = &uStack_4e8;
        puVar11 = &uStack_4e8;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar11,puVar6);
        puStack_4d0 = puVar8;
        func_0x00010007e5dc(&puStack_4d0);
        lVar14 = 0;
        puVar9 = auStack_4c8;
        puVar12 = puVar6;
        do {
          if ((&cStack_499)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
    }
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_4f8 = FUN_1064e9a88;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar10;
    puVar7 = puVar11;
    puVar13 = puVar12;
    puStack_530 = unaff_x24;
    puStack_528 = puVar5;
    puStack_520 = puVar8;
    puStack_518 = puVar9;
    puStack_510 = puVar2;
    puStack_508 = puVar4;
    pppuStack_500 = &pppuStack_460;
    _objc_retain(puVar10);
    if (puVar6 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar6[1];
      puVar3 = (undefined8 *)&UNK_110928480;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = (long *)puVar6[1];
        _objc_retain(puVar10);
        if (puVar10 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar5 = puVar10;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        unaff_x24 = auStack_568;
        func_0x00010002b838(auStack_568,puVar5);
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar11 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        func_0x00010002b838(auStack_550,puVar1);
        uStack_588 = 0;
        uStack_580 = 0;
        uStack_578 = 0;
        func_0x00010007e1e8(&uStack_588,auStack_568,&lStack_538,2);
        puVar3 = (undefined8 *)&UNK_110928480;
        puVar11 = &uStack_588;
        puVar7 = &uStack_588;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar7,puVar12);
        puStack_570 = puVar11;
        func_0x00010007e5dc(&puStack_570);
        lVar14 = 0;
        puVar6 = auStack_568;
        puVar13 = puVar12;
        do {
          if ((&cStack_539)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
    }
    puVar2 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_538) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      _objc_release(puVar10);
      puVar8 = puVar2;
      __Unwind_Resume();
      puVar12 = &uStack_610;
      pcStack_598 = FUN_1064e9c90;
      lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar3;
      puVar9 = puVar7;
      puStack_5d0 = unaff_x24;
      puStack_5c8 = puVar5;
      puStack_5c0 = puVar11;
      puStack_5b8 = puVar6;
      puStack_5b0 = puVar2;
      puStack_5a8 = puVar10;
      pppuStack_5a0 = &pppuStack_500;
      _objc_retain(puVar3);
      plVar15 = (long *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar8[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar2 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        puVar5 = auStack_5f0;
        func_0x00010002b838(auStack_5f0,puVar2);
        uStack_610 = 0;
        uStack_608 = 0;
        uStack_600 = 0;
        func_0x00010007e1e8(&uStack_610,auStack_5f0,&lStack_5d8,1);
        puVar4 = (undefined8 *)&UNK_1109284d0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_610,puVar7);
        puStack_5f8 = (undefined1 *)&uStack_610;
        func_0x00010007e5dc(&puStack_5f8);
        puVar9 = puVar12;
        puVar13 = puVar7;
        puVar11 = &uStack_610;
        if (cStack_5d9 < '\0') {
          __ZdlPv(auStack_5f0[0]);
          puVar9 = puVar12;
          puVar13 = puVar7;
          puVar11 = &uStack_610;
        }
      }
      puVar2 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      puVar8 = puVar2;
      __Unwind_Resume();
      pcStack_618 = FUN_1064e9e04;
      lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar4;
      puVar10 = puVar9;
      puVar6 = puVar13;
      puStack_650 = unaff_x24;
      puStack_648 = puVar5;
      puStack_640 = puVar11;
      plStack_638 = plVar15;
      puStack_630 = puVar2;
      puStack_628 = puVar3;
      pppuStack_620 = &pppuStack_5a0;
      _objc_retain(puVar9);
      puVar2 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar8[1];
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar4 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        puVar5 = auStack_688;
        func_0x00010002b838(auStack_688,puVar1);
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar2 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_670,puVar2);
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        func_0x00010007e1e8(&uStack_6a8,auStack_688,&lStack_658,2);
        puVar7 = (undefined8 *)&UNK_110928520;
        puVar4 = &uStack_6a8;
        puVar10 = &uStack_6a8;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar10,puVar13);
        puStack_690 = puVar4;
        func_0x00010007e5dc(&puStack_690);
        lVar14 = 0;
        puVar2 = auStack_688;
        puVar6 = puVar13;
        do {
          if ((&cStack_659)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_670 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
      puVar3 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar9);
      if (cStack_671 < '\0') {
        __ZdlPv(auStack_688[0]);
      }
      _objc_release(puVar9);
      puVar8 = puVar3;
      __Unwind_Resume();
      puVar12 = &uStack_730;
      pcStack_6b8 = FUN_1064e9ff0;
      lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = puVar7;
      puVar13 = puVar10;
      puStack_6f0 = unaff_x24;
      puStack_6e8 = puVar5;
      puStack_6e0 = puVar4;
      puStack_6d8 = puVar2;
      puStack_6d0 = puVar3;
      puStack_6c8 = puVar9;
      pppuStack_6c0 = &pppuStack_620;
      _objc_retain(puVar7);
      plVar15 = (long *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar8[1];
        _objc_retain(puVar7);
        if (puVar7 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar2 = puVar7;
          _objc_retainAutorelease(puVar7);
          func_0x00010bdc3520();
        }
        _objc_release(puVar7);
        puVar5 = auStack_710;
        func_0x00010002b838(auStack_710,puVar2);
        uStack_730 = 0;
        uStack_728 = 0;
        uStack_720 = 0;
        func_0x00010007e1e8(&uStack_730,auStack_710,&lStack_6f8,1);
        puVar11 = (undefined8 *)&UNK_1109285c0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_730,puVar10);
        puStack_718 = (undefined1 *)&uStack_730;
        func_0x00010007e5dc(&puStack_718);
        puVar13 = puVar12;
        puVar6 = puVar10;
        puVar4 = &uStack_730;
        if (cStack_6f9 < '\0') {
          __ZdlPv(auStack_710[0]);
          puVar13 = puVar12;
          puVar6 = puVar10;
          puVar4 = &uStack_730;
        }
      }
      puVar2 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6f8) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        _objc_release(puVar7);
        puVar8 = puVar2;
        __Unwind_Resume();
        pcStack_738 = FUN_1064ea164;
        lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = puVar11;
        puVar10 = puVar13;
        puStack_770 = unaff_x24;
        puStack_768 = puVar5;
        puStack_760 = puVar4;
        plStack_758 = plVar15;
        puStack_750 = puVar2;
        puStack_748 = puVar7;
        pppuStack_740 = &pppuStack_6c0;
        _objc_retain(puVar13);
        puVar2 = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          plVar15 = (long *)puVar8[1];
          puVar1 = &UNK_10f3812c5;
          if ((int)puVar11 == 0) {
            puVar1 = &UNK_10f3812ca;
          }
          puVar5 = auStack_7a8;
          func_0x00010002b838(auStack_7a8,puVar1);
          _objc_retain(puVar13);
          if (puVar13 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f38117f;
          }
          else {
            _objc_retainAutorelease(puVar13);
            puVar2 = puVar13;
            func_0x00010bdc3520(puVar13);
          }
          _objc_release(puVar13);
          func_0x00010002b838(auStack_790,puVar2);
          uStack_7c8 = 0;
          uStack_7c0 = 0;
          uStack_7b8 = 0;
          func_0x00010007e1e8(&uStack_7c8,auStack_7a8,&lStack_778,2);
          puVar3 = (undefined8 *)&UNK_110928610;
          puVar11 = &uStack_7c8;
          puVar10 = &uStack_7c8;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar10,puVar6);
          puStack_7b0 = puVar11;
          func_0x00010007e5dc(&puStack_7b0);
          lVar14 = 0;
          puVar2 = auStack_7a8;
          do {
            if ((&cStack_779)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_790 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x30);
        }
        puVar4 = puVar13;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_778) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(puVar13);
        if (cStack_791 < '\0') {
          __ZdlPv(auStack_7a8[0]);
        }
        _objc_release(puVar13);
        puVar8 = puVar4;
        __Unwind_Resume();
        pcStack_7d8 = FUN_1064ea350;
        lStack_818 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar7 = puVar3;
        puStack_810 = unaff_x24;
        puStack_808 = puVar5;
        puStack_800 = puVar11;
        puStack_7f8 = puVar2;
        puStack_7f0 = puVar4;
        puStack_7e8 = puVar13;
        pppuStack_7e0 = &pppuStack_740;
        _objc_retain(puVar3);
        if (puVar8 != (undefined8 *)0x0) {
          plVar15 = (long *)puVar8[1];
          _objc_retain(puVar3);
          if (puVar3 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f38117f;
          }
          else {
            puVar2 = puVar3;
            _objc_retainAutorelease(puVar3);
            func_0x00010bdc3520();
          }
          _objc_release(puVar3);
          func_0x00010002b838(auStack_830,puVar2);
          uStack_850 = 0;
          uStack_848 = 0;
          uStack_840 = 0;
          func_0x00010007e1e8(&uStack_850,auStack_830,&lStack_818,1);
          puVar7 = (undefined8 *)&UNK_1109286b0;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_850,puVar10);
          puStack_838 = (undefined1 *)&uStack_850;
          func_0x00010007e5dc(&puStack_838);
          if (cStack_819 < '\0') {
            __ZdlPv(auStack_830[0]);
          }
        }
        puVar2 = puVar3;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_818) {
          ___stack_chk_fail();
          _objc_release(puVar3);
          _objc_release(puVar3);
          puVar5 = puVar2;
          __Unwind_Resume();
          puStack_878 = (undefined1 *)&uStack_890;
          pcStack_858 = FUN_1064ea4c4;
          if (puVar5 != (undefined8 *)0x0) {
            uStack_890 = 0;
            uStack_888 = 0;
            uStack_880 = 0;
            puStack_870 = puVar2;
            puStack_868 = puVar3;
            pppuStack_860 = &pppuStack_7e0;
            (**(code **)(*(long *)puVar5[1] + 0x18))
                      ((long *)puVar5[1],&UNK_110928700,&uStack_890,puVar7);
            func_0x00010007e5dc(&puStack_878);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e8c68; end: 1064e8ddb;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e8c68(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 ***pppuStack_7c0;
  code *pcStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 *puStack_798;
  undefined8 auStack_790 [2];
  char cStack_779;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 *puStack_710;
  undefined8 auStack_708 [2];
  char cStack_6f1;
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  long *plStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 ***pppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 ***pppuStack_620;
  code *pcStack_618;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 auStack_5e8 [2];
  char cStack_5d1;
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  long *plStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 ***pppuStack_580;
  code *pcStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 *puStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 auStack_4c8 [3];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 *puStack_430;
  undefined8 auStack_428 [3];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  undefined8 auStack_390 [3];
  undefined1 auStack_378 [24];
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [3];
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [3];
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_110928250;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1064e8ddc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar11 = puVar5;
  puVar6 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  puVar10 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar3);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar9 = (undefined8 *)&UNK_1109282a0;
    unaff_x23 = &uStack_118;
    puVar11 = &uStack_118;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar15 = 0;
    puVar10 = auStack_f8;
    puVar6 = param_4;
    do {
      if ((&cStack_c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar5);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_1064e900c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar7 = puVar11;
  puVar13 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  puStack_148 = puVar3;
  puStack_140 = puVar5;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar8 = (undefined8 *)&UNK_1109282f0;
    unaff_x23 = &uStack_1b8;
    puVar7 = &uStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar15 = 0;
    puVar2 = auStack_198;
    puVar13 = puVar6;
    do {
      if ((&cStack_169)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar11);
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1064e923c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar10 = puVar7;
  puVar4 = puVar13;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar2;
  puStack_1e8 = puVar5;
  puStack_1e0 = puVar11;
  puStack_1d8 = puVar9;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar6[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_220,puVar1);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar3 = (undefined8 *)&UNK_110928340;
    puVar7 = &uStack_258;
    puVar10 = &uStack_258;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_240 = puVar7;
    func_0x00010007e5dc(&puStack_240);
    lVar15 = 0;
    puVar2 = auStack_238;
    puVar4 = puVar13;
    do {
      if ((&cStack_209)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_268 = FUN_1064e9424;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puVar13 = puVar4;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar7;
  puStack_288 = puVar2;
  puStack_280 = puVar5;
  puStack_278 = puVar8;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar3);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar6[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_2c0,puVar1);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar9 = (undefined8 *)&UNK_110928390;
    puVar10 = &uStack_2f8;
    puVar11 = &uStack_2f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_2e0 = puVar10;
    func_0x00010007e5dc(&puStack_2e0);
    lVar15 = 0;
    puVar2 = auStack_2d8;
    puVar13 = puVar4;
    do {
      if ((&cStack_2a9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar7 = puVar5;
  __Unwind_Resume();
  puVar12 = &uStack_3b0;
  pcStack_308 = FUN_1064e960c;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar9;
  puVar8 = puVar11;
  puVar4 = puVar13;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar10;
  puStack_328 = puVar2;
  puStack_320 = puVar5;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar7[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_390,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_378,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      unaff_x24 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_360,unaff_x24);
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    func_0x00010007e1e8(&uStack_3b0,auStack_390,&lStack_348,3);
    puVar6 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109283e0,&uStack_3b0,param_5);
    puStack_398 = (undefined1 *)&uStack_3b0;
    func_0x00010007e5dc(&puStack_398);
    lVar15 = 0;
    puVar9 = auStack_390;
    puVar8 = puVar12;
    puVar4 = param_5;
    do {
      if ((&cStack_349)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x48);
  }
  _objc_release(puVar13);
  puVar2 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  puVar5 = auStack_390;
  do {
    puVar9 = puVar9 + -3;
  } while (puVar9 != puVar5);
  _objc_release(puVar13);
  _objc_release(puVar11);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_3b8 = FUN_1064e9880;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar10 = puVar8;
  puVar12 = puVar4;
  puStack_3f0 = unaff_x24;
  puStack_3e8 = puVar5;
  puStack_3e0 = puVar9;
  puStack_3d8 = puVar2;
  puStack_3d0 = puVar13;
  puStack_3c8 = puVar11;
  pppuStack_3c0 = &pppuStack_310;
  _objc_retain(puVar6);
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar7[1];
    puVar3 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = (long *)puVar7[1];
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar5 = puVar6;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      unaff_x24 = auStack_428;
      func_0x00010002b838(auStack_428,puVar5);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar8 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_410,puVar1);
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      func_0x00010007e1e8(&uStack_448,auStack_428,&lStack_3f8,2);
      puVar3 = (undefined8 *)&UNK_110928430;
      puVar8 = &uStack_448;
      puVar10 = &uStack_448;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110928430,puVar10,puVar4);
      puStack_430 = puVar8;
      func_0x00010007e5dc(&puStack_430);
      lVar15 = 0;
      puVar7 = auStack_428;
      puVar12 = puVar4;
      do {
        if ((&cStack_3f9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_458 = FUN_1064e9a88;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puVar13 = puVar12;
  puStack_490 = unaff_x24;
  puStack_488 = puVar5;
  puStack_480 = puVar8;
  puStack_478 = puVar7;
  puStack_470 = puVar2;
  puStack_468 = puVar6;
  pppuStack_460 = &pppuStack_3c0;
  _objc_retain(puVar3);
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    puVar9 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = (long *)puVar4[1];
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar5 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      unaff_x24 = auStack_4c8;
      func_0x00010002b838(auStack_4c8,puVar5);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar10 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_4b0,puVar1);
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      func_0x00010007e1e8(&uStack_4e8,auStack_4c8,&lStack_498,2);
      puVar9 = (undefined8 *)&UNK_110928480;
      puVar10 = &uStack_4e8;
      puVar11 = &uStack_4e8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110928480,puVar11,puVar12);
      puStack_4d0 = puVar10;
      func_0x00010007e5dc(&puStack_4d0);
      lVar15 = 0;
      puVar4 = auStack_4c8;
      puVar13 = puVar12;
      do {
        if ((&cStack_499)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_570;
  pcStack_4f8 = FUN_1064e9c90;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar9;
  puVar7 = puVar11;
  puStack_530 = unaff_x24;
  puStack_528 = puVar5;
  puStack_520 = puVar10;
  puStack_518 = puVar4;
  puStack_510 = puVar2;
  puStack_508 = puVar3;
  pppuStack_500 = &pppuStack_460;
  _objc_retain(puVar9);
  plVar14 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar8[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    puVar5 = auStack_550;
    func_0x00010002b838(auStack_550,puVar2);
    uStack_570 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    func_0x00010007e1e8(&uStack_570,auStack_550,&lStack_538,1);
    puVar6 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109284d0,&uStack_570,puVar11);
    puStack_558 = (undefined1 *)&uStack_570;
    func_0x00010007e5dc(&puStack_558);
    puVar7 = puVar12;
    puVar13 = puVar11;
    puVar10 = &uStack_570;
    if (cStack_539 < '\0') {
      __ZdlPv(auStack_550[0]);
      puVar7 = puVar12;
      puVar13 = puVar11;
      puVar10 = &uStack_570;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar8 = puVar2;
  __Unwind_Resume();
  pcStack_578 = FUN_1064e9e04;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar11 = puVar7;
  puVar4 = puVar13;
  puStack_5b0 = unaff_x24;
  puStack_5a8 = puVar5;
  puStack_5a0 = puVar10;
  plStack_598 = plVar14;
  puStack_590 = puVar2;
  puStack_588 = puVar9;
  pppuStack_580 = &pppuStack_500;
  _objc_retain(puVar7);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar8[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar6 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar5 = auStack_5e8;
    func_0x00010002b838(auStack_5e8,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_5d0,puVar2);
    uStack_608 = 0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    func_0x00010007e1e8(&uStack_608,auStack_5e8,&lStack_5b8,2);
    puVar3 = (undefined8 *)&UNK_110928520;
    puVar6 = &uStack_608;
    puVar11 = &uStack_608;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110928520,puVar11,puVar13);
    puStack_5f0 = puVar6;
    func_0x00010007e5dc(&puStack_5f0);
    lVar15 = 0;
    puVar2 = auStack_5e8;
    puVar4 = puVar13;
    do {
      if ((&cStack_5b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_5d1 < '\0') {
    __ZdlPv(auStack_5e8[0]);
  }
  _objc_release(puVar7);
  puVar8 = puVar9;
  __Unwind_Resume();
  puVar12 = &uStack_690;
  pcStack_618 = FUN_1064e9ff0;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar3;
  puVar13 = puVar11;
  puStack_650 = unaff_x24;
  puStack_648 = puVar5;
  puStack_640 = puVar6;
  puStack_638 = puVar2;
  puStack_630 = puVar9;
  puStack_628 = puVar7;
  pppuStack_620 = &pppuStack_580;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar8[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar5 = auStack_670;
    func_0x00010002b838(auStack_670,puVar2);
    uStack_690 = 0;
    uStack_688 = 0;
    uStack_680 = 0;
    func_0x00010007e1e8(&uStack_690,auStack_670,&lStack_658,1);
    puVar10 = (undefined8 *)&UNK_1109285c0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109285c0,&uStack_690,puVar11);
    puStack_678 = (undefined1 *)&uStack_690;
    func_0x00010007e5dc(&puStack_678);
    puVar13 = puVar12;
    puVar4 = puVar11;
    puVar6 = &uStack_690;
    if (cStack_659 < '\0') {
      __ZdlPv(auStack_670[0]);
      puVar13 = puVar12;
      puVar4 = puVar11;
      puVar6 = &uStack_690;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar2;
  __Unwind_Resume();
  pcStack_698 = FUN_1064ea164;
  lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar10;
  puVar11 = puVar13;
  puStack_6d0 = unaff_x24;
  puStack_6c8 = puVar5;
  puStack_6c0 = puVar6;
  plStack_6b8 = plVar14;
  puStack_6b0 = puVar2;
  puStack_6a8 = puVar3;
  pppuStack_6a0 = &pppuStack_620;
  _objc_retain(puVar13);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar8[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar5 = auStack_708;
    func_0x00010002b838(auStack_708,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_6f0,puVar2);
    uStack_728 = 0;
    uStack_720 = 0;
    uStack_718 = 0;
    func_0x00010007e1e8(&uStack_728,auStack_708,&lStack_6d8,2);
    puVar9 = (undefined8 *)&UNK_110928610;
    puVar10 = &uStack_728;
    puVar11 = &uStack_728;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110928610,puVar11,puVar4);
    puStack_710 = puVar10;
    func_0x00010007e5dc(&puStack_710);
    lVar15 = 0;
    puVar2 = auStack_708;
    do {
      if ((&cStack_6d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  puVar3 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_6f1 < '\0') {
    __ZdlPv(auStack_708[0]);
  }
  _objc_release(puVar13);
  puVar8 = puVar3;
  __Unwind_Resume();
  pcStack_738 = FUN_1064ea350;
  lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar9;
  puStack_770 = unaff_x24;
  puStack_768 = puVar5;
  puStack_760 = puVar10;
  puStack_758 = puVar2;
  puStack_750 = puVar3;
  puStack_748 = puVar13;
  pppuStack_740 = &pppuStack_6a0;
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar8[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_790,puVar2);
    uStack_7b0 = 0;
    uStack_7a8 = 0;
    uStack_7a0 = 0;
    func_0x00010007e1e8(&uStack_7b0,auStack_790,&lStack_778,1);
    puVar6 = (undefined8 *)&UNK_1109286b0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109286b0,&uStack_7b0,puVar11);
    puStack_798 = (undefined1 *)&uStack_7b0;
    func_0x00010007e5dc(&puStack_798);
    if (cStack_779 < '\0') {
      __ZdlPv(auStack_790[0]);
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_778) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    puVar5 = puVar2;
    __Unwind_Resume();
    puStack_7d8 = (undefined1 *)&uStack_7f0;
    pcStack_7b8 = FUN_1064ea4c4;
    if (puVar5 != (undefined8 *)0x0) {
      uStack_7f0 = 0;
      uStack_7e8 = 0;
      uStack_7e0 = 0;
      puStack_7d0 = puVar2;
      puStack_7c8 = puVar9;
      pppuStack_7c0 = &pppuStack_740;
      (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_110928700,&uStack_7f0,puVar6);
      func_0x00010007e5dc(&puStack_7d8);
    }
    return;
  }
  return;
}



/* Entry: 1064e8ddc; end: 1064e900b;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e8ddc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 *puStack_758;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 *puStack_690;
  undefined8 auStack_688 [2];
  char cStack_671;
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  long *plStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 ***pppuStack_620;
  code *pcStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 *puStack_5f8;
  undefined8 auStack_5f0 [2];
  char cStack_5d9;
  long lStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 ***pppuStack_5a0;
  code *pcStack_598;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 *puStack_570;
  undefined8 auStack_568 [2];
  char cStack_551;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  long *plStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 ***pppuStack_480;
  code *pcStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined8 auStack_448 [3];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 auStack_3a8 [3];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 *puStack_318;
  undefined8 auStack_310 [3];
  undefined1 auStack_2f8 [24];
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [3];
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [3];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_1109282a0;
    unaff_x23 = &uStack_98;
    puVar8 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar5 = auStack_78;
    puVar6 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e900c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar10 = puVar8;
  puVar9 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar5);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar11 = (undefined8 *)&UNK_1109282f0;
    unaff_x23 = &uStack_138;
    puVar10 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar5 = auStack_118;
    puVar9 = puVar6;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar8);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_1064e923c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar4 = puVar10;
  puVar13 = puVar9;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar6;
  puStack_160 = puVar8;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar11);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar3 = (undefined8 *)&UNK_110928340;
    puVar10 = &uStack_1d8;
    puVar4 = &uStack_1d8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_1c0 = puVar10;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar2 = auStack_1b8;
    puVar13 = puVar9;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar8 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(puVar11);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1064e9424;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar6 = puVar4;
  puVar7 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar10;
  puStack_208 = puVar2;
  puStack_200 = puVar8;
  puStack_1f8 = puVar11;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar3);
  puVar2 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_240,puVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar5 = (undefined8 *)&UNK_110928390;
    puVar4 = &uStack_278;
    puVar6 = &uStack_278;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_260 = puVar4;
    func_0x00010007e5dc(&puStack_260);
    lVar14 = 0;
    puVar2 = auStack_258;
    puVar7 = puVar13;
    do {
      if ((&cStack_229)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar9 = puVar8;
  __Unwind_Resume();
  puVar12 = &uStack_330;
  pcStack_288 = FUN_1064e960c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar5;
  puVar10 = puVar6;
  puVar13 = puVar7;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar4;
  puStack_2a8 = puVar2;
  puStack_2a0 = puVar8;
  puStack_298 = puVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar5 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_310,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_2f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      unaff_x24 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_2e0,unaff_x24);
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    func_0x00010007e1e8(&uStack_330,auStack_310,&lStack_2c8,3);
    puVar11 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_330,param_5);
    puStack_318 = (undefined1 *)&uStack_330;
    func_0x00010007e5dc(&puStack_318);
    lVar14 = 0;
    puVar5 = auStack_310;
    puVar10 = puVar12;
    puVar13 = param_5;
    do {
      if ((&cStack_2c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar7);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    puVar8 = auStack_310;
    do {
      puVar5 = puVar5 + -3;
    } while (puVar5 != puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar9 = puVar2;
    __Unwind_Resume();
    pcStack_338 = FUN_1064e9880;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar11;
    puVar4 = puVar10;
    puVar12 = puVar13;
    puStack_370 = unaff_x24;
    puStack_368 = puVar8;
    puStack_360 = puVar5;
    puStack_358 = puVar2;
    puStack_350 = puVar7;
    puStack_348 = puVar6;
    pppuStack_340 = &pppuStack_290;
    _objc_retain(puVar11);
    if (puVar9 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar9[1];
      puVar3 = (undefined8 *)&UNK_110928430;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = (long *)puVar9[1];
        _objc_retain(puVar11);
        if (puVar11 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar8 = puVar11;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(puVar11);
        unaff_x24 = auStack_3a8;
        func_0x00010002b838(auStack_3a8,puVar8);
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar10 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        func_0x00010002b838(auStack_390,puVar1);
        uStack_3c8 = 0;
        uStack_3c0 = 0;
        uStack_3b8 = 0;
        func_0x00010007e1e8(&uStack_3c8,auStack_3a8,&lStack_378,2);
        puVar3 = (undefined8 *)&UNK_110928430;
        puVar10 = &uStack_3c8;
        puVar4 = &uStack_3c8;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar4,puVar13);
        puStack_3b0 = puVar10;
        func_0x00010007e5dc(&puStack_3b0);
        lVar14 = 0;
        puVar9 = auStack_3a8;
        puVar12 = puVar13;
        do {
          if ((&cStack_379)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
    }
    puVar2 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    _objc_release(puVar11);
    puVar7 = puVar2;
    __Unwind_Resume();
    pcStack_3d8 = FUN_1064e9a88;
    lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar3;
    puVar6 = puVar4;
    puVar13 = puVar12;
    puStack_410 = unaff_x24;
    puStack_408 = puVar8;
    puStack_400 = puVar10;
    puStack_3f8 = puVar9;
    puStack_3f0 = puVar2;
    puStack_3e8 = puVar11;
    pppuStack_3e0 = &pppuStack_340;
    _objc_retain(puVar3);
    if (puVar7 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar7[1];
      puVar5 = (undefined8 *)&UNK_110928480;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = (long *)puVar7[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar8 = puVar3;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        unaff_x24 = auStack_448;
        func_0x00010002b838(auStack_448,puVar8);
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar4 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        func_0x00010002b838(auStack_430,puVar1);
        uStack_468 = 0;
        uStack_460 = 0;
        uStack_458 = 0;
        func_0x00010007e1e8(&uStack_468,auStack_448,&lStack_418,2);
        puVar5 = (undefined8 *)&UNK_110928480;
        puVar4 = &uStack_468;
        puVar6 = &uStack_468;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar6,puVar12);
        puStack_450 = puVar4;
        func_0x00010007e5dc(&puStack_450);
        lVar14 = 0;
        puVar7 = auStack_448;
        puVar13 = puVar12;
        do {
          if ((&cStack_419)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar10 = puVar2;
    __Unwind_Resume();
    puVar12 = &uStack_4f0;
    pcStack_478 = FUN_1064e9c90;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar5;
    puVar9 = puVar6;
    puStack_4b0 = unaff_x24;
    puStack_4a8 = puVar8;
    puStack_4a0 = puVar4;
    puStack_498 = puVar7;
    puStack_490 = puVar2;
    puStack_488 = puVar3;
    pppuStack_480 = &pppuStack_3e0;
    _objc_retain(puVar5);
    plVar15 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar10[1];
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      puVar8 = auStack_4d0;
      func_0x00010002b838(auStack_4d0,puVar2);
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      func_0x00010007e1e8(&uStack_4f0,auStack_4d0,&lStack_4b8,1);
      puVar11 = (undefined8 *)&UNK_1109284d0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_4f0,puVar6);
      puStack_4d8 = (undefined1 *)&uStack_4f0;
      func_0x00010007e5dc(&puStack_4d8);
      puVar9 = puVar12;
      puVar13 = puVar6;
      puVar4 = &uStack_4f0;
      if (cStack_4b9 < '\0') {
        __ZdlPv(auStack_4d0[0]);
        puVar9 = puVar12;
        puVar13 = puVar6;
        puVar4 = &uStack_4f0;
      }
    }
    puVar2 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar10 = puVar2;
    __Unwind_Resume();
    pcStack_4f8 = FUN_1064e9e04;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar11;
    puVar3 = puVar9;
    puVar7 = puVar13;
    puStack_530 = unaff_x24;
    puStack_528 = puVar8;
    puStack_520 = puVar4;
    plStack_518 = plVar15;
    puStack_510 = puVar2;
    puStack_508 = puVar5;
    pppuStack_500 = &pppuStack_480;
    _objc_retain(puVar9);
    puVar2 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar10[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      puVar8 = auStack_568;
      func_0x00010002b838(auStack_568,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar2 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_550,puVar2);
      uStack_588 = 0;
      uStack_580 = 0;
      uStack_578 = 0;
      func_0x00010007e1e8(&uStack_588,auStack_568,&lStack_538,2);
      puVar6 = (undefined8 *)&UNK_110928520;
      puVar11 = &uStack_588;
      puVar3 = &uStack_588;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar3,puVar13);
      puStack_570 = puVar11;
      func_0x00010007e5dc(&puStack_570);
      lVar14 = 0;
      puVar2 = auStack_568;
      puVar7 = puVar13;
      do {
        if ((&cStack_539)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar5 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_538) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      if (cStack_551 < '\0') {
        __ZdlPv(auStack_568[0]);
      }
      _objc_release(puVar9);
      puVar4 = puVar5;
      __Unwind_Resume();
      puVar12 = &uStack_610;
      pcStack_598 = FUN_1064e9ff0;
      lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar6;
      puVar13 = puVar3;
      puStack_5d0 = unaff_x24;
      puStack_5c8 = puVar8;
      puStack_5c0 = puVar11;
      puStack_5b8 = puVar2;
      puStack_5b0 = puVar5;
      puStack_5a8 = puVar9;
      pppuStack_5a0 = &pppuStack_500;
      _objc_retain(puVar6);
      plVar15 = (long *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar4[1];
        _objc_retain(puVar6);
        if (puVar6 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar2 = puVar6;
          _objc_retainAutorelease(puVar6);
          func_0x00010bdc3520();
        }
        _objc_release(puVar6);
        puVar8 = auStack_5f0;
        func_0x00010002b838(auStack_5f0,puVar2);
        uStack_610 = 0;
        uStack_608 = 0;
        uStack_600 = 0;
        func_0x00010007e1e8(&uStack_610,auStack_5f0,&lStack_5d8,1);
        puVar10 = (undefined8 *)&UNK_1109285c0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_610,puVar3);
        puStack_5f8 = (undefined1 *)&uStack_610;
        func_0x00010007e5dc(&puStack_5f8);
        puVar13 = puVar12;
        puVar7 = puVar3;
        puVar11 = &uStack_610;
        if (cStack_5d9 < '\0') {
          __ZdlPv(auStack_5f0[0]);
          puVar13 = puVar12;
          puVar7 = puVar3;
          puVar11 = &uStack_610;
        }
      }
      puVar2 = puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_618 = FUN_1064ea164;
      lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar10;
      puVar3 = puVar13;
      puStack_650 = unaff_x24;
      puStack_648 = puVar8;
      puStack_640 = puVar11;
      plStack_638 = plVar15;
      puStack_630 = puVar2;
      puStack_628 = puVar6;
      pppuStack_620 = &pppuStack_5a0;
      _objc_retain(puVar13);
      puVar2 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar4[1];
        puVar1 = &UNK_10f3812c5;
        if ((int)puVar10 == 0) {
          puVar1 = &UNK_10f3812ca;
        }
        puVar8 = auStack_688;
        func_0x00010002b838(auStack_688,puVar1);
        _objc_retain(puVar13);
        if (puVar13 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          _objc_retainAutorelease(puVar13);
          puVar2 = puVar13;
          func_0x00010bdc3520(puVar13);
        }
        _objc_release(puVar13);
        func_0x00010002b838(auStack_670,puVar2);
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        func_0x00010007e1e8(&uStack_6a8,auStack_688,&lStack_658,2);
        puVar5 = (undefined8 *)&UNK_110928610;
        puVar10 = &uStack_6a8;
        puVar3 = &uStack_6a8;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar3,puVar7);
        puStack_690 = puVar10;
        func_0x00010007e5dc(&puStack_690);
        lVar14 = 0;
        puVar2 = auStack_688;
        do {
          if ((&cStack_659)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_670 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
      puVar6 = puVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
        ___stack_chk_fail();
        _objc_release(puVar13);
        if (cStack_671 < '\0') {
          __ZdlPv(auStack_688[0]);
        }
        _objc_release(puVar13);
        puVar4 = puVar6;
        __Unwind_Resume();
        pcStack_6b8 = FUN_1064ea350;
        lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar11 = puVar5;
        puStack_6f0 = unaff_x24;
        puStack_6e8 = puVar8;
        puStack_6e0 = puVar10;
        puStack_6d8 = puVar2;
        puStack_6d0 = puVar6;
        puStack_6c8 = puVar13;
        pppuStack_6c0 = &pppuStack_620;
        _objc_retain(puVar5);
        if (puVar4 != (undefined8 *)0x0) {
          plVar15 = (long *)puVar4[1];
          _objc_retain(puVar5);
          if (puVar5 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f38117f;
          }
          else {
            puVar2 = puVar5;
            _objc_retainAutorelease(puVar5);
            func_0x00010bdc3520();
          }
          _objc_release(puVar5);
          func_0x00010002b838(auStack_710,puVar2);
          uStack_730 = 0;
          uStack_728 = 0;
          uStack_720 = 0;
          func_0x00010007e1e8(&uStack_730,auStack_710,&lStack_6f8,1);
          puVar11 = (undefined8 *)&UNK_1109286b0;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_730,puVar3);
          puStack_718 = (undefined1 *)&uStack_730;
          func_0x00010007e5dc(&puStack_718);
          if (cStack_6f9 < '\0') {
            __ZdlPv(auStack_710[0]);
          }
        }
        puVar2 = puVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6f8) {
          ___stack_chk_fail();
          _objc_release(puVar5);
          _objc_release(puVar5);
          puVar8 = puVar2;
          __Unwind_Resume();
          puStack_758 = (undefined1 *)&uStack_770;
          pcStack_738 = FUN_1064ea4c4;
          if (puVar8 != (undefined8 *)0x0) {
            uStack_770 = 0;
            uStack_768 = 0;
            uStack_760 = 0;
            puStack_750 = puVar2;
            puStack_748 = puVar5;
            pppuStack_740 = &pppuStack_6c0;
            (**(code **)(*(long *)puVar8[1] + 0x18))
                      ((long *)puVar8[1],&UNK_110928700,&uStack_770,puVar11);
            func_0x00010007e5dc(&puStack_758);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e900c; end: 1064e923b;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e900c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 ***pppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 ***pppuStack_620;
  code *pcStack_618;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 auStack_5e8 [2];
  char cStack_5d1;
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  long *plStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 ***pppuStack_580;
  code *pcStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 *puStack_558;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 auStack_4c8 [2];
  char cStack_4b1;
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  long *plStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 *puStack_438;
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 auStack_3a8 [3];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 auStack_308 [3];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  undefined8 auStack_270 [3];
  undefined1 auStack_258 [24];
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [3];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [3];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_1109282f0;
    unaff_x23 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar9 = auStack_78;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e923c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar11 = puVar7;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar9 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar10 = (undefined8 *)&UNK_110928340;
    puVar7 = &uStack_138;
    puVar11 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_120 = puVar7;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar9 = auStack_118;
    puVar8 = puVar5;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_1064e9424;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar4 = puVar11;
  puVar13 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar7;
  puStack_168 = puVar9;
  puStack_160 = puVar5;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar10;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar11 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar3 = (undefined8 *)&UNK_110928390;
    puVar11 = &uStack_1d8;
    puVar4 = &uStack_1d8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_1c0 = puVar11;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar2 = auStack_1b8;
    puVar13 = puVar8;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar8 = puVar7;
  __Unwind_Resume();
  puVar12 = &uStack_290;
  pcStack_1e8 = FUN_1064e960c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar5 = puVar4;
  puVar6 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar11;
  puStack_208 = puVar2;
  puStack_200 = puVar7;
  puStack_1f8 = puVar10;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar13);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar3 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_270,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_258,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      unaff_x24 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_240,unaff_x24);
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    func_0x00010007e1e8(&uStack_290,auStack_270,&lStack_228,3);
    puVar9 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_290,param_5);
    puStack_278 = (undefined1 *)&uStack_290;
    func_0x00010007e5dc(&puStack_278);
    lVar14 = 0;
    puVar3 = auStack_270;
    puVar5 = puVar12;
    puVar6 = param_5;
    do {
      if ((&cStack_229)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar13);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  puVar7 = auStack_270;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puVar7);
  _objc_release(puVar13);
  _objc_release(puVar4);
  puVar8 = puVar2;
  __Unwind_Resume();
  pcStack_298 = FUN_1064e9880;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar11 = puVar5;
  puVar12 = puVar6;
  puStack_2d0 = unaff_x24;
  puStack_2c8 = puVar7;
  puStack_2c0 = puVar3;
  puStack_2b8 = puVar2;
  puStack_2b0 = puVar13;
  puStack_2a8 = puVar4;
  pppuStack_2a0 = &pppuStack_1f0;
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar10 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar7 = puVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x24 = auStack_308;
      func_0x00010002b838(auStack_308,puVar7);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar5 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_2f0,puVar1);
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      func_0x00010007e1e8(&uStack_328,auStack_308,&lStack_2d8,2);
      puVar10 = (undefined8 *)&UNK_110928430;
      puVar5 = &uStack_328;
      puVar11 = &uStack_328;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar11,puVar6);
      puStack_310 = puVar5;
      func_0x00010007e5dc(&puStack_310);
      lVar14 = 0;
      puVar8 = auStack_308;
      puVar12 = puVar6;
      do {
        if ((&cStack_2d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_338 = FUN_1064e9a88;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar4 = puVar11;
  puVar13 = puVar12;
  puStack_370 = unaff_x24;
  puStack_368 = puVar7;
  puStack_360 = puVar5;
  puStack_358 = puVar8;
  puStack_350 = puVar2;
  puStack_348 = puVar9;
  pppuStack_340 = &pppuStack_2a0;
  _objc_retain(puVar10);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    puVar3 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar6[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar7 = puVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x24 = auStack_3a8;
      func_0x00010002b838(auStack_3a8,puVar7);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_390,puVar1);
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      func_0x00010007e1e8(&uStack_3c8,auStack_3a8,&lStack_378,2);
      puVar3 = (undefined8 *)&UNK_110928480;
      puVar11 = &uStack_3c8;
      puVar4 = &uStack_3c8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar4,puVar12);
      puStack_3b0 = puVar11;
      func_0x00010007e5dc(&puStack_3b0);
      lVar14 = 0;
      puVar6 = auStack_3a8;
      puVar13 = puVar12;
      do {
        if ((&cStack_379)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_450;
  pcStack_3d8 = FUN_1064e9c90;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar8 = puVar4;
  puStack_410 = unaff_x24;
  puStack_408 = puVar7;
  puStack_400 = puVar11;
  puStack_3f8 = puVar6;
  puStack_3f0 = puVar2;
  puStack_3e8 = puVar10;
  pppuStack_3e0 = &pppuStack_340;
  _objc_retain(puVar3);
  plVar15 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar7 = auStack_430;
    func_0x00010002b838(auStack_430,puVar2);
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    func_0x00010007e1e8(&uStack_450,auStack_430,&lStack_418,1);
    puVar9 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_450,puVar4);
    puStack_438 = (undefined1 *)&uStack_450;
    func_0x00010007e5dc(&puStack_438);
    puVar8 = puVar12;
    puVar13 = puVar4;
    puVar11 = &uStack_450;
    if (cStack_419 < '\0') {
      __ZdlPv(auStack_430[0]);
      puVar8 = puVar12;
      puVar13 = puVar4;
      puVar11 = &uStack_450;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_458 = FUN_1064e9e04;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar9;
  puVar10 = puVar8;
  puVar6 = puVar13;
  puStack_490 = unaff_x24;
  puStack_488 = puVar7;
  puStack_480 = puVar11;
  plStack_478 = plVar15;
  puStack_470 = puVar2;
  puStack_468 = puVar3;
  pppuStack_460 = &pppuStack_3e0;
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar7 = auStack_4c8;
    func_0x00010002b838(auStack_4c8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_4b0,puVar2);
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    func_0x00010007e1e8(&uStack_4e8,auStack_4c8,&lStack_498,2);
    puVar5 = (undefined8 *)&UNK_110928520;
    puVar9 = &uStack_4e8;
    puVar10 = &uStack_4e8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar10,puVar13);
    puStack_4d0 = puVar9;
    func_0x00010007e5dc(&puStack_4d0);
    lVar14 = 0;
    puVar2 = auStack_4c8;
    puVar6 = puVar13;
    do {
      if ((&cStack_499)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_4b1 < '\0') {
      __ZdlPv(auStack_4c8[0]);
    }
    _objc_release(puVar8);
    puVar4 = puVar3;
    __Unwind_Resume();
    puVar12 = &uStack_570;
    pcStack_4f8 = FUN_1064e9ff0;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar5;
    puVar13 = puVar10;
    puStack_530 = unaff_x24;
    puStack_528 = puVar7;
    puStack_520 = puVar9;
    puStack_518 = puVar2;
    puStack_510 = puVar3;
    puStack_508 = puVar8;
    pppuStack_500 = &pppuStack_460;
    _objc_retain(puVar5);
    plVar15 = (long *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar4[1];
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      puVar7 = auStack_550;
      func_0x00010002b838(auStack_550,puVar2);
      uStack_570 = 0;
      uStack_568 = 0;
      uStack_560 = 0;
      func_0x00010007e1e8(&uStack_570,auStack_550,&lStack_538,1);
      puVar11 = (undefined8 *)&UNK_1109285c0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_570,puVar10);
      puStack_558 = (undefined1 *)&uStack_570;
      func_0x00010007e5dc(&puStack_558);
      puVar13 = puVar12;
      puVar6 = puVar10;
      puVar9 = &uStack_570;
      if (cStack_539 < '\0') {
        __ZdlPv(auStack_550[0]);
        puVar13 = puVar12;
        puVar6 = puVar10;
        puVar9 = &uStack_570;
      }
    }
    puVar2 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_578 = FUN_1064ea164;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar11;
    puVar10 = puVar13;
    puStack_5b0 = unaff_x24;
    puStack_5a8 = puVar7;
    puStack_5a0 = puVar9;
    plStack_598 = plVar15;
    puStack_590 = puVar2;
    puStack_588 = puVar5;
    pppuStack_580 = &pppuStack_500;
    _objc_retain(puVar13);
    puVar2 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar4[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      puVar7 = auStack_5e8;
      func_0x00010002b838(auStack_5e8,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_5d0,puVar2);
      uStack_608 = 0;
      uStack_600 = 0;
      uStack_5f8 = 0;
      func_0x00010007e1e8(&uStack_608,auStack_5e8,&lStack_5b8,2);
      puVar3 = (undefined8 *)&UNK_110928610;
      puVar11 = &uStack_608;
      puVar10 = &uStack_608;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar10,puVar6);
      puStack_5f0 = puVar11;
      func_0x00010007e5dc(&puStack_5f0);
      lVar14 = 0;
      puVar2 = auStack_5e8;
      do {
        if ((&cStack_5b9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar9 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
      ___stack_chk_fail();
      _objc_release(puVar13);
      if (cStack_5d1 < '\0') {
        __ZdlPv(auStack_5e8[0]);
      }
      _objc_release(puVar13);
      puVar4 = puVar9;
      __Unwind_Resume();
      pcStack_618 = FUN_1064ea350;
      lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar3;
      puStack_650 = unaff_x24;
      puStack_648 = puVar7;
      puStack_640 = puVar11;
      puStack_638 = puVar2;
      puStack_630 = puVar9;
      puStack_628 = puVar13;
      pppuStack_620 = &pppuStack_580;
      _objc_retain(puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar4[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar2 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        func_0x00010002b838(auStack_670,puVar2);
        uStack_690 = 0;
        uStack_688 = 0;
        uStack_680 = 0;
        func_0x00010007e1e8(&uStack_690,auStack_670,&lStack_658,1);
        puVar5 = (undefined8 *)&UNK_1109286b0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_690,puVar10);
        puStack_678 = (undefined1 *)&uStack_690;
        func_0x00010007e5dc(&puStack_678);
        if (cStack_659 < '\0') {
          __ZdlPv(auStack_670[0]);
        }
      }
      puVar2 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(puVar3);
        puVar7 = puVar2;
        __Unwind_Resume();
        puStack_6b8 = (undefined1 *)&uStack_6d0;
        pcStack_698 = FUN_1064ea4c4;
        if (puVar7 != (undefined8 *)0x0) {
          uStack_6d0 = 0;
          uStack_6c8 = 0;
          uStack_6c0 = 0;
          puStack_6b0 = puVar2;
          puStack_6a8 = puVar3;
          pppuStack_6a0 = &pppuStack_620;
          (**(code **)(*(long *)puVar7[1] + 0x18))
                    ((long *)puVar7[1],&UNK_110928700,&uStack_6d0,puVar5);
          func_0x00010007e5dc(&puStack_6b8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e923c; end: 1064e9423;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e923c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 *puStack_5d8;
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 ***pppuStack_580;
  code *pcStack_578;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 *puStack_550;
  undefined8 auStack_548 [2];
  char cStack_531;
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  long *plStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 *puStack_430;
  undefined8 auStack_428 [2];
  char cStack_411;
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  long *plStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 auStack_308 [3];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [3];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [3];
  undefined1 auStack_1b8 [24];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [3];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  puVar7 = param_3;
  puVar4 = param_4;
  _objc_retain(param_2);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar6 = (undefined8 *)&UNK_110928340;
    param_3 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar9 = auStack_78;
    puVar4 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e9424;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar6;
  puVar11 = puVar7;
  puVar8 = puVar4;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar9;
  puStack_c0 = puVar2;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar9 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = puVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar10 = (undefined8 *)&UNK_110928390;
    puVar7 = &uStack_138;
    puVar11 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_120 = puVar7;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar9 = auStack_118;
    puVar8 = puVar4;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar12 = &uStack_1f0;
  pcStack_148 = FUN_1064e960c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar11;
  puVar13 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar7;
  puStack_168 = puVar9;
  puStack_160 = puVar4;
  puStack_158 = puVar6;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar11);
  _objc_retain(puVar8);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_1d0,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1b8,puVar6);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      unaff_x24 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,unaff_x24);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_188,3);
    puVar2 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_1f0,param_5);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    lVar14 = 0;
    puVar10 = auStack_1d0;
    puVar3 = puVar12;
    puVar13 = param_5;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar8);
  puVar6 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puVar7 = auStack_1d0;
  do {
    puVar10 = puVar10 + -3;
  } while (puVar10 != puVar7);
  _objc_release(puVar8);
  _objc_release(puVar11);
  puVar5 = puVar6;
  __Unwind_Resume();
  pcStack_1f8 = FUN_1064e9880;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar4 = puVar3;
  puVar12 = puVar13;
  puStack_230 = unaff_x24;
  puStack_228 = puVar7;
  puStack_220 = puVar10;
  puStack_218 = puVar6;
  puStack_210 = puVar8;
  puStack_208 = puVar11;
  pppuStack_200 = &ppuStack_150;
  _objc_retain(puVar2);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    puVar9 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar5[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar7 = puVar2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_268;
      func_0x00010002b838(auStack_268,puVar7);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar3 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_250,puVar1);
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      func_0x00010007e1e8(&uStack_288,auStack_268,&lStack_238,2);
      puVar9 = (undefined8 *)&UNK_110928430;
      puVar3 = &uStack_288;
      puVar4 = &uStack_288;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar4,puVar13);
      puStack_270 = puVar3;
      func_0x00010007e5dc(&puStack_270);
      lVar14 = 0;
      puVar5 = auStack_268;
      puVar12 = puVar13;
      do {
        if ((&cStack_239)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar8 = puVar6;
  __Unwind_Resume();
  pcStack_298 = FUN_1064e9a88;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar11 = puVar4;
  puVar13 = puVar12;
  puStack_2d0 = unaff_x24;
  puStack_2c8 = puVar7;
  puStack_2c0 = puVar3;
  puStack_2b8 = puVar5;
  puStack_2b0 = puVar6;
  puStack_2a8 = puVar2;
  pppuStack_2a0 = &pppuStack_200;
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar10 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar7 = puVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      unaff_x24 = auStack_308;
      func_0x00010002b838(auStack_308,puVar7);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar4 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_2f0,puVar1);
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      func_0x00010007e1e8(&uStack_328,auStack_308,&lStack_2d8,2);
      puVar10 = (undefined8 *)&UNK_110928480;
      puVar4 = &uStack_328;
      puVar11 = &uStack_328;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar11,puVar12);
      puStack_310 = puVar4;
      func_0x00010007e5dc(&puStack_310);
      lVar14 = 0;
      puVar8 = auStack_308;
      puVar13 = puVar12;
      do {
        if ((&cStack_2d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar6 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    puVar3 = puVar6;
    __Unwind_Resume();
    puVar12 = &uStack_3b0;
    pcStack_338 = FUN_1064e9c90;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar10;
    puVar5 = puVar11;
    puStack_370 = unaff_x24;
    puStack_368 = puVar7;
    puStack_360 = puVar4;
    puStack_358 = puVar8;
    puStack_350 = puVar6;
    puStack_348 = puVar9;
    pppuStack_340 = &pppuStack_2a0;
    _objc_retain(puVar10);
    plVar15 = (long *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar6 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      puVar7 = auStack_390;
      func_0x00010002b838(auStack_390,puVar6);
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      func_0x00010007e1e8(&uStack_3b0,auStack_390,&lStack_378,1);
      puVar2 = (undefined8 *)&UNK_1109284d0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_3b0,puVar11);
      puStack_398 = (undefined1 *)&uStack_3b0;
      func_0x00010007e5dc(&puStack_398);
      puVar5 = puVar12;
      puVar13 = puVar11;
      puVar4 = &uStack_3b0;
      if (cStack_379 < '\0') {
        __ZdlPv(auStack_390[0]);
        puVar5 = puVar12;
        puVar13 = puVar11;
        puVar4 = &uStack_3b0;
      }
    }
    puVar6 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar10);
    puVar3 = puVar6;
    __Unwind_Resume();
    pcStack_3b8 = FUN_1064e9e04;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar2;
    puVar11 = puVar5;
    puVar8 = puVar13;
    puStack_3f0 = unaff_x24;
    puStack_3e8 = puVar7;
    puStack_3e0 = puVar4;
    plStack_3d8 = plVar15;
    puStack_3d0 = puVar6;
    puStack_3c8 = puVar10;
    pppuStack_3c0 = &pppuStack_340;
    _objc_retain(puVar5);
    puVar6 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar3[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar2 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      puVar7 = auStack_428;
      func_0x00010002b838(auStack_428,puVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar6 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_410,puVar6);
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      func_0x00010007e1e8(&uStack_448,auStack_428,&lStack_3f8,2);
      puVar9 = (undefined8 *)&UNK_110928520;
      puVar2 = &uStack_448;
      puVar11 = &uStack_448;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar11,puVar13);
      puStack_430 = puVar2;
      func_0x00010007e5dc(&puStack_430);
      lVar14 = 0;
      puVar6 = auStack_428;
      puVar8 = puVar13;
      do {
        if ((&cStack_3f9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar4 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      if (cStack_411 < '\0') {
        __ZdlPv(auStack_428[0]);
      }
      _objc_release(puVar5);
      puVar3 = puVar4;
      __Unwind_Resume();
      puVar12 = &uStack_4d0;
      pcStack_458 = FUN_1064e9ff0;
      lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = puVar9;
      puVar13 = puVar11;
      puStack_490 = unaff_x24;
      puStack_488 = puVar7;
      puStack_480 = puVar2;
      puStack_478 = puVar6;
      puStack_470 = puVar4;
      puStack_468 = puVar5;
      pppuStack_460 = &pppuStack_3c0;
      _objc_retain(puVar9);
      plVar15 = (long *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar3[1];
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)&UNK_10f38117f;
        }
        else {
          puVar6 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        puVar7 = auStack_4b0;
        func_0x00010002b838(auStack_4b0,puVar6);
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4c0 = 0;
        func_0x00010007e1e8(&uStack_4d0,auStack_4b0,&lStack_498,1);
        puVar10 = (undefined8 *)&UNK_1109285c0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_4d0,puVar11);
        puStack_4b8 = (undefined1 *)&uStack_4d0;
        func_0x00010007e5dc(&puStack_4b8);
        puVar13 = puVar12;
        puVar8 = puVar11;
        puVar2 = &uStack_4d0;
        if (cStack_499 < '\0') {
          __ZdlPv(auStack_4b0[0]);
          puVar13 = puVar12;
          puVar8 = puVar11;
          puVar2 = &uStack_4d0;
        }
      }
      puVar6 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
        ___stack_chk_fail();
        _objc_release(puVar9);
        _objc_release(puVar9);
        puVar3 = puVar6;
        __Unwind_Resume();
        pcStack_4d8 = FUN_1064ea164;
        lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar4 = puVar10;
        puVar11 = puVar13;
        puStack_510 = unaff_x24;
        puStack_508 = puVar7;
        puStack_500 = puVar2;
        plStack_4f8 = plVar15;
        puStack_4f0 = puVar6;
        puStack_4e8 = puVar9;
        pppuStack_4e0 = &pppuStack_460;
        _objc_retain(puVar13);
        puVar6 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          plVar15 = (long *)puVar3[1];
          puVar1 = &UNK_10f3812c5;
          if ((int)puVar10 == 0) {
            puVar1 = &UNK_10f3812ca;
          }
          puVar7 = auStack_548;
          func_0x00010002b838(auStack_548,puVar1);
          _objc_retain(puVar13);
          if (puVar13 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)&UNK_10f38117f;
          }
          else {
            _objc_retainAutorelease(puVar13);
            puVar6 = puVar13;
            func_0x00010bdc3520(puVar13);
          }
          _objc_release(puVar13);
          func_0x00010002b838(auStack_530,puVar6);
          uStack_568 = 0;
          uStack_560 = 0;
          uStack_558 = 0;
          func_0x00010007e1e8(&uStack_568,auStack_548,&lStack_518,2);
          puVar4 = (undefined8 *)&UNK_110928610;
          puVar10 = &uStack_568;
          puVar11 = &uStack_568;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar11,puVar8);
          puStack_550 = puVar10;
          func_0x00010007e5dc(&puStack_550);
          lVar14 = 0;
          puVar6 = auStack_548;
          do {
            if ((&cStack_519)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x30);
        }
        puVar9 = puVar13;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
          ___stack_chk_fail();
          _objc_release(puVar13);
          if (cStack_531 < '\0') {
            __ZdlPv(auStack_548[0]);
          }
          _objc_release(puVar13);
          puVar3 = puVar9;
          __Unwind_Resume();
          pcStack_578 = FUN_1064ea350;
          lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar2 = puVar4;
          puStack_5b0 = unaff_x24;
          puStack_5a8 = puVar7;
          puStack_5a0 = puVar10;
          puStack_598 = puVar6;
          puStack_590 = puVar9;
          puStack_588 = puVar13;
          pppuStack_580 = &pppuStack_4e0;
          _objc_retain(puVar4);
          if (puVar3 != (undefined8 *)0x0) {
            plVar15 = (long *)puVar3[1];
            _objc_retain(puVar4);
            if (puVar4 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)&UNK_10f38117f;
            }
            else {
              puVar6 = puVar4;
              _objc_retainAutorelease(puVar4);
              func_0x00010bdc3520();
            }
            _objc_release(puVar4);
            func_0x00010002b838(auStack_5d0,puVar6);
            uStack_5f0 = 0;
            uStack_5e8 = 0;
            uStack_5e0 = 0;
            func_0x00010007e1e8(&uStack_5f0,auStack_5d0,&lStack_5b8,1);
            puVar2 = (undefined8 *)&UNK_1109286b0;
            (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_5f0,puVar11);
            puStack_5d8 = (undefined1 *)&uStack_5f0;
            func_0x00010007e5dc(&puStack_5d8);
            if (cStack_5b9 < '\0') {
              __ZdlPv(auStack_5d0[0]);
            }
          }
          puVar6 = puVar4;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
            ___stack_chk_fail();
            _objc_release(puVar4);
            _objc_release(puVar4);
            puVar7 = puVar6;
            __Unwind_Resume();
            puStack_618 = (undefined1 *)&uStack_630;
            pcStack_5f8 = FUN_1064ea4c4;
            if (puVar7 != (undefined8 *)0x0) {
              uStack_630 = 0;
              uStack_628 = 0;
              uStack_620 = 0;
              puStack_610 = puVar6;
              puStack_608 = puVar4;
              pppuStack_600 = &pppuStack_580;
              (**(code **)(*(long *)puVar7[1] + 0x18))
                        ((long *)puVar7[1],&UNK_110928700,&uStack_630,puVar2);
              func_0x00010007e5dc(&puStack_618);
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e9424; end: 1064e960b;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e9424(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 auStack_4a8 [2];
  char cStack_491;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  long *plStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 ***pppuStack_440;
  code *pcStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 *puStack_418;
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined8 auStack_388 [2];
  char cStack_371;
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  long *plStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 *puStack_2f8;
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [3];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 auStack_1c8 [3];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined8 auStack_130 [3];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  puVar9 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar1 = &UNK_10f3812c5;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar4 = (undefined8 *)&UNK_110928390;
    param_3 = &uStack_98;
    puVar9 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar5 = auStack_78;
    puVar7 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar12 = &uStack_150;
  pcStack_a8 = FUN_1064e960c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar4;
  puVar8 = puVar9;
  puVar10 = puVar7;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar5;
  puStack_c0 = puVar2;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar7);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_130,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar4 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      unaff_x24 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,unaff_x24);
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x00010007e1e8(&uStack_150,auStack_130,&lStack_e8,3);
    puVar11 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_150,param_5);
    puStack_138 = (undefined1 *)&uStack_150;
    func_0x00010007e5dc(&puStack_138);
    lVar14 = 0;
    puVar4 = auStack_130;
    puVar8 = puVar12;
    puVar10 = param_5;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar7);
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puVar2 = auStack_130;
  do {
    puVar4 = puVar4 + -3;
  } while (puVar4 != puVar2);
  _objc_release(puVar7);
  _objc_release(puVar9);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_158 = FUN_1064e9880;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar12 = puVar8;
  puVar13 = puVar10;
  puStack_190 = unaff_x24;
  puStack_188 = puVar2;
  puStack_180 = puVar4;
  puStack_178 = puVar5;
  puStack_170 = puVar7;
  puStack_168 = puVar9;
  ppuStack_160 = &puStack_b0;
  _objc_retain(puVar11);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    puVar3 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar6[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar11;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      unaff_x24 = auStack_1c8;
      func_0x00010002b838(auStack_1c8,puVar2);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar8 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_1b0,puVar1);
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      func_0x00010007e1e8(&uStack_1e8,auStack_1c8,&lStack_198,2);
      puVar3 = (undefined8 *)&UNK_110928430;
      puVar8 = &uStack_1e8;
      puVar12 = &uStack_1e8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar12,puVar10);
      puStack_1d0 = puVar8;
      func_0x00010007e5dc(&puStack_1d0);
      lVar14 = 0;
      puVar6 = auStack_1c8;
      puVar13 = puVar10;
      do {
        if ((&cStack_199)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar4 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(puVar11);
  puVar7 = puVar4;
  __Unwind_Resume();
  pcStack_1f8 = FUN_1064e9a88;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar5 = puVar12;
  puVar10 = puVar13;
  puStack_230 = unaff_x24;
  puStack_228 = puVar2;
  puStack_220 = puVar8;
  puStack_218 = puVar6;
  puStack_210 = puVar4;
  puStack_208 = puVar11;
  pppuStack_200 = &ppuStack_160;
  _objc_retain(puVar3);
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    puVar9 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar7[1];
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      unaff_x24 = auStack_268;
      func_0x00010002b838(auStack_268,puVar2);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar12 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_250,puVar1);
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      func_0x00010007e1e8(&uStack_288,auStack_268,&lStack_238,2);
      puVar9 = (undefined8 *)&UNK_110928480;
      puVar12 = &uStack_288;
      puVar5 = &uStack_288;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar5,puVar13);
      puStack_270 = puVar12;
      func_0x00010007e5dc(&puStack_270);
      lVar14 = 0;
      puVar7 = auStack_268;
      puVar10 = puVar13;
      do {
        if ((&cStack_239)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar4;
  __Unwind_Resume();
  puVar13 = &uStack_310;
  pcStack_298 = FUN_1064e9c90;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar9;
  puVar6 = puVar5;
  puStack_2d0 = unaff_x24;
  puStack_2c8 = puVar2;
  puStack_2c0 = puVar12;
  puStack_2b8 = puVar7;
  puStack_2b0 = puVar4;
  puStack_2a8 = puVar3;
  pppuStack_2a0 = &pppuStack_200;
  _objc_retain(puVar9);
  plVar15 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar4 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    puVar2 = auStack_2f0;
    func_0x00010002b838(auStack_2f0,puVar4);
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    func_0x00010007e1e8(&uStack_310,auStack_2f0,&lStack_2d8,1);
    puVar11 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_310,puVar5);
    puStack_2f8 = (undefined1 *)&uStack_310;
    func_0x00010007e5dc(&puStack_2f8);
    puVar6 = puVar13;
    puVar10 = puVar5;
    puVar12 = &uStack_310;
    if (cStack_2d9 < '\0') {
      __ZdlPv(auStack_2f0[0]);
      puVar6 = puVar13;
      puVar10 = puVar5;
      puVar12 = &uStack_310;
    }
  }
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar8 = puVar4;
  __Unwind_Resume();
  pcStack_318 = FUN_1064e9e04;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar11;
  puVar7 = puVar6;
  puVar3 = puVar10;
  puStack_350 = unaff_x24;
  puStack_348 = puVar2;
  puStack_340 = puVar12;
  plStack_338 = plVar15;
  puStack_330 = puVar4;
  puStack_328 = puVar9;
  pppuStack_320 = &pppuStack_2a0;
  _objc_retain(puVar6);
  puVar4 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar11 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar2 = auStack_388;
    func_0x00010002b838(auStack_388,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_370,puVar4);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    func_0x00010007e1e8(&uStack_3a8,auStack_388,&lStack_358,2);
    puVar5 = (undefined8 *)&UNK_110928520;
    puVar11 = &uStack_3a8;
    puVar7 = &uStack_3a8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar7,puVar10);
    puStack_390 = puVar11;
    func_0x00010007e5dc(&puStack_390);
    lVar14 = 0;
    puVar4 = auStack_388;
    puVar3 = puVar10;
    do {
      if ((&cStack_359)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar9 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_371 < '\0') {
    __ZdlPv(auStack_388[0]);
  }
  _objc_release(puVar6);
  puVar10 = puVar9;
  __Unwind_Resume();
  puVar13 = &uStack_430;
  pcStack_3b8 = FUN_1064e9ff0;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  puVar12 = puVar7;
  puStack_3f0 = unaff_x24;
  puStack_3e8 = puVar2;
  puStack_3e0 = puVar11;
  puStack_3d8 = puVar4;
  puStack_3d0 = puVar9;
  puStack_3c8 = puVar6;
  pppuStack_3c0 = &pppuStack_320;
  _objc_retain(puVar5);
  plVar15 = (long *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar10[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar4 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar2 = auStack_410;
    func_0x00010002b838(auStack_410,puVar4);
    uStack_430 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    func_0x00010007e1e8(&uStack_430,auStack_410,&lStack_3f8,1);
    puVar8 = (undefined8 *)&UNK_1109285c0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_430,puVar7);
    puStack_418 = (undefined1 *)&uStack_430;
    func_0x00010007e5dc(&puStack_418);
    puVar12 = puVar13;
    puVar3 = puVar7;
    puVar11 = &uStack_430;
    if (cStack_3f9 < '\0') {
      __ZdlPv(auStack_410[0]);
      puVar12 = puVar13;
      puVar3 = puVar7;
      puVar11 = &uStack_430;
    }
  }
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar10 = puVar4;
    __Unwind_Resume();
    pcStack_438 = FUN_1064ea164;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar8;
    puVar7 = puVar12;
    puStack_470 = unaff_x24;
    puStack_468 = puVar2;
    puStack_460 = puVar11;
    plStack_458 = plVar15;
    puStack_450 = puVar4;
    puStack_448 = puVar5;
    pppuStack_440 = &pppuStack_3c0;
    _objc_retain(puVar12);
    puVar4 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar10[1];
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar8 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      puVar2 = auStack_4a8;
      func_0x00010002b838(auStack_4a8,puVar1);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar4 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_490,puVar4);
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      func_0x00010007e1e8(&uStack_4c8,auStack_4a8,&lStack_478,2);
      puVar9 = (undefined8 *)&UNK_110928610;
      puVar8 = &uStack_4c8;
      puVar7 = &uStack_4c8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar7,puVar3);
      puStack_4b0 = puVar8;
      func_0x00010007e5dc(&puStack_4b0);
      lVar14 = 0;
      puVar4 = auStack_4a8;
      do {
        if ((&cStack_479)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    puVar5 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_491 < '\0') {
      __ZdlPv(auStack_4a8[0]);
    }
    _objc_release(puVar12);
    puVar3 = puVar5;
    __Unwind_Resume();
    pcStack_4d8 = FUN_1064ea350;
    lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar9;
    puStack_510 = unaff_x24;
    puStack_508 = puVar2;
    puStack_500 = puVar8;
    puStack_4f8 = puVar4;
    puStack_4f0 = puVar5;
    puStack_4e8 = puVar12;
    pppuStack_4e0 = &pppuStack_440;
    _objc_retain(puVar9);
    if (puVar3 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar4 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_530,puVar4);
      uStack_550 = 0;
      uStack_548 = 0;
      uStack_540 = 0;
      func_0x00010007e1e8(&uStack_550,auStack_530,&lStack_518,1);
      puVar11 = (undefined8 *)&UNK_1109286b0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_550,puVar7);
      puStack_538 = (undefined1 *)&uStack_550;
      func_0x00010007e5dc(&puStack_538);
      if (cStack_519 < '\0') {
        __ZdlPv(auStack_530[0]);
      }
    }
    puVar4 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      _objc_release(puVar9);
      puVar5 = puVar4;
      __Unwind_Resume();
      puStack_578 = (undefined1 *)&uStack_590;
      pcStack_558 = FUN_1064ea4c4;
      if (puVar5 != (undefined8 *)0x0) {
        uStack_590 = 0;
        uStack_588 = 0;
        uStack_580 = 0;
        puStack_570 = puVar4;
        puStack_568 = puVar9;
        pppuStack_560 = &pppuStack_4e0;
        (**(code **)(*(long *)puVar5[1] + 0x18))
                  ((long *)puVar5[1],&UNK_110928700,&uStack_590,puVar11);
        func_0x00010007e5dc(&puStack_578);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e960c; end: 1064e987f;  */

/* WARNING: Removing unreachable block (ram,0x0001064e9850) */

void FUN_1064e960c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *puStack_498;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 ***pppuStack_440;
  code *pcStack_438;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  undefined8 auStack_408 [2];
  char cStack_3f1;
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  long *plStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 *puStack_378;
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 auStack_1c8 [3];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 auStack_128 [3];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar9 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f3812c5;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_90,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      unaff_x24 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x24 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,unaff_x24);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x00010007e1e8(&uStack_b0,auStack_90,&lStack_48,3);
    puVar2 = (undefined8 *)&UNK_1109283e0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109283e0,&uStack_b0,param_5);
    puStack_98 = (undefined1 *)&uStack_b0;
    func_0x00010007e5dc(&puStack_98);
    lVar14 = 0;
    param_2 = auStack_90;
    puVar9 = puVar3;
    puVar6 = param_5;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar5 = auStack_90;
  do {
    param_2 = param_2 + -3;
  } while (param_2 != puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_1064e9880;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar11 = puVar9;
  puVar8 = puVar6;
  puStack_f0 = unaff_x24;
  puStack_e8 = puVar5;
  puStack_e0 = param_2;
  puStack_d8 = puVar3;
  puStack_d0 = param_4;
  puStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    puVar10 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar4[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar5 = puVar2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_128;
      func_0x00010002b838(auStack_128,puVar5);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar9 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_110,puVar1);
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      func_0x00010007e1e8(&uStack_148,auStack_128,&lStack_f8,2);
      puVar10 = (undefined8 *)&UNK_110928430;
      puVar9 = &uStack_148;
      puVar11 = &uStack_148;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928430,puVar11,puVar6);
      puStack_130 = puVar9;
      func_0x00010007e5dc(&puStack_130);
      lVar14 = 0;
      puVar4 = auStack_128;
      puVar8 = puVar6;
      do {
        if ((&cStack_f9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_158 = FUN_1064e9a88;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar12 = puVar11;
  puVar13 = puVar8;
  puStack_190 = unaff_x24;
  puStack_188 = puVar5;
  puStack_180 = puVar9;
  puStack_178 = puVar4;
  puStack_170 = puVar6;
  puStack_168 = puVar2;
  ppuStack_160 = &puStack_c0;
  _objc_retain(puVar10);
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    puVar3 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar7[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar5 = puVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x24 = auStack_1c8;
      func_0x00010002b838(auStack_1c8,puVar5);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar11 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_1b0,puVar1);
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      func_0x00010007e1e8(&uStack_1e8,auStack_1c8,&lStack_198,2);
      puVar3 = (undefined8 *)&UNK_110928480;
      puVar11 = &uStack_1e8;
      puVar12 = &uStack_1e8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928480,puVar12,puVar8);
      puStack_1d0 = puVar11;
      func_0x00010007e5dc(&puStack_1d0);
      lVar14 = 0;
      puVar7 = auStack_1c8;
      puVar13 = puVar8;
      do {
        if ((&cStack_199)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar6 = puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_270;
  pcStack_1f8 = FUN_1064e9c90;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar4 = puVar12;
  puStack_230 = unaff_x24;
  puStack_228 = puVar5;
  puStack_220 = puVar11;
  puStack_218 = puVar7;
  puStack_210 = puVar2;
  puStack_208 = puVar10;
  pppuStack_200 = &ppuStack_160;
  _objc_retain(puVar3);
  plVar15 = (long *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar5 = auStack_250;
    func_0x00010002b838(auStack_250,puVar2);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
    puVar9 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109284d0,&uStack_270,puVar12);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    puVar4 = puVar8;
    puVar13 = puVar12;
    puVar11 = &uStack_270;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar4 = puVar8;
      puVar13 = puVar12;
      puVar11 = &uStack_270;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar2;
  __Unwind_Resume();
  pcStack_278 = FUN_1064e9e04;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar9;
  puVar10 = puVar4;
  puVar12 = puVar13;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = puVar5;
  puStack_2a0 = puVar11;
  plStack_298 = plVar15;
  puStack_290 = puVar2;
  puStack_288 = puVar3;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar5 = auStack_2e8;
    func_0x00010002b838(auStack_2e8,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_2d0,puVar2);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    func_0x00010007e1e8(&uStack_308,auStack_2e8,&lStack_2b8,2);
    puVar6 = (undefined8 *)&UNK_110928520;
    puVar9 = &uStack_308;
    puVar10 = &uStack_308;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928520,puVar10,puVar13);
    puStack_2f0 = puVar9;
    func_0x00010007e5dc(&puStack_2f0);
    lVar14 = 0;
    puVar2 = auStack_2e8;
    puVar12 = puVar13;
    do {
      if ((&cStack_2b9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_2d1 < '\0') {
    __ZdlPv(auStack_2e8[0]);
  }
  _objc_release(puVar4);
  puVar8 = puVar3;
  __Unwind_Resume();
  puVar13 = &uStack_390;
  pcStack_318 = FUN_1064e9ff0;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar6;
  puVar7 = puVar10;
  puStack_350 = unaff_x24;
  puStack_348 = puVar5;
  puStack_340 = puVar9;
  puStack_338 = puVar2;
  puStack_330 = puVar3;
  puStack_328 = puVar4;
  pppuStack_320 = &pppuStack_280;
  _objc_retain(puVar6);
  plVar15 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar5 = auStack_370;
    func_0x00010002b838(auStack_370,puVar2);
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    func_0x00010007e1e8(&uStack_390,auStack_370,&lStack_358,1);
    puVar11 = (undefined8 *)&UNK_1109285c0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109285c0,&uStack_390,puVar10);
    puStack_378 = (undefined1 *)&uStack_390;
    func_0x00010007e5dc(&puStack_378);
    puVar7 = puVar13;
    puVar12 = puVar10;
    puVar9 = &uStack_390;
    if (cStack_359 < '\0') {
      __ZdlPv(auStack_370[0]);
      puVar7 = puVar13;
      puVar12 = puVar10;
      puVar9 = &uStack_390;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_398 = FUN_1064ea164;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar10 = puVar7;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = puVar5;
  puStack_3c0 = puVar9;
  plStack_3b8 = plVar15;
  puStack_3b0 = puVar2;
  puStack_3a8 = puVar6;
  pppuStack_3a0 = &pppuStack_320;
  _objc_retain(puVar7);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar4[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar11 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    puVar5 = auStack_408;
    func_0x00010002b838(auStack_408,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_3f0,puVar2);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_418 = 0;
    func_0x00010007e1e8(&uStack_428,auStack_408,&lStack_3d8,2);
    puVar3 = (undefined8 *)&UNK_110928610;
    puVar11 = &uStack_428;
    puVar10 = &uStack_428;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110928610,puVar10,puVar12);
    puStack_410 = puVar11;
    func_0x00010007e5dc(&puStack_410);
    lVar14 = 0;
    puVar2 = auStack_408;
    do {
      if ((&cStack_3d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_3f1 < '\0') {
      __ZdlPv(auStack_408[0]);
    }
    _objc_release(puVar7);
    puVar4 = puVar9;
    __Unwind_Resume();
    pcStack_438 = FUN_1064ea350;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puStack_470 = unaff_x24;
    puStack_468 = puVar5;
    puStack_460 = puVar11;
    puStack_458 = puVar2;
    puStack_450 = puVar9;
    puStack_448 = puVar7;
    pppuStack_440 = &pppuStack_3a0;
    _objc_retain(puVar3);
    if (puVar4 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar4[1];
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_490,puVar2);
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_4a0 = 0;
      func_0x00010007e1e8(&uStack_4b0,auStack_490,&lStack_478,1);
      puVar6 = (undefined8 *)&UNK_1109286b0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109286b0,&uStack_4b0,puVar10);
      puStack_498 = (undefined1 *)&uStack_4b0;
      func_0x00010007e5dc(&puStack_498);
      if (cStack_479 < '\0') {
        __ZdlPv(auStack_490[0]);
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      puVar9 = puVar2;
      __Unwind_Resume();
      puStack_4d8 = (undefined1 *)&uStack_4f0;
      pcStack_4b8 = FUN_1064ea4c4;
      if (puVar9 != (undefined8 *)0x0) {
        uStack_4f0 = 0;
        uStack_4e8 = 0;
        uStack_4e0 = 0;
        puStack_4d0 = puVar2;
        puStack_4c8 = puVar3;
        pppuStack_4c0 = &pppuStack_440;
        (**(code **)(*(long *)puVar9[1] + 0x18))
                  ((long *)puVar9[1],&UNK_110928700,&uStack_4f0,puVar6);
        func_0x00010007e5dc(&puStack_4d8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064e9880; end: 1064e9a87;  */

void FUN_1064e9880(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ****ppppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [3];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  puVar8 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  if (param_1 != (undefined8 *)0x0) {
    plVar2 = (long *)param_1[1];
    puVar7 = (undefined8 *)&UNK_110928430;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        unaff_x23 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        unaff_x23 = param_2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,unaff_x23);
      puVar1 = &UNK_10f3812c5;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar7 = (undefined8 *)&UNK_110928430;
      param_3 = &uStack_98;
      puVar8 = &uStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928430,puVar8,param_4);
      puStack_80 = param_3;
      func_0x00010007e5dc(&puStack_80);
      lVar14 = 0;
      param_1 = auStack_78;
      puVar5 = param_4;
      do {
        if ((&cStack_49)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064e9a88;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar7;
  puVar10 = puVar8;
  puVar13 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = param_1;
  puStack_c0 = puVar3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar4[1];
    puVar9 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = (long *)puVar4[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        unaff_x23 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        unaff_x23 = puVar7;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_118;
      func_0x00010002b838(auStack_118,unaff_x23);
      puVar1 = &UNK_10f3812c5;
      if ((int)puVar8 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_100,puVar1);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      puVar9 = (undefined8 *)&UNK_110928480;
      puVar8 = &uStack_138;
      puVar10 = &uStack_138;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928480,puVar10,puVar5);
      puStack_120 = puVar8;
      func_0x00010007e5dc(&puStack_120);
      lVar14 = 0;
      puVar4 = auStack_118;
      puVar13 = puVar5;
      do {
        if ((&cStack_e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar5 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar12 = &uStack_1c0;
  pcStack_148 = FUN_1064e9c90;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  puVar11 = puVar10;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar8;
  puStack_168 = puVar4;
  puStack_160 = puVar5;
  puStack_158 = puVar7;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar9);
  plVar2 = (long *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar6[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar7 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar7);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109284d0,&uStack_1c0,puVar10);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar11 = puVar12;
    puVar13 = puVar10;
    puVar8 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar11 = puVar12;
      puVar13 = puVar10;
      puVar8 = &uStack_1c0;
    }
  }
  puVar7 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar4 = puVar7;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1064e9e04;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar10 = puVar11;
  puVar6 = puVar13;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar8;
  plStack_1e8 = plVar2;
  puStack_1e0 = puVar7;
  puStack_1d8 = puVar9;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar11);
  puVar7 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar4[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar3 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar7 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_220,puVar7);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar5 = (undefined8 *)&UNK_110928520;
    puVar3 = &uStack_258;
    puVar10 = &uStack_258;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928520,puVar10,puVar13);
    puStack_240 = puVar3;
    func_0x00010007e5dc(&puStack_240);
    lVar14 = 0;
    puVar7 = auStack_238;
    puVar6 = puVar13;
    do {
      if ((&cStack_209)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar8 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar11);
  puVar4 = puVar8;
  __Unwind_Resume();
  puVar12 = &uStack_2e0;
  pcStack_268 = FUN_1064e9ff0;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar5;
  puVar13 = puVar10;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar3;
  puStack_288 = puVar7;
  puStack_280 = puVar8;
  puStack_278 = puVar11;
  ppppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar5);
  plVar2 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar4[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar7 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_2c0;
    func_0x00010002b838(auStack_2c0,puVar7);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
    puVar9 = (undefined8 *)&UNK_1109285c0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109285c0,&uStack_2e0,puVar10);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    puVar13 = puVar12;
    puVar6 = puVar10;
    puVar3 = &uStack_2e0;
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
      puVar13 = puVar12;
      puVar6 = puVar10;
      puVar3 = &uStack_2e0;
    }
  }
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar7;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1064ea164;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar10 = puVar13;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar3;
  plStack_308 = plVar2;
  puStack_300 = puVar7;
  puStack_2f8 = puVar5;
  ppppuStack_2f0 = &ppppuStack_270;
  _objc_retain(puVar13);
  puVar7 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar4[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_358;
    func_0x00010002b838(auStack_358,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar7 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_340,puVar7);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar8 = (undefined8 *)&UNK_110928610;
    puVar9 = &uStack_378;
    puVar10 = &uStack_378;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928610,puVar10,puVar6);
    puStack_360 = puVar9;
    func_0x00010007e5dc(&puStack_360);
    lVar14 = 0;
    puVar7 = auStack_358;
    do {
      if ((&cStack_329)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar5 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar13);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_388 = FUN_1064ea350;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar9;
  puStack_3a8 = puVar7;
  puStack_3a0 = puVar5;
  puStack_398 = puVar13;
  ppppuStack_390 = &ppppuStack_2f0;
  _objc_retain(puVar8);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar4[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar7 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_3e0,puVar7);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    puVar3 = (undefined8 *)&UNK_1109286b0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109286b0,&uStack_400,puVar10);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
    }
  }
  puVar7 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar5 = puVar7;
  __Unwind_Resume();
  puStack_428 = (undefined1 *)&uStack_440;
  pcStack_408 = FUN_1064ea4c4;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    puStack_420 = puVar7;
    puStack_418 = puVar8;
    ppppuStack_410 = &ppppuStack_390;
    (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_110928700,&uStack_440,puVar3);
    func_0x00010007e5dc(&puStack_428);
  }
  return;
}



/* Entry: 1064e9a88; end: 1064e9c8f;  */

void FUN_1064e9a88(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined1 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined1 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  puVar6 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  if (param_1 != (undefined1 *)0x0) {
    plVar2 = *(long **)(param_1 + 8);
    puVar8 = (undefined8 *)&UNK_110928480;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        unaff_x23 = (undefined8 *)&UNK_10f38117f;
      }
      else {
        unaff_x23 = param_2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,unaff_x23);
      puVar1 = &UNK_10f3812c5;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f3812ca;
      }
      func_0x00010002b838(auStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar8 = (undefined8 *)&UNK_110928480;
      param_3 = &uStack_98;
      puVar6 = &uStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928480,puVar6,param_4);
      puStack_80 = param_3;
      func_0x00010007e5dc(&puStack_80);
      lVar14 = 0;
      param_1 = auStack_78;
      puVar5 = param_4;
      do {
        if ((&cStack_49)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_1064e9c90;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar8;
  puVar9 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = param_1;
  puStack_c0 = puVar3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  plVar2 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar4[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar5 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar5);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar10 = (undefined8 *)&UNK_1109284d0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109284d0,&uStack_120,puVar6);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar9 = puVar7;
    puVar5 = puVar6;
    param_3 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar9 = puVar7;
      puVar5 = puVar6;
      param_3 = &uStack_120;
    }
  }
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_128 = FUN_1064e9e04;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puVar4 = puVar9;
  puVar13 = puVar5;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = param_3;
  plStack_148 = plVar2;
  puStack_140 = puVar6;
  puStack_138 = puVar8;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar9);
  puVar8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar7[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar8 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_180,puVar8);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar3 = (undefined8 *)&UNK_110928520;
    puVar10 = &uStack_1b8;
    puVar4 = &uStack_1b8;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928520,puVar4,puVar5);
    puStack_1a0 = puVar10;
    func_0x00010007e5dc(&puStack_1a0);
    lVar14 = 0;
    puVar8 = auStack_198;
    puVar13 = puVar5;
    do {
      if ((&cStack_169)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar6 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar9);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar12 = &uStack_240;
  pcStack_1c8 = FUN_1064e9ff0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar11 = puVar4;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar10;
  puStack_1e8 = puVar8;
  puStack_1e0 = puVar6;
  puStack_1d8 = puVar9;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar3);
  plVar2 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar8 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar8);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar5 = (undefined8 *)&UNK_1109285c0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109285c0,&uStack_240,puVar4);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar11 = puVar12;
    puVar13 = puVar4;
    puVar10 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar11 = puVar12;
      puVar13 = puVar4;
      puVar10 = &uStack_240;
    }
  }
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_248 = FUN_1064ea164;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar4 = puVar11;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar10;
  plStack_268 = plVar2;
  puStack_260 = puVar8;
  puStack_258 = puVar3;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar11);
  puVar8 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar9[1];
    puVar1 = &UNK_10f3812c5;
    if ((int)puVar5 == 0) {
      puVar1 = &UNK_10f3812ca;
    }
    unaff_x23 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar8 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_2a0,puVar8);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar6 = (undefined8 *)&UNK_110928610;
    puVar5 = &uStack_2d8;
    puVar4 = &uStack_2d8;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110928610,puVar4,puVar13);
    puStack_2c0 = puVar5;
    func_0x00010007e5dc(&puStack_2c0);
    lVar14 = 0;
    puVar8 = auStack_2b8;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar3 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar11);
  puVar9 = puVar3;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1064ea350;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar6;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar5;
  puStack_308 = puVar8;
  puStack_300 = puVar3;
  puStack_2f8 = puVar11;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar6);
  if (puVar9 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar9[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      puVar8 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_340,puVar8);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
    puVar10 = (undefined8 *)&UNK_1109286b0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109286b0,&uStack_360,puVar4);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
    }
  }
  puVar8 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar8;
  __Unwind_Resume();
  puStack_388 = (undefined1 *)&uStack_3a0;
  pcStack_368 = FUN_1064ea4c4;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    puStack_380 = puVar8;
    puStack_378 = puVar6;
    pppuStack_370 = &pppuStack_2f0;
    (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_110928700,&uStack_3a0,puVar10);
    func_0x00010007e5dc(&puStack_388);
  }
  return;
}



/* Entry: 1064e9c90; end: 1064e9e03;  */

void FUN_1064e9c90(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109284d0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109284d0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1064e9e04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar8;
  puVar5 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    puVar2 = &UNK_10f3812c5;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_110928520;
    puVar3 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110928520,puVar3,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar10 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar4 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_1064e9ff0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar8 = puVar3;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar4 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar4[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar1 = &UNK_1109285c0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109285c0,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar8 = puVar9;
    puVar5 = puVar3;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar5 = puVar3;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_1a8 = FUN_1064ea164;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar8;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    puVar2 = &UNK_10f3812c5;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_200,puVar3);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar7 = &UNK_110928610;
    puVar3 = &uStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110928610,puVar3,puVar5);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar10 = 0;
    do {
      if ((&cStack_1e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar8);
  __Unwind_Resume();
  pcStack_248 = FUN_1064ea350;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar7);
  if (puVar5 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar5[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar1 = &UNK_1109286b0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109286b0,&uStack_2c0,puVar3);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar2;
  __Unwind_Resume();
  puStack_2e8 = (undefined1 *)&uStack_300;
  pcStack_2c8 = FUN_1064ea4c4;
  if (puVar6 != (undefined *)0x0) {
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    puStack_2e0 = puVar2;
    puStack_2d8 = puVar7;
    pppuStack_2d0 = &pppuStack_250;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_110928700,&uStack_300,puVar1);
    func_0x00010007e5dc(&puStack_2e8);
  }
  return;
}



/* Entry: 1064e9e04; end: 1064e9fef;  */

void FUN_1064e9e04(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    puVar7 = &UNK_10f3812c5;
    if ((int)param_2 == 0) {
      puVar7 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_78,puVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar7 = &UNK_110928520;
    puVar1 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110928520,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_1064e9ff0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  if (puVar2 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar2[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar3 = &UNK_10f38117f;
    }
    else {
      puVar3 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar3 = &UNK_1109285c0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109285c0,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar8 = puVar9;
    puVar5 = puVar1;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar5 = puVar1;
    }
  }
  puVar4 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_128 = FUN_1064ea164;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar1 = puVar8;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    puVar7 = &UNK_10f3812c5;
    if ((int)puVar3 == 0) {
      puVar7 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_198,puVar7);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_110928610;
    puVar1 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110928610,puVar1,puVar5);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar10 = 0;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar8);
  __Unwind_Resume();
  pcStack_1c8 = FUN_1064ea350;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  if (puVar5 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar5[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar3 = &UNK_10f38117f;
    }
    else {
      puVar3 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_220,puVar3);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_1109286b0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109286b0,&uStack_240,puVar1);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
    }
  }
  puVar4 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar4;
  __Unwind_Resume();
  puStack_268 = (undefined1 *)&uStack_280;
  pcStack_248 = FUN_1064ea4c4;
  if (puVar6 != (undefined *)0x0) {
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    puStack_260 = puVar4;
    puStack_258 = puVar7;
    pppuStack_250 = &pppuStack_1d0;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_110928700,&uStack_280,puVar3);
    func_0x00010007e5dc(&puStack_268);
  }
  return;
}



/* Entry: 1064e9ff0; end: 1064ea163;  */

void FUN_1064e9ff0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109285c0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109285c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1064ea164;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    puVar2 = &UNK_10f3812c5;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110928610;
    puVar3 = &uStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110928610,puVar3,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar8 = 0;
    do {
      if ((&cStack_c9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar4 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_128 = FUN_1064ea350;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar4 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar1 = &UNK_1109286b0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109286b0,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_1064ea4c4;
  if (puVar5 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar2;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110928700,&uStack_1e0,puVar1);
    func_0x00010007e5dc(&puStack_1c8);
  }
  return;
}



/* Entry: 1064ea164; end: 1064ea34f;  */

void FUN_1064ea164(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar6 = &UNK_10f3812c5;
    if ((int)param_2 == 0) {
      puVar6 = &UNK_10f3812ca;
    }
    func_0x00010002b838(auStack_78,puVar6);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar6 = &UNK_110928610;
    puVar1 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110928610,puVar1,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_1064ea350;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  if (puVar2 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar2[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar3 = &UNK_10f38117f;
    }
    else {
      puVar3 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar3 = &UNK_1109286b0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109286b0,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar4;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_1064ea4c4;
  if (puVar5 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar4;
    puStack_138 = puVar6;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110928700,&uStack_160,puVar3);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}


