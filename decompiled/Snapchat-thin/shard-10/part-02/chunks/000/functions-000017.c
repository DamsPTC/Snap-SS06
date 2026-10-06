/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079ea8e0; end: 1079ea8eb;  */

void FUN_1079ea8e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_storyIdForDiscoverFeedStory__112674160,param_2);
  return;
}



/* Entry: 1079ea8ec; end: 1079ea913;  */

void FUN_1079ea8ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1079ea914; end: 1079ea91b; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_1079ea914(void)

{
  return 0;
}



/* Entry: 1079ea91c; end: 1079ea993; -[SCDiscoverFeedLegacyStoriesPlaybackDataProvider .cxx_destruct] */

void FUN_1079ea91c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1079ea994; end: 1079eaab7; -[SCShareFriendActionManagerScope initWithSnapchatter:publicUserStory:actionType:page:presentingViewController:shareFriendWorkflowDelegate:shareFriendActionManagerDelegate:] */

undefined1 *
FUN_1079ea994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f9320;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_9);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079eaab8; end: 1079eaabf; -[SCShareFriendActionManagerScope snapchatter] */

undefined8 FUN_1079eaab8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079eaac0; end: 1079eaac7; -[SCShareFriendActionManagerScope publicUserStory] */

undefined8 FUN_1079eaac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079eaac8; end: 1079eaacf; -[SCShareFriendActionManagerScope actionType] */

undefined8 FUN_1079eaac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079eaad0; end: 1079eaad7; -[SCShareFriendActionManagerScope page] */

undefined8 FUN_1079eaad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079eaad8; end: 1079eaaef; -[SCShareFriendActionManagerScope shareFriendActionManagerDelegate] */

void FUN_1079eaad8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eaaf0; end: 1079eab07; -[SCShareFriendActionManagerScope shareFriendWorkflowDelegate] */

void FUN_1079eaaf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eab08; end: 1079eab1f; -[SCShareFriendActionManagerScope presentingViewController] */

void FUN_1079eab08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eab20; end: 1079eab67; -[SCShareFriendActionManagerScope .cxx_destruct] */

void FUN_1079eab20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079eab68; end: 1079eac7b; -[SCShareFriendViewControllerScope initWithUIContainer:snapchatter:contexts:shareFriendWorkflowDelegate:shareFriendViewControllerDelegate:] */

undefined1 *
FUN_1079eab68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9328;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079eac7c; end: 1079eac83; -[SCShareFriendViewControllerScope uiContainer] */

undefined8 FUN_1079eac7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079eac84; end: 1079eac9b; -[SCShareFriendViewControllerScope shareFriendViewControllerDelegate] */

void FUN_1079eac84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eac9c; end: 1079eacb3; -[SCShareFriendViewControllerScope shareFriendWorkflowDelegate] */

void FUN_1079eac9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eacb4; end: 1079eacbb; -[SCShareFriendViewControllerScope contexts] */

undefined8 FUN_1079eacb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079eacbc; end: 1079eacc3; -[SCShareFriendViewControllerScope snapchatter] */

undefined8 FUN_1079eacbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079eacc4; end: 1079ead0f; -[SCShareFriendViewControllerScope .cxx_destruct] */

void FUN_1079eacc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079ead10; end: 1079ead73; +[SCShareFriendScope presentWithViewControllerScope:] */

void FUN_1079ead10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b40d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079ead74; end: 1079eaddf; +[SCShareFriendScope shareWithActionManagerScope:] */

void FUN_1079ead74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b40d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079eade0; end: 1079eae03; -[SCShareFriendScope copyWithZone:] */

undefined8 FUN_1079eade0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079eae04; end: 1079eae7b; -[SCShareFriendScope hash] */

void FUN_1079eae04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f9330;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eae7c; end: 1079eaebf; -[SCShareFriendScope internalInit] */

void FUN_1079eae7c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9330;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079eaec0; end: 1079eaf77; -[SCShareFriendScope isEqual:] */

long FUN_1079eaec0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079eaf50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079eaf5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079eaf5c;
        }
        goto LAB_1079eaf50;
      }
    }
    lVar3 = 0;
  }
LAB_1079eaf5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079eaf78; end: 1079eaffb; -[SCShareFriendScope matchPresent:share:] */

void FUN_1079eaf78(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1079eafe0;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1079eafe0;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1079eafe0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079eaffc; end: 1079eb02b; -[SCShareFriendScope .cxx_destruct] */

void FUN_1079eaffc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079eb02c; end: 1079eb38b;  */

void FUN_1079eb02c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  uVar1 = param_5;
  FUN_1079ec584(param_5);
  uVar2 = param_5;
  FUN_1079ec668(param_5);
  FUN_107cf34b8(param_3,param_2,uVar1,param_4,param_6,param_7,param_8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  FUN_1079ec668(param_5);
  lVar3 = param_2;
  func_0x0001079ec0b0(param_2,uVar2,param_8,param_10,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  FUN_1079ec668(param_5);
  lVar4 = param_2;
  func_0x0001079ebffc(param_2,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_2;
    func_0x000107cf1b4c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_2;
    func_0x000107cf1ac8();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  lVar5 = param_2;
  FUN_107cf3fe8(param_2,uVar1,param_4,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_9;
  func_0x00010bc9109c(param_9);
  _objc_release(param_9);
  lVar6 = param_2;
  FUN_107cf67c8(param_2,uVar1,param_3,lVar5,lVar4,0,uVar2,(undefined1)param_13,param_13._1_1_,lVar10
                ,lVar11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816670();
  func_0x00010c142240();
  func_0x00010c0495a0(0x7fefffffffffffff,0x4052800000000000,0,param_1,puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1079eb38c; end: 1079eb6db;  */

void FUN_1079eb38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 uStack0000000000000010;
  char cStack0000000000000012;
  undefined1 uStack0000000000000013;
  undefined1 in_stack_00000014;
  ulong in_stack_ffffffffffffff20;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  uVar1 = param_4;
  FUN_1079ec584(param_4);
  uVar2 = param_2;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4a480();
  uVar11 = param_4;
  FUN_1079ec668(param_4);
  uVar6 = 0x6424ea8b;
  if ((int)uVar3 != 3) {
    uVar6 = uVar11;
  }
  _objc_release(uVar2);
  uVar2 = param_2;
  FUN_107cf37b4(param_2,uVar1,param_3,param_5,param_6,param_7,uVar6,in_stack_00000014);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x0001079ec0b0(param_2,uVar6,param_7,param_9,0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  if (cStack0000000000000012 != '\0') {
    uVar11 = param_2;
    func_0x0001079ebffc(param_2,param_3,uVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = param_2;
  FUN_107cf3fe8(param_2,uVar1,param_3,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1910;
  _objc_retain(uVar11);
  _objc_alloc(puVar5);
  uVar6 = param_8;
  func_0x00010bc9109c(param_8);
  _objc_release(param_8);
  uVar7 = param_2;
  FUN_107cf67c8(param_2,uVar1,uVar2,uVar4,uVar11,0,uVar6,uStack0000000000000013,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00,0,0,uStack0000000000000010);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_107cf426c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uRam000000011323cd40;
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011323cd50;
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816670();
  func_0x00010c142240();
  func_0x00010c0495a0(0x7fefffffffffffff,uVar6,uVar1,param_1,puVar5);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079eb6dc; end: 1079eb8bb;  */

void FUN_1079eb6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  uVar2 = param_2;
  FUN_107cf40e0(param_2,param_3,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_107cf1bd0(param_2,uVar2,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c070aa0();
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  puVar6 = puVar5;
  FUN_107cf426c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011323cd50;
  uVar2 = uRam000000011323cd40;
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816670();
  func_0x00010c142240();
  _objc_release(param_5);
  func_0x00010c0495a0(0x7fefffffffffffff,uVar2,uVar1,param_1,puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079eb8bc; end: 1079eba67;  */

void FUN_1079eb8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_107cf40e0(param_2,param_3,param_4,3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_107cf1bd0(param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c070aa0();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  uVar1 = uRam000000011323cd40;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816670();
  func_0x00010c142240();
  _objc_release(param_5);
  func_0x00010c0495a0(0x7fefffffffffffff,uVar1,0,param_1,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079eba68; end: 1079ebffb;  */

void FUN_1079eba68(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_c8;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = param_7;
  FUN_1079ec584();
  puVar3 = param_7;
  FUN_1079ec668(param_7);
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar4 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lStack_c8 = param_3;
    func_0x000107d3d8a4(param_3,param_6,param_5,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_c8 = 0;
  }
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126b1918;
  _objc_alloc();
  lVar4 = param_3;
  func_0x000107cf33d8(param_3,puVar2,param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x000107cf32c8(puVar2,param_3,param_12._1_1_);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 2) {
    uVar6 = 0x6a;
    if (lRam00000001138466f0 < 3) {
      uVar6 = 0x34;
    }
  }
  else {
    uVar6 = 0x88;
    if (param_4 == 1) {
      uVar6 = 0xbb;
    }
  }
  func_0x00010900fd90(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010c14d460();
  bVar1 = (int)puVar7 == 0;
  uVar14 = 0x4010000000000000;
  if (bVar1) {
    uVar14 = 0x4031000000000000;
  }
  uVar15 = 0x4004000000000000;
  if (bVar1) {
    uVar15 = 0x402f000000000000;
  }
  _objc_release(puVar13);
  puVar13 = (undefined *)0x0;
  if (param_4 - 1U < 2) {
    puVar13 = PTR_PTR_1126d5c58;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0xc6;
    func_0x00010900fd90(0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007c00(0x402a000000000000,0,0,0,0,0,0);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  func_0x00010c053140(0,uVar15,0,uVar14);
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lStack_c8);
  _objc_release(param_6);
  _objc_release(param_3);
  puVar5 = param_7;
  FUN_1079ec668(param_7);
  lVar4 = param_3;
  func_0x0001079ec0b0(param_3,puVar5,param_5,param_11,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d5c58;
  _objc_alloc(PTR_PTR_1126d5c58);
  func_0x00010c007c00(0,0,0,0,0,0x402c000000000000,0x402c000000000000);
  lVar10 = param_3;
  FUN_107cf3d90(param_3,param_6,param_7,param_5,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  puVar7 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bc9109c();
  lVar11 = param_3;
  FUN_107cf42a0(param_3,puVar2,param_4,puVar3,lVar10,0,param_10,puVar8,(undefined1)param_12);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 - 1U < 2) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_7;
    if (param_4 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010bf414e0(0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c0495a0(param_1,param_2,0x4020000000000000,0x3fe0000000000000,puVar13);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(lVar11);
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1079ebffc; end: 1079ec167;  */

void FUN_1079ebffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_107cf19f4(param_1,param_3,8,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010c01b460(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079ec168; end: 1079ec26b;  */

bool FUN_1079ec168(double param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  double dVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c06d560();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0737e0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        bVar4 = true;
      }
      else {
        uVar3 = param_2;
        func_0x00010bfb8280(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef89e0();
        if (param_3 == 0) {
          dVar5 = 2.2250738585072014e-308;
        }
        else {
          dVar5 = param_1;
          func_0x00010c26f320(param_3);
        }
        bVar4 = dVar5 < param_1;
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    else {
      bVar4 = false;
    }
    _objc_release(uVar1);
  }
  else {
    bVar4 = false;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar4;
}



/* Entry: 1079ec26c; end: 1079ec357;  */

bool FUN_1079ec26c(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c06d560();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_2;
      func_0x00010bfb8280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef89e0();
      _objc_release(uVar2);
      if (dVar4 <= param_1) {
        uVar2 = param_2;
        func_0x00010bf4a3a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf4a480();
        _objc_release(uVar2);
        if ((int)uVar3 == 3) {
          uVar2 = param_2;
          func_0x00010bfebe20(param_2);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = uVar2 == 0;
          _objc_release();
          goto LAB_1079ec2ec;
        }
        goto LAB_1079ec298;
      }
    }
    bVar1 = true;
  }
  else {
LAB_1079ec298:
    bVar1 = false;
  }
LAB_1079ec2ec:
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1079ec358; end: 1079ec4bb;  */

void FUN_1079ec358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1930;
  _objc_opt_new(PTR_PTR_1126b1930);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ea8fd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea8fd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  func_0x00010c1cd8a0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b1260);
    func_0x00010c055bc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ec4bc; end: 1079ec4f3;  */

void FUN_1079ec4bc(void)

{
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ec4f4; end: 1079ec54b;  */

void FUN_1079ec4f4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5c60;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c013320();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079ec54c; end: 1079ec583;  */

void FUN_1079ec54c(void)

{
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ec584; end: 1079ec667;  */

undefined8 FUN_1079ec584(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea8ff8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9018);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9038);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea91f8),
         (uVar1 & 1) == 0)) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea90f8);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = param_1,
           func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea90b8),
           (uVar1 & 1) == 0)) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9118);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9258);
            uVar2 = 5;
            if ((int)uVar1 == 0) {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1079ec668; end: 1079ec79b;  */

undefined8 FUN_1079ec668(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x248de666;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea8ff8);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1,
     func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea90d8),
     (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9018);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0xffffffff9c9717e5;
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9038);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea91f8),
         (uVar1 & 1) == 0)) {
        uVar2 = 0xffffffffcf5d0adf;
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea90f8);
        if (((uVar1 & 1) == 0) &&
           ((uVar1 = param_1,
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea90b8),
            (uVar1 & 1) == 0 &&
            (uVar1 = param_1,
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9118),
            (uVar1 & 1) == 0)))) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9238);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9258);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea9078);
              uVar2 = 0x6424ea8b;
              if ((int)uVar1 == 0) {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0x2f5432a1;
            }
          }
          else {
            uVar2 = 0x2e5189e1;
          }
        }
      }
    }
    else {
      uVar2 = 0x1a0e6a1a;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1079ec79c; end: 1079ec80f; -[SCFindFriendsCTAImageProvider initWithDownloader:] */

undefined1 * FUN_1079ec79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9338;
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



/* Entry: 1079ec810; end: 1079ec943; -[SCFindFriendsCTAImageProvider provideImageWithCompletion:] */

void FUN_1079ec810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110ea9298,
                      &PTR____CFConstantStringClassReference_110ea92b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_2,param_1,1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079ec944;
  puStack_50 = &UNK_11085b810;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf88c20(uVar2,param_2,puVar1,puVar3,&puStack_68);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1079ec944; end: 1079ec957;  */

void FUN_1079ec944(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079ec950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1079ec958; end: 1079ec963; -[SCFindFriendsCTAImageProvider .cxx_destruct] */

void FUN_1079ec958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079ec964; end: 1079ec9ff; -[SCFindFriendsCTACardView initWithSource:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1079ec964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767874) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112767878),param_4);
    func_0x00010be3a720(puVar1);
    func_0x00010bed8640(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079eca00; end: 1079ecbeb; -[SCFindFriendsCTACardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079eca00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9340;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar3 = (long)_DAT_11276787c;
  FUN_1079eed18(param_3,*(undefined8 *)(param_5 + lVar3));
  lVar4 = (long)_DAT_112767880;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf20c00(param_5);
  FUN_1079eed18(param_3,*(undefined8 *)(param_5 + lVar3));
  lVar5 = (long)_DAT_112767884;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  uVar2 = param_3;
  FUN_1079eedc4(param_3);
  lVar6 = (long)_DAT_112767888;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  FUN_1079eef1c();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276788c));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  FUN_1079eedec(*(undefined8 *)(param_5 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  uVar7 = uVar2;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  FUN_1079eeeb4(uVar2,param_3,param_2,uVar7,param_4);
  lVar3 = (long)_DAT_112767890;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf199c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf199c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1079ecbec; end: 1079ed287; -[SCFindFriendsCTACardView _initSubviews] */

/* WARNING: Possible PIC construction at 0x0001079ecd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079ecdb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079ece00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079ecef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079ecff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079ecef8) */
/* WARNING: Removing unreachable block (ram,0x0001079ece04) */
/* WARNING: Removing unreachable block (ram,0x0001079ecdbc) */
/* WARNING: Removing unreachable block (ram,0x0001079ecd4c) */
/* WARNING: Removing unreachable block (ram,0x0001079ecff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ecbec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar4 = (long)_DAT_112767880;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar3);
  FUN_1079eecf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4024000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f800000);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 1079ed288; end: 1079ed303; -[SCFindFriendsCTACardView _updateFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ed288(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  uVar2 = param_1;
  FUN_1079eed18(param_1,*(undefined8 *)(param_2 + _DAT_11276787c));
  _CGRectGetMaxY();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,param_1,uVar2,param_2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1079ed304; end: 1079ed307; -[SCFindFriendsCTACardView _handleTouchDownForButton:] */

void FUN_1079ed304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9aaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scaleUpButton__112584460);
  return;
}



/* Entry: 1079ed308; end: 1079ed367; -[SCFindFriendsCTACardView _handleTouchUpInsideForButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ed308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112767878;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bef7a20();
  _objc_release(lVar1);
  func_0x00010be9a8e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ed368; end: 1079ed36b; -[SCFindFriendsCTACardView _handleTouchUpOutsideForButton:] */

void FUN_1079ed368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scaleDownButton__1125843e0);
  return;
}



/* Entry: 1079ed36c; end: 1079ed36f; -[SCFindFriendsCTACardView _handleTouchCancelForButton:] */

void FUN_1079ed36c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scaleDownButton__1125843e0);
  return;
}



/* Entry: 1079ed370; end: 1079ed45f; -[SCFindFriendsCTACardView _scaleUpButton:] */

void FUN_1079ed370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1079ed40c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fc3333333333333,0,puVar1,param_2,6,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ed460; end: 1079ed4ff; -[SCFindFriendsCTACardView _scaleDownButton:] */

void FUN_1079ed460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1079ed500;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fc3333333333333,0x3fd3333333333333,puVar1,param_2,6,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ed500; end: 1079ed53b;  */

void FUN_1079ed500(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1079ed53c; end: 1079ed54b; -[SCFindFriendsCTACardView setBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ed53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767888),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 1079ed54c; end: 1079ed5d7; -[SCFindFriendsCTACardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ed54c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112767878);
  _objc_storeStrong(param_1 + _DAT_112767890,0);
  _objc_storeStrong(param_1 + _DAT_11276787c,0);
  _objc_storeStrong(param_1 + _DAT_11276788c,0);
  _objc_storeStrong(param_1 + _DAT_112767888,0);
  _objc_storeStrong(param_1 + _DAT_112767884,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767880,0);
  return;
}



/* Entry: 1079ed5d8; end: 1079ed653; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection initWithFindFriendCTADelegate:entireViewTappable:] */

undefined1 *
FUN_1079ed5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079ed654; end: 1079ed6d3; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection reuseCellClassesByIdentifiers] */

undefined * FUN_1079ed654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ea9358;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1079ed6d4; end: 1079ed6db; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection numberOfCellsInSection] */

undefined8 FUN_1079ed6d4(void)

{
  return 1;
}



/* Entry: 1079ed6dc; end: 1079ed78b; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection cellForItemAtIndexInSection:] */

void FUN_1079ed6dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b16b8;
  _objc_alloc(PTR_PTR_1126b16b8);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c04a6e0(puVar3,param_2,3,lVar1,*(undefined1 *)(param_1 + 0x10));
  _objc_release(lVar1);
  func_0x00010befbb60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1079ed78c; end: 1079ed7c3; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16] FUN_1079ed78c(undefined8 param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010c23d0a0(PTR_PTR_1126b16b8);
  auVar1._8_8_ = param_2 + 32.0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1079ed7c4; end: 1079ed7cb; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection sectionUpdateModel] */

undefined8 FUN_1079ed7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079ed7cc; end: 1079ed7d3; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection setSectionUpdateModel:] */

void FUN_1079ed7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079ed7d4; end: 1079ed7eb; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection delegate] */

void FUN_1079ed7d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ed7ec; end: 1079ed7f7; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection setDelegate:] */

void FUN_1079ed7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1079ed7f8; end: 1079ed7ff; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection dataLoadingStatus] */

undefined8 FUN_1079ed7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079ed800; end: 1079ed807; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection setDataLoadingStatus:] */

void FUN_1079ed800(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1079ed808; end: 1079ed83b; -[SCFindFriendsCTAContactSyncUpsellCollectionViewSection .cxx_destruct] */

void FUN_1079ed808(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079ed83c; end: 1079ed8df; -[SCFindFriendsCTAContactSyncUpsellPlaceholderData initWithTitle:subtitle:] */

undefined1 *
FUN_1079ed83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 1079ed8e0; end: 1079ed8e7; -[SCFindFriendsCTAContactSyncUpsellPlaceholderData title] */

undefined8 FUN_1079ed8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079ed8e8; end: 1079ed917; -[SCFindFriendsCTAContactSyncUpsellPlaceholderData setTitle:] */

void FUN_1079ed8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ed918; end: 1079ed91f; -[SCFindFriendsCTAContactSyncUpsellPlaceholderData subtitle] */

undefined8 FUN_1079ed918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079ed920; end: 1079ed94f; -[SCFindFriendsCTAContactSyncUpsellPlaceholderData setSubtitle:] */

void FUN_1079ed920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ed950; end: 1079ed97f; -[SCFindFriendsCTAContactSyncUpsellPlaceholderData .cxx_destruct] */

void FUN_1079ed950(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079ed980; end: 1079ed9d7; +[SCFindFriendsCTAContactSyncUpsellView size] */

undefined1  [16] FUN_1079ed980(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  auVar2._8_8_ = 0x407a200000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1079ed9d8; end: 1079eda87; -[SCFindFriendsCTAContactSyncUpsellView initWithSource:delegate:isEntireViewTappable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1079ed9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f9358;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127678b0) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127678b4),param_4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127678b8) = param_5;
    func_0x00010be3a720(puVar1);
    func_0x00010bed8640(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079eda88; end: 1079edb1b; -[SCFindFriendsCTAContactSyncUpsellView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079eda88(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  puStack_38 = PTR_PTR_1126f9358;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR_PTR_1126b08d8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127678bc);
  FUN_1079eecf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4024000000000000,0x3ff0000000000000,0,0x3ff0000000000000,puVar1,uVar3,plVar2
                     );
  _objc_release(plVar2);
  return;
}



/* Entry: 1079edb1c; end: 1079ee64f; -[SCFindFriendsCTAContactSyncUpsellView _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079edb1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined *puVar51;
  long lVar52;
  undefined8 uVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  
  lVar52 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar55 = (long)_DAT_1127678bc;
  uVar53 = *(undefined8 *)(param_1 + lVar55);
  *(undefined **)(param_1 + lVar55) = puVar1;
  _objc_release(uVar53);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar55));
  _objc_release(puVar1);
  uVar53 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c08c0e0(uVar53);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar53);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar55));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar54 = (long)_DAT_1127678c0;
  uVar53 = *(undefined8 *)(param_1 + lVar54);
  *(undefined **)(param_1 + lVar54) = puVar1;
  _objc_release(uVar53);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar54));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar54));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar54));
  func_0x00010c207380(0x4030000000000000,*(undefined8 *)(param_1 + lVar54));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar54));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar55));
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1f7b20();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010c18b5e0(puVar1);
  func_0x00010c189840(puVar1);
  func_0x00010c181f80(0xc028000000000000,0,0,0,puVar1);
  uVar53 = 0x4028000000000000;
  func_0x00010c1b9b80(0,0x4028000000000000,0,0x4028000000000000,puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar54));
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c190b80(puVar2);
  func_0x00010c166c00(puVar2);
  func_0x00010c207380(0x4028000000000000,puVar2);
  func_0x00010c219b60(puVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar54));
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  puVar4 = puVar3;
  func_0x00010c165e20();
  func_0x0001079ef060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3);
  _objc_release(puVar4);
  func_0x00010c213040(puVar3);
  func_0x00010c21ad00(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar3);
  func_0x00010bef6d60(puVar2);
  puVar4 = PTR_PTR_1126aea58;
  _objc_opt_new();
  puVar5 = puVar4;
  func_0x00010c165e20();
  func_0x0001079ef078();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar5);
  func_0x00010c213040(puVar4);
  func_0x00010c21ad00(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar5);
  func_0x00010c1cfce0(puVar4);
  func_0x00010bef6d60(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  puVar6 = puVar5;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c271420(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bdc2860();
  func_0x0001079ef090();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010bef9040(puVar5);
  if (*(char *)(param_1 + _DAT_1127678b8) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar54));
    _objc_release(puVar7);
  }
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar54));
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x4065400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf49420(0x405d000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar23;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar27;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar31;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar35;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar42;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c274200(uVar46);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar45;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf1ff80(uVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar56 = 0xc030000000000000;
  uVar50 = uVar48;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar51 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar7);
  _objc_release(puVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar52) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c23d0a0(PTR_PTR_1126b16b8);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,uVar56,uVar53,puVar1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1079ee650; end: 1079ee68b; -[SCFindFriendsCTAContactSyncUpsellView _updateFrame] */

void FUN_1079ee650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c23d0a0(PTR_PTR_1126b16b8);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,param_1,param_2,param_3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1079ee68c; end: 1079ee697; -[SCFindFriendsCTAContactSyncUpsellView tableView:heightForRowAtIndexPath:] */

undefined8 FUN_1079ee68c(void)

{
  return 0x4044000000000000;
}



/* Entry: 1079ee698; end: 1079ee6d3; -[SCFindFriendsCTAContactSyncUpsellView tableView:numberOfRowsInSection:] */

undefined8 FUN_1079ee698(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001079eeb10();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1079ee6d4; end: 1079eea8f; -[SCFindFriendsCTAContactSyncUpsellView tableView:cellForRowAtIndexPath:] */

void FUN_1079ee6d4(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  uVar2 = uVar1;
  func_0x0001079eeb10();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) {
    func_0x0001079eeb10();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c142240(param_4);
    uVar3 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = param_3;
    func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9378);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
      _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
      func_0x00010c04ec80();
      func_0x00010c1fbac0();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bf6f720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c26c280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010bf6f720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(puVar4);
      uVar8 = *(undefined8 *)PTR__UIFontWeightRegular_110345c40;
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c266f60(0x402e000000000000,uVar8,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c26c280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c266f60(0x402a000000000000,uVar8,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bf6f720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c26c280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165e00();
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010bf6f720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165e00();
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c26c280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165e20();
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c26c280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c83a0(0x3feb333333333333);
      _objc_release(puVar4);
    }
    uVar1 = uVar3;
    func_0x00010c2711a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c26c280(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar4);
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c260dc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bf6f720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar4);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c142240();
    uVar2 = uVar1;
    func_0x0001079eeb10();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    uVar8 = 3;
    if (uVar1 != uVar6 - 1) {
      uVar8 = 0;
    }
    func_0x00010c161260(puVar7,param_2,uVar8);
    _objc_release(uVar3);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_opt_new(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1079eea90; end: 1079eeac3; -[SCFindFriendsCTAContactSyncUpsellView _openOSSettingsButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079eea90(long param_1)

{
  param_1 = param_1 + _DAT_1127678b4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e9960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079eeac4; end: 1079eeb63; -[SCFindFriendsCTAContactSyncUpsellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079eeac4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127678c0,0);
  _objc_storeStrong(param_1 + _DAT_1127678bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127678b4);
  return;
}



/* Entry: 1079eeb64; end: 1079eecf7;  */

void FUN_1079eeb64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d5c68;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x0001079eefe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520();
  puVar4 = PTR_PTR_1126d5c68;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x0001079ef000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x0001079ef030();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520();
  puVar7 = PTR_PTR_1126d5c68;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x0001079ef018();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x0001079ef048();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727348;
  puRam0000000113727348 = puVar10;
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0,0x3fb1eb851eb851ec,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 1079eecf8; end: 1079eed17;  */

void FUN_1079eecf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0,0x3fb1eb851eb851ec,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 1079eed18; end: 1079eedc3;  */

undefined8 FUN_1079eed18(double param_1)

{
  double dVar1;
  
  param_1 = param_1 + -32.0;
  dVar1 = 0.0;
  FUN_1079eedec(0,0,param_1,(double)(float)(int)(param_1 / 1.96));
  _CGRectGetMaxY();
  _CGRectGetMaxY((double)(float)(int)((param_1 + -183.0) * 0.5),dVar1 + 20.0,0x4066e00000000000,
                 0x4046000000000000);
  return 0x4030000000000000;
}



/* Entry: 1079eedc4; end: 1079eedeb;  */

undefined8 FUN_1079eedc4(void)

{
  return 0;
}



/* Entry: 1079eedec; end: 1079eeeb3;  */

undefined8
FUN_1079eedec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double dVar1;
  
  _objc_retain();
  dVar1 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  func_0x00010c23d5a0(dVar1 + -20.0,param_5);
  _objc_release(param_5);
  return 0x4024000000000000;
}



/* Entry: 1079eeeb4; end: 1079eef1b;  */

double FUN_1079eeeb4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  _CGRectGetMaxY(param_2,param_3,param_4,param_5);
  return (double)(float)(int)((param_1 + -183.0) * 0.5);
}



/* Entry: 1079eef1c; end: 1079eef87;  */

undefined8
FUN_1079eef1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CGRectGetMaxY();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  return 0x4024000000000000;
}



/* Entry: 1079eef88; end: 1079ef0a7;  */

void FUN_1079eef88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc6);
  return;
}



/* Entry: 1079ef0a8; end: 1079ef1e3; -[SCImpalaQuotingCameraPresenter initWithUserSession:creatorInfoProvider:] */

undefined1 *
FUN_1079ef0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9360;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126caae0);
    uVar3 = uVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cc640);
    uVar3 = uVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079ef1e4; end: 1079ef1f3;  */

void FUN_1079ef1e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_replyQuotingCameraScopeLauncher_11262a230);
  return;
}



/* Entry: 1079ef1f4; end: 1079ef627; -[SCImpalaQuotingCameraPresenter presentWithProfileId:userId:conversationId:stickerImage:presentingViewController:pageType:pageTypeSpecific:quotedStickerReplyType:isFanPassStoryReply:] */

void FUN_1079ef1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1079ef38c;
  puStack_b8 = &UNK_110864468;
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_68 = param_11;
  uStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_a0 = param_6;
  uStack_98 = param_4;
  uStack_90 = param_7;
  uStack_88 = param_5;
  uStack_80 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_d0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1079ef628; end: 1079ef637; -[SCImpalaQuotingCameraPresenter captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1079ef628(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ef638; end: 1079ef6bb; -[SCImpalaQuotingCameraPresenter dismissCameraScope:] */

void FUN_1079ef638(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe63a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}


