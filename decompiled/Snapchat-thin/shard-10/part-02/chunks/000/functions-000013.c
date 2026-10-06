/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079d8e28; end: 1079d8e3f;  */

void FUN_1079d8e28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079d8e40; end: 1079d8e7f;  */

void FUN_1079d8e40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c26e120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079d8e80; end: 1079d8f6f;  */

undefined1  [16] FUN_1079d8e80(float param_1,float param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  fVar6 = 1.0;
  if (param_1 != 0.0) {
    fVar6 = param_1;
  }
  dVar2 = 0.305;
  iVar1 = param_3;
  func_0x00010b8169fc();
  dVar3 = 0.21;
  func_0x00010b8169fc();
  dVar4 = (dVar2 - dVar3) - (double)param_2;
  dVar7 = dVar4 * 0.5;
  dVar5 = dVar7;
  if (param_3 == 0) {
    dVar5 = dVar4;
  }
  func_0x0001007f8afc();
  if (iVar1 == 0) {
    dVar4 = dVar3 + dVar7;
    if (param_3 == 0) {
      dVar4 = dVar2;
    }
    dVar2 = dVar3;
    if (fVar6 != 1.0) {
      dVar2 = dVar3 * (double)fVar6;
      dVar4 = dVar3 * (double)fVar6 + dVar5;
    }
  }
  else {
    dVar5 = (double)NEON_fminnm(dVar2,0x4061800000000000);
    if (dVar5 * 0.6885245901639344 <= dVar3) {
      dVar3 = dVar5 * 0.6885245901639344;
    }
    dVar4 = (dVar5 - dVar3) * 0.5;
    if (param_3 == 0) {
      dVar4 = 0.0;
    }
    dVar2 = dVar3;
    dVar4 = dVar5 - dVar4;
  }
  auVar8._8_8_ = dVar4;
  auVar8._0_8_ = dVar2;
  return auVar8;
}



/* Entry: 1079d8f70; end: 1079d900b;  */

void FUN_1079d8f70(float param_1,int param_2)

{
  double dVar1;
  
  func_0x0001007f8afc();
  if (param_2 == 0) {
    func_0x00010b816218();
    if (param_1 == 0.0) {
      func_0x00010b8169fc(0x3fcae147ae147ae1);
    }
  }
  else {
    dVar1 = 0.21;
    func_0x00010b8169fc();
    NEON_fminnm(dVar1 + 18.0,0x4061800000000000);
  }
  return;
}



/* Entry: 1079d900c; end: 1079d9103; -[SCFriendStoriesPrefetchDecider storyIdsToPrefetch:] */

void FUN_1079d900c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfa9a40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d9104; end: 1079d9157;  */

void FUN_1079d9104(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d9158; end: 1079d91fb; -[SCFriendStoriesPrefetchDecider _selectFromStories:completion:] */

void FUN_1079d9158(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1109f3e60);
  uVar1 = param_3;
  FUN_1079d7134();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc22a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079d91fc; end: 1079d9203;  */

void FUN_1079d91fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfddf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hasUnviewedStories_1125d5188);
  return;
}



/* Entry: 1079d9204; end: 1079d9233; -[SCFriendStoriesPrefetchDecider .cxx_destruct] */

void FUN_1079d9204(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d9234; end: 1079d9333; -[SCDiscoverFeedStoriesReplayManager init] */

undefined1 * FUN_1079d9234(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d5bc8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079d9334; end: 1079d94bb; -[SCDiscoverFeedStoriesReplayManager fetchStoriesRankInfoWithCompletionQueue:completion:] */

void FUN_1079d9334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1079d93ec;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d94bc; end: 1079d94cf;  */

void FUN_1079d94bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079d94cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079d94d0; end: 1079d95e3; -[SCDiscoverFeedStoriesReplayManager allStoryIdsPlayedInCurrentSession] */

void FUN_1079d94d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1079d95e4;
  uStack_40 = 0x1079d95f4;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079d95e4; end: 1079d95fb;  */

void FUN_1079d95e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079d95fc; end: 1079d964b;  */

void FUN_1079d95fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf51e00();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079d964c; end: 1079d96db; -[SCDiscoverFeedStoriesReplayManager updateLastExpandedUnwatchedStoryId:] */

void FUN_1079d964c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1079d96dc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d96dc; end: 1079d9707;  */

void FUN_1079d96dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1079d9708; end: 1079d974f; -[SCDiscoverFeedStoriesReplayManager startToDisplayStoryWithStoryId:] */

void FUN_1079d9708(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2511c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d9750; end: 1079d97a7; -[SCDiscoverFeedStoriesReplayManager clearAllWithReason:] */

void FUN_1079d9750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1079d97a8;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 1079d97a8; end: 1079d9807;  */

void FUN_1079d97a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf3a960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079d9808; end: 1079d9833; -[SCDiscoverFeedStoriesReplayManager expandAllStories] */

void FUN_1079d9808(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9bc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d9834; end: 1079d990b; -[SCDiscoverFeedStoriesReplayManager handleFriendStoriesReplayRequest:] */

void FUN_1079d9834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d990c; end: 1079d9a1f;  */

void FUN_1079d990c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1079d9a20;
  puStack_68 = &UNK_1108d3ff0;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0300(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1079d9a20; end: 1079d9a7b;  */

void FUN_1079d9a20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d9a7c; end: 1079d9aaf;  */

void FUN_1079d9a7c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be272e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d9ab0; end: 1079d9ab7; -[SCDiscoverFeedStoriesReplayManager addListener:] */

void FUN_1079d9ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079d9ab8; end: 1079d9abf; -[SCDiscoverFeedStoriesReplayManager removeListener:] */

void FUN_1079d9ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079d9ac0; end: 1079d9b43; -[SCDiscoverFeedStoriesReplayManager _handleAddStoryDataRequest:storyId:hasUnviewedSnaps:] */

void FUN_1079d9ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf4b900(uVar1,param_2,param_4);
    if ((uVar1 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_4);
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
  func_0x00010bdcbbe0(param_1,param_2,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d9b44; end: 1079d9b8f; -[SCDiscoverFeedStoriesReplayManager _handleClearTokensWithDataRequest:] */

void FUN_1079d9b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c12adc0(uVar1);
  func_0x00010bdcbbe0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d9b90; end: 1079d9c3b; -[SCDiscoverFeedStoriesReplayManager _announceEventDataWithRequest:] */

void FUN_1079d9b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1079d9c3c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d9c3c; end: 1079d9c47;  */

void FUN_1079d9c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_didUpdateWithFriendStoriesReplay_1125bd428,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079d9c48; end: 1079d9c5f; -[SCDiscoverFeedStoriesReplayManager delegate] */

void FUN_1079d9c48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079d9c60; end: 1079d9c6b; -[SCDiscoverFeedStoriesReplayManager setDelegate:] */

void FUN_1079d9c60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1079d9c6c; end: 1079d9cc7; -[SCDiscoverFeedStoriesReplayManager .cxx_destruct] */

void FUN_1079d9c6c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d9cc8; end: 1079d9d6f; -[SCDiscoverFeedFriendsSectionCreator initWithSectionDataProviderCreator:storiesConfigProvider:] */

undefined1 *
FUN_1079d9cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9280;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
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



/* Entry: 1079d9d70; end: 1079da0db; -[SCDiscoverFeedFriendsSectionCreator localSectionDescriptorWithSource:] */

void FUN_1079d9d70(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf716c0(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f360();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    ppuVar7 = (undefined **)PTR_PTR_1126b16f8;
    _objc_alloc(PTR_PTR_1126b16f8);
    func_0x00010c028e00();
    dVar8 = 5.26354424712089e-315;
    FUN_1079d8e80(0x3f800000,0,0);
    dVar14 = 0.021299999207258224;
    dVar9 = dVar14;
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar10 = dVar9;
    func_0x00010b816218();
    dVar10 = (double)(long)(dVar9 * dVar10) / dVar10;
    dVar16 = dVar10 * -3.0;
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dVar9 = dVar14;
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar11 = dVar9;
    func_0x00010b816218();
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar12 = dVar14;
    func_0x00010b816218();
    func_0x00010c297340((double)(long)(dVar9 * dVar11) / dVar11,
                        (dVar10 + dVar8 * -4.0 + dVar16) * 0.5,
                        (double)(long)(dVar14 * dVar12) / dVar12,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    puVar6 = PTR_PTR_1126b1700;
    _objc_alloc(PTR_PTR_1126b1700);
    puVar4 = PTR_PTR_1126c2190;
    _objc_alloc_init(PTR_PTR_1126c2190);
    func_0x00010c043020(0,puVar6);
    goto LAB_1079da06c;
  }
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110ea77b8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110ea77b8,
                        &PTR____CFConstantStringClassReference_110e61f78,0);
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) != 0) goto LAB_1079d9fc0;
LAB_1079d9f80:
    puVar2 = PTR_PTR_1126d5b98;
    _objc_alloc(PTR_PTR_1126d5b98);
    func_0x00010c043680();
  }
  else {
    ppuVar7 = (undefined **)0x0;
    if ((uVar1 & 1) == 0) goto LAB_1079d9f80;
LAB_1079d9fc0:
    puVar2 = PTR_PTR_1126c2190;
    _objc_alloc_init(PTR_PTR_1126c2190);
  }
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar15 = 0x4020000000000000;
  if ((int)uVar3 == 0 && (int)uVar1 == 0) {
    uVar15 = 0;
  }
  uVar13 = 0x3f95cfaac0000000;
  func_0x00010b8169fc(0x3f95cfaac0000000);
  func_0x00010c297340(uVar15,uVar13,0,uVar13,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0x3f90624de0000000;
  func_0x00010b8169fc(0x3f90624de0000000);
  puVar5 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  puVar6 = PTR_PTR_1126b4890;
  _objc_alloc(PTR_PTR_1126b4890);
  func_0x00010c0435a0(0,uVar15);
LAB_1079da06c:
  func_0x00010c055bc0(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(ppuVar7);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079da0dc; end: 1079da0f3; -[SCDiscoverFeedFriendsSectionCreator sectionDataProviderCreator] */

void FUN_1079da0dc(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079da0f4; end: 1079da327; -[SCDiscoverFeedFriendsSectionCreator sectionTitleForDescriptor:] */

void FUN_1079da0f4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b4890;
  _objc_opt_class(PTR_PTR_1126b4890);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  _objc_release(uVar4);
  if ((uVar2 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar2 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) goto LAB_1079da304;
    uVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar4 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c155e60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010c156600(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1270;
    func_0x00010bf716c0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f360();
    _objc_release(puVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
LAB_1079da304:
      uVar4 = 0;
      goto LAB_1079da308;
    }
    uVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b4890;
    _objc_opt_class(PTR_PTR_1126b4890);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar4 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
    uVar3 = uVar4;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126d5b98;
    _objc_opt_class(PTR_PTR_1126d5b98);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar4 = uVar2;
    func_0x00010c156600(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_1079da308:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079da328; end: 1079da357; -[SCDiscoverFeedFriendsSectionCreator .cxx_destruct] */

void FUN_1079da328(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079da358; end: 1079da3cb; -[SCDiscoverFeedFriendsSectionExtension initWithSectionCreator:] */

undefined1 * FUN_1079da358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9288;
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



/* Entry: 1079da3cc; end: 1079da457; -[SCDiscoverFeedFriendsSectionExtension collectionViewSectionCreators] */

undefined * FUN_1079da3cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb3638;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eb5378;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f4b218;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_28 = uStack_30;
  uStack_20 = uStack_30;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_30,&ppuStack_48,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_58 = FUN_1079da458;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_80 = *(undefined8 *)(puVar1 + 8);
    ppuStack_98 = &PTR____CFConstantStringClassReference_110eb3638;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110eb5378;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f4b218;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_78 = uStack_80;
    uStack_70 = uStack_80;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_80,&ppuStack_98,3);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      return PTR____NSDictionary0__struct_11034ab58;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 1079da458; end: 1079da4e3; -[SCDiscoverFeedFriendsSectionExtension localSectionDescriptorProviders] */

undefined * FUN_1079da458(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb3638;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eb5378;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f4b218;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_28 = uStack_30;
  uStack_20 = uStack_30;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_30,&ppuStack_48,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 1079da4e4; end: 1079da4ef; -[SCDiscoverFeedFriendsSectionExtension remoteSectionProviders] */

undefined * FUN_1079da4e4(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 1079da4f0; end: 1079da4fb; -[SCDiscoverFeedFriendsSectionExtension loggingParsers] */

undefined * FUN_1079da4f0(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 1079da4fc; end: 1079da507; -[SCDiscoverFeedFriendsSectionExtension .cxx_destruct] */

void FUN_1079da4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079da508; end: 1079da657; -[SCDiscoverFeedFriendsSectionListViewDataProvider initWithFriendStories:lastExpandedUnwatchedStoryId:unviewFriendStoryBlock:withMutedBlock:plusFeatureGating:] */

undefined1 *
FUN_1079da508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f9290;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    func_0x00010bead440(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079da658; end: 1079da85b; -[SCDiscoverFeedFriendsSectionListViewDataProvider getAllFriendsStories] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001079da708 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1079da658(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  undefined1 auStack_2a0 [256];
  long lStack_1a0;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar1;
  func_0x00010bfa0b80();
  _objc_release(uVar1);
  if ((uVar17 & 1) == 0) {
    puVar6 = *(undefined **)(param_1 + 8);
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf51e00();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar16 = *(long *)(param_1 + 8);
    _objc_retain(lVar16);
    lVar2 = lVar16;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(lVar16);
        }
        uVar17 = *(ulong *)(lVar21 * 8);
        func_0x00010c259580();
        puVar8 = puVar7;
        if ((uVar17 & 0x100) != 0) {
          puVar8 = puVar6;
        }
        func_0x00010befa120(puVar8);
        lVar21 = lVar21 + 1;
      } while (lVar2 != lVar21);
      lVar2 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar3 = puVar6;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(puVar6 + 8);
    _objc_retain(lVar18);
    lVar14 = lVar18;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar18);
        }
        iVar20 = (int)*(undefined8 *)(lVar16 * 8);
        func_0x00010c07fde0();
        puVar8 = puVar4;
        if (iVar20 == 0) {
          puVar8 = puVar7;
        }
        func_0x00010befa120(puVar8);
        lVar16 = lVar16 + 1;
      } while (lVar14 != lVar16);
      lVar14 = lVar18;
      func_0x00010bf52a60();
    }
    _objc_release(lVar18);
    lVar18 = *(long *)(puVar6 + 0x10);
    _objc_retain(lVar18);
    puVar13 = auStack_2a0;
    uVar17 = 0x10;
    lVar14 = lVar18;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar18);
        }
        iVar20 = (int)*(undefined8 *)(lVar16 * 8);
        func_0x00010c07fde0();
        puVar8 = puVar5;
        if (iVar20 == 0) {
          puVar8 = puVar3;
        }
        func_0x00010befa120(puVar8);
        lVar16 = lVar16 + 1;
      } while (lVar14 != lVar16);
      puVar13 = auStack_2a0;
      uVar17 = 0x10;
      lVar14 = lVar18;
      func_0x00010bf52a60();
    }
    _objc_release(lVar18);
    puVar9 = puVar7;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(puVar6 + 0x18);
    puVar6 = puVar11;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar14);
      _objc_retain(puVar13);
      _objc_retain(uVar17);
      lVar18 = lVar14;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (lVar18 != 0) {
        do {
          lVar21 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar14);
            }
            lVar19 = *(long *)(lVar21 * 8);
            if (lVar19 != 0) {
              uVar1 = uVar17;
              (**(code **)(uVar17 + 0x10))(uVar17,lVar19);
              puVar15 = (undefined8 *)(puVar7 + 0x18);
              if ((uVar1 & 1) == 0) {
                puVar12 = puVar13;
                (**(code **)(puVar13 + 0x10))(puVar13,lVar19);
                lVar19 = 8;
                if ((int)puVar12 == 0) {
                  lVar19 = 0x10;
                }
                puVar15 = (undefined8 *)(puVar7 + lVar19);
              }
              func_0x00010befa120(*puVar15);
            }
            lVar21 = lVar21 + 1;
          } while (lVar18 != lVar21);
          lVar18 = lVar14;
          func_0x00010bf52a60();
        } while (lVar18 != 0);
      }
      _objc_release(uVar17);
      _objc_release(puVar13);
      _objc_release(lVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(lVar14 + 0x28,0);
      _objc_storeStrong(lVar14 + 0x20,0);
      _objc_storeStrong(lVar14 + 0x18,0);
      _objc_storeStrong(lVar14 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar14 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1079da85c; end: 1079dab0f; -[SCDiscoverFeedFriendsSectionListViewDataProvider getAllFriendsStoriesWithRanking] */

void FUN_1079da85c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_1 + 8);
  _objc_retain(lVar17);
  lVar13 = lVar17;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar17);
      }
      iVar19 = (int)*(undefined8 *)(lVar21 * 8);
      func_0x00010c07fde0();
      puVar6 = puVar4;
      if (iVar19 == 0) {
        puVar6 = puVar2;
      }
      func_0x00010befa120(puVar6);
      lVar21 = lVar21 + 1;
    } while (lVar13 != lVar21);
    lVar13 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  lVar17 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar17);
  puVar14 = auStack_170;
  uVar15 = 0x10;
  lVar13 = lVar17;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar17);
      }
      iVar19 = (int)*(undefined8 *)(lVar21 * 8);
      func_0x00010c07fde0();
      puVar6 = puVar5;
      if (iVar19 == 0) {
        puVar6 = puVar3;
      }
      func_0x00010befa120(puVar6);
      lVar21 = lVar21 + 1;
    } while (lVar13 != lVar21);
    puVar14 = auStack_170;
    uVar15 = 0x10;
    lVar13 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  puVar6 = puVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 0x18);
  puVar9 = puVar8;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf51e00();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar13);
  _objc_retain(puVar14);
  _objc_retain(uVar15);
  lVar17 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar17 != 0) {
    do {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar13);
        }
        lVar18 = *(long *)(lVar20 * 8);
        if (lVar18 != 0) {
          uVar11 = uVar15;
          (**(code **)(uVar15 + 0x10))(uVar15,lVar18);
          puVar16 = (undefined8 *)(puVar2 + 0x18);
          if ((uVar11 & 1) == 0) {
            puVar12 = puVar14;
            (**(code **)(puVar14 + 0x10))(puVar14,lVar18);
            lVar18 = 8;
            if ((int)puVar12 == 0) {
              lVar18 = 0x10;
            }
            puVar16 = (undefined8 *)(puVar2 + lVar18);
          }
          func_0x00010befa120(*puVar16);
        }
        lVar20 = lVar20 + 1;
      } while (lVar17 != lVar20);
      lVar17 = lVar13;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar13 + 0x28,0);
  _objc_storeStrong(lVar13 + 0x20,0);
  _objc_storeStrong(lVar13 + 0x18,0);
  _objc_storeStrong(lVar13 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar13 + 8,0);
  return;
}



/* Entry: 1079dab10; end: 1079dac87; -[SCDiscoverFeedFriendsSectionListViewDataProvider _setupInventoryWithFriendStories:unviewFriendStoryBlock:mutedBlock:] */

void FUN_1079dab10(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar8 * 8);
        if (lVar7 != 0) {
          uVar3 = param_5;
          (**(code **)(param_5 + 0x10))(param_5,lVar7);
          puVar6 = (undefined8 *)(param_1 + 0x18);
          if ((uVar3 & 1) == 0) {
            lVar4 = param_4;
            (**(code **)(param_4 + 0x10))(param_4,lVar7);
            lVar7 = 8;
            if ((int)lVar4 == 0) {
              lVar7 = 0x10;
            }
            puVar6 = (undefined8 *)(param_1 + lVar7);
          }
          func_0x00010befa120(*puVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1079dac88; end: 1079dacdb; -[SCDiscoverFeedFriendsSectionListViewDataProvider .cxx_destruct] */

void FUN_1079dac88(long param_1)

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



/* Entry: 1079dacdc; end: 1079dace7; +[SCDiscoverFeedFriendStoriesSectionDataProvider announcerIdentifier] */

undefined ** FUN_1079dacdc(void)

{
  return &PTR____CFConstantStringClassReference_110e1c738;
}



/* Entry: 1079dace8; end: 1079dacef; -[SCDiscoverFeedFriendStoriesSectionDataProvider addListener:] */

void FUN_1079dace8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079dacf0; end: 1079dacf7; -[SCDiscoverFeedFriendStoriesSectionDataProvider removeListener:] */

void FUN_1079dacf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079dacf8; end: 1079db253; -[SCDiscoverFeedFriendStoriesSectionDataProvider initWithImageDownloader:friendStoriesDataCoordinator:replayManager:badgeTracker:circumstanceEngine:postStoryDataProvider:storiesGrapheneMetricsEmitter:friendSuggestionsDataCoordinator:imageFetchingService:storiesConfigProvider:storiesSnapchatterFetcher:bitmojiSelfieFetcher:featureSettingsService:storiesThumbnailCoordinator:networkConnectivityMonitor:plusFeatureGating:placeCategoryIconResolver:isExpandedViewController:crashLogger:] */

undefined8 *
FUN_1079dacf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  puStack_80 = PTR_PTR_1126f9298;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[4];
    puVar2[4] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[5];
    puVar2[5] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[9];
    puVar2[9] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[10];
    puVar2[10] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[6];
    puVar2[6] = param_7;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_13;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar4 = PTR_PTR_1126d5b98;
    _objc_alloc();
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea77b8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110ea77b8,
                        &PTR____CFConstantStringClassReference_110e61f78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043680();
    uVar3 = puVar2[0x23];
    puVar2[0x23] = puVar4;
    _objc_release(uVar3);
    _objc_release(ppuVar5);
    _objc_retain(param_9);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_10;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[6];
    func_0x000100baf9c4();
    *(undefined1 *)((long)puVar2 + 0x6a) = uVar1;
    _objc_retain(param_12);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_15;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x14];
    puVar2[0x14] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_18;
    _objc_release(uVar3);
    uVar3 = param_12;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[0x1d];
    puVar2[0x1d] = uVar3;
    _objc_release(uVar6);
    *(undefined1 *)(puVar2 + 0x20) = param_20;
    _objc_retain(param_22);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_22;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    _objc_retain(param_19);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x21];
    puVar2[0x21] = puVar4;
    _objc_release(uVar3);
    _objc_release(param_19);
    _objc_release(param_12);
    _objc_release(param_12);
  }
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1079db254; end: 1079db2ab;  */

void FUN_1079db254(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb9c20();
  func_0x00010c0df740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079db2ac; end: 1079db2b3;  */

void FUN_1079db2ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_friendStoryCarouselPrefetchConfi_1125cbd18);
  return;
}



/* Entry: 1079db2b4; end: 1079db343;  */

void FUN_1079db2b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf71680(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    _objc_alloc(PTR_PTR_1126d5bd0);
    func_0x00010c03f800();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079db344; end: 1079db443; -[SCDiscoverFeedFriendStoriesSectionDataProvider setUp] */

void FUN_1079db344(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  func_0x00010be14720(param_1);
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar2;
  _objc_release(uVar1);
  func_0x00010bec7a40(param_1);
  func_0x00010bec8520(param_1);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079db444; end: 1079db4a3; -[SCDiscoverFeedFriendStoriesSectionDataProvider tearDown] */

void FUN_1079db444(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079db4a4; end: 1079db4a7; -[SCDiscoverFeedFriendStoriesSectionDataProvider setSectionDataModel:] */

void FUN_1079db4a4(void)

{
  return;
}



/* Entry: 1079db4a8; end: 1079db4af; -[SCDiscoverFeedFriendStoriesSectionDataProvider numberOfSections] */

undefined8 FUN_1079db4a8(void)

{
  return 1;
}



/* Entry: 1079db4b0; end: 1079db503; -[SCDiscoverFeedFriendStoriesSectionDataProvider numberOfItemsInSection:] */

long FUN_1079db4b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = lVar1 + 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar2);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0(lVar3);
  return lVar1 + lVar2 + lVar3;
}



/* Entry: 1079db504; end: 1079db627; -[SCDiscoverFeedFriendStoriesSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1079db504(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_140,puVar1);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_1079db7d0;
    puStack_150 = &UNK_110845ae0;
    puVar8 = auStack_140;
    _objc_copyWeak(auStack_148,puVar8);
    ppuVar2 = &puStack_168;
    _objc_retainBlock();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110eb47f8;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110eb4858;
    ppuVar4 = ppuVar2;
    ppuStack_118 = ppuVar3;
    _objc_retainBlock();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110eb48b8;
    ppuVar5 = ppuVar2;
    ppuStack_110 = ppuVar4;
    _objc_retainBlock();
    ppuStack_120 = &PTR____CFConstantStringClassReference_110eb48d8;
    ppuVar6 = ppuVar2;
    ppuStack_108 = ppuVar5;
    _objc_retainBlock();
    ppuStack_100 = ppuVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_148);
    puVar7 = auStack_140;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_140);
      __Unwind_Resume(puVar7);
      _objc_retain(puVar8);
      puVar7 = puVar7 + 0x20;
      _objc_loadWeakRetained(puVar7);
      func_0x00010bde5ba0();
      _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079db628; end: 1079db7cf; -[SCDiscoverFeedFriendStoriesSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1079db628(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1079db7d0;
  puStack_b0 = &UNK_110845ae0;
  puVar8 = auStack_a0;
  _objc_copyWeak(auStack_a8,puVar8);
  ppuVar1 = &puStack_c8;
  _objc_retainBlock();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110eb47f8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb4858;
  ppuVar3 = ppuVar1;
  ppuStack_78 = ppuVar2;
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eb48b8;
  ppuVar4 = ppuVar1;
  ppuStack_70 = ppuVar3;
  _objc_retainBlock();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110eb48d8;
  ppuVar5 = ppuVar1;
  ppuStack_68 = ppuVar4;
  _objc_retainBlock();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_60 = ppuVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_a8);
  puVar7 = auStack_a0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(puVar7);
  _objc_retain(puVar8);
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bde5ba0();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1079db7d0; end: 1079db817;  */

void FUN_1079db7d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079db818; end: 1079db967; -[SCDiscoverFeedFriendStoriesSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1079db818(long param_1,undefined **param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010befa160(puVar1);
    }
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010befa160(puVar1);
    }
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010befa160(puVar1);
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1079db968;
    puStack_50 = &UNK_110845ab0;
    puStack_48 = puVar1;
    _objc_retain(puVar1);
    param_2 = &puStack_68;
    puVar3 = param_3;
    func_0x000100504554(param_3,param_2);
    _objc_release(puStack_48);
    _objc_release(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = *(long *)(param_1 + 0x40);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1079db968; end: 1079db993;  */

void FUN_1079db968(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1079db994; end: 1079db99b; -[SCDiscoverFeedFriendStoriesSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1079db994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1079db99c; end: 1079db9a3; -[SCDiscoverFeedFriendStoriesSectionDataProvider supplementaryViewModels] */

undefined8 FUN_1079db99c(void)

{
  return 0;
}



/* Entry: 1079db9a4; end: 1079db9af; -[SCDiscoverFeedFriendStoriesSectionDataProvider minimumInteritemSpacing] */

double FUN_1079db9a4(void)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.01600000075995922;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = dVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return dVar2 * 0.01600000075995922;
}



/* Entry: 1079db9b0; end: 1079db9b3; -[SCDiscoverFeedFriendStoriesSectionDataProvider startToDisplayStoryWithStoryId:] */

void FUN_1079db9b0(void)

{
  return;
}



/* Entry: 1079db9b4; end: 1079dba0b; -[SCDiscoverFeedFriendStoriesSectionDataProvider clearAllWithReason:] */

void FUN_1079db9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1079dba0c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x120),param_2,&puStack_40);
  return;
}



/* Entry: 1079dba0c; end: 1079dba3b;  */

void FUN_1079dba0c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0 || lVar2 == 3) {
    uVar1 = 0;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be273b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleCollpaseStoriesFromPullTo_112567688,uVar1)
  ;
  return;
}



/* Entry: 1079dba3c; end: 1079dba93; -[SCDiscoverFeedFriendStoriesSectionDataProvider expandAllStories] */

void FUN_1079dba3c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079dba94;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x120),param_2,&puStack_38);
  return;
}



/* Entry: 1079dba94; end: 1079dba9b;  */

void FUN_1079dba94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be29170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleExpandAllStories_112567df8);
  return;
}



/* Entry: 1079dba9c; end: 1079dbcdf; -[SCDiscoverFeedFriendStoriesSectionDataProvider _subscribeToSnoozeFoFStories] */

void FUN_1079dba9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1079dbce0;
  puStack_90 = &UNK_110851330;
  _objc_retain(puVar2);
  puStack_88 = puVar2;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar6 = lVar1;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = lVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  puVar7 = auStack_78;
  _objc_copyWeak(auStack_b0);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(puStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined1 *)0x0) {
    lVar1 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bee05c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1079dbce0; end: 1079dbd67;  */

void FUN_1079dbce0(long param_1,long param_2)

{
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee05c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1079dbd68; end: 1079dbe2b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _updateSnoozeFoFStateIfNecessary] */

void FUN_1079dbd68(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08a1a0();
  _objc_release(lVar2);
  dVar5 = (double)(lVar3 / 1000);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  bVar1 = 0.0 < dVar5 + 604800.0;
  _objc_release(puVar4);
  if ((bool)*(char *)(param_1 + 200) == bVar1) {
    return;
  }
  *(bool *)(param_1 + 200) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010be14730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStoriesDataAndPerformViewM_112562b68,0)
  ;
  return;
}



/* Entry: 1079dbe2c; end: 1079dbe63; -[SCDiscoverFeedFriendStoriesSectionDataProvider _resetLastSnoozedFofTimestampMs] */

void FUN_1079dbe2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b89e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079dbe64; end: 1079dbf77; -[SCDiscoverFeedFriendStoriesSectionDataProvider didUpdateWithFriendStoriesReplayRequest:] */

void FUN_1079dbe64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1079dbf78;
    puStack_60 = &UNK_1108d3ff0;
    uStack_58 = param_1;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_80,auStack_48);
    func_0x00010c0c0300(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079dbf78; end: 1079dc023;  */

void FUN_1079dbf78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1079dc024; end: 1079dc053;  */

void FUN_1079dc024(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dc054; end: 1079dc0e3;  */

void FUN_1079dc054(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079dc0e4; end: 1079dc113;  */

void FUN_1079dc0e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dc114; end: 1079dc297; -[SCDiscoverFeedFriendStoriesSectionDataProvider didUpdateWithDiscoverFeedFriendStoryDataRequest:] */

void FUN_1079dc114(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_b8 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1079dc29c;
    puStack_70 = &UNK_1109f3ef0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1079dc344;
    puStack_98 = &UNK_110847658;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x1079dc358;
    puStack_c0 = &UNK_110847658;
    puStack_90 = puStack_b8;
    puStack_68 = puStack_b8;
    puStack_58 = puStack_b8;
    func_0x00010c0bea40(param_3);
    if ((*(byte *)(puStack_58 + 3) & 1) != 0) {
      _objc_initWeak(auStack_e0,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x120);
      _objc_copyWeak(auStack_e8,auStack_e0);
      func_0x00010c0f7fc0(uVar1);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_e0);
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079dc298; end: 1079dc29b;  */

void FUN_1079dc298(void)

{
  return;
}



/* Entry: 1079dc29c; end: 1079dc317;  */

void FUN_1079dc29c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079dc318;
  puStack_20 = &UNK_110868438;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1079dc330;
  puStack_48 = &UNK_110847658;
  uStack_18 = uStack_40;
  func_0x00010c0bf7c0(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1079dc318; end: 1079dc36b;  */

void FUN_1079dc318(long param_1,long param_2)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 1;
  return;
}



/* Entry: 1079dc36c; end: 1079dc397;  */

void FUN_1079dc36c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dc398; end: 1079dc39f; -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleUpdateFromFriendStoryDataRequest] */

void FUN_1079dc398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStoriesDataAndPerformViewM_112562b68,0)
  ;
  return;
}



/* Entry: 1079dc3a0; end: 1079dc3af; -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleExpandAllStories] */

void FUN_1079dc3a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be14730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStoriesDataAndPerformViewM_112562b68,0)
  ;
  return;
}



/* Entry: 1079dc3b0; end: 1079dc457; -[SCDiscoverFeedFriendStoriesSectionDataProvider sectionCollapseCoordinatorDidUpdate] */

void FUN_1079dc3b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079dc458; end: 1079dc487;  */

void FUN_1079dc458(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dc488; end: 1079dc51f; -[SCDiscoverFeedFriendStoriesSectionDataProvider _storyCircleLayoutConfigurationWithMainTitleOneLine:] */

void FUN_1079dc488(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  
  if ((param_4 & 1) == 0) {
    FUN_107c89dac();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_2 + 0xa8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1270;
    func_0x00010c06af40(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    param_2 = lVar1;
    func_0x00010bfb2c20(lVar1,param_3,puVar2);
    FUN_107c89e34((double)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1079dc520; end: 1079dc62b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _subscribeToInlineFriendSuggestions] */

void FUN_1079dc520(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c065400();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1079dc62c; end: 1079dc673;  */

void FUN_1079dc62c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dc674; end: 1079dc74b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _onReceivedSuggestionsDataModels:] */

void FUN_1079dc674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079dc74c; end: 1079dc77f;  */

void FUN_1079dc74c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ebc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dc780; end: 1079dcd97; -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleReceivedSuggestionsDataModelsOnPerformer:] */

void FUN_1079dc780(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar4 = 0;
  uVar17 = 0x3f800000;
  if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1270;
    func_0x00010bf715e0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar2);
    uVar17 = param_1;
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b1270;
      func_0x00010bf71640(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c20(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar4);
      uVar4 = uVar17;
    }
    uVar17 = param_1;
    if ((float)param_1 == 0.0) {
      uVar17 = *(undefined8 *)(param_2 + 0xf8);
      puVar3 = PTR_PTR_1126b3e98;
      func_0x00010bf60460(PTR_PTR_1126b3e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132d60(uVar17);
      _objc_release(puVar3);
      uVar17 = 0x3f800000;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar18 = param_4;
  func_0x00010bf529e0();
  if (lVar18 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf715a0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c067e20();
    _objc_release(puVar6);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf71620(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf1f320();
    _objc_release(puVar6);
    _objc_release(uVar7);
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
      uVar8 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b1270;
      func_0x00010bf71600(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bf1f320(uVar8);
      _objc_release(puVar6);
      _objc_release(uVar8);
    }
    else {
      uVar7 = 0;
    }
    uVar9 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf71700(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf1f320();
    _objc_release(puVar6);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf71720(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e20();
    _objc_release(puVar6);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf715c0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar6);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf716e0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e20();
    _objc_release(puVar6);
    _objc_release(uVar9);
    uVar10 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1270;
    func_0x00010bf71660(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf1f320(uVar10);
    _objc_release(puVar6);
    _objc_release(uVar10);
    lVar11 = param_2;
    func_0x00010bec4740();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    lVar18 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        lVar20 = *(long *)(lVar19 * 8);
        lVar12 = lVar20;
        func_0x00010c262220();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar14;
        func_0x00010c08fa60();
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        if (lVar15 != 0) {
          FUN_1079d8e80(uVar17,uVar4,(uint)uVar9 & (uint)uVar7);
          FUN_1079d6ce0(lVar20,lVar11,0,0,1,uVar2,(int)uVar5,uVar7,(char)uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(lVar20);
        }
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
      lVar18 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    uVar17 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    _objc_release(uVar17);
    _objc_release(lVar11);
  }
  lVar18 = *(long *)(param_2 + 0x10);
  _objc_retain(puVar3);
  _objc_retain(lVar18);
  if (puVar3 != (undefined *)0x0 || lVar18 != 0) {
    if ((puVar3 == (undefined *)0x0) || (lVar18 == 0)) {
      _objc_release(lVar18);
      _objc_release(puVar3);
    }
    else {
      puVar6 = puVar3;
      func_0x00010c071b60();
      _objc_release(lVar18);
      _objc_release(puVar3);
      if (((ulong)puVar6 & 1) != 0) goto LAB_1079dcd44;
    }
    *(undefined8 *)(param_2 + 0x60) = 1;
    _objc_retain(puVar3);
    uVar17 = *(undefined8 *)(param_2 + 0x10);
    *(undefined **)(param_2 + 0x10) = puVar3;
    _objc_release(uVar17);
    func_0x00010bee9840(param_2);
  }
LAB_1079dcd44:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_4 + 0x100) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_4 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be14730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1079dcd98; end: 1079dcdab; -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleCollpaseStoriesFromPullToRefresh:] */

void FUN_1079dcd98(long param_1)

{
  if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be14730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStoriesDataAndPerformViewM_112562b68);
  return;
}


