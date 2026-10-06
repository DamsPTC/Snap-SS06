/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a353ac; end: 107a353d7; -[SCUnifiedProfilePlayStoryActionHandler modalPresentationOnCommentsTrayDidEnd] */

void FUN_107a353ac(long param_1)

{
  param_1 = param_1 + 0x120;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cfba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a353d8; end: 107a35403; -[SCUnifiedProfilePlayStoryActionHandler modalDismissalOnCommentsTrayDidEnd] */

void FUN_107a353d8(long param_1)

{
  param_1 = param_1 + 0x120;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cfa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a35404; end: 107a3544b; -[SCUnifiedProfilePlayStoryActionHandler impalaProfileDidComplete] */

void FUN_107a35404(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 200));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a3544c; end: 107a354f3; -[SCUnifiedProfilePlayStoryActionHandler impalaProfileNeedsRemoval] */

void FUN_107a3544c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a354f4; end: 107a35527;  */

void FUN_107a354f4(long param_1)

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



/* Entry: 107a35528; end: 107a3554b; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_107a35528(undefined8 param_1)

{
  func_0x00010c0eaf20();
                    /* WARNING: Could not recover jumptable at 0x00010bddf050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpContentProductPlaybackSc_1125555b0);
  return;
}



/* Entry: 107a3554c; end: 107a3554f; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_107a3554c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 107a35550; end: 107a35553; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_107a35550(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginPresentin_112618620);
  return;
}



/* Entry: 107a35554; end: 107a35557; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_107a35554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginDismissin_112618618);
  return;
}



/* Entry: 107a35558; end: 107a3555b; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_107a35558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ead70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenter_didBeginPlayingPl_112618570);
  return;
}



/* Entry: 107a3555c; end: 107a3555f; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_107a3555c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishPresentin_1126185b8);
  return;
}



/* Entry: 107a35560; end: 107a35563; -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidCancelDismissing:playbackScope:] */

void FUN_107a35560(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidCancelDismissin_112618590);
  return;
}



/* Entry: 107a35564; end: 107a3557b; -[SCUnifiedProfilePlayStoryActionHandler presentingViewController] */

void FUN_107a35564(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a3557c; end: 107a35587; -[SCUnifiedProfilePlayStoryActionHandler setPresentingViewController:] */

void FUN_107a3557c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x250,param_3);
  return;
}



/* Entry: 107a35588; end: 107a358ff; -[SCUnifiedProfilePlayStoryActionHandler .cxx_destruct] */

void FUN_107a35588(long param_1)

{
  _objc_destroyWeak(param_1 + 0x250);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
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
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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



/* Entry: 107a35900; end: 107a35cc7; -[SCUnifiedProfileStoriesUtilityActionHandler initWithUserSession:saveStoryScopeExposer:storyPrivacySettingsScopeExposer:storyPrivacySettingsScopeServices:circumstanceEngine:standardExternalContentShareScopeExposer:customStoriesOnboardingManager:myStoriesDataCoordinator:ourStoriesAttributionManager:customStoryCreationScopeServices:] */

undefined8 *
FUN_107a35900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126f9710;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar3 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar5);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  return puVar1;
}



/* Entry: 107a35cc8; end: 107a35cdf;  */

void FUN_107a35cc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf62250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoryCreationScopeLauncher_1125b6238);
  return;
}



/* Entry: 107a35ce0; end: 107a35d27;  */

void FUN_107a35ce0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a35d28; end: 107a35daf; -[SCUnifiedProfileStoriesUtilityActionHandler _createStandardExternalContentSharePresenterWithScopeExposer:] */

void FUN_107a35d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5fd0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0393a0(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110dc4a38,0,3,
                      param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a35db0; end: 107a3660f; -[SCUnifiedProfileStoriesUtilityActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_107a35db0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 auStack_c8 [5];
  undefined8 auStack_a0 [5];
  undefined8 auStack_78 [5];
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b11d0;
    _objc_opt_class(PTR_PTR_1126b11d0);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar2 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010c259cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010be99ea0(param_1);
    goto LAB_107a35e80;
  }
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar7 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar7 & 1) != 0) {
      pcVar10 = (code *)0x107a366dc;
      puVar9 = auStack_a0;
      goto LAB_107a35f44;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar7 & 1) != 0) {
      pcVar10 = (code *)0x107a36788;
      puVar9 = auStack_c8;
      goto LAB_107a35f44;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      uVar7 = uVar2;
      func_0x00010c259cc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b720(uVar2);
      _objc_release(uVar2);
      func_0x00010beb9f40(param_1);
LAB_107a35e80:
      _objc_release(uVar7);
LAB_107a35e84:
      bVar1 = true;
      goto LAB_107a36010;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      if (uVar2 == 0) {
LAB_107a362a8:
        bVar1 = true;
      }
      else {
        uVar8 = uVar7;
        func_0x00010c23f800();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c08fa60();
        _objc_release(uVar8);
        if (uVar4 == 0) goto LAB_107a362a8;
        lVar5 = *(long *)(param_1 + 0x60);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar5 != 0;
        if (lVar5 != 0) {
          func_0x00010c23f800(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13fa00(lVar5);
          _objc_release(uVar7);
        }
        _objc_release(lVar5);
      }
      _objc_release(uVar2);
      goto LAB_107a36010;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b10c0;
    func_0x00010c13f9a0(PTR_PTR_1126b10c0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b10c0;
      _objc_opt_class(PTR_PTR_1126b10c0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      uVar7 = *(ulong *)(param_1 + 0x60);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf3cf60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c13fa00(uVar7);
      _objc_release(uVar8);
      goto LAB_107a35e80;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      uVar7 = uVar2;
      func_0x00010c259cc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c23f800(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010be99b00(param_1);
LAB_107a36414:
      _objc_release(uVar8);
      goto LAB_107a35e80;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      uVar7 = uVar2;
      func_0x00010c259cc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c23f800(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bdfa680(param_1);
      goto LAB_107a36414;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      uVar7 = uVar2;
      func_0x00010bf63dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar2 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar7);
      func_0x00010bf1f3c0(uVar2);
      _objc_release(uVar2);
      func_0x00010bea6220(param_1);
      goto LAB_107a35e84;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ff1c0();
      _objc_release(uVar3);
LAB_107a36598:
      bVar1 = true;
      func_0x00010bdd3400(param_1);
      goto LAB_107a36010;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) goto LAB_107a36598;
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      func_0x00010bdd3400(param_1);
      goto LAB_107a35e84;
    }
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar7 & 1) != 0) goto LAB_107a35e84;
  }
  else {
    pcVar10 = FUN_107a36610;
    puVar9 = auStack_78;
LAB_107a35f44:
    uVar7 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b11d0;
    _objc_opt_class(PTR_PTR_1126b11d0);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar2 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aa20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    *puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puVar9[1] = 0xc2000000;
    puVar9[2] = pcVar10;
    puVar9[3] = &UNK_110847450;
    puVar9[4] = uVar2;
    _objc_retain(uVar2);
    func_0x00010c10e360(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar9[4]);
    _objc_release(uVar2);
  }
  bVar1 = false;
LAB_107a36010:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107a36610; end: 107a36833;  */

void FUN_107a36610(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x000107d51d8c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c243260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfbf8a0(lVar2,param_2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107a36834; end: 107a368eb; -[SCUnifiedProfileStoriesUtilityActionHandler _saveStory:] */

void FUN_107a36834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a368ec; end: 107a369bf; -[SCUnifiedProfileStoriesUtilityActionHandler _saveSnapForStoryId:snapClientId:] */

void FUN_107a368ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a369c0; end: 107a369df; -[SCUnifiedProfileStoriesUtilityActionHandler didCompleteSaveStoryScope:] */

void FUN_107a369c0(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a369e0; end: 107a36c8b; -[SCUnifiedProfileStoriesUtilityActionHandler _showMyStoriesSettings:type:] */

void FUN_107a369e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x26;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c293260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      _objc_initWeak(auStack_70,param_1);
      puVar4 = PTR_PTR_1126aed70;
      ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107a36c8c;
      puStack_80 = &UNK_1108482a8;
      unaff_x26 = &puStack_98;
      _objc_copyWeak(auStack_78,auStack_70);
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puVar5 = PTR_PTR_1126aed70;
      ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puVar6 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      ppuVar3 = &PTR____CFConstantStringClassReference_110eaa4f8;
      param_2 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eaa4f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_68 = puVar4;
      puStack_60 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c4e0(puVar6);
      _objc_release(puVar7);
      _objc_release(ppuVar3);
      param_1 = param_1 + 0x78;
      _objc_loadWeakRetained();
      func_0x00010c10eda0();
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else {
      func_0x00010be7ec00(param_1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    uVar8 = *(undefined8 *)(param_3 + 8);
    func_0x00010c293260(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c1d0560(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar8);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a36c8c; end: 107a36d6b;  */

void FUN_107a36c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c293260(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c1d0560(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107a36d6c; end: 107a36d83;  */

void FUN_107a36d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentStoryPrivacySettings_11257d4a0);
  return;
}



/* Entry: 107a36d84; end: 107a36e2f; -[SCUnifiedProfileStoriesUtilityActionHandler _presentStoryPrivacySettings] */

void FUN_107a36d84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23480(uVar3,param_2,lVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107a36e30; end: 107a36ea3; -[SCUnifiedProfileStoriesUtilityActionHandler storyPrivacySettingsScopeWillDismiss:] */

void FUN_107a36e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a36ea4; end: 107a36eeb; -[SCUnifiedProfileStoriesUtilityActionHandler storyPrivacySettingsScopeDidDismiss:] */

void FUN_107a36ea4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a36eec; end: 107a370a3; -[SCUnifiedProfileStoriesUtilityActionHandler _deleteSnapForStoryId:snapClientId:] */

void FUN_107a36eec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1 + 0x78;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar1,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126b10b8;
    _objc_alloc();
    func_0x00010bfff000();
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf239c0(lVar3,param_2,puVar4,puVar1,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfe63a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bfe63a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107a370a4; end: 107a370d7; -[SCUnifiedProfileStoriesUtilityActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_107a370a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a370d8; end: 107a3710b; -[SCUnifiedProfileStoriesUtilityActionHandler didCancelDeleteStorySnap] */

void FUN_107a370d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a3710c; end: 107a3710f; -[SCUnifiedProfileStoriesUtilityActionHandler didDeleteSnapProStorySnaps:] */

void FUN_107a3710c(void)

{
  return;
}



/* Entry: 107a37110; end: 107a3735f; -[SCUnifiedProfileStoriesUtilityActionHandler _setOurStoriesAttributionEnabled:] */

void FUN_107a37110(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar9);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x0001009703d0(uVar4,0);
  iVar10 = (int)uVar4;
  if (param_3 == 0) {
    func_0x000108f57fdc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    if (iVar10 == 0) {
      func_0x000108f57ff4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f5800c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108f57f94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    if (iVar10 == 0) {
      func_0x000108f57fac();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f57fc4();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar9 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107a37360; end: 107a3739b;  */

void FUN_107a37360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a3739c; end: 107a373ab;  */

void FUN_107a3739c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 107a373ac; end: 107a3749f; -[SCUnifiedProfileStoriesUtilityActionHandler _beginCustomStoryCreationWithType:creationStyle:] */

void FUN_107a373ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar4 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c038f40(puVar1,param_2,lVar4,1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    lVar2 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf244c0(lVar4,param_2,puVar1,lVar2,9,param_3,param_4,param_1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe63a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a374a0; end: 107a374d3; -[SCUnifiedProfileStoriesUtilityActionHandler didCreateCustomStoryWithPublicationId:displayName:type:] */

void FUN_107a374a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a374d4; end: 107a37507; -[SCUnifiedProfileStoriesUtilityActionHandler didDismissCustomStoryCreation] */

void FUN_107a374d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a37508; end: 107a3751f; -[SCUnifiedProfileStoriesUtilityActionHandler presentingViewController] */

void FUN_107a37508(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a37520; end: 107a3752b; -[SCUnifiedProfileStoriesUtilityActionHandler setPresentingViewController:] */

void FUN_107a37520(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 107a3752c; end: 107a375f3; -[SCUnifiedProfileStoriesUtilityActionHandler .cxx_destruct] */

void FUN_107a3752c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 107a375f4; end: 107a375ff; +[SCSharedStoryOperaOnboardingPlugin announcerIdentifier] */

undefined ** FUN_107a375f4(void)

{
  return &PTR____CFConstantStringClassReference_110eaa518;
}



/* Entry: 107a37600; end: 107a37607; -[SCSharedStoryOperaOnboardingPlugin addListener:] */

void FUN_107a37600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a37608; end: 107a3760f; -[SCSharedStoryOperaOnboardingPlugin removeListener:] */

void FUN_107a37608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a37610; end: 107a377db; -[SCSharedStoryOperaOnboardingPlugin initWithNavigationStyle:customStoriesDataFetcher:customStoriesDataMutator:snapchattersDataFetcher:notificationPool:storiesBlizzardLogger:userSession:isForSingleSnap:circumstanceEngine:] */

undefined1 *
FUN_107a37610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f9718;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x78) = param_10;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_12;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a377dc; end: 107a377e7; -[SCSharedStoryOperaOnboardingPlugin setPlaylistItemController:] */

void FUN_107a377dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107a377e8; end: 107a377f3; -[SCSharedStoryOperaOnboardingPlugin setOperaControlling:] */

void FUN_107a377e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107a377f4; end: 107a37947; -[SCSharedStoryOperaOnboardingPlugin registeredEventsForOperaSession] */

void FUN_107a377f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 in_x4;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_88 = puVar1;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9460;
  puStack_80 = puVar2;
  func_0x00010c269c80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_78 = puVar3;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2338;
  puStack_70 = puVar4;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_68 = puVar5;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &puStack_88;
  uVar16 = 6;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar15);
  _objc_retain(uVar16);
  _objc_retain(in_x4);
  if ((puVar1[0x79] & 1) == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar15;
    func_0x00010c0720c0();
    if ((int)ppuVar8 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar15;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)ppuVar8 == 0) goto LAB_107a37b24;
    }
    else {
      _objc_release(puVar2);
    }
    _CACurrentMediaTime();
    *(undefined8 *)(puVar1 + 0x70) = param_1;
    uVar9 = uVar16;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar11 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar2);
    uVar9 = uVar10;
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar10);
    uVar10 = uVar9;
    func_0x00010853a834(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010be42bc0();
    if ((((ulong)puVar2 & 1) == 0) && (uVar11 = uVar9, func_0x000108539800(), (int)uVar11 != 0)) {
      puVar1[0x79] = 1;
      lVar12 = *(long *)(puVar1 + 0x30);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar12 == 0) {
        uVar13 = *(undefined8 *)(puVar1 + 0x38);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010bf625c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x30));
        _objc_release(uVar14);
        _objc_release(uVar13);
      }
      func_0x00010be6a040(puVar1);
    }
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
LAB_107a37b24:
  _objc_release(in_x4);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar15);
  return;
}



/* Entry: 107a37948; end: 107a37b4f; -[SCSharedStoryOperaOnboardingPlugin operaViewDidSendEvent:page:params:] */

void FUN_107a37948(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_2 + 0x79) & 1) == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) goto LAB_107a37b24;
    }
    else {
      _objc_release(puVar1);
    }
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x70) = param_1;
    uVar4 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010853a834(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010be42bc0();
    if (((uVar6 & 1) == 0) && (uVar6 = uVar4, func_0x000108539800(), (int)uVar6 != 0)) {
      *(undefined1 *)(param_2 + 0x79) = 1;
      lVar7 = *(long *)(param_2 + 0x30);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(param_2 + 0x38);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010bf625c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30));
        _objc_release(uVar2);
        _objc_release(uVar8);
      }
      func_0x00010be6a040(param_2);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
LAB_107a37b24:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a37b50; end: 107a37c2f; -[SCSharedStoryOperaOnboardingPlugin _onMediaStartWithPublicationId:] */

void FUN_107a37b50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1d840();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf5a820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beba240(param_1,param_2,param_3,uVar3,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a37c30; end: 107a37d87; -[SCSharedStoryOperaOnboardingPlugin _showOnboardingWithPublicationId:blockedUserNames:ownerId:] */

void FUN_107a37c30(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010bf529e0();
  _CACurrentMediaTime();
  func_0x00010c0a4680(param_1 - *(double *)(param_2 + 0x70),uVar2);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107a37d88;
    puStack_70 = &UNK_110850cf8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    uStack_68 = param_4;
    _objc_retain(param_5);
    lStack_60 = param_5;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107a37d88; end: 107a37f3f;  */

void FUN_107a37d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be70d80();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d5fd8;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(lVar2 + 0x60);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar6);
    _objc_retain(lVar4);
    if (lVar6 == lVar4) {
      lVar7 = 1;
    }
    else if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6;
      func_0x00010c071ae0(lVar6,param_2,lVar4);
    }
    _objc_release(lVar4);
    _objc_release(lVar6);
    func_0x00010c03be80(puVar3,param_2,uVar5,0,uVar1,lVar7);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined **)(lVar2 + 0x20) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar4);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18b5e0(*(undefined8 *)(lVar2 + 0x20),param_2,param_1);
    _objc_release(param_1);
    lVar4 = lVar2 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107a37f40; end: 107a37f4b;  */

void FUN_107a37f40(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x79) = 0;
  return;
}



/* Entry: 107a37f4c; end: 107a37fc7; -[SCSharedStoryOperaOnboardingPlugin _pauseOpera] */

void FUN_107a37f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,1,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a37fc8; end: 107a381cb; -[SCSharedStoryOperaOnboardingPlugin didTapToViewStoryOnViewController:] */

void FUN_107a37fc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar2 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar1 = param_3;
      func_0x00010c11ac00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      lVar2 = param_3;
      func_0x00010c11ac00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf1d820();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      func_0x00010bdc61a0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      lVar1 = param_3;
      func_0x00010c11ac00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4660(uVar3);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a381cc; end: 107a38397;  */

void FUN_107a381cc(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar5 = lVar1;
      func_0x000108f5905c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126afde0;
      func_0x00010bf57f80(PTR_PTR_1126afde0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 0x50);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f340();
      _objc_release(uVar7);
      func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar6);
      _objc_release(lVar5);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11ac00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bf625c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11ac00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107a38398; end: 107a38427;  */

void FUN_107a38398(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a38428; end: 107a385ab; -[SCSharedStoryOperaOnboardingPlugin didTapToLeaveStoryOnViewController:] */

void FUN_107a38428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c08e1e0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4660(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a385ac; end: 107a3865b;  */

void FUN_107a385ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 & 1) == 0) {
    lVar1 = param_1;
    func_0x000108f57f1c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf57f80(PTR_PTR_1126afde0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010befe360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3865c; end: 107a38763; -[SCSharedStoryOperaOnboardingPlugin didTapToDismissDialogOnViewController:] */

void FUN_107a3865c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bdcc6c0(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf84b00(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4660(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107a38764; end: 107a387c3;  */

void FUN_107a38764(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a387c4; end: 107a387d7; -[SCSharedStoryOperaOnboardingPlugin didSwipeUpOnViewController:] */

void FUN_107a387c4(long param_1)

{
  if (*(long *)(param_1 + 8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010befe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_advanceToNextGroupFromViewContro_11259d280)
    ;
    return;
  }
  return;
}



/* Entry: 107a387d8; end: 107a387eb; -[SCSharedStoryOperaOnboardingPlugin didSwipeDownOnViewController:] */

void FUN_107a387d8(long param_1)

{
  if (*(long *)(param_1 + 8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf13a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_backToPreviousGroupFromViewContr_1125a2840)
    ;
    return;
  }
  return;
}



/* Entry: 107a387ec; end: 107a387fb; -[SCSharedStoryOperaOnboardingPlugin didSwipeLeftOnViewController:] */

void FUN_107a387ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_advanceToNextGroupFromViewContro_11259d280);
  return;
}



/* Entry: 107a387fc; end: 107a3880b; -[SCSharedStoryOperaOnboardingPlugin didSwipeRightOnViewController:] */

void FUN_107a387fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf13a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_backToPreviousGroupFromViewContr_1125a2840);
  return;
}



/* Entry: 107a3880c; end: 107a388a3; -[SCSharedStoryOperaOnboardingPlugin didSwipeWithDirection:onViewController:] */

void FUN_107a3880c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010bf7c400(param_1,param_2,param_4);
    }
    else if (param_3 == 1) {
      func_0x00010bf7c300(param_1,param_2,param_4);
    }
  }
  else if (param_3 == 2) {
    func_0x00010bf7c2a0(param_1,param_2,param_4);
  }
  else if (param_3 == 3) {
    func_0x00010bf7c320(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a388a4; end: 107a389ab; -[SCSharedStoryOperaOnboardingPlugin advanceToNextGroupFromViewController:] */

void FUN_107a388a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bdcc6c0(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf84b00(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4660(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107a389ac; end: 107a38a6b;  */

void FUN_107a389ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6060(lVar2,param_2,1,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a38a6c; end: 107a38b2f; -[SCSharedStoryOperaOnboardingPlugin backToPreviousGroupFromViewController:] */

void FUN_107a38a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  func_0x00010bdcc6c0(param_1);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107a38b30; end: 107a38bef;  */

void FUN_107a38b30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6160(lVar2,param_2,1,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a38bf0; end: 107a38c7f; -[SCSharedStoryOperaOnboardingPlugin _addBlockedUsersExpcetionsWithPublicationId:snapchatterIds:completion:] */

void FUN_107a38bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb420();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a38c80; end: 107a38ccf; -[SCSharedStoryOperaOnboardingPlugin _announceToSkipViewingSharedStory] */

void FUN_107a38c80(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a38cd0; end: 107a38d4b; -[SCSharedStoryOperaOnboardingPlugin _isPlayingMySingleSnapWithPlayBackMetadata:] */

undefined8 FUN_107a38cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(param_3);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x000108539520(param_3,uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
    return uVar1;
  }
  return 0;
}



/* Entry: 107a38d4c; end: 107a38deb; -[SCSharedStoryOperaOnboardingPlugin .cxx_destruct] */

void FUN_107a38d4c(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107a38dec; end: 107a38ef3; -[SCSharedStoryOperaOnboardingView initWithFrame:inviter:blockedUserNames:isCurrentUserOwner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a38dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f9720;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127685e0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127685e4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127685e8) = param_9;
    func_0x00010beb14e0(puVar1);
    func_0x00010beacd00(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107a38ef4; end: 107a3905b; -[SCSharedStoryOperaOnboardingView _setupViews] */

/* WARNING: Possible PIC construction at 0x000107a39038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a3903c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a38ef4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  uVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,param_1,uVar2);
  lVar3 = (long)_DAT_1127685ec;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_2 + lVar3));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar3));
  func_0x00010befbb60(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_1127685f0;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar3));
  func_0x00010befbb60(param_2);
  func_0x00010beb09c0(param_2);
  func_0x00010beb0300(param_2);
  func_0x00010beabbc0(param_2);
  func_0x00010beb13e0(param_2);
  func_0x00010bead7c0(param_2);
  func_0x00010beac140(param_2);
  func_0x00010beabac0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_1127685f4),PTR_s_setHidden__1126479f8,
             *(undefined1 *)(param_2 + _DAT_1127685e8));
  return;
}



/* Entry: 107a3905c; end: 107a390bb; -[SCSharedStoryOperaOnboardingView _setupGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3905c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_1127685fc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107a390bc; end: 107a391b7; -[SCSharedStoryOperaOnboardingView _setupTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a390bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112768600;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c213040(uVar2);
  func_0x000108f58fe4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127685f0),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107a391b8; end: 107a39303; -[SCSharedStoryOperaOnboardingView _setupSubtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a391b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112768604;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c213040(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + _DAT_1127685e0) != 0) {
    func_0x000108f58ffc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127685f0),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107a39304; end: 107a3958b; -[SCSharedStoryOperaOnboardingView _setupContentLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a39304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127685e4;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 1) {
    func_0x000108f58f54();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0dfd40(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010bf529e0();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 2) {
      func_0x000108f58f6c();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0dfd40(uVar3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f58f84();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0dfd40(uVar2,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0dfd40(uVar3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
    }
    func_0x00010c14de00(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x000108f59014();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25ce40(puVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar1 = (long)_DAT_112768608;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = puVar4;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar1),param_2,0x15);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar1),param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar1),param_2,1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1),param_2,puVar5);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127685f0),param_2,
                      *(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107a3958c; end: 107a39653; -[SCSharedStoryOperaOnboardingView _setupViewStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3958c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276860c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c219b60(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000108f5902c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127685f0),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107a39654; end: 107a3972b; -[SCSharedStoryOperaOnboardingView _setupLeaveStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a39654(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127685f4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c219b60(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000108f59044();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127685f0),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107a3972c; end: 107a3980f; -[SCSharedStoryOperaOnboardingView _setupDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3972c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127685f8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbe218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbe218,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127685f0),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107a39810; end: 107a3a1ff; -[SCSharedStoryOperaOnboardingView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a39810(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
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
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined *puVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 + -60.0;
  lVar71 = (long)_DAT_112768600;
  uVar73 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_1,0x7fefffffffffffff,*(undefined8 *)(param_2 + lVar71));
  lVar70 = (long)_DAT_112768604;
  uVar74 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_1,0x7fefffffffffffff,*(undefined8 *)(param_2 + lVar70));
  lVar69 = (long)_DAT_112768608;
  uVar75 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_1,0x7fefffffffffffff,*(undefined8 *)(param_2 + lVar69));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar72 = (long)_DAT_1127685f0;
  uVar2 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar72);
  uStack_158 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar72);
  uStack_150 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar10 = uVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + lVar71);
  uStack_148 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + lVar71);
  uStack_140 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + lVar71);
  uStack_138 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf49420(uVar73);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_2 + lVar70);
  uStack_130 = uVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar73 = uVar19;
  func_0x00010bf493a0(uVar19,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_2 + lVar70);
  uStack_128 = uVar73;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_2 + lVar71);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493c0(0x4024000000000000,uVar21,param_3,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_2 + lVar70);
  uStack_120 = uVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf49420(uVar74);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_2 + lVar69);
  uStack_118 = uVar25;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar74 = uVar26;
  func_0x00010bf493a0(uVar26,param_3,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_2 + lVar69);
  uStack_110 = uVar74;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_2 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar28;
  func_0x00010bf493c0(0x4030000000000000,uVar28,param_3,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_2 + lVar69);
  uStack_108 = uVar30;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar31;
  func_0x00010bf493c0(0x403e000000000000,uVar31,param_3,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_2 + lVar69);
  uStack_100 = uVar33;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar34;
  func_0x00010bf493c0(0xc03e000000000000,uVar34,param_3,uVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_2 + lVar69);
  uStack_f8 = uVar36;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010bf49420(uVar75);
  _objc_retainAutoreleasedReturnValue();
  lVar70 = (long)_DAT_11276860c;
  uVar39 = *(undefined8 *)(param_2 + lVar70);
  uStack_f0 = uVar38;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar75 = uVar39;
  func_0x00010bf493a0(uVar39,param_3,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_2 + lVar70);
  uStack_e8 = uVar75;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010bf49420(0x4062000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_2 + lVar70);
  uStack_e0 = uVar42;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_2 + lVar69);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar43;
  func_0x00010bf493c0(0x4034000000000000,uVar43,param_3,uVar44);
  _objc_retainAutoreleasedReturnValue();
  lVar69 = (long)_DAT_1127685f4;
  uVar46 = *(undefined8 *)(param_2 + lVar69);
  uStack_d8 = uVar45;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar46;
  func_0x00010bf493a0(uVar46,param_3,uVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_2 + lVar69);
  uStack_d0 = uVar48;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar49;
  func_0x00010bf49420(0x4062000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_2 + lVar69);
  uStack_c8 = uVar50;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_2 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar51;
  func_0x00010bf493c0(0x4034000000000000,uVar51,param_3,uVar52);
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_2 + lVar69);
  uStack_c0 = uVar53;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar54;
  func_0x00010bf493a0(uVar54,param_3,uVar55);
  _objc_retainAutoreleasedReturnValue();
  lVar69 = (long)_DAT_1127685f8;
  uVar57 = *(undefined8 *)(param_2 + lVar69);
  uStack_b8 = uVar56;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar57;
  func_0x00010bf493a0(uVar57,param_3,uVar58);
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_2 + lVar69);
  uStack_b0 = uVar59;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = uVar60;
  func_0x00010bf49420(0x4062000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar62 = *(undefined8 *)(param_2 + lVar69);
  uStack_a8 = uVar61;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(param_2 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = uVar62;
  func_0x00010bf493c0(0x4034000000000000,uVar62,param_3,uVar63);
  _objc_retainAutoreleasedReturnValue();
  uVar65 = *(undefined8 *)(param_2 + lVar69);
  uStack_a0 = uVar64;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar66 = *(undefined8 *)(param_2 + lVar72);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = uVar65;
  func_0x00010bf493a0(uVar65,param_3,uVar66);
  _objc_retainAutoreleasedReturnValue();
  puVar68 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar67;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_158,0x19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar68);
  _objc_release(puVar68);
  _objc_release(uVar67);
  _objc_release(uVar66);
  _objc_release(uVar65);
  _objc_release(uVar64);
  _objc_release(uVar63);
  _objc_release(uVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
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
  _objc_release(uVar75);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar74);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar73);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010c1cbe20(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  param_2 = param_2 + _DAT_112768610;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf73a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a3a200; end: 107a3a233; -[SCSharedStoryOperaOnboardingView _clickViewStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a200(long param_1)

{
  param_1 = param_1 + _DAT_112768610;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a234; end: 107a3a267; -[SCSharedStoryOperaOnboardingView _clickLeaveStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a234(long param_1)

{
  param_1 = param_1 + _DAT_112768610;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf739e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a268; end: 107a3a29b; -[SCSharedStoryOperaOnboardingView _clickDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a268(long param_1)

{
  param_1 = param_1 + _DAT_112768610;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf739c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a29c; end: 107a3a337; -[SCSharedStoryOperaOnboardingView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107a3a29c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127685fc);
  if (param_3 == lVar2) {
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264780(lVar2,param_2,lVar1);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_112768610;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7c240();
    _objc_release(param_1);
  }
  return param_3 == lVar2;
}



/* Entry: 107a3a338; end: 107a3a357; -[SCSharedStoryOperaOnboardingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a338(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112768610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a3a358; end: 107a3a36b; -[SCSharedStoryOperaOnboardingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a358(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112768610,param_3);
  return;
}



/* Entry: 107a3a36c; end: 107a3a447; -[SCSharedStoryOperaOnboardingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a36c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112768610);
  _objc_storeStrong(param_1 + _DAT_1127685fc,0);
  _objc_storeStrong(param_1 + _DAT_1127685e4,0);
  _objc_storeStrong(param_1 + _DAT_1127685e0,0);
  _objc_storeStrong(param_1 + _DAT_1127685f8,0);
  _objc_storeStrong(param_1 + _DAT_1127685f4,0);
  _objc_storeStrong(param_1 + _DAT_11276860c,0);
  _objc_storeStrong(param_1 + _DAT_112768608,0);
  _objc_storeStrong(param_1 + _DAT_112768604,0);
  _objc_storeStrong(param_1 + _DAT_112768600,0);
  _objc_storeStrong(param_1 + _DAT_1127685f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127685ec,0);
  return;
}



/* Entry: 107a3a448; end: 107a3a55b; -[SCSharedStoryOperaOnboardingViewController initWithPublicationId:inviter:blockedUserNames:isCurrentUserOwner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a3a448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f9728;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
    func_0x00010c1c8c00(puVar1);
    lVar3 = (long)_DAT_112768614;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112768618;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276861c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112768620) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a3a55c; end: 107a3a5f7; -[SCSharedStoryOperaOnboardingViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a55c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d5fe0;
  _objc_alloc(PTR_PTR_1126d5fe0);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014700(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112768618),
                      *(undefined8 *)(param_1 + _DAT_11276861c),
                      *(undefined1 *)(param_1 + _DAT_112768620));
  _objc_release(puVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a3a5f8; end: 107a3a633; -[SCSharedStoryOperaOnboardingViewController didClickLeaveStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a5f8(long param_1)

{
  param_1 = param_1 + _DAT_112768624;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a634; end: 107a3a66f; -[SCSharedStoryOperaOnboardingViewController didClickViewStoryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a634(long param_1)

{
  param_1 = param_1 + _DAT_112768624;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a670; end: 107a3a6ab; -[SCSharedStoryOperaOnboardingViewController didClickDimissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a670(long param_1)

{
  param_1 = param_1 + _DAT_112768624;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a6ac; end: 107a3a6f7; -[SCSharedStoryOperaOnboardingViewController didSwipWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a6ac(long param_1)

{
  param_1 = param_1 + _DAT_112768624;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3a6f8; end: 107a3a6ff; -[SCSharedStoryOperaOnboardingViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_107a3a6f8(void)

{
  return 1;
}


