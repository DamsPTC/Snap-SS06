/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051353cc; end: 1051353f3;  */

void FUN_1051353cc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051353d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1051353f4; end: 10513549f; -[SCStoryQuickPostWorkflow _postStoryActionControllerWithAddAction:handler:] */

void FUN_1051353f4(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    uVar3 = 4;
    func_0x000108ede780();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 3;
    func_0x000108ede618();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126af180;
  func_0x00010beef320(PTR_PTR_1126af180,param_2,uVar1,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c160fc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e2b6f8);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051354a0; end: 1051356eb; -[SCStoryQuickPostWorkflow _postStoryWarningWithTitle:addAction:cancelAction:] */

void FUN_1051354a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be38800(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aac0();
  _objc_release(uVar1);
  func_0x00010be1ec00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c235c40(puVar2);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_2);
  func_0x00010bf6d680(0x402e000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2717c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c26c280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf6e520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c19e480(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 1051356ec; end: 1051357db; -[SCStoryQuickPostWorkflow _showOptionsForStoryPost] */

void FUN_1051356ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010beb5f20();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be768c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be768c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000108ede660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be76920(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPostStorySelection_11257cf40);
  return;
}



/* Entry: 1051357dc; end: 10513581f;  */

void FUN_1051357dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190760();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentPostStorySelection_11257cf40);
  return;
}



/* Entry: 105135820; end: 10513587b; -[SCStoryQuickPostWorkflow _presentPostStorySelection] */

void FUN_105135820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be64fc0(param_1,param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar1);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513587c; end: 1051358b3; -[SCStoryQuickPostWorkflow _postStoryDirectlyOnlyToMyStory] */

void FUN_10513587c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be64fc0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be764d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__postDirectlyToMyStory_withBusin_11257b2d0,1,0,0,0);
  return;
}



/* Entry: 1051358b4; end: 10513592b; -[SCStoryQuickPostWorkflow _notifyRouteDecision:] */

void FUN_1051358b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10513592c; end: 105135a43; -[SCStoryQuickPostWorkflow _postDirectlyToMyStory:withBusinessProfiles:withOurStory:withMobStories:] */

void FUN_10513592c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010beb4320();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf643e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c11e600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    lVar4 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c104820();
    _objc_release(lVar4);
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105135a44; end: 105135a8f; -[SCStoryQuickPostWorkflow _shouldInterceptSendingWithBusinessProfiles:] */

undefined8 FUN_105135a44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb2a40();
  if ((int)param_1 != 0) {
    uVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar1);
  }
  return param_1;
}



/* Entry: 105135a90; end: 105135bcb;  */

undefined * FUN_105135a90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar5 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107e480d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107e48298();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107e482b0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c235c40(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar1 = puVar5 + 0x60;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar2 & 1) == 0) {
LAB_105135c70:
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar5 + 0x60;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x00010c11e640();
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(puVar2);
      goto LAB_105135c70;
    }
    lVar7 = *(long *)(puVar5 + 0x10);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (lVar7 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_105135c7c;
    }
    puVar1 = puVar6;
    func_0x00010c0b8600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(puVar5 + 0x10);
    func_0x000107e32a18(puVar5,puVar1);
  }
  _objc_release(puVar1);
LAB_105135c7c:
  _objc_release(puVar6);
  return puVar5;
}



/* Entry: 105135bcc; end: 105135ca3; -[SCStoryQuickPostWorkflow _shouldBlockBrandAccountMusicSnapWithBusinessProfiles:] */

undefined8 FUN_105135bcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
LAB_105135c70:
    uVar4 = 0;
  }
  else {
    uVar2 = param_1 + 0x60;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c11e640();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      goto LAB_105135c70;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar5 == 0) {
      uVar4 = 0;
      goto LAB_105135c7c;
    }
    uVar1 = param_3;
    func_0x00010c0b8600(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107e32a18(uVar4,uVar1);
  }
  _objc_release(uVar1);
LAB_105135c7c:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105135ca4; end: 105135cab;  */

void FUN_105135ca4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 105135cac; end: 105135caf; -[SCStoryQuickPostWorkflow _onDidDismissQuickPost] */

void FUN_105135cac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissStoryQuickPostView_11255e768);
  return;
}



/* Entry: 105135cb0; end: 105135ce3; -[SCStoryQuickPostWorkflow _dismissStoryQuickPostView] */

void FUN_105135cb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105135ce4; end: 105135d4b; -[SCStoryQuickPostWorkflow _incrementSavedStoryEducationCount] */

void FUN_105135ce4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14bb80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105135d4c; end: 105135d8f; -[SCStoryQuickPostWorkflow _shouldShowEducationDialog] */

bool FUN_105135d4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c14bb80();
  _objc_release(lVar1);
  return lVar2 < 1;
}



/* Entry: 105135d90; end: 105135da7; -[SCStoryQuickPostWorkflow _hasUserConfirmedPreviouslyToPostDirect:] */

uint FUN_105135d90(uint param_1)

{
  func_0x00010beb5f20();
  return param_1 ^ 1;
}



/* Entry: 105135da8; end: 105135dd7; -[SCStoryQuickPostWorkflow _getEducationDialogTextWithIsStoryPrivacySettingEveryone:] */

void FUN_105135da8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x000108edef48();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edef30();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105135dd8; end: 105135def; -[SCStoryQuickPostWorkflow quickPostWorkFlowDelegate] */

void FUN_105135dd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105135df0; end: 105135dfb; -[SCStoryQuickPostWorkflow setQuickPostWorkFlowDelegate:] */

void FUN_105135df0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105135dfc; end: 105135e13; -[SCStoryQuickPostWorkflow quickPostWorkFlowDataSource] */

void FUN_105135dfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105135e14; end: 105135e1f; -[SCStoryQuickPostWorkflow setQuickPostWorkFlowDataSource:] */

void FUN_105135e14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105135e20; end: 105135ebf; -[SCStoryQuickPostWorkflow .cxx_destruct] */

void FUN_105135e20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105135ec0; end: 105135f33; -[SCGrapheneCreatePostPresentMetric2 init] */

undefined1 * FUN_105135ec0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e65c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105135f34; end: 105135fab;  */

void FUN_105135f34(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11086abf8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105135fac; end: 10513611f;  */

char * FUN_105135fac(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11086ac48,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105136120;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11086ac98,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_105136294;
  puStack_128 = PTR_PTR_1126e65d0;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 105136120; end: 105136293;  */

char * FUN_105136120(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
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
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11086ac98,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_105136294;
  puStack_a8 = PTR_PTR_1126e65d0;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105136294; end: 105136307; -[SCGrapheneExternalSendToMetric2 init] */

undefined1 * FUN_105136294(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e65d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105136308; end: 10513647b;  */

/* WARNING: Removing unreachable block (ram,0x0001051366c0) */

void FUN_105136308(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
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
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar5 = acStack_140;
  pcStack_88 = FUN_10513647c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar7 = pcVar6;
  pcVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_108,pcVar2);
    unaff_x24 = auStack_f0;
    pcVar2 = "true";
    if ((int)param_4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
    pcVar4 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11086ad58,acStack_140,param_5);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar10 = 0;
    pcVar7 = pcVar5;
    pcVar8 = param_5;
    do {
      if ((&cStack_d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      param_4 = acStack_140;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    puStack_170 = auStack_120;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puStack_170);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_148 = FUN_1051366f0;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar4;
    puStack_180 = unaff_x24;
    pcStack_178 = param_4;
    pcStack_168 = pcVar2;
    pcStack_160 = pcVar6;
    pcStack_158 = pcVar1;
    ppuStack_150 = &puStack_90;
    _objc_retain(pcVar4);
    _objc_retain(pcVar7);
    if (pcVar3 != (char *)0x0) {
      plVar9 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_1b8,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1a0,pcVar1);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      pcVar5 = "";
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11086ada8,&uStack_1d8,pcVar8);
      puStack_1c0 = &uStack_1d8;
      func_0x00010007e5dc(&puStack_1c0);
      lVar10 = 0;
      do {
        if ((&cStack_189)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_1a1 < '\0') {
        __ZdlPv(auStack_1b8[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar4);
      __Unwind_Resume();
      puStack_208 = (undefined1 *)&uStack_220;
      pcStack_1e8 = FUN_105136920;
      if (pcVar1 != (char *)0x0) {
        uStack_220 = 0;
        uStack_218 = 0;
        uStack_210 = 0;
        pcStack_200 = pcVar7;
        pcStack_1f8 = pcVar4;
        pppuStack_1f0 = &ppuStack_150;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_11086adf8,&uStack_220,pcVar5);
        func_0x00010007e5dc(&puStack_208);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10513647c; end: 1051366ef;  */

/* WARNING: Removing unreachable block (ram,0x0001051366c0) */

void FUN_10513647c(long param_1,char *param_2,char *param_3,char *param_4,undefined1 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = auStack_70;
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11086ad58,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    pcVar5 = pcVar2;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      param_4 = acStack_c0;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_f0 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puStack_f0);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1051366f0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  pcStack_e8 = pcVar2;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_120,pcVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11086ada8,&uStack_158,puVar6);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar7 = 0;
    do {
      if ((&cStack_109)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    puStack_188 = (undefined1 *)&uStack_1a0;
    pcStack_168 = FUN_105136920;
    if (pcVar2 != (char *)0x0) {
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      pcStack_180 = pcVar5;
      pcStack_178 = pcVar1;
      ppuStack_170 = &puStack_d0;
      (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                (*(long **)(pcVar2 + 8),&UNK_11086adf8,&uStack_1a0,pcVar4);
      func_0x00010007e5dc(&puStack_188);
    }
    return;
  }
  return;
}



/* Entry: 1051366f0; end: 10513691f;  */

void FUN_1051366f0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11086ada8,&uStack_98,param_4);
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
  pcVar2 = param_2;
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
  pcStack_a8 = FUN_105136920;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_11086adf8,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105136920; end: 105136997;  */

void FUN_105136920(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11086adf8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105136998; end: 1051369fb; +[SCExternalSendToMedia imageWithFileUrl:] */

void FUN_105136998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5180;
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



/* Entry: 1051369fc; end: 105136a67; +[SCExternalSendToMedia videoWithFileUrl:] */

void FUN_1051369fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5180;
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



/* Entry: 105136a68; end: 105136c07; -[SCExternalSendToMedia initWithCoder:] */

undefined8 * FUN_105136a68(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126e65d8;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_105136b94;
      uVar5 = 1;
      lVar6 = 0x18;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_105136b94:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 105136c08; end: 105136c2b; -[SCExternalSendToMedia copyWithZone:] */

undefined8 FUN_105136c08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105136c2c; end: 105136cbb; -[SCExternalSendToMedia encodeWithCoder:] */

void FUN_105136c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc6f98;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6fb8;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_105136ca8;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc6fd8;
    lVar2 = 0x18;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6ff8;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_105136ca8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105136cbc; end: 105136d33; -[SCExternalSendToMedia hash] */

void FUN_105136cbc(long param_1)

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
  puStack_68 = PTR_PTR_1126e65d8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105136d34; end: 105136d77; -[SCExternalSendToMedia internalInit] */

void FUN_105136d34(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e65d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105136d78; end: 105136e2f; -[SCExternalSendToMedia isEqual:] */

long FUN_105136d78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105136e08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105136e14;
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
          goto LAB_105136e14;
        }
        goto LAB_105136e08;
      }
    }
    lVar3 = 0;
  }
LAB_105136e14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105136e30; end: 105136eb3; -[SCExternalSendToMedia matchImage:video:] */

void FUN_105136e30(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_105136e98;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_105136e98;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_105136e98:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105136eb4; end: 105136ee3; -[SCExternalSendToMedia .cxx_destruct] */

void FUN_105136eb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105136ee4; end: 105136f73; +[SCExternalSendToContent mediaWithMedia:companionText:] */

void FUN_105136ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105136f74; end: 10513700b; +[SCExternalSendToContent mediasWithMedias:companionText:] */

void FUN_105136f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10513700c; end: 105137077; +[SCExternalSendToContent textWithText:] */

void FUN_10513700c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105137078; end: 1051370e3; +[SCExternalSendToContent urlWithUrl:] */

void FUN_105137078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051370e4; end: 105137317; -[SCExternalSendToContent initWithCoder:] */

undefined8 * FUN_1051370e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_1126e65e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 1;
        lVar6 = 0x28;
        lVar7 = 0x20;
        goto LAB_1051371c0;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_1051372a4;
        uVar5 = 3;
        lVar6 = 0x38;
      }
      else {
        uVar5 = 2;
        lVar6 = 0x30;
      }
    }
    else {
      uVar5 = 0;
      lVar6 = 0x18;
      lVar7 = 0x10;
LAB_1051371c0:
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
      *(ulong *)((long)puVar1 + lVar7) = uVar2;
      _objc_release(uVar4);
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_1051372a4:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 105137318; end: 10513733b; -[SCExternalSendToContent copyWithZone:] */

undefined8 FUN_105137318(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10513733c; end: 10513743b; -[SCExternalSendToContent encodeWithCoder:] */

void FUN_10513733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                          &PTR____CFConstantStringClassReference_110dc7038);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc7018;
      lVar2 = 0x18;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc7058;
    }
    else {
      if (lVar2 != 1) goto LAB_105137428;
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                          &PTR____CFConstantStringClassReference_110dc7098);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc7078;
      lVar2 = 0x28;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc70b8;
    }
  }
  else if (lVar2 == 2) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc70d8;
    lVar2 = 0x30;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc70f8;
  }
  else {
    if (lVar2 != 3) goto LAB_105137428;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc7118;
    lVar2 = 0x38;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc7138;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_105137428:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10513743c; end: 1051374e3; -[SCExternalSendToContent hash] */

void FUN_10513743c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126e65e0;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051374e4; end: 105137527; -[SCExternalSendToContent internalInit] */

void FUN_1051374e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e65e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105137528; end: 10513763f; -[SCExternalSendToContent isEqual:] */

long FUN_105137528(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105137618:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105137624;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_105137624;
                }
                goto LAB_105137618;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105137624:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105137640; end: 105137733; -[SCExternalSendToContent matchMedia:medias:url:text:] */

void FUN_105137640(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_105137704;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if ((lVar3 != 1) || (param_4 == 0)) goto LAB_105137704;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
  else {
    if (lVar3 == 2) {
      if (param_5 == 0) goto LAB_105137704;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    else {
      if ((lVar3 != 3) || (param_6 == 0)) goto LAB_105137704;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    (*pcVar4)(lVar3,uVar1);
  }
LAB_105137704:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105137734; end: 105137793; -[SCExternalSendToContent .cxx_destruct] */

void FUN_105137734(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105137794; end: 105137843; -[SCExternalSendToDataModel initWithCoder:] */

undefined1 * FUN_105137794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e65e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105137844; end: 1051378ef; -[SCExternalSendToDataModel initWithContent:preselectedId:] */

undefined1 *
FUN_105137844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e65e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051378f0; end: 105137913; -[SCExternalSendToDataModel copyWithZone:] */

undefined8 FUN_1051378f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105137914; end: 105137973; -[SCExternalSendToDataModel encodeWithCoder:] */

void FUN_105137914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dc7158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dc7178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105137974; end: 1051379e7; -[SCExternalSendToDataModel hash] */

undefined8 * FUN_105137974(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105137a68:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105137a74;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105137a74;
        }
        goto LAB_105137a68;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105137a74:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1051379e8; end: 105137a8f; -[SCExternalSendToDataModel isEqual:] */

long FUN_1051379e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105137a68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105137a74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105137a74;
        }
        goto LAB_105137a68;
      }
    }
    lVar3 = 0;
  }
LAB_105137a74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105137a90; end: 105137a97; -[SCExternalSendToDataModel content] */

undefined8 FUN_105137a90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105137a98; end: 105137a9f; -[SCExternalSendToDataModel preselectedId] */

undefined8 FUN_105137a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105137aa0; end: 105137acf; -[SCExternalSendToDataModel .cxx_destruct] */

void FUN_105137aa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105137ad0; end: 105137e8f; -[SCLegacySendToScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105137ad0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  
  lVar1 = param_1 + _DAT_11271d004;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c15aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b5190;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271d008;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271d00c;
  _objc_loadWeakRetained();
  uVar31 = *(undefined8 *)(param_1 + _DAT_11271d010);
  lVar6 = param_1 + _DAT_11271d014;
  _objc_loadWeakRetained();
  lVar32 = (long)_DAT_11271d018;
  lVar7 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c244b20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271d01c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar15 = lVar32;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_11271d020;
  lVar16 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar18 = lVar33;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271d024;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271d028;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c11a940();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271d02c;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11271d030;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c0ba020();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271d034;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11271d038;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf46900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019400(puVar3,param_2,lVar4,lVar5,uVar31,lVar6,lVar8,lVar10,lVar12,lVar14,lVar15,
                      lVar17,lVar18,lVar20,lVar22,lVar24,lVar2,lVar26,lVar28,lVar30);
  lVar34 = (long)_DAT_11271d03c;
  uVar31 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar3;
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar33);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar32);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar34));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105137e90; end: 105137edb; -[SCLegacySendToScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105137e90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010c0da5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11271d040;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c117730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar3),PTR_s_progress_1126237e8);
  return;
}



/* Entry: 105137edc; end: 10513801f; -[SCLegacySendToScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105137edc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d014);
  _objc_destroyWeak(param_1 + _DAT_11271d038);
  _objc_destroyWeak(param_1 + _DAT_11271d034);
  _objc_destroyWeak(param_1 + _DAT_11271d004);
  _objc_storeStrong(param_1 + _DAT_11271d010,0);
  _objc_destroyWeak(param_1 + _DAT_11271d030);
  _objc_destroyWeak(param_1 + _DAT_11271d02c);
  _objc_destroyWeak(param_1 + _DAT_11271d058);
  _objc_destroyWeak(param_1 + _DAT_11271d054);
  _objc_destroyWeak(param_1 + _DAT_11271d050);
  _objc_destroyWeak(param_1 + _DAT_11271d04c);
  _objc_destroyWeak(param_1 + _DAT_11271d048);
  _objc_destroyWeak(param_1 + _DAT_11271d020);
  _objc_destroyWeak(param_1 + _DAT_11271d028);
  _objc_destroyWeak(param_1 + _DAT_11271d024);
  _objc_destroyWeak(param_1 + _DAT_11271d01c);
  _objc_destroyWeak(param_1 + _DAT_11271d018);
  _objc_destroyWeak(param_1 + _DAT_11271d00c);
  _objc_destroyWeak(param_1 + _DAT_11271d008);
  _objc_destroyWeak(param_1 + _DAT_11271d044);
  _objc_storeStrong(param_1 + _DAT_11271d040,0);
  _objc_storeStrong(param_1 + _DAT_11271d05c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d03c,0);
  return;
}



/* Entry: 105138020; end: 1051380fb; -[SCSendToContactsSectionDataSourceImpl initWithNonSnapchattersObservableRepository:contactPhotosService:enableSelectableContacts:circumstanceEngine:] */

undefined1 *
FUN_105138020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e65f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051380fc; end: 105138207; -[SCSendToContactsSectionDataSourceImpl snapchattersContactNonSnapchatterObservableForSectionIdentifier:query:] */

void FUN_1051380fc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf49e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bde7260(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105138208;
  puStack_58 = &UNK_11086aeb0;
  uVar5 = uVar2;
  uStack_50 = uVar4;
  uStack_48 = uVar1;
  func_0x00010bf41860(uVar2,param_2,param_1,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105138208; end: 105138223;  */

undefined1 * FUN_105138208(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 unaff_x22;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
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
  
  cVar1 = *(char *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar15 = 1;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_178 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar12);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_188 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar12;
  puStack_190 = puVar13;
  if (cVar1 == '\0') {
    uStack_198 = 0;
  }
  else {
    func_0x000108c7c87c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uVar2;
    _objc_release(uVar12);
  }
  lVar14 = lStack_188;
  uVar12 = 0;
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
  lStack_160 = lVar14;
  if (lVar14 != 0) {
    lVar14 = *plStack_140;
    uStack_180 = *(undefined8 *)PTR__NSLocaleCountryCode_11034aa58;
    uStack_19c = 1;
    lStack_1a8 = lVar14;
    do {
      lVar17 = 0;
      do {
        if (*plStack_140 != lVar14) {
          _objc_enumerationMutation(lStack_188);
        }
        puVar13 = PTR_PTR_1126aed98;
        lVar18 = *(long *)(lStack_148 + lVar17 * 8);
        if (cVar1 == '\0') {
          uVar16 = 0;
        }
        else {
          lVar3 = lVar18;
          func_0x00010c0faf60(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfc9820(puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          uVar2 = uStack_198;
          func_0x00010bf4b900();
          _objc_release(puVar13);
          uVar16 = (uint)uVar2 ^ 1;
        }
        lVar3 = lVar18;
        func_0x00010c0faf60();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        puVar13 = PTR_PTR_1126aed98;
        if (lVar4 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        _objc_release(lVar3);
        _objc_release(lVar3);
        puVar5 = puVar13;
        func_0x00010c08fa60();
        if (puVar5 == (undefined *)0x0) {
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
        if ((uVar15 & uVar16 & 1) == 0) {
          puVar5 = PTR_PTR_1126bb3f0;
          _objc_alloc();
          lVar3 = lVar18;
          puStack_168 = puVar5;
          func_0x00010c0faf60(lVar18);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar18;
          uStack_158 = unaff_x22;
          func_0x00010bf85d80(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0891c0(lVar18);
          lVar14 = lVar18;
          uVar2 = uVar12;
          func_0x00010c089f40();
          uStack_16c = (undefined4)lVar14;
          func_0x00010c089f60(lVar18);
          uVar19 = uVar2;
          func_0x00010c150c20(lVar18);
          lVar7 = lVar18;
          func_0x00010c0fb380();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar18;
          func_0x00010bfded40(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c260ca0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puStack_168;
          lStack_1c0 = lVar18;
          func_0x00010c0359a0(uVar12,uVar2,uVar19,puStack_168);
          _objc_release(lVar18);
          lVar14 = lStack_1a8;
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar4);
          unaff_x22 = uStack_158;
          _objc_release(lVar3);
          func_0x00010befa120(puStack_190);
          uVar15 = uStack_19c;
          _objc_release(puVar5);
        }
        _objc_release(puVar13);
        _objc_release(unaff_x22);
        lVar17 = lVar17 + 1;
      } while (lStack_160 != lVar17);
      ppuVar10 = &puStack_150;
      puVar11 = auStack_110;
      lVar17 = lStack_188;
      func_0x00010bf52a60();
      lStack_160 = lVar17;
    } while (lVar17 != 0);
  }
  _objc_release(lStack_188);
  puVar13 = puStack_190;
  _objc_retain(puStack_190);
  func_0x00010bf529e0();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (puVar13 != (undefined *)0x0) {
    ppuVar10 = &PTR___NSConcreteGlobalBlock_110927bf0;
    puVar5 = puStack_190;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = puStack_190;
  uVar12 = uStack_1b0;
  _objc_release(puStack_190);
  _objc_release(uStack_198);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uStack_178);
  lVar14 = lStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_200;
  puStack_1e8 = puVar13;
  uStack_1e0 = uVar12;
  puStack_1c8 = &UNK_1064e5a40;
  uStack_1f0 = unaff_x22;
  puStack_1d8 = puVar5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  _objc_retain(puVar11);
  puStack_1f8 = PTR_PTR_1126f1858;
  lStack_200 = lVar14;
  _objc_msgSendSuper2(&lStack_200,PTR_s_init_1125d9248);
  if (plVar9 != (long *)0x0) {
    _objc_retain(puVar11);
    uVar12 = *(undefined8 *)((long)plVar9 + 8);
    *(undefined1 **)((long)plVar9 + 8) = puVar11;
    _objc_release(uVar12);
    _objc_retain(ppuVar10);
    uVar12 = *(undefined8 *)((long)plVar9 + 0x10);
    *(undefined ***)((long)plVar9 + 0x10) = ppuVar10;
    _objc_release(uVar12);
  }
  _objc_release(puVar11);
  _objc_release(ppuVar10);
  return (undefined1 *)plVar9;
}



/* Entry: 105138224; end: 1051382d3; -[SCSendToContactsSectionDataSourceImpl _contactPhotosObservable] */

void FUN_105138224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b160();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c2519e0(puVar1,param_2,PTR____NSDictionary0__struct_11034ab58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051382d4; end: 10513838f;  */

void FUN_1051382d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105138390;
  puStack_50 = &UNK_110848ba8;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_3;
  uStack_40 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 105138390; end: 1051383ab;  */

void FUN_105138390(long param_1)

{
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 1051383ac; end: 1051383e7; -[SCSendToContactsSectionDataSourceImpl .cxx_destruct] */

void FUN_1051383ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051383e8; end: 1051385f7; -[SCSendToContactsSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051383e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = param_1 + _DAT_11271d070;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271d074;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = param_1 + _DAT_11271d078;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2312a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126b5198;
  _objc_alloc(PTR_PTR_1126b5198);
  lVar1 = param_1 + _DAT_11271d07c;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c0db000();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271d080;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271d084;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf4a300();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11271d088;
  lVar13 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c130900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fb00(puVar7,param_2,lVar8,lVar10,lVar12,uVar6 & 0xffffffff,lVar2,lVar3,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  param_1 = param_1 + lVar15;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051385f8; end: 10513866b; -[SCSendToContactsSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051385f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d084);
  _objc_destroyWeak(param_1 + _DAT_11271d074);
  _objc_destroyWeak(param_1 + _DAT_11271d070);
  _objc_destroyWeak(param_1 + _DAT_11271d080);
  _objc_destroyWeak(param_1 + _DAT_11271d07c);
  _objc_destroyWeak(param_1 + _DAT_11271d088);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d078);
  return;
}



/* Entry: 10513866c; end: 1051387c7; -[SCSendToContactsSectionExtension initWithNonSnapchattersObservableRepository:imageDownloader:contactPhotosService:enableSelectableContacts:circumstanceEngine:sendToExperimentConfiguration:renderingTracker:] */

undefined1 *
FUN_10513866c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e65f8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051387c8; end: 105138837; -[SCSendToContactsSectionExtension sectionIdentifiers] */

void FUN_1051387c8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12df8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b51a0);
    func_0x00010c02fb00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105138838; end: 105138883; -[SCSendToContactsSectionExtension sectionCreator] */

void FUN_105138838(void)

{
  _objc_alloc(PTR_PTR_1126b51a0);
  func_0x00010c02fb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105138884; end: 1051388b3; -[SCSendToContactsSectionExtension sectionDescriptor] */

void FUN_105138884(void)

{
  _objc_alloc(PTR_PTR_1126b51a8);
  func_0x00010c044380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051388b4; end: 1051388bb; -[SCSendToContactsSectionExtension sectionLoggingParser] */

undefined8 FUN_1051388b4(void)

{
  return 0;
}



/* Entry: 1051388bc; end: 10513891b; -[SCSendToContactsSectionExtension .cxx_destruct] */

void FUN_1051388bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10513891c; end: 105138a77; -[SCSendToContactsSectionCreatorImpl initWithNonSnapchattersObservableRepository:imageDownloader:contactPhotosService:enableSelectableContacts:circumstanceEngine:sendToExperimentConfiguration:renderingTracker:] */

undefined1 *
FUN_10513891c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6600;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105138a78; end: 105138c57; -[SCSendToContactsSectionCreatorImpl sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_105138a78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105138c58;
  puStack_88 = &UNK_11086af10;
  uStack_80 = uVar5;
  _objc_retain(uVar5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  puVar2 = PTR_PTR_1126ae720;
  uStack_a8 = *(undefined1 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x105138c88;
  puStack_c8 = &UNK_11086af40;
  uStack_c0 = uVar6;
  uStack_b8 = uVar7;
  uStack_b0 = uVar8;
  _objc_retain(uVar6);
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b51c0;
  _objc_alloc(PTR_PTR_1126b51c0);
  uVar4 = param_4;
  func_0x00010c15ab20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bff0240(puVar3,param_2,param_3,puVar2,uVar4,*(undefined8 *)(param_1 + 0x10),puVar1,
                      *(undefined1 *)(param_1 + 0x20),uVar8,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uStack_c0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105138c58; end: 105138cbf;  */

void FUN_105138c58(void)

{
  _objc_alloc(PTR_PTR_1126b51b0);
  func_0x00010c044380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105138cc0; end: 105138d1f; -[SCSendToContactsSectionCreatorImpl .cxx_destruct] */

void FUN_105138cc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105138d20; end: 105138d93; -[SCSendToContactsSectionDescriptor initWithSendToExperimentConfiguration:] */

undefined1 * FUN_105138d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6608;
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



/* Entry: 105138d94; end: 105138e8b; -[SCSendToContactsSectionDescriptor sectionDescriptorForQuery:] */

void FUN_105138d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad578;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad578,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar4;
  func_0x000106c9d38c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f12df8;
  uVar3 = param_3;
  func_0x00010c11da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000106c9c378(&PTR____CFConstantStringClassReference_110f12df8,uVar3,ppuVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105138e8c; end: 105138e97; -[SCSendToContactsSectionDescriptor .cxx_destruct] */

void FUN_105138e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105138e98; end: 105138f0b; -[SCSendToContactsSectionViewModelSourceImpl initWithSendToExperimentConfiguration:] */

undefined1 * FUN_105138e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6610;
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



/* Entry: 105138f0c; end: 105138f8f; -[SCSendToContactsSectionViewModelSourceImpl contactNonSnapchatterViewModelGeneratorForSectionIdentifier:] */

void FUN_105138f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105138f90;
  puStack_30 = &UNK_11086af70;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105138f90; end: 105138fc3;  */

/* WARNING: Removing unreachable block (ram,0x000105e54400) */
/* WARNING: Removing unreachable block (ram,0x000105e54404) */

void FUN_105138f90(long param_1,ulong param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puStack_f8;
  undefined *puStack_e0;
  undefined *puStack_d0;
  
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(&PTR____CFConstantStringClassReference_110f8a4d8);
  _objc_retain(uVar18);
  uVar2 = param_2;
  func_0x000105e5c428();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puStack_d0 = PTR_PTR_1126b53f0;
    func_0x00010bf811c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar21 = param_2;
    func_0x00010c070aa0();
    if ((uVar21 & 1) != 0) {
      puStack_e0 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x0;
      bVar1 = true;
      goto code_r0x000105e53f1c;
    }
    puStack_d0 = PTR_PTR_1126b53f0;
    func_0x00010c159140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(uVar2);
  _objc_retain(uVar18);
  puStack_e0 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b5650;
  _objc_retain(uVar2);
  _objc_retain(uVar18);
  _objc_alloc();
  func_0x00010c043e20();
  _objc_release(uVar2);
  _objc_release(uVar18);
  puVar4 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c01b460();
  _objc_release(puVar4);
  _objc_release(uVar18);
  _objc_release(uVar2);
  bVar1 = false;
code_r0x000105e53f1c:
  puVar3 = PTR_PTR_1126b52c0;
  _objc_alloc();
  _objc_retain(0);
  _objc_retain(param_2);
  uVar21 = param_2;
  func_0x00010c0fb380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar21 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c5270;
    _objc_alloc();
    uVar21 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25cf20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    puVar9 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010bf44700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar7;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    ppuVar11 = ppuVar10;
    func_0x00010bf529e0();
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar12 = ppuVar10;
      func_0x00010bf529e0();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar13 = ppuVar10;
      if (ppuVar12 == (undefined **)0x1) {
        func_0x00010bfb1920(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar13;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar13;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar10;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
        _objc_release(ppuVar12);
      }
      _objc_release(ppuVar13);
    }
    _objc_release(ppuVar10);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    uVar16 = param_2;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar16;
    func_0x00010c08fa60();
    uVar17 = uVar20;
    if (0x1f < uVar20) {
      uVar17 = 0x20;
    }
    if (uVar20 != 0) {
      uVar20 = 0;
      do {
        func_0x00010bf35920();
        uVar20 = uVar20 + 1;
      } while (uVar17 != uVar20);
    }
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053400(puVar5);
    _objc_release(puVar9);
    _objc_release(uVar16);
    _objc_release(ppuVar11);
    _objc_release(uVar21);
    puStack_f8 = PTR_PTR_1126b53d0;
    func_0x00010c064c40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar21 = param_2;
    func_0x00010c0fb380(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar4);
    _objc_release(uVar21);
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(0x4043000000000000,0x4043000000000000);
    _objc_retain(puVar9);
    puVar5 = puVar6;
    func_0x00010bfe91c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b53d8;
    _objc_alloc(PTR_PTR_1126b53d8);
    func_0x00010c01c3c0();
    puStack_f8 = PTR_PTR_1126b53d0;
    func_0x00010bfe98c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  uVar21 = param_2;
  _objc_retain(param_2);
  if (bVar1) {
    func_0x000105e545f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar21 = 0;
  }
  puVar4 = PTR_PTR_1126b53e0;
  _objc_alloc(PTR_PTR_1126b53e0);
  uVar17 = param_2;
  func_0x00010901c4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c00(puVar4);
  _objc_release(uVar17);
  puVar5 = PTR_PTR_1126b53e8;
  func_0x00010bf16660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar21);
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126b5678;
  _objc_alloc();
  func_0x00010c043e00();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0,puVar3);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puStack_f8);
  _objc_release(0);
  _objc_release(puStack_e0);
  _objc_release(puStack_d0);
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_release(&PTR____CFConstantStringClassReference_110f8a4d8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
               *(undefined8 *)(param_2 + 0x20),PTR_s_drawInRect__1125bfff0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105138fc4; end: 105138fcf; -[SCSendToContactsSectionViewModelSourceImpl .cxx_destruct] */

void FUN_105138fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105138fd0; end: 1051390ef; -[SCSendToPrevewSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105138fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271d0cc;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b51c8;
    _objc_alloc(PTR_PTR_1126b51c8);
    lVar1 = param_1 + _DAT_11271d0d0;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010c239cc0();
    func_0x00010c039900(puVar3,param_2,lVar2,lVar4,lVar5);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11271d0d4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051390f0; end: 105139133; -[SCSendToPrevewSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051390f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d0d4);
  _objc_destroyWeak(param_1 + _DAT_11271d0d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d0cc);
  return;
}



/* Entry: 105139134; end: 1051391df; -[SCSendToScopedPreviewSectionCreator initWithPreviewConfiguration:sendToExperimentConfiguration:showSendToTray:] */

undefined1 *
FUN_105139134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6618;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051391e0; end: 10513924b; -[SCSendToScopedPreviewSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_1051391e0(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126b51d0;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c0431e0();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10513924c; end: 10513927b; -[SCSendToScopedPreviewSectionCreator .cxx_destruct] */

void FUN_10513924c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10513927c; end: 105139327; -[SCSendToPreviewSectionExtension initWithPreviewConfiguration:sendToExperimentConfiguration:showSendToTray:] */

undefined1 *
FUN_10513927c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6620;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105139328; end: 105139397; -[SCSendToPreviewSectionExtension sectionIdentifiers] */

void FUN_105139328(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12c38;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b51d8);
    func_0x00010c039900();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


