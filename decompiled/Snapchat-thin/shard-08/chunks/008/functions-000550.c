/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10667c3e4; end: 10667c3eb;  */

void FUN_10667c3e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10667c3ec; end: 10667c413;  */

void FUN_10667c3ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10667c414; end: 10667c693;  */

void FUN_10667c414(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar7 = *(undefined **)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b14b8;
  if (puVar7 == (undefined *)0x0) {
    _objc_retain(param_2);
    _objc_alloc(puVar2);
    uVar1 = param_2;
    func_0x00010bf1acc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf1c0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf1c000(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf1af00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126b15c8;
    _objc_alloc(PTR_PTR_1126b15c8);
    uVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c292e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c05c0e0(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126cc830;
  _objc_alloc(PTR_PTR_1126cc830);
  uVar1 = param_2;
  func_0x00010c260ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049140(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10667c694; end: 10667c7ef; -[SCFriendingNearbyFriendsRepositoryImpl _filterAndPublishNearbyFriends:] */

void FUN_10667c694(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x000108c07558();
  uVar2 = param_3;
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10667c758;
    puStack_40 = &UNK_110932878;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x0001006372a4(param_3,&puStack_58);
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10667c7f0; end: 10667c843; -[SCFriendingNearbyFriendsRepositoryImpl .cxx_destruct] */

void FUN_10667c7f0(long param_1)

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



/* Entry: 10667c844; end: 10667c9bb; -[SCFriendingNearbyFriendsSeenAndAddTracker initWithSnapchattersDataTracker:nearbyFriendsGrapheneLogger:performerProvider:blizzardLogger:] */

undefined1 *
FUN_10667c844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f2410;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10667c9bc; end: 10667ca93; -[SCFriendingNearbyFriendsSeenAndAddTracker markNearbyFriendAsSeen:] */

void FUN_10667c9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10667ca94; end: 10667cac7;  */

void FUN_10667ca94(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5d660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10667cac8; end: 10667cb6f; -[SCFriendingNearbyFriendsSeenAndAddTracker logSeenAndAddNearbyFriends] */

void FUN_10667cac8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10667cb70; end: 10667cb9b;  */

void FUN_10667cb70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10667cb9c; end: 10667cbe3; -[SCFriendingNearbyFriendsSeenAndAddTracker _markNearbyFriendAsSeen:] */

void FUN_10667cb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10667cbe4; end: 10667cc4b; -[SCFriendingNearbyFriendsSeenAndAddTracker _markNearbyFriendAdded:] */

void FUN_10667cbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2840();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10667cc4c; end: 10667ccd3; -[SCFriendingNearbyFriendsSeenAndAddTracker _logSeenAndAddNearbyFriends] */

/* WARNING: Possible PIC construction at 0x00010667ccc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010667ccc4) */

void FUN_10667cc4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0ab260(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0ab240(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10667ccd4; end: 10667ce03; -[SCFriendingNearbyFriendsSeenAndAddTracker didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10667ccd4(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar2 = lVar1, func_0x00010befb8c0(), lVar2 == 0x5740d2fe)) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10667ce04; end: 10667ce77;  */

void FUN_10667ce04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5d640(lVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10667ce78; end: 10667ce7b; -[SCFriendingNearbyFriendsSeenAndAddTracker didStartSnapchattersUpdateDataRequest:] */

void FUN_10667ce78(void)

{
  return;
}



/* Entry: 10667ce7c; end: 10667cecf; -[SCFriendingNearbyFriendsSeenAndAddTracker .cxx_destruct] */

void FUN_10667ce7c(long param_1)

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



/* Entry: 10667ced0; end: 10667d1a3; -[SCFriendingNearbyFriendsServiceProvider provide] */

void FUN_10667ced0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
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
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10667d1a4;
  puStack_90 = &UNK_1109328a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10667d1e4;
  puStack_b8 = &UNK_1109328d8;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10667d224;
  puStack_e8 = &UNK_110932908;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_e0 = puVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_138 = puVar5;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x10667d26c;
  puStack_120 = &UNK_110932938;
  _objc_copyWeak(auStack_108,auStack_80);
  puStack_118 = puVar1;
  puStack_110 = puVar2;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_140,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cc838;
  _objc_alloc(PTR_PTR_1126cc838);
  func_0x00010c013460();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_140);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10667d1a4; end: 10667d2ff;  */

void FUN_10667d1a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be24640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10667d300; end: 10667d577; -[SCFriendingNearbyFriendsServiceProvider _createFindNearbyFriendsInteractor:grapheneLogger:seenAndAddTracker:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126cc840;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bdedc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11274d4cc;
  lVar3 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274d4d0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11274d4d4;
  lVar7 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013360(puVar1,param_2,lVar2,lVar4,lVar6,lVar8,param_4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126cc848;
  _objc_alloc(PTR_PTR_1126cc848);
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar5 = lVar11;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274d4d8;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026de0(puVar9,param_2,lVar5,puVar1,lVar7,param_3,lVar2,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10667d578; end: 10667d6a7; -[SCFriendingNearbyFriendsServiceProvider _createNearbyFriendsRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cc850;
  _objc_alloc(PTR_PTR_1126cc850);
  lVar8 = (long)_DAT_11274d4dc;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274d4d0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274d4d4;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049e20(puVar1,param_2,lVar3,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667d6a8; end: 10667d79f; -[SCFriendingNearbyFriendsServiceProvider _createNearbyFriendsSeenAndAddTracker:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cc858;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_11274d4dc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274d4d0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049e00(puVar1,param_2,lVar3,param_3,lVar4,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667d7a0; end: 10667d85b; -[SCFriendingNearbyFriendsServiceProvider _createFindFriendsGrpcService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d7a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cc860;
  _objc_alloc(PTR_PTR_1126cc860);
  lVar2 = param_1 + _DAT_11274d4e0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274d4d0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058dc0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667d85c; end: 10667d8d7; -[SCFriendingNearbyFriendsServiceProvider _grapheneLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d85c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cc868;
  _objc_alloc(PTR_PTR_1126cc868);
  param_1 = param_1 + _DAT_11274d4e4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667d8d8; end: 10667d993; -[SCFriendingNearbyFriendsServiceProvider _blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d8d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cc870;
  _objc_alloc(PTR_PTR_1126cc870);
  lVar2 = param_1 + _DAT_11274d4e8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274d4d0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f3a0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667d994; end: 10667da1f; -[SCFriendingNearbyFriendsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667d994(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d4e8);
  _objc_destroyWeak(param_1 + _DAT_11274d4d4);
  _objc_destroyWeak(param_1 + _DAT_11274d4e4);
  _objc_destroyWeak(param_1 + _DAT_11274d4d0);
  _objc_destroyWeak(param_1 + _DAT_11274d4e0);
  _objc_destroyWeak(param_1 + _DAT_11274d4cc);
  _objc_destroyWeak(param_1 + _DAT_11274d4dc);
  _objc_destroyWeak(param_1 + _DAT_11274d4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274d4ec);
  return;
}



/* Entry: 10667da20; end: 10667dadf;  */

void FUN_10667da20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc880;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010bf51c80(param_4);
  func_0x00010c1b9120(puVar1);
  func_0x00010bf51c80(param_4);
  func_0x00010c1be5e0(param_2,puVar1);
  func_0x00010bfe4080(param_4);
  func_0x00010c1614e0(puVar1);
  uVar2 = param_4;
  func_0x00010c2709c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c26f320(uVar2);
  func_0x00010c1ec1a0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667dae0; end: 10667dc87; -[SCFriendingFindNearbyFriendsGrpcService initWithUnifiedGRPCClientFactory:performerProvider:] */

undefined1 *
FUN_10667dae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f2418;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf56360(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    puVar6 = PTR_PTR_1126cc888;
    _objc_alloc();
    func_0x00010c058f80();
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10667dc88; end: 10667de57; -[SCFriendingFindNearbyFriendsGrpcService fetchNearbyFriendsWithUserLocations:isUserOnNearbyPage:completionBlock:] */

void FUN_10667dc88(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = param_3;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(param_5 + 0x10))(param_5,0,0);
    }
    else {
      _objc_retain(param_3);
      puVar1 = PTR_PTR_1126cc878;
      _objc_opt_new(PTR_PTR_1126cc878);
      func_0x00010c1b2f60();
      puVar2 = PTR_PTR_1126b1568;
      func_0x00010bfb93a0();
      if ((int)puVar2 == 0) {
        puVar2 = param_3;
        func_0x00010c0b8600(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = PTR_PTR_1126cc880;
        _objc_opt_new();
        func_0x00010c1b9120(0x404460f9096bb98c);
        func_0x00010c1be5e0(0x40527f318fc50481,puVar3);
        func_0x00010c1614e0(puVar3);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      puVar3 = puVar2;
      func_0x00010c0d3c80(puVar2);
      func_0x00010c1bff20(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bdd8d20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc7ec0(uVar5);
      _objc_release(param_1);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 10667de58; end: 10667de63; -[SCFriendingFindNearbyFriendsGrpcService _callOptionBuilder] */

void FUN_10667de58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 10667de64; end: 10667de6f; -[SCFriendingFindNearbyFriendsGrpcService .cxx_destruct] */

void FUN_10667de64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10667de70; end: 10667dee3; -[UNISurface initWithUnifiedGrpcService:] */

undefined1 * FUN_10667de70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2420;
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



/* Entry: 10667dee4; end: 10667dfc7; -[UNISurface getNearbyFriendsWithRequest:callOptionsBuilder:handler:] */

void FUN_10667dee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cc890;
  _objc_opt_class(PTR_PTR_1126cc890);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e58b18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10667dfc8; end: 10667e04b; -[UNISurface .cxx_destruct] */

void FUN_10667dfc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10667e04c; end: 10667e077; +[SCGrapheneNearbyFriendsMetric pageOpen] */

void FUN_10667e04c(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e078; end: 10667e0a3; +[SCGrapheneNearbyFriendsMetric pageClose] */

void FUN_10667e078(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e0a4; end: 10667e0cf; +[SCGrapheneNearbyFriendsMetric pageSession] */

void FUN_10667e0a4(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e0d0; end: 10667e0fb; +[SCGrapheneNearbyFriendsMetric toggleChanged] */

void FUN_10667e0d0(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e0fc; end: 10667e127; +[SCGrapheneNearbyFriendsMetric friendsReceived] */

void FUN_10667e0fc(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e128; end: 10667e153; +[SCGrapheneNearbyFriendsMetric numFriendsAdded] */

void FUN_10667e128(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e154; end: 10667e17f; +[SCGrapheneNearbyFriendsMetric numFriendsImpressed] */

void FUN_10667e154(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e180; end: 10667e1ab; +[SCGrapheneNearbyFriendsMetric featureSessionTime] */

void FUN_10667e180(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e1ac; end: 10667e1d7; +[SCGrapheneNearbyFriendsMetric featureTimeOut] */

void FUN_10667e1ac(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e1d8; end: 10667e203; +[SCGrapheneNearbyFriendsMetric networkLatency] */

void FUN_10667e1d8(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e204; end: 10667e22f; +[SCGrapheneNearbyFriendsMetric failed] */

void FUN_10667e204(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e230; end: 10667e25b; +[SCGrapheneNearbyFriendsMetric succeeded] */

void FUN_10667e230(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e25c; end: 10667e287; +[SCGrapheneNearbyFriendsMetric pageLocationLatency] */

void FUN_10667e25c(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e288; end: 10667e2b3; +[SCGrapheneNearbyFriendsMetric bgLocationLatency] */

void FUN_10667e288(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e2b4; end: 10667e2df; +[SCGrapheneNearbyFriendsMetric appBackgrounded] */

void FUN_10667e2b4(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e2e0; end: 10667e30b; +[SCGrapheneNearbyFriendsMetric appForegrounded] */

void FUN_10667e2e0(void)

{
  _objc_alloc(PTR_PTR_1126cc828);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667e30c; end: 10667e3ab; -[SCGrapheneNearbyFriendsMetric description] */

void FUN_10667e30c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e58b58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e58b58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f2428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10667e3ac; end: 10667e583; -[SCGrapheneRegistry nearbyFriendsGraphene] */

void FUN_10667e3ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10667e434;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3c80 != -1) {
    func_0x00010002a2fc(0x1136c3c80,&puStack_48);
  }
  uVar1 = uRam00000001136c3c78;
  _objc_retain(uRam00000001136c3c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10667e584; end: 10667ea1f;  */

long * FUN_10667e584(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a8 = param_2;
  _objc_retain(param_2);
  plVar1 = (long *)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_1);
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(plVar1);
  _objc_release(puVar2);
  plVar3 = plVar1;
  func_0x00010c08c0e0(plVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(plVar3);
  func_0x00010c219b60(plVar1);
  plVar3 = (long *)PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(plVar3);
  _objc_release(puVar2);
  func_0x00010c212f20(plVar3);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(plVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(plVar3);
  func_0x00010c1c83a0(0x3fe99999a0000000,plVar3);
  func_0x00010c165e20(plVar3);
  func_0x00010befbb60(plVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  plVar4 = plVar1;
  puStack_a0 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  plStack_b0 = plVar4;
  func_0x00010bf49420(0x4043000000000000);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar3;
  plStack_80 = plVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  plVar6 = plVar1;
  func_0x00010bf348e0(plVar1);
  _objc_retainAutoreleasedReturnValue();
  plVar7 = plVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  plVar8 = plVar3;
  plStack_78 = plVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  plVar9 = plVar1;
  func_0x00010c08de00(plVar1);
  _objc_retainAutoreleasedReturnValue();
  plVar10 = plVar8;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 3;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  plStack_70 = plVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(puVar2);
  lVar18 = lStack_a8;
  _objc_release(plVar10);
  _objc_release(plVar9);
  _objc_release(plVar8);
  _objc_release(plVar7);
  _objc_release(plVar6);
  _objc_release(plVar5);
  _objc_release(plVar4);
  _objc_release(plStack_b0);
  if (lVar18 != 0) {
    func_0x00010c219b60(lVar18);
    func_0x00010befbb60(plVar1);
    plVar4 = plVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar18;
    plStack_b0 = plVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_b8 = lVar11;
    func_0x00010bf493c0(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar18;
    plStack_c0 = plVar4;
    plStack_98 = plVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    plVar4 = plVar1;
    func_0x00010bf348e0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar18;
    lStack_90 = lVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar1;
    func_0x00010c2793a0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 3;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_a0);
    _objc_release(puVar2);
    _objc_release(lVar14);
    _objc_release(plVar5);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(plVar4);
    _objc_release(lVar11);
    _objc_release(plStack_c0);
    _objc_release(lStack_b8);
    _objc_release(plStack_b0);
  }
  puVar2 = puStack_a0;
  puVar16 = puStack_a0;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar2);
  _objc_release(plVar3);
  lVar11 = lVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
    return plVar1;
  }
  ___stack_chk_fail();
  lStack_f0 = lVar18;
  puStack_d8 = puVar2;
  pcStack_c8 = FUN_10667ea20;
  plStack_e8 = plVar3;
  plStack_e0 = plVar1;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar16);
  _objc_retain(uVar17);
  puStack_f8 = PTR_PTR_1126f2430;
  plVar1 = &lStack_100;
  lStack_100 = lVar11;
  _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
  if (plVar1 != (long *)0x0) {
    puVar2 = puVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bfce780();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = plVar1[1];
    plVar1[1] = (long)puVar15;
    _objc_release(lVar18);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(uVar17);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = plVar1[3];
    plVar1[3] = (long)puVar2;
    _objc_release(lVar18);
    _objc_release(uVar17);
  }
  _objc_release(uVar17);
  _objc_release(puVar16);
  return plVar1;
}



/* Entry: 10667ea20; end: 10667eb3f; -[SCGroupChatViewModelLogger initWithGrapheneRegistry:performerProvider:] */

undefined8 *
FUN_10667ea20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2430;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfce780();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10667eb40; end: 10667eb9b;  */

void FUN_10667eb40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10667eb9c; end: 10667ec73; -[SCGroupChatViewModelLogger logViewModelForStatus:] */

void FUN_10667eb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10667ec74; end: 10667eca7;  */

void FUN_10667ec74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10667eca8; end: 10667ed63; -[SCGroupChatViewModelLogger _logViewModelForStatus:] */

void FUN_10667eca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cc898;
  func_0x00010c29d560(PTR_PTR_1126cc898);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10667ed64; end: 10667ed9f; -[SCGroupChatViewModelLogger .cxx_destruct] */

void FUN_10667ed64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10667eda0; end: 10667eebf; -[SCGroupChatAddButtonServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667eda0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_11274d504;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf50200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cc8a8;
  _objc_alloc(PTR_PTR_1126cc8a8);
  func_0x00010c018a40();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10667eec0; end: 10667ef3b;  */

void FUN_10667eec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cc8a0;
  _objc_alloc(PTR_PTR_1126cc8a0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010be49ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee6c0(puVar1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10667ef3c; end: 10667f01f; -[SCGroupChatAddButtonServiceProvider _lazyViewModelLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667ef3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_11274d508;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11274d50c;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10667f020;
  puStack_48 = &UNK_110932a08;
  puVar3 = PTR_PTR_1126ae720;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10667f020; end: 10667f04f;  */

void FUN_10667f020(void)

{
  _objc_alloc(PTR_PTR_1126cc8b0);
  func_0x00010c018740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667f050; end: 10667f09f; -[SCGroupChatAddButtonServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10667f050(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d508);
  _objc_destroyWeak(param_1 + _DAT_11274d50c);
  _objc_destroyWeak(param_1 + _DAT_11274d504);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274d510);
  return;
}



/* Entry: 10667f0a0; end: 10667f25b; -[SCGroupChatAddButtonViewModelDefaultProvider initConversationLifecycleEventObservable:viewModelLogger:] */

undefined8 *
FUN_10667f0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2438;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,puVar1);
    uVar4 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10667f25c; end: 10667f2a3;  */

void FUN_10667f25c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10667f2a4; end: 10667f4cf; -[SCGroupChatAddButtonViewModelDefaultProvider viewModelWithMessageId:belowTheFold:snapchatter:friendStatus:] */

void FUN_10667f2a4(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c06d560();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be3fde0();
    if ((uVar1 & 1) != 0) {
LAB_10667f308:
      puVar4 = PTR_PTR_1126cc8b8;
      _objc_alloc(PTR_PTR_1126cc8b8);
      uVar1 = param_5;
      func_0x000107d3d8a4(param_5,0,0x36,0x2e879d01);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c015ae0(puVar4);
      _objc_release(uVar1);
      goto LAB_10667f358;
    }
    if (param_4 != 0) {
      uVar1 = param_5;
      func_0x00010c2923e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010be5fe40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_5;
      func_0x00010c2923e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar3 == 0) {
        uVar2 = param_1;
        func_0x00010be5fe40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        if (uVar2 == 0) {
          uVar1 = param_5;
          func_0x00010c2923e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bea5a00(param_1);
          _objc_release(uVar1);
          uVar1 = param_1;
          func_0x00010be3fde0();
          if ((int)uVar1 != 0) {
            uVar1 = param_5;
            func_0x00010c2923e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bea39e0(param_1);
            _objc_release(uVar1);
            uVar3 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c269d40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b3140();
            _objc_release(uVar3);
            goto LAB_10667f308;
          }
        }
      }
      else {
        func_0x00010be07360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        if (param_1 != 0) goto LAB_10667f308;
      }
    }
  }
  puVar4 = (undefined *)0x0;
LAB_10667f358:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10667f4d0; end: 10667f557; -[SCGroupChatAddButtonViewModelDefaultProvider _isEligibleForAddButton:friendStatus:] */

uint FUN_10667f4d0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000100bf0c60(param_3,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar1 = 0;
    if (param_4 < 10) {
      uVar1 = 0x30c >> (ulong)((uint)param_4 & 0x1f);
    }
    uVar3 = 1;
    if (uVar2 != 0) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 10667f558; end: 10667f5b7; -[SCGroupChatAddButtonViewModelDefaultProvider _onReceiveConversationLifecycleEvent:] */

void FUN_10667f558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10667f5b8;
  puStack_20 = &UNK_1108450c8;
  uStack_18 = param_1;
  func_0x00010c0bd100(param_3,param_2,0,&puStack_38,0,0);
  return;
}



/* Entry: 10667f5b8; end: 10667f62b;  */

void FUN_10667f5b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar1 + 0x18);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _os_unfair_lock_unlock(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10667f62c; end: 10667f6a3; -[SCGroupChatAddButtonViewModelDefaultProvider _messageIdFromUserId:] */

void FUN_10667f62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10667f6a4; end: 10667f737; -[SCGroupChatAddButtonViewModelDefaultProvider _setMessageId:forUserId:] */

void FUN_10667f6a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x18);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10667f738; end: 10667f7af; -[SCGroupChatAddButtonViewModelDefaultProvider _eligibilityFromUserId:] */

void FUN_10667f738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10667f7b0; end: 10667f81f; -[SCGroupChatAddButtonViewModelDefaultProvider _setEligibilityForUserId:] */

void FUN_10667f7b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,PTR____kCFBooleanTrue_11034ab68,
                        param_3);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10667f820; end: 10667f867; -[SCGroupChatAddButtonViewModelDefaultProvider .cxx_destruct] */

void FUN_10667f820(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10667f868; end: 10667f893; +[SCGrapheneGroupChatAddButtonMetric viewModel] */

void FUN_10667f868(void)

{
  _objc_alloc(PTR_PTR_1126cc898);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667f894; end: 10667f933; -[SCGrapheneGroupChatAddButtonMetric description] */

void FUN_10667f894(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e58d78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e58d78,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f2440;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10667f934; end: 10667fa77; -[SCGrapheneRegistry groupChatAddButtonGraphene] */

void FUN_10667f934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10667f9bc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3c90 != -1) {
    func_0x00010002a2fc(0x1136c3c90,&puStack_48);
  }
  uVar1 = uRam00000001136c3c88;
  _objc_retain(uRam00000001136c3c88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10667fa78; end: 10667faa3; +[SCGrapheneFriendingLiveActivityMetric presentationAttempt] */

void FUN_10667fa78(void)

{
  _objc_alloc(PTR_PTR_1126cc8c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667faa4; end: 10667facf; +[SCGrapheneFriendingLiveActivityMetric presentationResult] */

void FUN_10667faa4(void)

{
  _objc_alloc(PTR_PTR_1126cc8c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667fad0; end: 10667fafb; +[SCGrapheneFriendingLiveActivityMetric action] */

void FUN_10667fad0(void)

{
  _objc_alloc(PTR_PTR_1126cc8c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667fafc; end: 10667fb27; +[SCGrapheneFriendingLiveActivityMetric assetFallback] */

void FUN_10667fafc(void)

{
  _objc_alloc(PTR_PTR_1126cc8c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10667fb28; end: 10667fbc7; -[SCGrapheneFriendingLiveActivityMetric description] */

void FUN_10667fb28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e58db8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e58db8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f2448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10667fbc8; end: 10667fd27; -[SCGrapheneRegistry friendingLiveActivityGraphene] */

void FUN_10667fbc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10667fc50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3ca0 != -1) {
    func_0x00010002a2fc(0x1136c3ca0,&puStack_48);
  }
  uVar1 = uRam00000001136c3c98;
  _objc_retain(uRam00000001136c3c98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10667fd28; end: 10667fdeb; -[PlayGamesLensLoggerAdapter initWithLensLogger:lensSourceType:] */

undefined1 *
FUN_10667fd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2450;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc8c8;
    func_0x00010c0db9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10667fdec; end: 10667fe53; -[PlayGamesLensLoggerAdapter beginSession] */

void FUN_10667fdec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bec0800();
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10667fe54; end: 10667fe5b; -[PlayGamesLensLoggerAdapter lensCarouselLocationType] */

undefined8 FUN_10667fe54(void)

{
  return 0;
}



/* Entry: 10667fe5c; end: 10667fe83; -[PlayGamesLensLoggerAdapter lensSessionFlowStateObservable] */

void FUN_10667fe5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10667fe84; end: 10667fedf; -[PlayGamesLensLoggerAdapter stopSession] */

void FUN_10667fe84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126cc8c8;
    func_0x00010c257020(PTR_PTR_1126cc8c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07bc0(param_1,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10667fee0; end: 10667feef; -[PlayGamesLensLoggerAdapter isSessionActive] */

bool FUN_10667fee0(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 10667fef0; end: 10667fef7; -[PlayGamesLensLoggerAdapter lensSessionId] */

void FUN_10667fef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c096b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lensSessionId_1126034e8)
  ;
  return;
}



/* Entry: 10667fef8; end: 10667feff; -[PlayGamesLensLoggerAdapter lensSwipeId] */

void FUN_10667fef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0972d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lensSwipeId_1126036c0);
  return;
}



/* Entry: 10667ff00; end: 10667ff07; -[PlayGamesLensLoggerAdapter setLensSwipeId:] */

void FUN_10667ff00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLensSwipeId__11264cdd8);
  return;
}



/* Entry: 10667ff08; end: 10667ff0f; -[PlayGamesLensLoggerAdapter lensSwipeIdObservable] */

void FUN_10667ff08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0972f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lensSwipeIdObservable_1126036c8);
  return;
}



/* Entry: 10667ff10; end: 10667ff17; -[PlayGamesLensLoggerAdapter contextSessionId] */

void FUN_10667ff10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4f090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_contextSessionId_1125b15c8);
  return;
}



/* Entry: 10667ff18; end: 10667ff1f; -[PlayGamesLensLoggerAdapter setContextSessionId:] */

void FUN_10667ff18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1833d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setContextSessionId__11263e710);
  return;
}



/* Entry: 10667ff20; end: 10667ff27; -[PlayGamesLensLoggerAdapter currentLens] */

void FUN_10667ff20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentLens_1125b55f8);
  return;
}



/* Entry: 10667ff28; end: 10667ffbf; -[PlayGamesLensLoggerAdapter hasSwipeFunnelForCurrentLens] */

undefined8 FUN_10667ff28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdd0a0(uVar4,param_2,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 10667ffc0; end: 10667fff7; -[PlayGamesLensLoggerAdapter lensPresented:] */

void FUN_10667ffc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c095fc0(*(undefined8 *)(param_1 + 8),param_2,param_3,1,4,0,1,0,0);
  return;
}



/* Entry: 10667fff8; end: 10667ffff; -[PlayGamesLensLoggerAdapter setSnapSource:] */

void FUN_10667fff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2056d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSnapSource__11265efd8);
  return;
}


