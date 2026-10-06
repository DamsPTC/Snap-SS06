/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057e039c; end: 1057e042b; -[SCMerlinOnboardingStatusManager isCurrentUserOnboardedToMerlinGroup] */

undefined8 FUN_1057e039c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0caf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcec60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057e01a0();
  uVar1 = uVar2;
  FUN_1057e0200(uVar2,uVar3,1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1057e042c; end: 1057e04b7; -[SCMerlinOnboardingStatusManager setCurrentUserCompletedMerlinGroupOnboarding] */

void FUN_1057e042c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcec60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dfec0(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6cc0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e04b8; end: 1057e0563; -[SCMerlinOnboardingStatusManager isCurrentUserOnboardedToMerlinMentionsSending] */

undefined8 FUN_1057e04b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1057e0200(uVar2,uVar3,2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1057e0564; end: 1057e05ef; -[SCMerlinOnboardingStatusManager setCurrentUserCompletedMerlinMentionsSendingOnboarding] */

void FUN_1057e0564(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dfec0(uVar2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6d20(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e05f0; end: 1057e069b; -[SCMerlinOnboardingStatusManager isCurrentUserOnboardedToMerlinSpotlightMentionsSending] */

undefined8 FUN_1057e05f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1057e0200(uVar2,uVar3,1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1057e069c; end: 1057e0727; -[SCMerlinOnboardingStatusManager setCurrentUserCompletedMerlinSpotlightMentionsSendingOnboarding] */

void FUN_1057e069c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dfec0(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6da0(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e0728; end: 1057e07c7; -[SCMerlinOnboardingStatusManager isCurrentUserOnboardedToMerlinMentionsViewing] */

undefined8 FUN_1057e0728(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cafa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_1;
  func_0x00010c06fde0();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0ca520(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    FUN_1057e0200(uVar2,uVar4,2);
    _objc_release(uVar4);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1057e07c8; end: 1057e0853; -[SCMerlinOnboardingStatusManager setCurrentUserCompletedMerlinMentionsViewingOnboarding] */

void FUN_1057e07c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dfec0(uVar2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6d00(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e0854; end: 1057e08ff; -[SCMerlinOnboardingStatusManager isCurrentUserOnboardedToMerlinQuickCaptureOnboarding] */

undefined8 FUN_1057e0854(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11e3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11e3e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1057e0200(uVar2,uVar3,1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1057e0900; end: 1057e098b; -[SCMerlinOnboardingStatusManager setCurrentUserCompletedMerlinQuickCaptureOnboarding] */

void FUN_1057e0900(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11e3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dfec0(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6d80(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e098c; end: 1057e09cb; -[SCMerlinOnboardingStatusManager isTeamSnapchatJITEnabled] */

undefined8 FUN_1057e098c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078560();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1057e09cc; end: 1057e09e7; -[SCMerlinOnboardingStatusManager isCurrentUserOnboardedToTeamSnapchat] */

bool FUN_1057e09cc(long param_1)

{
  func_0x00010c26ab00();
  return param_1 == 1;
}



/* Entry: 1057e09e8; end: 1057e0a73; -[SCMerlinOnboardingStatusManager setCurrentUserCompletedTeamSnapchatOnboarding] */

void FUN_1057e09e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c26ab20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057dfec0(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6dc0(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e0a74; end: 1057e0b5b; -[SCMerlinOnboardingStatusManager teamSnapchatJITDecision] */

ulong FUN_1057e0a74(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  FUN_1057dfd80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar5 = uVar1;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c067fc0();
    _objc_release(uVar5);
    if (0 < (long)uVar3) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c26ab20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      FUN_1057e0200(uVar2,uVar4,1);
      uVar5 = uVar5 & 0xffffffff;
      _objc_release(uVar4);
      goto LAB_1057e0b34;
    }
  }
  uVar5 = 0;
LAB_1057e0b34:
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 1057e0b5c; end: 1057e0b9f; -[SCMerlinOnboardingStatusManager getJitVariantForMerlin] */

bool FUN_1057e0b5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  return (int)uVar2 == 1;
}



/* Entry: 1057e0ba0; end: 1057e0be3; -[SCMerlinOnboardingStatusManager getJitVariantForMerlinMentionSending] */

bool FUN_1057e0ba0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  return (int)uVar2 == 1;
}



/* Entry: 1057e0be4; end: 1057e0c27; -[SCMerlinOnboardingStatusManager getJitVariantForMerlinSpotlightMentionSending] */

bool FUN_1057e0be4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0ca5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1057e01a0();
  _objc_release(uVar1);
  return (int)uVar2 == 1;
}



/* Entry: 1057e0c28; end: 1057e0cdf; -[SCMerlinOnboardingStatusManager .cxx_destruct] */

void FUN_1057e0c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057e0ce0; end: 1057e0ceb;  */

bool FUN_1057e0ce0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1057e0cec; end: 1057e0d53; +[SCMerlinJITConfig descriptor] */

void FUN_1057e0cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c010,
                        &PTR____CFConstantStringClassReference_110e03d38,&PTR_DAT_113101708,
                        &PTR_DAT_113101760,6,0x38,0x1c);
    puRam00000001136c0790 = puVar1;
  }
  return;
}



/* Entry: 1057e0d54; end: 1057e0dcf; +[SCMerlinJITConfig_MerlinJITVersion descriptor] */

undefined * FUN_1057e0d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c060,
                        &PTR____CFConstantStringClassReference_110e03d58,&PTR_DAT_113101708,
                        &PTR_s_variant_113101720,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c0798 = puVar1;
  }
  return puRam00000001136c0798;
}



/* Entry: 1057e0dd0; end: 1057e1053; -[SCMessagingNotificationRemover initWithConversationLifecycleObservable:applicationLifecycleEvents:notificationRemover:asyncQueueProvider:messagingExperimentService:userId:nativeSessionManagerFuture:] */

undefined8 *
FUN_1057e0dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ea5b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x00010bf5f5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126be8d0;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    func_0x00010be65b60(puVar1);
    func_0x00010be65ec0(puVar1);
    func_0x00010be67160(puVar1);
    _objc_release(param_6);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057e1054; end: 1057e10a3;  */

void FUN_1057e1054(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057e10a4; end: 1057e12af; -[SCMessagingNotificationRemover _observeApplicationLifecycleEvent] */

void FUN_1057e10a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2a6420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1057e12b0;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2a6a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1057e12dc;
  puStack_a0 = &UNK_110846510;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1057e12b0; end: 1057e1333;  */

void FUN_1057e12b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e1334; end: 1057e1337; -[SCMessagingNotificationRemover _applicationWillResignActive] */

void FUN_1057e1334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanConsumedMessagesNotificati_112555540);
  return;
}



/* Entry: 1057e1338; end: 1057e13f3; -[SCMessagingNotificationRemover _applicationDidEnterBackground] */

void FUN_1057e1338(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  func_0x00010bddee80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057e13f4; end: 1057e141f;  */

void FUN_1057e13f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e1420; end: 1057e1477; -[SCMessagingNotificationRemover _applicationDidEnterForeground] */

void FUN_1057e1420(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1057e1478;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 1057e1478; end: 1057e149f;  */

void FUN_1057e1478(long param_1)

{
  func_0x00010bddf120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bddee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanConsumedMessagesNotificati_112555540);
  return;
}



/* Entry: 1057e14a0; end: 1057e14af; -[SCMessagingNotificationRemover _resetLastConversationAccessState] */

void FUN_1057e14a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057e14b0; end: 1057e14eb; -[SCMessagingNotificationRemover _resetConversationsAccessedStates] */

void FUN_1057e14b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057e14ec; end: 1057e1527; -[SCMessagingNotificationRemover _cleanUpLastConversationNotification] */

void FUN_1057e14ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde0270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__clearDeliveredNotificationsForC_112555a38,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 1057e1528; end: 1057e15f3; -[SCMessagingNotificationRemover _observeConversationLifecycle] */

void FUN_1057e1528(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057e15f4; end: 1057e16e7;  */

void FUN_1057e15f4(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057e16e8;
  puStack_60 = &UNK_110843540;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd100(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e16e8; end: 1057e1777;  */

void FUN_1057e16e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e1778; end: 1057e184f; -[SCMessagingNotificationRemover _conversationEntered:] */

void FUN_1057e1778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e1850; end: 1057e1883;  */

void FUN_1057e1850(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5d320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e1884; end: 1057e191b; -[SCMessagingNotificationRemover _markConversationAsAccessed:] */

void FUN_1057e1884(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = param_3;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        *(undefined **)(param_1 + 0x30) = puVar4;
        _objc_release(uVar2);
        lVar3 = *(long *)(param_1 + 0x30);
      }
      func_0x00010befa120(lVar3,param_2,param_3);
      func_0x00010bde0260(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e191c; end: 1057e19f7; -[SCMessagingNotificationRemover _observeWindowUpdates] */

void FUN_1057e191c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b740();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c297260(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1057e19f8; end: 1057e1a3f;  */

void FUN_1057e19f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e1a40; end: 1057e1c3f; -[SCMessagingNotificationRemover _subscribeToWindowEventsWithSessionManager:] */

void FUN_1057e1a40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfc7800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_68,param_1);
      lVar2 = lVar1;
      func_0x00010c2a7340(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1057e1c40;
      puStack_78 = &UNK_1108b3f28;
      _objc_copyWeak(auStack_70,auStack_68);
      lVar4 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c2a7200(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_68);
      lVar4 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1057e1c40; end: 1057e1ccf;  */

void FUN_1057e1c40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e1cd0; end: 1057e1d5f; -[SCMessagingNotificationRemover _handleWindowUpdate:] */

void FUN_1057e1cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ebb40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c067fc0(), lVar2 == 0)) {
    lVar2 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010be5d320(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e1d60; end: 1057e1daf; -[SCMessagingNotificationRemover _handleWindowDestroyed:] */

void FUN_1057e1d60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) &&
     (lVar1 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x38)),
     (int)lVar1 != 0)) {
    func_0x00010be93080(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e1db0; end: 1057e1fbb; -[SCMessagingNotificationRemover _clearDeliveredNotificationsForConversation:] */

void FUN_1057e1db0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x000107fcc1ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12de40(puVar1);
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    unaff_x21 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_retain(param_3);
    _objc_alloc();
    puVar4 = param_3;
    func_0x00010c057ea0();
    _objc_release(param_3);
    if (unaff_x21 != (undefined *)0x0) {
      func_0x00010bfcb980(unaff_x21);
      unaff_x22 = PTR_PTR_1126be8d8;
      _objc_opt_new();
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(unaff_x22);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126be8e0;
      _objc_opt_new(PTR_PTR_1126be8e0);
      func_0x00010c183b80();
      puVar2 = PTR_PTR_1126be8e8;
      _objc_opt_new(PTR_PTR_1126be8e8);
      func_0x00010c196560();
      puVar3 = PTR_PTR_1126b3450;
      _objc_opt_new();
      puVar4 = puVar2;
      func_0x00010c19a860();
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      if (puVar3 != (undefined *)0x0) {
        param_1 = *(long *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c2268e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = unaff_x21;
        func_0x00010c12de20(param_1);
        _objc_release(unaff_x21);
        _objc_release(param_1);
        _objc_release(puVar3);
      }
    }
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1057e1fbc;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  lStack_90 = param_1;
  puStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_a8,puVar1);
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar4);
  return;
}



/* Entry: 1057e1fbc; end: 1057e207f; -[SCMessagingNotificationRemover _conversationExited:] */

void FUN_1057e1fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e2080; end: 1057e20ab;  */

void FUN_1057e2080(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e20ac; end: 1057e2153; -[SCMessagingNotificationRemover _cleanConsumedMessagesNotification] */

void FUN_1057e20ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfc4a60(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057e2154; end: 1057e25cf;  */

void FUN_1057e2154(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_2;
  _objc_retain(param_2);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = puVar4;
    _dispatch_group_create();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_2);
    lStack_238 = param_2;
    func_0x00010bf52a60();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lStack_238 != 0) {
      lVar13 = *plStack_130;
      do {
        lVar14 = 0;
        do {
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(param_2);
          }
          uVar15 = *(undefined8 *)(lStack_138 + lVar14 * 8);
          puVar6 = PTR_PTR_1126b1370;
          _objc_alloc();
          func_0x00010c05c980();
          puVar7 = puVar6;
          func_0x00010bf0a2c0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c08fa60();
          if (((puVar8 != (undefined *)0x0) &&
              (puVar8 = puVar6, func_0x00010c11c420(), puVar8 != (undefined *)0x1)) &&
             (puVar8 = puVar6, func_0x00010c11c420(), puVar8 != (undefined *)0x2a)) {
            puVar8 = PTR_PTR_1126b0cd8;
            func_0x00010bdc35c0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR_PTR_1126ba518;
            _objc_alloc();
            func_0x00010bf0a360(puVar6);
            func_0x00010c044c00();
            _dispatch_group_enter(puVar5);
            puVar10 = PTR_PTR_1126ba510;
            _objc_alloc();
            puStack_190 = puVar1;
            uStack_188 = 0xc2000000;
            pcStack_180 = FUN_1057e25d0;
            puStack_178 = &UNK_1108b3f58;
            _objc_copyWeak(auStack_148,param_1 + 0x20);
            _objc_retain(puVar5);
            puStack_170 = puVar5;
            _objc_retain(puVar6);
            puStack_168 = puVar6;
            _objc_retain(puVar8);
            puStack_160 = puVar8;
            _objc_retain(puVar4);
            puStack_1d0 = puVar1;
            uStack_1c8 = 0xc2000000;
            pcStack_1c0 = FUN_1057e2740;
            puStack_1b8 = &UNK_1108b3f88;
            puStack_158 = puVar4;
            uStack_150 = uVar15;
            _objc_retain(puVar6);
            puStack_1b0 = puVar6;
            _objc_retain(puVar8);
            puStack_1a8 = puVar8;
            _objc_copyWeak(auStack_198,param_1 + 0x20);
            _objc_retain(puVar5);
            puStack_1a0 = puVar5;
            func_0x00010c04f4c0();
            uVar15 = *(undefined8 *)(lVar3 + 0x50);
            puStack_200 = puVar1;
            uStack_1f8 = 0xc2000000;
            pcStack_1f0 = FUN_1057e27a4;
            puStack_1e8 = &UNK_1108b3fb8;
            _objc_retain(puVar9);
            puStack_1e0 = puVar9;
            _objc_retain(puVar10);
            puStack_1d8 = puVar10;
            func_0x00010c297260(uVar15);
            _objc_release(puStack_1d8);
            _objc_release(puStack_1e0);
            _objc_release(puVar10);
            _objc_release(puStack_1a0);
            _objc_destroyWeak(auStack_198);
            _objc_release(puStack_1a8);
            _objc_release(puStack_1b0);
            _objc_release(puStack_158);
            _objc_release(puStack_160);
            _objc_release(puStack_168);
            _objc_release(puStack_170);
            _objc_destroyWeak(auStack_148);
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          _objc_release(puVar7);
          _objc_release(puVar6);
          lVar14 = lVar14 + 1;
        } while (lStack_238 != lVar14);
        lStack_238 = param_2;
        func_0x00010bf52a60();
      } while (lStack_238 != 0);
    }
    _objc_release(param_2);
    lVar14 = *(long *)(lVar3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = puVar1;
    uStack_228 = 0xc2000000;
    uStack_220 = 0x1057e27e4;
    puStack_218 = &UNK_110841f80;
    puStack_210 = puVar4;
    lStack_208 = lVar3;
    _objc_retain();
    lVar13 = lVar14;
    func_0x00010bcbe628(puVar5,lVar14,&puStack_230);
    _objc_release(lVar14);
    _objc_release(puStack_210);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(lVar13);
  lVar3 = param_2 + 0x48;
  _objc_loadWeakRetained();
  if (lVar3 == 0) goto LAB_1057e2718;
  iVar2 = (int)*(undefined8 *)(param_2 + 0x28);
  func_0x00010c11c420();
  func_0x000107fcc688();
  if (iVar2 == 0) {
    lVar14 = lVar13;
    func_0x00010c07bc00();
    if ((int)lVar14 == 0) {
      uVar15 = *(undefined8 *)(lVar3 + 0x68);
      goto LAB_1057e2714;
    }
    uVar15 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c134680(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar15);
    _objc_release(uVar12);
    _objc_release(uVar11);
    uVar15 = *(undefined8 *)(lVar3 + 0x68);
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c15de20(uVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c07bbe0();
    _objc_release(uVar15);
    if ((int)lVar14 == 0) {
      uVar15 = *(undefined8 *)(lVar3 + 0x68);
LAB_1057e2714:
      func_0x00010c0ab0a0(uVar15);
      goto LAB_1057e2718;
    }
    uVar15 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c134680(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar15);
    _objc_release(uVar12);
    _objc_release(uVar11);
    uVar15 = *(undefined8 *)(lVar3 + 0x68);
  }
  func_0x00010c0ab140(uVar15);
LAB_1057e2718:
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x20));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 1057e25d0; end: 1057e273f;  */

void FUN_1057e25d0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_1057e2718;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c11c420();
  func_0x000107fcc688();
  if (iVar1 == 0) {
    uVar4 = param_2;
    func_0x00010c07bc00();
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x68);
      goto LAB_1057e2714;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c134680(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15de20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c07bbe0();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x68);
LAB_1057e2714:
      func_0x00010c0ab0a0(uVar4);
      goto LAB_1057e2718;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c134680(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
  }
  func_0x00010c0ab140(uVar4);
LAB_1057e2718:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057e2740; end: 1057e27a3;  */

void FUN_1057e2740(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0ab0a0(*(undefined8 *)(lVar1 + 0x68));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057e27a4; end: 1057e281f;  */

void FUN_1057e27a4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc7e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057e2820; end: 1057e28d3; -[SCMessagingNotificationRemover .cxx_destruct] */

void FUN_1057e2820(long param_1)

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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057e28d4; end: 1057e2c47; -[SCMessagingNotificationsCleanupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e28d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  lVar17 = (long)_DAT_112729f00;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR_PTR_1126be8f0;
  _objc_alloc();
  lVar19 = (long)_DAT_112729f04;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c243c40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112729f08;
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0dc900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048860();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112729f0c);
  *(undefined **)(param_1 + _DAT_112729f0c) = puVar1;
  _objc_release(uVar16);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126be8f8;
  _objc_alloc();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar6 = lVar19;
  func_0x00010bf50200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112729f10;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar9 = lVar18;
  func_0x00010c0dc900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112729f14;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112729f18;
  _objc_loadWeakRetained();
  lVar11 = lVar3;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112729f1c;
  _objc_loadWeakRetained(lVar5);
  lVar12 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112729f20;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0d5c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005700();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112729f24);
  *(undefined **)(param_1 + _DAT_112729f24) = puVar1;
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_initWeak(auStack_68,param_1);
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f7fc0(uVar16);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1057e2c48; end: 1057e2c73;  */

void FUN_1057e2c48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3b7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e2c74; end: 1057e2d97; -[SCMessagingNotificationsCleanupEntryPoint _initializeObjectsAndData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e2c74(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112729f1c;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_retain(lVar2);
  _objc_retain(&PTR____CFConstantStringClassReference_110de9eb8);
  uVar3 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057e2d98;
  puStack_48 = &UNK_110841f80;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110de9eb8;
  lStack_40 = lVar2;
  _objc_retain(&PTR____CFConstantStringClassReference_110de9eb8);
  _objc_retain(lVar2);
  func_0x00010007380c(uVar3,&puStack_60);
  _objc_release(uVar3);
  _objc_release(ppuStack_38);
  _objc_release(lStack_40);
  _objc_release(&PTR____CFConstantStringClassReference_110de9eb8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1057e2d98; end: 1057e2ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e2d98(void)

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
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ba528;
  _objc_alloc();
  func_0x00010bfef8e0();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfad480();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar5 != (undefined *)0x0) {
    puVar11 = *(undefined **)PTR__NSFileTypeSymbolicLink_110345478;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        puVar6 = puVar2;
        func_0x00010c22b9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c10f880();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar3;
        func_0x00010bf0e880();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if ((puVar9 == puVar11) &&
           (puVar9 = puVar6, func_0x00010bfacbc0(), ((ulong)puVar9 & 1) == 0)) {
          func_0x00010bf6bde0(puVar6);
        }
        _objc_release(puVar7);
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar2 + _DAT_112729f18);
    _objc_destroyWeak(puVar2 + _DAT_112729f20);
    _objc_destroyWeak(puVar2 + _DAT_112729f14);
    _objc_destroyWeak(puVar2 + _DAT_112729f08);
    _objc_destroyWeak(puVar2 + _DAT_112729f10);
    _objc_destroyWeak(puVar2 + _DAT_112729f04);
    _objc_destroyWeak(puVar2 + _DAT_112729f1c);
    _objc_storeStrong(puVar2 + _DAT_112729f00,0);
    _objc_storeStrong(puVar2 + _DAT_112729f24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_112729f0c,0);
    return;
  }
  return;
}



/* Entry: 1057e2ff8; end: 1057e309b; -[SCMessagingNotificationsCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e2ff8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729f18);
  _objc_destroyWeak(param_1 + _DAT_112729f20);
  _objc_destroyWeak(param_1 + _DAT_112729f14);
  _objc_destroyWeak(param_1 + _DAT_112729f08);
  _objc_destroyWeak(param_1 + _DAT_112729f10);
  _objc_destroyWeak(param_1 + _DAT_112729f04);
  _objc_destroyWeak(param_1 + _DAT_112729f1c);
  _objc_storeStrong(param_1 + _DAT_112729f00,0);
  _objc_storeStrong(param_1 + _DAT_112729f24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729f0c,0);
  return;
}



/* Entry: 1057e309c; end: 1057e30ff; -[SCNotificationCleanupMetricsLogger init] */

undefined1 * FUN_1057e309c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea5b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126be900;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057e3100; end: 1057e311b; -[SCNotificationCleanupMetricsLogger logNotificationRemovedWithReason:] */

/* WARNING: Removing unreachable block (ram,0x0001057e35d0) */
/* WARNING: Removing unreachable block (ram,0x0001057e3754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e3100(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110e03e58;
  lVar1 = *(long *)(param_1 + 8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110e03e58);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110e03e58);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e03e58);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110e03e58);
    _objc_release(&PTR____CFConstantStringClassReference_110e03e58);
    func_0x00010002b838(auStack_88,ppuVar3);
    unaff_x24 = auStack_70;
    func_0x00010002b838(unaff_x24,&DAT_10f6842c6);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b4018,&uStack_c0,1);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110e03e58);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110e03e58);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_a0);
    _objc_release(&PTR____CFConstantStringClassReference_110e03e58);
    _objc_release(param_3);
    __Unwind_Resume();
    if (pcVar2 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = pcVar2 + _DAT_112729f48;
      _objc_loadWeakRetained(pcVar11);
    }
    pcVar4 = pcVar11;
    func_0x00010c0d5c80(pcVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar11);
    pcVar11 = pcVar2;
    FUN_1057e3910(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar11;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar11);
    if (pcVar2 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = pcVar2 + _DAT_112729f44;
      _objc_loadWeakRetained(pcVar11);
    }
    pcVar6 = pcVar11;
    func_0x00010c293740(pcVar11);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    _objc_release(pcVar11);
    puVar8 = PTR_PTR_1126be908;
    _objc_alloc();
    func_0x00010c02e420();
    uVar9 = *(undefined8 *)(pcVar2 + _DAT_112729f3c);
    *(undefined **)(pcVar2 + _DAT_112729f3c) = puVar8;
    _objc_release(uVar9);
    FUN_1057e3910(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar2;
    func_0x00010bf05c00();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befabc0();
    _objc_release(pcVar6);
    _objc_release(pcVar11);
    _objc_release(pcVar2);
    _objc_release(pcVar7);
    _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
    return;
  }
  return;
}



/* Entry: 1057e311c; end: 1057e3137; -[SCNotificationCleanupMetricsLogger logNotificationKeptWithReason:] */

/* WARNING: Removing unreachable block (ram,0x0001057e35d0) */
/* WARNING: Removing unreachable block (ram,0x0001057e3754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e311c(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110e03e78;
  lVar1 = *(long *)(param_1 + 8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110e03e78);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110e03e78);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e03e78);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110e03e78);
    _objc_release(&PTR____CFConstantStringClassReference_110e03e78);
    func_0x00010002b838(auStack_88,ppuVar3);
    unaff_x24 = auStack_70;
    func_0x00010002b838(unaff_x24,&DAT_10f6842c6);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b4018,&uStack_c0,1);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110e03e78);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110e03e78);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_a0);
    _objc_release(&PTR____CFConstantStringClassReference_110e03e78);
    _objc_release(param_3);
    __Unwind_Resume();
    if (pcVar2 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = pcVar2 + _DAT_112729f48;
      _objc_loadWeakRetained(pcVar11);
    }
    pcVar4 = pcVar11;
    func_0x00010c0d5c80(pcVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar11);
    pcVar11 = pcVar2;
    FUN_1057e3910(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar11;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar11);
    if (pcVar2 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = pcVar2 + _DAT_112729f44;
      _objc_loadWeakRetained(pcVar11);
    }
    pcVar6 = pcVar11;
    func_0x00010c293740(pcVar11);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    _objc_release(pcVar11);
    puVar8 = PTR_PTR_1126be908;
    _objc_alloc();
    func_0x00010c02e420();
    uVar9 = *(undefined8 *)(pcVar2 + _DAT_112729f3c);
    *(undefined **)(pcVar2 + _DAT_112729f3c) = puVar8;
    _objc_release(uVar9);
    FUN_1057e3910(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar2;
    func_0x00010bf05c00();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befabc0();
    _objc_release(pcVar6);
    _objc_release(pcVar11);
    _objc_release(pcVar2);
    _objc_release(pcVar7);
    _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
    return;
  }
  return;
}



/* Entry: 1057e3138; end: 1057e3143; -[SCNotificationCleanupMetricsLogger .cxx_destruct] */

void FUN_1057e3138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057e3144; end: 1057e320b; -[SCSnapNotificationRemover initWithSnapStateLifecycleObservable:notificationRemover:] */

undefined1 *
FUN_1057e3144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea5c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010be66dc0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057e320c; end: 1057e32d7; -[SCSnapNotificationRemover _observeSnapStateLifecycle] */

void FUN_1057e320c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057e32d8; end: 1057e337b;  */

void FUN_1057e32d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bffc0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1057e337c; end: 1057e33c3;  */

void FUN_1057e337c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5db40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e33c4; end: 1057e345f; -[SCSnapNotificationRemover _matchSnapViewed:] */

void FUN_1057e33c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c19f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12de40(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057e3460; end: 1057e349b; -[SCSnapNotificationRemover .cxx_destruct] */

void FUN_1057e3460(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057e349c; end: 1057e350f; -[SCGrapheneNotificationCleanupMetric2 init] */

undefined1 * FUN_1057e349c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057e3510; end: 1057e3783;  */

/* WARNING: Removing unreachable block (ram,0x0001057e3754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e3510(long param_1,char *param_2,char *param_3,int param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
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
    if (param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108b4018,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    if (pcVar1 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar10 = pcVar1 + _DAT_112729f48;
      _objc_loadWeakRetained(pcVar10);
    }
    pcVar2 = pcVar10;
    func_0x00010c0d5c80(pcVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar10);
    pcVar10 = pcVar1;
    FUN_1057e3910(pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar10;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar10);
    if (pcVar1 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar10 = pcVar1 + _DAT_112729f44;
      _objc_loadWeakRetained(pcVar10);
    }
    pcVar4 = pcVar10;
    func_0x00010c293740(pcVar10);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
    _objc_release(pcVar10);
    puVar6 = PTR_PTR_1126be908;
    _objc_alloc();
    func_0x00010c02e420();
    uVar7 = *(undefined8 *)(pcVar1 + _DAT_112729f3c);
    *(undefined **)(pcVar1 + _DAT_112729f3c) = puVar6;
    _objc_release(uVar7);
    FUN_1057e3910(pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar1;
    func_0x00010bf05c00();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befabc0();
    _objc_release(pcVar4);
    _objc_release(pcVar10);
    _objc_release(pcVar1);
    _objc_release(pcVar5);
    _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 1057e3784; end: 1057e390f; -[SCNativeMessagingNotificationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e3784(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112729f48;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010c0d5c80(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1;
  FUN_1057e3910(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112729f44;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c293740(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar5 = PTR_PTR_1126be908;
  _objc_alloc();
  func_0x00010c02e420();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112729f3c);
  *(undefined **)(param_1 + _DAT_112729f3c) = puVar5;
  _objc_release(uVar6);
  FUN_1057e3910(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057e3910; end: 1057e3933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e3910(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112729f40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057e3934; end: 1057e39e7; -[SCNativeMessagingNotificationServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e3934(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_112729f40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126ea5d0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057e39e8; end: 1057e3a3b; -[SCNativeMessagingNotificationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057e39e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729f48);
  _objc_destroyWeak(param_1 + _DAT_112729f40);
  _objc_destroyWeak(param_1 + _DAT_112729f44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729f3c,0);
  return;
}



/* Entry: 1057e3a3c; end: 1057e3b1f; -[SCNativeMessagingNotificationProcessor initWithNativeSessionManagerFuture:notificationManager:userId:] */

undefined1 *
FUN_1057e3a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea5d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126be910;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057e3b20; end: 1057e3b27; -[SCNativeMessagingNotificationProcessor shouldFilterNotification:] */

void FUN_1057e3b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2305d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_shouldFilterNotification_withSys_112669b98,param_3,0);
  return;
}



/* Entry: 1057e3b28; end: 1057e3d33; -[SCNativeMessagingNotificationProcessor shouldFilterNotification:withSystemCompletion:] */

undefined8 FUN_1057e3b28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf0a2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  lVar2 = param_3;
  func_0x00010c11c420(param_3);
  func_0x00010c25d500(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb50c0(param_1,param_2,param_3);
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c07da00();
    if ((int)lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_3;
      func_0x00010c07c5e0(param_3);
      func_0x00010c0af880(uVar6,param_2,0,puVar3,lVar2,
                          &PTR____CFConstantStringClassReference_110e03e98);
      uVar6 = 1;
      goto LAB_1057e3c20;
    }
    lVar2 = param_3;
    func_0x00010c07c5e0();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_3;
    func_0x00010c07c5e0(param_3);
    if ((int)lVar2 == 0) {
      func_0x00010c0af880(uVar6,param_2,1,puVar3,lVar4,0);
      puVar5 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c11c420();
      if ((lVar2 == 1) || (lVar2 = param_3, func_0x00010c11c420(), lVar2 == 0x2a)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        lVar2 = param_3;
        func_0x00010c07c5e0(param_3);
        func_0x00010c0af8a0(uVar6,param_2,0,puVar3,lVar2,
                            &PTR____CFConstantStringClassReference_110e03ed8);
        func_0x00010be82680(param_1,param_2,puVar5,param_3,param_4);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        lVar2 = param_3;
        func_0x00010c07c5e0(param_3);
        func_0x00010c0af8a0(uVar6,param_2,1,puVar3,lVar2,0);
        func_0x00010bec9cc0(param_1,param_2,puVar5,param_3,param_4);
      }
      _objc_release(puVar5);
      uVar6 = 3;
      goto LAB_1057e3c20;
    }
    func_0x00010c0af880(uVar6,param_2,0,puVar3,lVar4,
                        &PTR____CFConstantStringClassReference_110e03eb8);
  }
  uVar6 = 0;
LAB_1057e3c20:
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1057e3d34; end: 1057e3f07; -[SCNativeMessagingNotificationProcessor _shouldProcessConversation:] */

undefined8 FUN_1057e3d34(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1370;
  uVar1 = param_3;
  func_0x00010c11c420(param_3);
  func_0x00010c25d500(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0a2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e03ef8;
  }
  else {
    uVar1 = param_3;
    func_0x00010c11c420();
    if ((uVar1 == 199) || (uVar1 = param_3, func_0x00010c073d60(), (uVar1 & 1) != 0)) {
LAB_1057e3dc4:
      uVar4 = 1;
      goto LAB_1057e3dfc;
    }
    uVar1 = param_3;
    func_0x00010c15df60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e03f18;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf87400();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c11c420();
        if ((uVar1 != 0x73) && (uVar1 = param_3, func_0x00010c11c420(), uVar1 != 0x71)) {
          uVar1 = param_3;
          func_0x00010c11c420();
          if ((6 < uVar1 - 0x1c) || ((99U >> (ulong)((uint)(uVar1 - 0x1c) & 0x1f) & 1) == 0)) {
            ppuVar5 = &PTR____CFConstantStringClassReference_110e03f58;
            if ((((1 < uVar1 - 0x25) &&
                 (ppuVar5 = &PTR____CFConstantStringClassReference_110e03f58,
                 (uVar1 - 0x1f & 0xfffffffffffffffa) != 0)) &&
                (uVar1 = param_3, func_0x00010c11c420(), uVar1 != 0xe)) &&
               ((uVar1 = param_3, func_0x00010c11c420(), uVar1 != 0x17 &&
                (uVar1 = param_3, func_0x00010c11c420(), uVar1 != 0x5e)))) goto LAB_1057e3dc4;
            goto LAB_1057e3dd4;
          }
        }
        ppuVar5 = &PTR____CFConstantStringClassReference_110e03f58;
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e03f38;
      }
    }
  }
LAB_1057e3dd4:
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c07c5e0(param_3);
  func_0x00010c0af880(uVar4,param_2,0,puVar2,uVar1,ppuVar5);
  uVar4 = 0;
LAB_1057e3dfc:
  _objc_release(puVar2);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1057e3f08; end: 1057e4023; -[SCNativeMessagingNotificationProcessor _processSyncedConversationForServerConvId:notification:systemCompletion:] */

void FUN_1057e3f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be1dca0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e4024; end: 1057e4077;  */

void FUN_1057e4024(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be906e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e4078; end: 1057e4397; -[SCNativeMessagingNotificationProcessor _syncServerConversation:notification:systemCompletion:] */

void FUN_1057e4078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126be918;
  _objc_alloc();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1057e4398;
  puStack_a8 = &UNK_1108b40c8;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_5);
  puStack_100 = puVar3;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1057e4434;
  puStack_e8 = &UNK_1108b3f88;
  uStack_90 = param_5;
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_4);
  uStack_e0 = param_4;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  _objc_retain(param_5);
  uStack_d0 = param_5;
  func_0x00010c04f4c0();
  uVar4 = param_4;
  func_0x00010bfce860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b41e0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf0a2e0(param_4);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004e00();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_108,auStack_80);
  _objc_retain(param_4);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e4398; end: 1057e4433;  */

void FUN_1057e4398(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b1370;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11c420(uVar2);
    func_0x00010c25d500(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c07c5e0(uVar2);
    func_0x00010c0b1660(uVar4,param_2,1,puVar3,uVar2,0);
    _objc_release(puVar3);
    func_0x00010be31920(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057e4434; end: 1057e4543;  */

void FUN_1057e4434(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b1370;
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c11c420(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d500(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07c5e0(*(undefined8 *)(param_1 + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1660(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be82680(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057e4544; end: 1057e4623;  */

void FUN_1057e4544(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1370;
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c11c420(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c25d500(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c5e0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c0b1660(uVar4);
      _objc_release(puVar3);
    }
    func_0x00010c2665a0(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057e4624; end: 1057e489b; -[SCNativeMessagingNotificationProcessor _handleSyncServerConversationSuccessForServerConvId:notification:systemCompletion:] */

void FUN_1057e4624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ba518;
  _objc_alloc();
  func_0x00010bf0a360(param_4);
  func_0x00010c044c00();
  puVar2 = PTR_PTR_1126ba510;
  _objc_alloc();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1057e489c;
  puStack_a0 = &UNK_1108b4128;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_c0,auStack_78);
  _objc_retain(param_5);
  func_0x00010c04f4c0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010c297260(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_c0);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057e489c; end: 1057e48f3;  */

void FUN_1057e489c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be298a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e48f4; end: 1057e496b;  */

void FUN_1057e48f4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057e496c; end: 1057e4a5b; -[SCNativeMessagingNotificationProcessor _handleFetchMessageSuccessForServerConvId:message:notification:systemCompletion:] */

void FUN_1057e496c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_5;
  func_0x00010c11c420();
  iVar1 = (int)uVar2;
  func_0x000107fcc688();
  if (iVar1 == 0) {
    uVar2 = param_4;
    func_0x00010c07bc00(param_4,param_2,*(undefined8 *)(param_1 + 0x18));
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = param_5;
    func_0x00010c15de20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c07bbe0(param_4,param_2,uVar2);
    _objc_release(uVar2);
    iVar1 = (int)uVar3;
  }
  if (iVar1 == 0) {
    func_0x00010be82680(param_1,param_2,param_3,param_5,param_6);
  }
  else {
    func_0x00010bf436e0(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e4a5c; end: 1057e4a5f; -[SCNativeMessagingNotificationProcessor processNotification:] */

void FUN_1057e4a5c(void)

{
  return;
}



/* Entry: 1057e4a60; end: 1057e4bd3; -[SCNativeMessagingNotificationProcessor _getClientConversationIdFromServerConvId:callback:] */

void FUN_1057e4a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126be920;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057e4bd4;
  puStack_68 = &UNK_1108b4158;
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retain(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1057e4be0;
  puStack_98 = &UNK_110875d40;
  uStack_60 = param_3;
  _objc_retain(param_3);
  uStack_90 = param_3;
  uStack_88 = param_4;
  _objc_retain(param_4);
  func_0x00010c04f540(puVar2,param_2,&puStack_80,&puStack_b0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1057e4bf0;
  puStack_c8 = &UNK_1108b3fb8;
  uStack_c0 = param_3;
  puStack_b8 = puVar2;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c297260(uVar3,param_2,&puStack_e0,0);
  _objc_release(puStack_b8);
  _objc_release(uStack_c0);
  _objc_release(puVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1057e4bd4; end: 1057e4bef;  */

void FUN_1057e4bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057e4bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1057e4bf0; end: 1057e4c2b;  */

void FUN_1057e4bf0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc7e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057e4c2c; end: 1057e4d7f; -[SCNativeMessagingNotificationProcessor _repostNotification:clientId:systemCompletion:] */

void FUN_1057e4c2c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_4 != 0) && (lVar2 != 0)) {
    lVar2 = param_4;
    func_0x00010c272380(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e0fcf8);
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c037e60(puVar3,param_2,param_3,puVar4);
  _objc_release(puVar4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0c0();
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057e4d80; end: 1057e4dc3; -[SCNativeMessagingNotificationProcessor .cxx_destruct] */

void FUN_1057e4d80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057e4dc4; end: 1057e4e27; -[SCGrapheneMessagingNotificationReporter init] */

undefined1 * FUN_1057e4dc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea5e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126be928;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057e4e28; end: 1057e4e6f; -[SCGrapheneMessagingNotificationReporter logShouldProcessConvWithResult:notifType:reposted:reason:] */

/* WARNING: Removing unreachable block (ram,0x0001057e55a8) */
/* WARNING: Removing unreachable block (ram,0x0001057e5274) */
/* WARNING: Removing unreachable block (ram,0x0001057e58dc) */

void FUN_1057e4e28(long param_1,undefined8 param_2,int param_3,char *param_4,int param_5,
                  undefined **param_6)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  long *plVar34;
  undefined **unaff_x25;
  char *unaff_x26;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined *apuStack_278 [3];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  char *pcStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined *apuStack_198 [3];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  char *pcStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *apuStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dabe78;
  if (param_6 != (undefined **)0x0) {
    ppuVar6 = param_6;
  }
  ppuVar26 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_5 == 0) {
    ppuVar26 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuVar29 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar29 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuVar33 = (undefined **)0x1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar6;
  ppuVar17 = ppuVar26;
  ppuVar30 = ppuVar29;
  pcVar7 = param_4;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar29);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar34 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(apuStack_b8,pcVar2);
    _objc_retain(ppuVar26);
    if (ppuVar26 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar26);
      pcVar2 = (char *)ppuVar26;
      func_0x00010bdc3520(ppuVar26);
    }
    _objc_release(ppuVar26);
    func_0x00010002b838(auStack_a0,pcVar2);
    _objc_retain(ppuVar29);
    if (ppuVar29 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar29);
      pcVar2 = (char *)ppuVar29;
      func_0x00010bdc3520(ppuVar29);
    }
    _objc_release(ppuVar29);
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x26 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x26);
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&puStack_d8,apuStack_b8,&lStack_58,4);
    ppuVar9 = (undefined **)&UNK_1108b4188;
    unaff_x25 = &puStack_d8;
    ppuVar17 = &puStack_d8;
    ppuVar30 = (undefined **)0x1;
    (**(code **)(*plVar34 + 0x18))(plVar34);
    ppuStack_c0 = unaff_x25;
    func_0x00010007e5dc(&ppuStack_c0);
    lVar1 = 0;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(ppuVar29);
  _objc_release(ppuVar26);
  ppuVar3 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  ppuStack_120 = apuStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != ppuStack_120);
  _objc_release(param_4);
  _objc_release(ppuVar29);
  _objc_release(ppuVar26);
  _objc_release(ppuVar6);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_e8 = FUN_1057e52b4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = ppuVar9;
  ppuVar28 = ppuVar17;
  ppuVar31 = ppuVar30;
  pcVar2 = pcVar7;
  ppuVar32 = ppuVar33;
  pcStack_130 = unaff_x26;
  ppuStack_128 = unaff_x25;
  ppuStack_118 = ppuVar3;
  pcStack_110 = param_4;
  ppuStack_108 = ppuVar29;
  ppuStack_100 = ppuVar26;
  ppuStack_f8 = ppuVar6;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar30);
  _objc_retain(pcVar7);
  if (ppuVar4 != (undefined **)0x0) {
    plVar34 = (long *)ppuVar4[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)ppuVar9;
      _objc_retainAutorelease(ppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    func_0x00010002b838(apuStack_198,pcVar5);
    _objc_retain(ppuVar17);
    if (ppuVar17 == (undefined **)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar17);
      pcVar5 = (char *)ppuVar17;
      func_0x00010bdc3520(ppuVar17);
    }
    _objc_release(ppuVar17);
    func_0x00010002b838(auStack_180,pcVar5);
    _objc_retain(ppuVar30);
    if (ppuVar30 == (undefined **)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar30);
      pcVar5 = (char *)ppuVar30;
      func_0x00010bdc3520(ppuVar30);
    }
    _objc_release(ppuVar30);
    func_0x00010002b838(auStack_168,pcVar5);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      unaff_x26 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_150,unaff_x26);
    puStack_1b8 = (undefined *)0x0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&puStack_1b8,apuStack_198,&lStack_138,4);
    ppuVar18 = (undefined **)&UNK_1108b41d8;
    unaff_x25 = &puStack_1b8;
    ppuVar28 = &puStack_1b8;
    (**(code **)(*plVar34 + 0x18))(plVar34);
    ppuStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&ppuStack_1a0);
    lVar1 = 0;
    ppuVar31 = ppuVar33;
    do {
      if ((&cStack_139)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(pcVar7);
  _objc_release(ppuVar30);
  _objc_release(ppuVar17);
  ppuVar6 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  ppuStack_200 = apuStack_198;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != ppuStack_200);
  _objc_release(pcVar7);
  _objc_release(ppuVar30);
  _objc_release(ppuVar17);
  _objc_release(ppuVar9);
  ppuVar33 = ppuVar6;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1057e55e8;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = ppuVar18;
  ppuVar29 = ppuVar28;
  ppuVar3 = ppuVar31;
  pcVar5 = pcVar2;
  pcStack_210 = unaff_x26;
  ppuStack_208 = unaff_x25;
  ppuStack_1f8 = ppuVar6;
  pcStack_1f0 = pcVar7;
  ppuStack_1e8 = ppuVar30;
  ppuStack_1e0 = ppuVar17;
  ppuStack_1d8 = ppuVar9;
  ppuStack_1d0 = &puStack_f0;
  _objc_retain(ppuVar18);
  _objc_retain(ppuVar28);
  _objc_retain(ppuVar31);
  _objc_retain(pcVar2);
  if (ppuVar33 != (undefined **)0x0) {
    plVar34 = (long *)ppuVar33[1];
    _objc_retain(ppuVar18);
    if (ppuVar18 == (undefined **)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)ppuVar18;
      _objc_retainAutorelease(ppuVar18);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar18);
    func_0x00010002b838(apuStack_278,pcVar7);
    _objc_retain(ppuVar28);
    if (ppuVar28 == (undefined **)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar28);
      pcVar7 = (char *)ppuVar28;
      func_0x00010bdc3520(ppuVar28);
    }
    _objc_release(ppuVar28);
    func_0x00010002b838(auStack_260,pcVar7);
    _objc_retain(ppuVar31);
    if (ppuVar31 == (undefined **)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar31);
      pcVar7 = (char *)ppuVar31;
      func_0x00010bdc3520(ppuVar31);
    }
    _objc_release(ppuVar31);
    func_0x00010002b838(auStack_248,pcVar7);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar7 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_230,pcVar7);
    puStack_298 = (undefined *)0x0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&puStack_298,apuStack_278,&lStack_218,4);
    ppuVar26 = (undefined **)&UNK_1108b4228;
    unaff_x25 = &puStack_298;
    ppuVar29 = &puStack_298;
    (**(code **)(*plVar34 + 0x18))(plVar34);
    ppuStack_280 = unaff_x25;
    func_0x00010007e5dc(&ppuStack_280);
    lVar1 = 0;
    ppuVar3 = ppuVar32;
    do {
      if ((&cStack_219)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(pcVar2);
  _objc_release(ppuVar31);
  _objc_release(ppuVar28);
  ppuVar6 = ppuVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != apuStack_278);
  _objc_release(pcVar2);
  _objc_release(ppuVar31);
  _objc_release(ppuVar28);
  _objc_release(ppuVar18);
  __Unwind_Resume();
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar28 = ppuVar26;
  _objc_retain();
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar3);
  _objc_retain(pcVar5);
  puVar8 = PTR_PTR_1126be788;
  _objc_retain(ppuVar29);
  _objc_opt_new();
  func_0x00010c1805c0();
  ppuVar9 = ppuVar6;
  func_0x00010c15f2e0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar8);
  _objc_release(ppuVar9);
  puVar10 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126be940;
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar3);
  _objc_retain(puVar8);
  _objc_opt_new(puVar11);
  puVar12 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar13 = PTR_PTR_1126b0cd8;
  ppuVar9 = ppuVar26;
  func_0x00010c2923e0(ppuVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar26);
  func_0x00010bdc35c0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  puVar14 = puVar13;
  func_0x00010bfe5d80(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar12);
  _objc_release(puVar14);
  func_0x00010c20cde0(puVar11);
  func_0x00010c20dbc0(puVar11);
  _objc_release(ppuVar3);
  func_0x00010c205740(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar13);
  _objc_release(puVar12);
  func_0x00010c1f5be0(puVar10);
  _objc_release(puVar11);
  puVar13 = PTR_PTR_1126be758;
  _objc_retain(puVar8);
  _objc_opt_new();
  puVar11 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar13);
  puVar12 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar8);
  puVar14 = puVar13;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar11 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar12 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar14 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar14 = PTR_PTR_1126be938;
  _objc_alloc();
  pcVar7 = pcVar5;
  func_0x000108f52130(pcVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar6;
  func_0x00010c15f2e0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar6;
  func_0x00010bf0e700(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  ppuVar30 = ppuVar6;
  func_0x00010bf5b080(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = ppuVar30;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  ppuVar18 = ppuVar6;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(pcVar2);
  _objc_release(ppuVar18);
  _objc_release(ppuVar33);
  _objc_release(ppuVar30);
  _objc_release(ppuVar17);
  _objc_release(ppuVar9);
  _objc_release(pcVar7);
  puVar15 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar29);
  func_0x00010c2aaec0(puVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar20 = puVar15;
  func_0x00010bf21f60(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(puVar19);
  puVar19 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar20 = puVar12;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar23 = puVar13;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar19;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar19);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar16);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(pcVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar26);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar28);
    puStack_468 = &uStack_470;
    uStack_470 = 0;
    uStack_460 = 0x3032000000;
    pcStack_458 = FUN_1057e61e8;
    uStack_450 = 0x1057e61f8;
    uStack_448 = 0;
    puStack_488 = &uStack_490;
    uStack_490 = 0;
    uStack_480 = 0x2020000000;
    uStack_478 = 0;
    ppuVar26 = ppuVar6;
    func_0x00010bf0e700(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar28);
    func_0x00010c0c1320(ppuVar26);
    _objc_release(ppuVar26);
    lVar1 = puStack_468[5];
    func_0x00010c08fa60();
    if ((lVar1 == 0) || (*(int *)(puStack_488 + 3) == 0)) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = (undefined *)puStack_468[5];
      func_0x000108f139ec(puVar27);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar28);
    _objc_release(ppuVar6);
    __Block_object_dispose(&uStack_490,8);
    __Block_object_dispose(&uStack_470,8);
    _objc_release(uStack_448);
    _objc_release(ppuVar28);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1057e4e70; end: 1057e4eb7; -[SCGrapheneMessagingNotificationReporter logShouldSyncConvWithResult:notifType:reposted:reason:] */

/* WARNING: Removing unreachable block (ram,0x0001057e55a8) */
/* WARNING: Removing unreachable block (ram,0x0001057e58dc) */

void FUN_1057e4e70(long param_1,undefined8 param_2,int param_3,char *param_4,int param_5,
                  undefined **param_6)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  long *plVar33;
  undefined **unaff_x25;
  char *unaff_x26;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined *apuStack_198 [3];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  char *pcStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *apuStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dabe78;
  if (param_6 != (undefined **)0x0) {
    ppuVar6 = param_6;
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_5 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuVar17 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar17 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuVar32 = (undefined **)0x1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = ppuVar6;
  ppuVar19 = ppuVar8;
  ppuVar30 = ppuVar17;
  pcVar16 = param_4;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar17);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar33 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(apuStack_b8,pcVar2);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar8);
      pcVar2 = (char *)ppuVar8;
      func_0x00010bdc3520(ppuVar8);
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_a0,pcVar2);
    _objc_retain(ppuVar17);
    if (ppuVar17 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar17);
      pcVar2 = (char *)ppuVar17;
      func_0x00010bdc3520(ppuVar17);
    }
    _objc_release(ppuVar17);
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x26 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x26);
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&puStack_d8,apuStack_b8,&lStack_58,4);
    ppuVar18 = (undefined **)&UNK_1108b41d8;
    unaff_x25 = &puStack_d8;
    ppuVar19 = &puStack_d8;
    ppuVar30 = (undefined **)0x1;
    (**(code **)(*plVar33 + 0x18))(plVar33);
    ppuStack_c0 = unaff_x25;
    func_0x00010007e5dc(&ppuStack_c0);
    lVar1 = 0;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(ppuVar17);
  _objc_release(ppuVar8);
  ppuVar3 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  ppuStack_120 = apuStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != ppuStack_120);
  _objc_release(param_4);
  _objc_release(ppuVar17);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_e8 = FUN_1057e55e8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar28 = ppuVar18;
  ppuVar29 = ppuVar19;
  ppuVar31 = ppuVar30;
  pcVar2 = pcVar16;
  pcStack_130 = unaff_x26;
  ppuStack_128 = unaff_x25;
  ppuStack_118 = ppuVar3;
  pcStack_110 = param_4;
  ppuStack_108 = ppuVar17;
  ppuStack_100 = ppuVar8;
  ppuStack_f8 = ppuVar6;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar18);
  _objc_retain(ppuVar19);
  _objc_retain(ppuVar30);
  _objc_retain(pcVar16);
  if (ppuVar4 != (undefined **)0x0) {
    plVar33 = (long *)ppuVar4[1];
    _objc_retain(ppuVar18);
    if (ppuVar18 == (undefined **)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)ppuVar18;
      _objc_retainAutorelease(ppuVar18);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar18);
    func_0x00010002b838(apuStack_198,pcVar5);
    _objc_retain(ppuVar19);
    if (ppuVar19 == (undefined **)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar19);
      pcVar5 = (char *)ppuVar19;
      func_0x00010bdc3520(ppuVar19);
    }
    _objc_release(ppuVar19);
    func_0x00010002b838(auStack_180,pcVar5);
    _objc_retain(ppuVar30);
    if (ppuVar30 == (undefined **)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar30);
      pcVar5 = (char *)ppuVar30;
      func_0x00010bdc3520(ppuVar30);
    }
    _objc_release(ppuVar30);
    func_0x00010002b838(auStack_168,pcVar5);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      pcVar5 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x00010002b838(auStack_150,pcVar5);
    puStack_1b8 = (undefined *)0x0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&puStack_1b8,apuStack_198,&lStack_138,4);
    ppuVar28 = (undefined **)&UNK_1108b4228;
    unaff_x25 = &puStack_1b8;
    ppuVar29 = &puStack_1b8;
    (**(code **)(*plVar33 + 0x18))(plVar33);
    ppuStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&ppuStack_1a0);
    lVar1 = 0;
    ppuVar31 = ppuVar32;
    do {
      if ((&cStack_139)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(pcVar16);
  _objc_release(ppuVar30);
  _objc_release(ppuVar19);
  ppuVar6 = ppuVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != apuStack_198);
  _objc_release(pcVar16);
  _objc_release(ppuVar30);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  __Unwind_Resume();
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar32 = ppuVar28;
  _objc_retain();
  _objc_retain(ppuVar28);
  _objc_retain(ppuVar31);
  _objc_retain(pcVar2);
  puVar7 = PTR_PTR_1126be788;
  _objc_retain(ppuVar29);
  _objc_opt_new();
  func_0x00010c1805c0();
  ppuVar8 = ppuVar6;
  func_0x00010c15f2e0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar7);
  _objc_release(ppuVar8);
  puVar9 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar10 = PTR_PTR_1126be940;
  _objc_retain(ppuVar28);
  _objc_retain(ppuVar31);
  _objc_retain(puVar7);
  _objc_opt_new(puVar10);
  puVar11 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar12 = PTR_PTR_1126b0cd8;
  ppuVar8 = ppuVar28;
  func_0x00010c2923e0(ppuVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar28);
  func_0x00010bdc35c0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  puVar13 = puVar12;
  func_0x00010bfe5d80(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar11);
  _objc_release(puVar13);
  func_0x00010c20cde0(puVar10);
  func_0x00010c20dbc0(puVar10);
  _objc_release(ppuVar31);
  func_0x00010c205740(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar11);
  func_0x00010c1f5be0(puVar9);
  _objc_release(puVar10);
  puVar12 = PTR_PTR_1126be758;
  _objc_retain(puVar7);
  _objc_opt_new();
  puVar10 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar12);
  puVar11 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar7);
  puVar13 = puVar12;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar10 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar13 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar13 = PTR_PTR_1126be938;
  _objc_alloc();
  pcVar16 = pcVar2;
  func_0x000108f52130(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010c15f2e0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar6;
  func_0x00010bf0e700(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  ppuVar18 = ppuVar6;
  func_0x00010bf5b080(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  ppuVar30 = ppuVar6;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(pcVar5);
  _objc_release(ppuVar30);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar8);
  _objc_release(pcVar16);
  puVar14 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar29);
  func_0x00010c2aaec0(puVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar21 = puVar14;
  func_0x00010bf21f60(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar20);
  puVar20 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar21 = puVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar24 = puVar12;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar20;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar20);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(puVar22);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(pcVar2);
  _objc_release(ppuVar31);
  _objc_release(ppuVar28);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar32);
    puStack_388 = &uStack_390;
    uStack_390 = 0;
    uStack_380 = 0x3032000000;
    pcStack_378 = FUN_1057e61e8;
    uStack_370 = 0x1057e61f8;
    uStack_368 = 0;
    puStack_3a8 = &uStack_3b0;
    uStack_3b0 = 0;
    uStack_3a0 = 0x2020000000;
    uStack_398 = 0;
    ppuVar8 = ppuVar6;
    func_0x00010bf0e700(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar32);
    func_0x00010c0c1320(ppuVar8);
    _objc_release(ppuVar8);
    lVar1 = puStack_388[5];
    func_0x00010c08fa60();
    if ((lVar1 == 0) || (*(int *)(puStack_3a8 + 3) == 0)) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = (undefined *)puStack_388[5];
      func_0x000108f139ec(puVar27);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar32);
    _objc_release(ppuVar6);
    __Block_object_dispose(&uStack_3b0,8);
    __Block_object_dispose(&uStack_390,8);
    _objc_release(uStack_368);
    _objc_release(ppuVar32);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1057e4eb8; end: 1057e4eff; -[SCGrapheneMessagingNotificationReporter logSyncConvResultWithSuccess:notifType:reposted:reason:] */

/* WARNING: Removing unreachable block (ram,0x0001057e58dc) */

void FUN_1057e4eb8(long param_1,undefined8 param_2,int param_3,char *param_4,int param_5,
                  undefined **param_6)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  char *pcVar30;
  long *plVar31;
  undefined **unaff_x25;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *apuStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dabe78;
  if (param_6 != (undefined **)0x0) {
    ppuVar5 = param_6;
  }
  ppuVar13 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_5 == 0) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuVar14 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = ppuVar5;
  ppuVar28 = ppuVar13;
  ppuVar29 = ppuVar14;
  pcVar30 = param_4;
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar14);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar31 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(apuStack_b8,pcVar2);
    _objc_retain(ppuVar13);
    if (ppuVar13 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar13);
      pcVar2 = (char *)ppuVar13;
      func_0x00010bdc3520(ppuVar13);
    }
    _objc_release(ppuVar13);
    func_0x00010002b838(auStack_a0,pcVar2);
    _objc_retain(ppuVar14);
    if (ppuVar14 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar14);
      pcVar2 = (char *)ppuVar14;
      func_0x00010bdc3520(ppuVar14);
    }
    _objc_release(ppuVar14);
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar2);
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&puStack_d8,apuStack_b8,&lStack_58,4);
    ppuVar26 = (undefined **)&UNK_1108b4228;
    unaff_x25 = &puStack_d8;
    ppuVar28 = &puStack_d8;
    ppuVar29 = (undefined **)0x1;
    (**(code **)(*plVar31 + 0x18))(plVar31);
    ppuStack_c0 = unaff_x25;
    func_0x00010007e5dc(&ppuStack_c0);
    lVar1 = 0;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar3 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != apuStack_b8);
  _objc_release(param_4);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar5);
  __Unwind_Resume();
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar27 = ppuVar26;
  _objc_retain();
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar29);
  _objc_retain(pcVar30);
  puVar4 = PTR_PTR_1126be788;
  _objc_retain(ppuVar28);
  _objc_opt_new();
  func_0x00010c1805c0();
  ppuVar5 = ppuVar3;
  func_0x00010c15f2e0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba720(puVar4);
  _objc_release(ppuVar5);
  puVar6 = PTR_PTR_1126be930;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126be940;
  _objc_retain(ppuVar26);
  _objc_retain(ppuVar29);
  _objc_retain(puVar4);
  _objc_opt_new(puVar7);
  puVar8 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar9 = PTR_PTR_1126b0cd8;
  ppuVar5 = ppuVar26;
  func_0x00010c2923e0(ppuVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar26);
  func_0x00010bdc35c0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar10 = puVar9;
  func_0x00010bfe5d80(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar8);
  _objc_release(puVar10);
  func_0x00010c20cde0(puVar7);
  func_0x00010c20dbc0(puVar7);
  _objc_release(ppuVar29);
  func_0x00010c205740(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c1f5be0(puVar6);
  _objc_release(puVar7);
  puVar9 = PTR_PTR_1126be758;
  _objc_retain(puVar4);
  _objc_opt_new();
  puVar7 = PTR_PTR_1126be948;
  _objc_opt_new(PTR_PTR_1126be948);
  func_0x00010c16cf20(puVar9);
  puVar8 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c205720();
  _objc_release(puVar4);
  puVar10 = puVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126be950;
  _objc_alloc(PTR_PTR_1126be950);
  func_0x00010c04dde0();
  puVar7 = PTR_PTR_1126be958;
  _objc_alloc();
  func_0x00010bff5300();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126be6f0;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126be960;
  _objc_opt_new(PTR_PTR_1126be960);
  puVar10 = PTR_PTR_1126be968;
  _objc_opt_new(PTR_PTR_1126be968);
  func_0x00010c1f5be0();
  func_0x00010c1fec40(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126ba668;
  _objc_opt_new();
  func_0x00010c1fea60();
  puVar10 = PTR_PTR_1126be938;
  _objc_alloc();
  pcVar2 = pcVar30;
  func_0x000108f52130(pcVar30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c15f2e0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar3;
  func_0x00010bf0e700(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  ppuVar14 = ppuVar3;
  func_0x00010bf5b080(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108534aa8();
  ppuVar16 = ppuVar3;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  pcVar17 = pcVar30;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dc60();
  _objc_release(pcVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar5);
  _objc_release(pcVar2);
  puVar11 = PTR_PTR_1126b1a40;
  func_0x00010c0fe200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar28);
  func_0x00010c2aaec0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar19 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar18);
  puVar19 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar21 = puVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar20;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b80();
  puVar22 = puVar9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar19;
  func_0x00010c2adc40();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010c2b3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(pcVar30);
  _objc_release(ppuVar29);
  _objc_release(ppuVar26);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar27);
    puStack_2a8 = &uStack_2b0;
    uStack_2b0 = 0;
    uStack_2a0 = 0x3032000000;
    pcStack_298 = FUN_1057e61e8;
    uStack_290 = 0x1057e61f8;
    uStack_288 = 0;
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x2020000000;
    uStack_2b8 = 0;
    ppuVar5 = ppuVar3;
    func_0x00010bf0e700(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    _objc_retain(ppuVar27);
    func_0x00010c0c1320(ppuVar5);
    _objc_release(ppuVar5);
    lVar1 = puStack_2a8[5];
    func_0x00010c08fa60();
    if ((lVar1 == 0) || (*(int *)(puStack_2c8 + 3) == 0)) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = (undefined *)puStack_2a8[5];
      func_0x000108f139ec(puVar25);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar27);
    _objc_release(ppuVar3);
    __Block_object_dispose(&uStack_2d0,8);
    __Block_object_dispose(&uStack_2b0,8);
    _objc_release(uStack_288);
    _objc_release(ppuVar27);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1057e4f00; end: 1057e4f0b; -[SCGrapheneMessagingNotificationReporter .cxx_destruct] */

void FUN_1057e4f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


