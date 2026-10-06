/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106803c8c; end: 106803cd3; -[SCActiveUserNGSNavigationRouter impalaProfileDidComplete] */

void FUN_106803c8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2d0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x2d0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106803cd4; end: 106803d7b; -[SCActiveUserNGSNavigationRouter impalaProfileNeedsRemoval] */

void FUN_106803cd4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x2d8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106803d7c; end: 106803daf;  */

void FUN_106803d7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfea060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803db0; end: 106803df7; -[SCActiveUserNGSNavigationRouter communitiesProfileDidDismissWithScope:] */

void FUN_106803db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x2f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803df8; end: 106803e73; -[SCActiveUserNGSNavigationRouter friendProfileDidDismiss:] */

void FUN_106803df8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x280;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x280;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106803e74; end: 106803f0b; -[SCActiveUserNGSNavigationRouter communitiesPromptNotificationDidDismissWithScope:] */

void FUN_106803e74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x120;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar2 != param_3) {
    return;
  }
  param_1 = param_1 + 0x120;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106803f0c; end: 106803f87; -[SCActiveUserNGSNavigationRouter mobileSettingsDidComplete] */

void FUN_106803f0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x128;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x128;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106803f88; end: 106803fb7; -[SCActiveUserNGSNavigationRouter showConversationId:deepLinkURL:sourceType:entryEvent:inExistingContext:] */

void FUN_106803f88(void)

{
  func_0x00010c236cc0();
  return;
}



/* Entry: 106803fb8; end: 106803fd7; -[SCActiveUserNGSNavigationRouter didCompleteTopicViewerScope:] */

void FUN_106803fb8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x3c0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106803fd8; end: 106803ff7; -[SCActiveUserNGSNavigationRouter didCompleteTopicViewerMusicScope:] */

void FUN_106803fd8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x3d0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106803ff8; end: 10680400f; -[SCActiveUserNGSNavigationRouter interactionDelegate] */

void FUN_106803ff8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106804010; end: 106804017; -[SCActiveUserNGSNavigationRouter mapNavigationService] */

undefined8 FUN_106804010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x428);
}



/* Entry: 106804018; end: 10680401f; -[SCActiveUserNGSNavigationRouter friendsFeedNavigationService] */

undefined8 FUN_106804018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



/* Entry: 106804020; end: 106804027; -[SCActiveUserNGSNavigationRouter discoverFeedNavigationService] */

undefined8 FUN_106804020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x440);
}



/* Entry: 106804028; end: 10680402f; -[SCActiveUserNGSNavigationRouter spotlightNavigationService] */

undefined8 FUN_106804028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x448);
}



/* Entry: 106804030; end: 106804037; -[SCActiveUserNGSNavigationRouter searchSuggestionsNavigationService] */

undefined8 FUN_106804030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x450);
}



/* Entry: 106804038; end: 10680403f; -[SCActiveUserNGSNavigationRouter memoriesNavigationService] */

undefined8 FUN_106804038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x458);
}



/* Entry: 106804040; end: 106804057; -[SCActiveUserNGSNavigationRouter legacy_navigationDelegate] */

void FUN_106804040(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106804058; end: 10680406f; -[SCActiveUserNGSNavigationRouter legacy_startChatDelegate] */

void FUN_106804058(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106804070; end: 1068045fb; -[SCActiveUserNGSNavigationRouter .cxx_destruct] */

void FUN_106804070(long param_1)

{
  _objc_destroyWeak(param_1 + 0x468);
  _objc_destroyWeak(param_1 + 0x460);
  _objc_storeStrong(param_1 + 0x458,0);
  _objc_storeStrong(param_1 + 0x450,0);
  _objc_storeStrong(param_1 + 0x448,0);
  _objc_storeStrong(param_1 + 0x440,0);
  _objc_storeStrong(param_1 + 0x438,0);
  _objc_storeStrong(param_1 + 0x430,0);
  _objc_storeStrong(param_1 + 0x428,0);
  _objc_destroyWeak(param_1 + 0x420);
  _objc_storeStrong(param_1 + 0x418,0);
  _objc_storeStrong(param_1 + 0x410,0);
  _objc_storeStrong(param_1 + 0x408,0);
  _objc_storeStrong(param_1 + 0x400,0);
  _objc_storeStrong(param_1 + 0x3f8,0);
  _objc_destroyWeak(param_1 + 0x3f0);
  _objc_destroyWeak(param_1 + 1000);
  _objc_storeStrong(param_1 + 0x3d8,0);
  _objc_storeStrong(param_1 + 0x3d0,0);
  _objc_storeStrong(param_1 + 0x3c8,0);
  _objc_storeStrong(param_1 + 0x3c0,0);
  _objc_storeStrong(param_1 + 0x3b8,0);
  _objc_storeStrong(param_1 + 0x3b0,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_destroyWeak(param_1 + 0x308);
  _objc_destroyWeak(param_1 + 0x300);
  _objc_destroyWeak(param_1 + 0x2f8);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_destroyWeak(param_1 + 0x2e0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_destroyWeak(param_1 + 0x298);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_destroyWeak(param_1 + 0x288);
  _objc_destroyWeak(param_1 + 0x280);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_destroyWeak(param_1 + 0x270);
  _objc_destroyWeak(param_1 + 0x268);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_destroyWeak(param_1 + 600);
  _objc_destroyWeak(param_1 + 0x250);
  _objc_destroyWeak(param_1 + 0x248);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_destroyWeak(param_1 + 0x238);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_destroyWeak(param_1 + 0x218);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_destroyWeak(param_1 + 0x1f0);
  _objc_destroyWeak(param_1 + 0x1e8);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1068045fc; end: 1068046e7; -[SCActiveUserNavigationWorkflow userBackgroundedApp] */

void FUN_1068045fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010c1e09a0(param_2,param_3,0);
  *(undefined1 *)(param_2 + 0xb8) = 0;
  func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x38) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  func_0x00010c0d6b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068046e8;
  puStack_48 = &UNK_1109415d0;
  lStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  lVar3 = param_2;
  func_0x00010becaa80(param_2,param_3,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be759c0(param_2,param_3,lVar3,0,0,&PTR___NSConcreteGlobalBlock_110941600);
  _objc_release(lVar3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 1068046e8; end: 1068046fb;  */

void FUN_1068046e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb39b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__shouldExitDestinationOnBackgrou_11258a810,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068046fc; end: 106804a4b; -[SCActiveUserNavigationWorkflow userForegroundedApp:] */

void FUN_1068046fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010bfda820();
  if ((uVar4 & 1) != 0) goto LAB_106804a20;
  func_0x00010c1e09a0(param_1);
  func_0x00010bf5e680(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c0d6b80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  _objc_retain(uVar6);
  uVar4 = param_1;
  func_0x00010becaa80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_1 + 0xd0);
  func_0x00010c0d6b80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == uVar8) {
    lVar9 = param_1 + 0xc0;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c06e020();
    uVar15 = (uint)lVar10;
    _objc_release(lVar9);
  }
  else {
    uVar15 = 0;
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar11 = *(ulong *)(param_1 + 0x88);
  func_0x00010bf06100();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf6a640();
  _objc_release(uVar8);
  _objc_release(uVar11);
  uVar2 = (uint)(5 < uVar7) | 9U >> (ulong)((uint)uVar7 & 0x1f);
  uVar1 = uVar15;
  if (uVar4 == 0) {
    uVar1 = 1;
  }
  iVar3 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010b09cf58();
  if (iVar3 == 0) {
    uVar15 = uVar1 & uVar2;
  }
  else {
    uVar15 = uVar15 | uVar4 == 0 & uVar2;
  }
  iVar3 = 100;
  _arc4random_uniform();
  if (((uint)(iVar3 * -0x3d70a3d7) >> 2 | iVar3 * 0x40000000) < 0x28f5c29) {
    puVar12 = PTR_PTR_1126ce538;
    func_0x00010bf2a0a0(PTR_PTR_1126ce538);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar14 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c0d6800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(puVar13);
  }
  _objc_retain(param_3);
  func_0x00010be759c0(param_1);
  uVar8 = uVar4;
  _objc_opt_respondsToSelector(uVar4,PTR_s_destinationName_1125b94e8);
  if ((uVar8 & 1) == 0) {
    if (uVar15 == 0) goto LAB_1068049f4;
    lVar9 = param_1 + 0xc0;
    _objc_loadWeakRetained(lVar9);
    func_0x00010beef7c0();
    _objc_release(lVar9);
  }
  else {
    uVar8 = uVar4;
    func_0x00010bf6ed00();
    if (uVar8 != 0) {
LAB_1068049f4:
      func_0x00010bdccba0(param_1);
    }
  }
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar6);
LAB_106804a20:
  _objc_release(param_3);
  return;
}



/* Entry: 106804a4c; end: 106804a73;  */

void FUN_106804a4c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__shouldExitDestinationOnForegrou_11258a818,param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106804a74; end: 106804b23; -[SCActiveUserNavigationWorkflow _appLaunchedToNonCameraScreen:] */

void FUN_106804a74(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1b00();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106804b24; end: 106804e13; -[SCActiveUserNavigationWorkflow userPressedNotification:isInAppNotification:didHandleNavigation:] */

void FUN_106804b24(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_106804c30;
  if (param_5 != 0) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    goto LAB_106804c30;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  puVar2 = PTR_PTR_1126b6b98;
  func_0x00010c269b80(PTR_PTR_1126b6b98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010c07cda0();
  if ((int)lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c11c420();
    iVar1 = (int)lVar3;
    FUN_1070c22c8();
    if (iVar1 == 0) goto LAB_106804c30;
  }
  func_0x00010c1e09a0(param_1);
  lVar3 = param_3;
  func_0x00010c26a060();
  if ((lVar3 == 0) || ((lVar3 = param_3, func_0x00010c26a060(), param_4 != 0 && (lVar3 == 3)))) {
LAB_106804c10:
    puStack_78 = &uStack_80;
    uStack_70 = 0x2020000000;
    uStack_68 = 1;
    uStack_80 = 0;
    func_0x00010be622a0(param_1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0d6cc0();
    _objc_release(lVar4);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 1;
    if (lVar3 == 1) goto LAB_106804c10;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106804e14;
    puStack_98 = &UNK_110941650;
    puStack_88 = puStack_78;
    _objc_retain(param_3);
    lVar3 = param_1;
    lStack_90 = param_3;
    func_0x00010becaa80();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b8,param_1);
    lVar4 = param_3;
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_b8);
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    _objc_retain(param_3);
    uStack_c0 = (undefined1)param_4;
    func_0x00010be71960(param_1);
    if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
      func_0x00010c11c420(param_3);
    }
    _objc_release(param_3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_c8);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_release(lVar3);
    _objc_release(lStack_90);
  }
  __Block_object_dispose(&uStack_80,8);
LAB_106804c30:
  _objc_release(param_3);
  return;
}



/* Entry: 106804e14; end: 106804eb3;  */

undefined8 FUN_106804e14(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_canExit_1125a8c18);
  if (((uVar1 & 1) == 0) || (uVar1 = param_2, func_0x00010bf2c9c0(), (uVar1 & 1) != 0)) {
    uVar1 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_canHandleNotification__1125a8ca0);
    if (((uVar1 & 1) == 0) || (uVar1 = param_2, func_0x00010bf2cbe0(), (uVar1 & 1) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106804eb4; end: 106804f93;  */

void FUN_106804eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_50,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_48 = *(undefined1 *)(param_1 + 0x48);
  func_0x00010be759c0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 106804f94; end: 106804fd3;  */

void FUN_106804f94(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be622a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106804fd4; end: 106805df3; -[SCActiveUserNavigationWorkflow _navigateToDestination:isInAppNotification:canNavigateToNotification:] */

void FUN_106804fd4(undefined *param_1,int param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010be64340();
  if (((ulong)puVar2 & 1) != 0) goto LAB_106805148;
  puVar2 = param_3;
  func_0x00010c11c420();
  if (puVar2 == (undefined *)0xad) {
    puVar2 = param_1 + 0xc0;
    _objc_loadWeakRetained();
    func_0x00010bf967a0();
    goto LAB_106805144;
  }
  puVar2 = param_1;
  func_0x00010be644c0();
  if (((ulong)puVar2 & 1) != 0) goto LAB_106805148;
  puVar2 = *(undefined **)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d6cc0();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = *(undefined **)(param_1 + 0x60);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1960(puVar3);
    goto code_r0x00010680511c;
  }
  puVar4 = param_3;
  func_0x00010c26a060();
  puVar3 = param_1;
  puVar5 = param_3;
  switch(puVar4) {
  case (undefined *)0x0:
    func_0x00010c11c420();
    if (puVar5 + -0x81 < (undefined *)0x8) {
      puVar5 = PTR_PTR_1126af680;
      func_0x00010c22ba80(PTR_PTR_1126af680);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bfa2bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf060e0(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar5);
      func_0x00010be2ab40(param_1);
    }
    puVar5 = param_3;
    func_0x00010c11c420();
    iVar1 = (int)puVar5;
    func_0x000107fba1e4();
    if (iVar1 != 0) {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c141f20();
      break;
    }
    goto LAB_106805128;
  case (undefined *)0x1:
    func_0x00010c11c420();
    if ((puVar5 == (undefined *)0x19) ||
       (puVar5 = param_3, func_0x00010c11c420(), puVar5 == (undefined *)0x8e)) {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf2a020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c236700();
      goto code_r0x00010680511c;
    }
    puVar3 = param_3;
    func_0x0001085a6204();
    if ((int)puVar3 == 0) {
      puVar3 = param_1;
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf2a020();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010c2366c0(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar3 = param_3;
    }
    else {
      puVar5 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = param_1;
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23a0e0();
        goto code_r0x00010680511c;
      }
    }
    break;
  case (undefined *)0x2:
    func_0x00010beb9420(param_1);
    goto LAB_106805128;
  case (undefined *)0x3:
    func_0x00010be2caa0(param_1);
    goto LAB_106805144;
  case (undefined *)0x4:
  case (undefined *)0xd:
    puVar5 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c1420a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c2338c0();
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    if ((int)puVar8 == 0) {
      func_0x00010bf81b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237100();
    }
    else {
      func_0x00010bfba180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237980();
    }
    goto code_r0x00010680511c;
  case (undefined *)0x5:
  case (undefined *)0x6:
    func_0x00010be2a020(param_1);
    goto LAB_106805128;
  case (undefined *)0x7:
    puVar4 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c11c420();
    if (puVar4 == (undefined *)0x3c) {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a100();
    }
    else {
      puVar4 = param_3;
      func_0x00010c11c420();
      if (((puVar4 == (undefined *)0x42) ||
          (puVar4 = param_3, func_0x00010c11c420(), puVar4 == (undefined *)0x43)) ||
         ((puVar4 = param_3, func_0x00010c11c420(), puVar4 == (undefined *)0x44 ||
          ((puVar4 = param_3, func_0x00010c11c420(), puVar4 == (undefined *)0x45 ||
           (puVar4 = param_3, func_0x00010c11c420(), puVar4 == (undefined *)0x9b)))))) {
code_r0x00010680591c:
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23a160();
      }
      else {
        puVar4 = param_3;
        func_0x00010c11c420();
        if (puVar4 == (undefined *)0x79) {
          puVar4 = param_3;
          func_0x00010c120340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c120340(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23a140(puVar3);
            goto code_r0x00010680511c;
          }
        }
        func_0x00010c11c420();
        if (puVar5 == (undefined *)0x49) {
          func_0x00010c1420a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c238620();
        }
        else {
          puVar5 = param_3;
          func_0x00010c11c420();
          if ((puVar5 == (undefined *)0x4b) ||
             (puVar5 = param_3, func_0x00010c11c420(), puVar5 == (undefined *)0x4a)) {
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c250b60();
          }
          else {
            puVar5 = param_3;
            func_0x00010c11c420();
            if (puVar5 == (undefined *)0x9c) {
              func_0x00010c1420a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c23a0c0();
            }
            else {
              puVar5 = param_3;
              func_0x00010c11c420();
              if (puVar5 == (undefined *)0x9d) goto code_r0x00010680591c;
              puVar5 = param_3;
              func_0x00010c11c420();
              if ((((puVar5 != (undefined *)0xa3) &&
                   (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xa4)) &&
                  (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xa6)) &&
                 ((puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xa8 &&
                  (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xa9))))
              goto LAB_106805128;
              func_0x00010c1420a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c23a120();
            }
          }
        }
      }
    }
    break;
  case (undefined *)0x8:
  case (undefined *)0xe:
  case (undefined *)0xf:
    goto LAB_106805128;
  case (undefined *)0x9:
    puVar5 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238600();
    break;
  case (undefined *)0xa:
    func_0x00010c11c420();
    if (puVar5 == (undefined *)0x64) {
      uVar6 = *(ulong *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfdb9a0();
      _objc_release(uVar6);
      if ((uVar7 & 1) != 0) goto LAB_106805128;
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fa000();
      _objc_release(uVar14);
    }
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2382a0();
    break;
  case (undefined *)0xb:
    func_0x00010bdefce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106805850;
  case (undefined *)0xc:
    func_0x00010c11c420();
    if ((puVar5 == (undefined *)0x95) ||
       (puVar5 = param_3, func_0x00010c11c420(), puVar5 == (undefined *)0xa7)) {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c141f40();
    }
    else {
      puVar5 = param_3;
      func_0x00010c11c420();
      if (puVar5 == (undefined *)0xb7) {
        puVar5 = PTR_PTR_1126ce540;
        func_0x00010c0f63e0(PTR_PTR_1126ce540);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_3;
        func_0x00010c292820(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010c2ac460(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar4);
        uVar9 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar9;
        func_0x00010c0f63c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar14);
        _objc_release(uVar9);
        puVar5 = param_1;
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c142080();
        _objc_release(puVar5);
      }
      else {
        puVar5 = param_3;
        func_0x00010c11c420();
        if (((((puVar5 != (undefined *)0xc0) &&
              (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xc1)) &&
             (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xc2)) &&
            ((puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xc3 &&
             (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xc4)))) &&
           ((puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xc5 &&
            (puVar5 = param_3, func_0x00010c11c420(), puVar5 != (undefined *)0xc6))))
        goto LAB_106805128;
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c142080();
      }
    }
    break;
  case (undefined *)0x10:
    func_0x00010be33860(param_1);
    goto LAB_106805128;
  case (undefined *)0x11:
    puVar3 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae600;
    _objc_alloc(PTR_PTR_1126ae600);
    func_0x00010c01fb20();
    puVar5 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237820();
    goto code_r0x00010680511c;
  case (undefined *)0x12:
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237640();
    break;
  case (undefined *)0x13:
    puVar5 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c24b780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a2a0();
    goto code_r0x00010680511c;
  case (undefined *)0x14:
    func_0x00010bdefd00(param_1);
    _objc_retainAutoreleasedReturnValue();
code_r0x000106805850:
    func_0x00010be22ce0(param_1);
    puVar5 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0b9600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2384a0();
    _objc_release(puVar4);
code_r0x00010680511c:
    _objc_release(puVar5);
    break;
  case (undefined *)0x15:
    puVar3 = PTR_PTR_1126af680;
    func_0x00010c22ba80(PTR_PTR_1126af680);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfa2bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf060e0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar5 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if ((puVar8 == (undefined *)0x0) &&
       (puVar8 = PTR____NSArray0__struct_11034ab48, puVar4 != (undefined *)0x0)) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238520(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar4);
    break;
  case (undefined *)0x16:
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236ec0();
    break;
  default:
    if (puVar4 == (undefined *)0xc9) {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292820(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c236a20(puVar3);
      _objc_release(puVar4);
      goto code_r0x00010680511c;
    }
    goto LAB_106805128;
  }
  _objc_release(puVar3);
LAB_106805128:
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  func_0x00010bf967a0();
  _objc_release(param_1);
LAB_106805144:
  _objc_release(puVar2);
LAB_106805148:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    lVar15 = *(long *)(param_3 + 0x20);
    func_0x00010c11c420();
    if (lVar15 == 0x61) {
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c292820(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1049a0(puVar2);
      _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 106805df4; end: 106805e7f;  */

void FUN_106805df4(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c11c420();
    if (lVar1 == 0x61) {
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c292820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1049a0(puVar2);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 106805e80; end: 106805faf; -[SCActiveUserNavigationWorkflow resetNavigationStackIfPossible:completion:] */

void FUN_106805e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  uVar1 = param_1;
  func_0x00010becaa80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010be759c0(param_1);
  _objc_release(param_4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  return;
}



/* Entry: 106805fb0; end: 10680601f;  */

ulong FUN_106805fb0(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_canExit_1125a8c18);
  if ((uVar1 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_2;
    func_0x00010bf2c9c0();
    *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106806020; end: 106806047;  */

void FUN_106806020(long param_1)

{
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') &&
     (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106806040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106806048; end: 106806117; -[SCActiveUserNavigationWorkflow userTappedDeepLink:completion:] */

void FUN_106806048(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010c1e09a0(param_1,param_2,1);
  lVar2 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfb4960();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106806118;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f9680(puVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106806118; end: 106806207;  */

void FUN_106806118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e608b8,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((int)uVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106806214;
    puStack_58 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    func_0x00010c1390a0(uVar2,param_2,3,&puStack_70);
    uVar1 = uStack_50;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106806208;
    puStack_30 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_28 = uVar1;
    func_0x00010be759c0(uVar2,param_2,0,3,0,&puStack_48);
    uVar1 = uStack_28;
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106806208; end: 10680621f;  */

void FUN_106806208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106806210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106806220; end: 1068063ff; -[SCActiveUserNavigationWorkflow _shouldExitDestinationOnBackgrounded:navigationStackSnapShot:] */

uint FUN_106806220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010b09cf04();
  uVar1 = (uint)*(undefined8 *)(param_1 + 8);
  func_0x00010b09cf20();
  if ((uVar2 & 1) == 0) {
    uVar3 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_backgroundExitBehavior_1125a2980);
    uVar4 = (uint)uVar3 ^ 1;
    if (((uVar4 | uVar1) & 1) == 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 1;
      uVar3 = param_3;
      func_0x00010bf13f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0bdbc0(uVar3);
      _objc_release(uVar3);
      uVar4 = (uint)*(byte *)(puStack_58 + 3);
      _objc_release(param_4);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4 & 1;
}



/* Entry: 106806400; end: 106806443;  */

void FUN_106806400(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106806444; end: 106806497;  */

void FUN_106806444(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be169e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beb39a0(uVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x30));
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106806498; end: 1068066f3; -[SCActiveUserNavigationWorkflow _shouldExitDestinationOnForegrounded:timeInBackground:navigationStackSnapShot:] */

byte FUN_106806498(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010b09cf04();
  uVar3 = (uint)*(undefined8 *)(param_1 + 8);
  func_0x00010b09cf20();
  iVar4 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010b09cf3c();
  if ((iVar4 == 0) ||
     (uVar5 = param_3, _objc_opt_respondsToSelector(param_3,PTR_s_destinationName_1125b94e8),
     (uVar5 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf6ed00();
    bVar1 = uVar5 == 1;
  }
  if ((iVar2 == 0) || (bVar1)) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 1;
    uVar5 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_backgroundExitBehavior_1125a2980);
    if ((uVar5 & 1) != 0) {
      if (bVar1 || ((uVar3 ^ 0xffffffff) & 1) != 0) {
        uVar5 = param_3;
        func_0x00010bf13f60(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010c0bdbc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      else {
        *(undefined1 *)(puStack_78 + 3) = 0;
      }
    }
    bVar6 = *(byte *)(puStack_78 + 3);
    __Block_object_dispose(&uStack_80,8);
  }
  else {
    bVar6 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar6 & 1;
}



/* Entry: 1068066f4; end: 106806757;  */

void FUN_1068066f4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106806758; end: 1068067af;  */

void FUN_106806758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be169e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beb39c0(*(undefined8 *)(param_1 + 0x40),uVar2,param_2,uVar1,
                      *(undefined8 *)(param_1 + 0x30));
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068067b0; end: 10680688f; -[SCActiveUserNavigationWorkflow _findInheritedBackgroundExitBehaviorDestination:navigationStackSnapShot:] */

void FUN_1068067b0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (uVar4 = param_4, func_0x00010bf529e0(), uVar4 != 0)) &&
     (uVar4 = param_4, func_0x00010bf529e0(), puVar2 = PTR_s_backgroundExitBehavior_1125a2980,
     -1 < (long)(uVar4 - 1))) {
    bVar1 = false;
    do {
      uVar4 = uVar4 - 1;
      uVar5 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar5 == param_3) || (!bVar1)) {
        bVar1 = (bool)(uVar5 == param_3 | bVar1);
      }
      else {
        uVar3 = uVar5;
        _objc_opt_respondsToSelector(uVar5,puVar2);
        if ((uVar3 & 1) != 0) goto LAB_106806868;
      }
      _objc_release(uVar5);
    } while (0 < (long)uVar4);
  }
  uVar5 = 0;
LAB_106806868:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106806890; end: 106806927; -[SCActiveUserNavigationWorkflow _targetDestinationWithShouldExit:] */

void FUN_106806890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106806928;
  puStack_30 = &UNK_110941710;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c269e60(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106806928; end: 106806947;  */

uint FUN_106806928(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  return (uint)lVar1 ^ 1;
}



/* Entry: 106806948; end: 106806b0f; -[SCActiveUserNavigationWorkflow _popToNavigationDestination:becauseOfEvent:notificationId:completion:] */

void FUN_106806948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar1 = param_6;
  func_0x00010bf51e00();
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106806b10;
  puStack_90 = &UNK_110848708;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar1);
  ppuVar2 = &puStack_a8;
  uStack_88 = uVar1;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_3);
  uStack_b0 = param_4;
  _objc_retain(ppuVar2);
  func_0x00010c103920(uVar3);
  _objc_release(ppuVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106806b10; end: 106806b8b;  */

void FUN_106806b10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x50) = 0;
    *(undefined1 *)(lVar1 + 0xb8) = 0;
    lVar2 = *(long *)(lVar1 + 0x48);
    if (lVar2 != 0) {
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar1 + 0x48) = 0;
      _objc_release(uVar3);
      (**(code **)(lVar2 + 0x10))(lVar2);
      _objc_release(lVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106806b8c; end: 106806df3;  */

void FUN_106806b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106806bd4;
  if ((*(long *)(param_1 + 0x20) == 0) && ((*(byte *)(lVar1 + 0xb8) & 1) == 0)) {
    uVar2 = *(ulong *)(lVar1 + 0x88);
    func_0x00010bf06100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf6a640();
    if (uVar4 < 6 && (1L << (uVar4 & 0x3f) & 0x36U) != 0) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 != 1) goto LAB_106806cd8;
      lVar6 = lVar1 + 0xc0;
      _objc_loadWeakRetained(lVar6);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106806df4;
      puStack_50 = &UNK_110842508;
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar7);
      uStack_48 = uVar7;
      func_0x00010c238000(lVar6,param_2,0,uVar4,&puStack_68);
      _objc_release(lVar6);
      uVar7 = uStack_48;
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar6 = *(long *)(param_1 + 0x38);
LAB_106806cd8:
      if (lVar6 == 1) {
        lVar6 = lVar1 + 0xc0;
        _objc_loadWeakRetained(lVar6);
        lVar5 = lVar6;
        func_0x00010bf2a020();
        _objc_retainAutoreleasedReturnValue();
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x106806e0c;
        puStack_a0 = &UNK_110842508;
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar7);
        uStack_98 = uVar7;
        func_0x00010c236600(lVar5,param_2,0,&puStack_b8);
        _objc_release(lVar5);
        _objc_release(lVar6);
        uVar7 = uStack_98;
      }
      else {
        if (lVar6 != 0) goto LAB_106806bc8;
        lVar6 = lVar1 + 0xc0;
        _objc_loadWeakRetained(lVar6);
        lVar5 = lVar6;
        func_0x00010bf2a020();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        uStack_80 = 0x106806e00;
        puStack_78 = &UNK_110842508;
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar7);
        uStack_70 = uVar7;
        func_0x00010c236600(lVar5,param_2,0,&puStack_90);
        _objc_release(lVar5);
        _objc_release(lVar6);
        func_0x00010c198340(*(undefined8 *)(lVar1 + 0x68),param_2,6);
        uVar7 = uStack_70;
      }
    }
    _objc_release(uVar7);
  }
  else {
LAB_106806bc8:
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
LAB_106806bd4:
  _objc_release(lVar1);
  return;
}



/* Entry: 106806df4; end: 106806e17;  */

void FUN_106806df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106806dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106806e18; end: 106806e5b; -[SCActiveUserNavigationWorkflow _performDeferredNavigation:] */

void FUN_106806e18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106806e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 106806e5c; end: 10680702f; -[SCActiveUserNavigationWorkflow _handleChatNotificationDestination:notification:isInAppNotification:canNavigateToNotification:] */

void FUN_106806e5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == 3) {
    _objc_initWeak(auStack_58,param_1);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10680706c;
    puStack_a8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_98,auStack_58);
    _objc_retain(param_4);
    uStack_a0 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_c0);
    _objc_release(uStack_a0);
    puVar2 = auStack_98;
  }
  else {
    if (param_3 != 2) goto LAB_106806f90;
    _objc_initWeak(auStack_58,param_1);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106807030;
    puStack_78 = &UNK_110859060;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    uStack_70 = param_4;
    uStack_60 = param_5;
    uStack_5f = param_6;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_70);
    puVar2 = auStack_68;
  }
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_58);
LAB_106806f90:
  param_1 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1068070a0;
  puStack_d0 = &UNK_110842e18;
  lStack_c8 = param_1;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_e8);
  _objc_release(lStack_c8);
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 106807030; end: 10680709f;  */

void FUN_106807030(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb87c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068070a0; end: 1068070a7;  */

void FUN_1068070a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf967b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_ensureMainScreenIsPresented_1125c3390);
  return;
}



/* Entry: 1068070a8; end: 10680723b; -[SCActiveUserNavigationWorkflow _showConversationForNotification:isInAppNotification:canNavigateToNotification:] */

void FUN_1068070a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) goto LAB_106807208;
    puVar4 = PTR_PTR_1126b01c0;
    func_0x00010c294260(PTR_PTR_1126b01c0,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfa2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e60918,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236cc0();
  _objc_release(param_1);
  _objc_release(puVar4);
LAB_106807208:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680723c; end: 1068072ff; -[SCActiveUserNavigationWorkflow _showFriendsFeedWithNotification:] */

void FUN_10680723c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af680;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e60918,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfba180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237980();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106807300; end: 106807567; -[SCActiveUserNavigationWorkflow _handleFriendingNotification:] */

void FUN_106807300(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bfa2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e60918,lVar5);
  _objc_release(lVar5);
  _objc_release(puVar4);
  puVar4 = param_3;
  func_0x00010c11c420();
  if (puVar4 + -0x17 < (undefined *)0x2) {
    func_0x000100c68168();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010c261e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117ea0(puVar6,param_2,puVar7,0,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  puVar4 = param_3;
  func_0x00010c11c420();
  if (puVar4 == (undefined *)0x94) {
    puVar6 = param_3;
    func_0x00010c117f80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (puVar6 != (undefined *)0x0) {
      puVar4 = puVar6;
    }
    _objc_retain(puVar4);
    _objc_release(puVar6);
    lVar5 = param_1 + 200;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010c293260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4ac0();
    _objc_release(puVar4);
    _objc_release(lVar8);
    _objc_release(lVar5);
  }
  puVar4 = param_3;
  func_0x00010c11c420();
  if (puVar4 == (undefined *)0xe) {
    puVar4 = param_3;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x000108c07834();
      _objc_release(puVar4);
      if (iVar3 != 0) {
        lVar5 = param_1 + 200;
        _objc_loadWeakRetained(lVar5);
        lVar8 = lVar5;
        func_0x00010c293260();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_3;
        func_0x00010c15de20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dbc60(lVar8,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(lVar8);
        _objc_release(lVar5);
      }
    }
  }
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c11c420();
  uVar1 = 0x1a;
  if (puVar4 == (undefined *)0x17) {
    uVar1 = 0x1d;
  }
  uVar2 = 0x1b;
  if (puVar4 != (undefined *)0x18) {
    uVar2 = uVar1;
  }
  uVar1 = 0x1c;
  if (puVar4 != (undefined *)0x94) {
    uVar1 = uVar2;
  }
  func_0x00010c235ae0(param_1,param_2,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106807568; end: 10680764f; -[SCActiveUserNavigationWorkflow _handleImpalaNotification:] */

void FUN_106807568(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2389c0();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c11c420();
  if (lVar2 - 0x82U < 7) {
    lVar2 = param_3;
    FUN_10684b358();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf24ec0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c239720(param_1,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106807650; end: 10680773f; -[SCActiveUserNavigationWorkflow _notificationHandledByPayoutsNotificationHandling:] */

undefined8 FUN_106807650(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if ((lVar1 == 0x9e) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x9f)) {
    lVar1 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2389c0();
    _objc_release(lVar1);
    param_1 = param_1 + 0xc0;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf967a0();
  }
  else {
    lVar1 = param_3;
    func_0x00010c11c420();
    if (lVar1 != 0xa0) {
      uVar2 = 0;
      goto LAB_1068076d4;
    }
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfba180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237940();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  uVar2 = 1;
LAB_1068076d4:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106807740; end: 10680785b; -[SCActiveUserNavigationWorkflow _handleNavigateToChatForNotification:isInAppNotification:canNavigateToNotification:] */

void FUN_106807740(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  uStack_4f = param_5;
  func_0x00010bf6ec20(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10680785c; end: 1068078a7;  */

void FUN_10680785c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068078a8; end: 10680795b; -[SCActiveUserNavigationWorkflow _notificationsHandledByCommunitySnapNotificationHandling:isInAppNotification:canNavigateToNotification:] */

undefined8
FUN_1068078a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x2b) {
    lVar1 = param_3;
    func_0x00010bf43000();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if ((lVar2 != 0) && (lVar1 = param_3, func_0x00010c26a060(), lVar1 == 2)) {
      func_0x00010be2caa0(param_1,param_2,param_3,param_4,param_5);
      uVar3 = 1;
      goto LAB_10680793c;
    }
  }
  uVar3 = 0;
LAB_10680793c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10680795c; end: 106807ab3; -[SCActiveUserNavigationWorkflow _handledMemoriesNotification:] */

void FUN_10680795c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238540();
  }
  else {
    uVar2 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ce548;
    func_0x00010c271d60(PTR_PTR_1126ce548);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238560(param_1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    param_1 = uVar2;
  }
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106807ab4; end: 106807d23; -[SCActiveUserNavigationWorkflow _createMapDestinationForPlaceNotification:] */

void FUN_106807ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar1;
  FUN_106877864();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0 || lVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010c0dff20(lVar3,param_3,&PTR____CFConstantStringClassReference_110e62fb8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dff20(lVar3,param_3,&PTR____CFConstantStringClassReference_110e62fd8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf44740(lVar1,param_3,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf44740(lVar4,param_3,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bfb1920(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar8 = lVar5;
    uVar10 = param_1;
    func_0x00010c089820(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _CLLocationCoordinate2DMake(param_1,uVar10);
    uVar11 = param_1;
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = lVar6;
    func_0x00010bfb1920(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar8 = lVar6;
    uVar12 = uVar11;
    func_0x00010c089820(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _CLLocationCoordinate2DMake(uVar11,uVar12);
    _objc_release(lVar8);
    _objc_release(lVar7);
    puVar9 = PTR_PTR_1126b5c58;
    func_0x00010c0fd700(param_1,uVar10,uVar11,uVar12,PTR_PTR_1126b5c58,param_3,0,lVar2,
                        &PTR____CFConstantStringClassReference_110e60998,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106807d24; end: 106807e33; -[SCActiveUserNavigationWorkflow _createMapDestinationForMapNotification:] */

void FUN_106807d24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  puVar3 = PTR_PTR_1126b5c58;
  if (lVar1 == 0xe1) {
    lVar2 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267300(puVar3,param_2,lVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126b5c58;
      func_0x00010bfb92a0(PTR_PTR_1126b5c58,param_2,lVar2,0,0,5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106807e34; end: 106807e9b; -[SCActiveUserNavigationWorkflow _getSourcePageContextForMapNotification:] */

undefined8 FUN_106807e34(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c11c420();
  if (param_3 < 0xca) {
    if (param_3 == 100) {
      return 4;
    }
    if (param_3 == 0x66) {
      return 5;
    }
    if (param_3 == 0xb8) {
      return 1;
    }
  }
  else if (param_3 - 0xcaU < 2) {
    return 3;
  }
  return 0;
}



/* Entry: 106807e9c; end: 106807e9f; -[SCActiveUserNavigationWorkflow userDidDismissProfile] */

void FUN_106807e9c(void)

{
  return;
}



/* Entry: 106807ea0; end: 106807ecf; -[SCActiveUserNavigationWorkflow searchWorkflowDidEnd] */

void FUN_106807ea0(undefined8 param_1)

{
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106807ed0; end: 106807ee7; -[SCActiveUserNavigationWorkflow userSession] */

void FUN_106807ed0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106807ee8; end: 106807eef; -[SCActiveUserNavigationWorkflow navigationState] */

undefined8 FUN_106807ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106807ef0; end: 106807ef7; -[SCActiveUserNavigationWorkflow currentPageTracker] */

undefined8 FUN_106807ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106807ef8; end: 106807eff; -[SCActiveUserNavigationWorkflow grapheneRegistry] */

undefined8 FUN_106807ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106807f00; end: 106807f07; -[SCActiveUserNavigationWorkflow hasPreparedNavForForeground] */

undefined1 FUN_106807f00(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb9);
}



/* Entry: 106807f08; end: 106807f1f; -[SCActiveUserNavigationWorkflow lensUnlocker] */

void FUN_106807f08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106807f20; end: 106807f27; -[SCActiveUserNavigationWorkflow legacyCurrentConversationId] */

undefined8 FUN_106807f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106807f28; end: 106807f57; -[SCActiveUserNavigationWorkflow setLegacyCurrentConversationId:] */

void FUN_106807f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106807f58; end: 106807f5f; -[SCActiveUserNavigationWorkflow permissionRequestService] */

undefined8 FUN_106807f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106807f60; end: 106807f67; -[SCActiveUserNavigationWorkflow userTrackedLogger] */

undefined8 FUN_106807f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106807f68; end: 106807f6f; -[SCActiveUserNavigationWorkflow legacyCurrentConversationDeepLinkURL] */

undefined8 FUN_106807f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 106807f70; end: 106807f9f; -[SCActiveUserNavigationWorkflow setLegacyCurrentConversationDeepLinkURL:] */

void FUN_106807f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106807fa0; end: 106807fa7; -[SCActiveUserNavigationWorkflow legacyCurrentConversationSourceType] */

undefined8 FUN_106807fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 106807fa8; end: 106807faf; -[SCActiveUserNavigationWorkflow legacyCurrentConversationEntryEvent] */

undefined8 FUN_106807fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 106807fb0; end: 106807fc7; -[SCActiveUserNavigationWorkflow talkNotificationsHandler] */

void FUN_106807fb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106807fc8; end: 106807fcf; -[SCActiveUserNavigationWorkflow circumstanceEngine] */

undefined8 FUN_106807fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106807fd0; end: 106807fd7; -[SCActiveUserNavigationWorkflow storiesConfigProvider] */

undefined8 FUN_106807fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 106807fd8; end: 106807fdf; -[SCActiveUserNavigationWorkflow plusAppStartServices] */

undefined8 FUN_106807fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106807fe0; end: 106807fe7; -[SCActiveUserNavigationWorkflow mapNotificationService] */

undefined8 FUN_106807fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 106807fe8; end: 106808017; -[SCActiveUserNavigationWorkflow setMapNotificationService:] */

void FUN_106807fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106808018; end: 10680801f; -[SCActiveUserNavigationWorkflow captureDeviceManager] */

undefined8 FUN_106808018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 106808020; end: 106808027; -[SCActiveUserNavigationWorkflow addFriendSheetScopeExposer] */

undefined8 FUN_106808020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 106808028; end: 106808057; -[SCActiveUserNavigationWorkflow setAddFriendSheetScopeExposer:] */

void FUN_106808028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106808058; end: 10680805f; -[SCActiveUserNavigationWorkflow addFriendSheetScopeServices] */

undefined8 FUN_106808058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 106808060; end: 10680808f; -[SCActiveUserNavigationWorkflow setAddFriendSheetScopeServices:] */

void FUN_106808060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106808090; end: 106808097; -[SCActiveUserNavigationWorkflow featureStartupEventBus] */

undefined8 FUN_106808090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106808098; end: 10680809f; -[SCActiveUserNavigationWorkflow pageLauncher] */

undefined8 FUN_106808098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 1068080a0; end: 1068080a7; -[SCActiveUserNavigationWorkflow contentPostSendUpsellScopeExposer] */

undefined8 FUN_1068080a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 1068080a8; end: 1068080d7; -[SCActiveUserNavigationWorkflow setContentPostSendUpsellScopeExposer:] */

void FUN_1068080a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068080d8; end: 10680828f; -[SCActiveUserNavigationWorkflow .cxx_destruct] */

void FUN_1068080d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106808290; end: 106808293; -[SCActiveUserNavigationWorkflow leftCameraBackButtonPressed] */

void FUN_106808290(void)

{
  return;
}



/* Entry: 106808294; end: 1068082a7; -[SCActiveUserNavigationWorkflow cameraDismissRequested:] */

void FUN_106808294(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068082a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}


