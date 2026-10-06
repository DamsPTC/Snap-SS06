/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10622ad20; end: 10622ad27; -[SCSpotlightRepliesActionHandler _appendThreadedReplies:afterParentCommentId:] */

void FUN_10622ad20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appendThreadedReplies_afterParen_11259f608);
  return;
}



/* Entry: 10622ad28; end: 10622ad2f; -[SCSpotlightRepliesActionHandler _setReactionTypeWithReplyId:reactionTypeId:] */

void FUN_10622ad28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e7d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setReactionTypeWithReplyId_react_112657988);
  return;
}



/* Entry: 10622ad30; end: 10622ad3f; -[SCSpotlightRepliesActionHandler _incrementReplyCount] */

void FUN_10622ad30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_increaseCountByOneForViewCountTy_1125d8a18,1,
             *(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 10622ad40; end: 10622ad93; -[SCSpotlightRepliesActionHandler _didRemoveReplyFromPendingSectionWithApproveAction:] */

void FUN_10622ad40(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x00010bf676e0(*(undefined8 *)(param_1 + 0x50),param_2,2);
  }
  else {
    func_0x00010bfec200(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x58));
  }
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf79ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10622ad94; end: 10622adfb; -[SCSpotlightRepliesActionHandler _didRemoveAllRepliesFromPendingSectionWithApproveAction:] */

void FUN_10622ad94(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef6bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_addAllPendingCountToLiveCount__11259b498,*(undefined8 *)(param_1 + 0x58))
    ;
    return;
  }
  puVar1 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  func_0x00010c03e3a0();
  func_0x00010c1eae40(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622adfc; end: 10622ae3f; -[SCSpotlightRepliesActionHandler _didRemoveReplyFromApprovedSection] */

void FUN_10622adfc(long param_1,undefined8 param_2)

{
  func_0x00010bf676e0(*(undefined8 *)(param_1 + 0x50),param_2,1,*(undefined8 *)(param_1 + 0x58));
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf79aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10622ae40; end: 10622af6b; -[SCSpotlightRepliesActionHandler _presentCameraScopeWithStickerImage:] */

void FUN_10622ae40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03e5a0();
  puVar2 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  lVar3 = param_1;
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23680(uVar5,param_2,lVar4,puVar2,param_1,1,0,param_3,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010be02760(param_1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0),param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622af6c; end: 10622b06f; -[SCSpotlightRepliesActionHandler _presentQuotingCameraScopeWithStickerImage:spotlightReply:] */

void FUN_10622af6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10622b070;
  puStack_60 = &UNK_110850cf8;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_58 = param_1;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10622b070; end: 10622b19f;  */

void FUN_10622b070(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar8 = *(undefined8 *)(lVar1 + 0x110);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100);
  func_0x00010c131f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c131d20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fbe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x5c;
  func_0x00010bc9107c(0x5c);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x00010bad91b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f1e0(uVar8,param_2,uVar9,uVar2,uVar3,uVar10,uVar5,uVar6,uVar7,1,0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10622b1a0; end: 10622b1f7; -[SCSpotlightRepliesActionHandler reportDidCompleteWithCancelled:] */

void FUN_10622b1a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be60e40(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10622b1f8; end: 10622b393; -[SCSpotlightRepliesActionHandler reportDidSubmitWithReasonId:comment:] */

void FUN_10622b1f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0xe8) == 0) goto LAB_10622b368;
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0xe0);
      func_0x00010c0ecf00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar2 == 0) goto LAB_10622b35c;
      lVar1 = *(long *)(param_1 + 0xd8);
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c131d20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c131f60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c242640(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010bfceb20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c0ecf00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132980(lVar1,param_2,uVar4,uVar5,uVar9,uVar6,uVar7,uVar8,param_3,param_4);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(lVar1);
  }
LAB_10622b35c:
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  _objc_release(uVar4);
LAB_10622b368:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10622b394; end: 10622b3df; -[SCSpotlightRepliesActionHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_10622b394(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x68));
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be60e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalDismissalOnCommentsTrayDid_112575d30)
    ;
    return;
  }
  return;
}



/* Entry: 10622b3e0; end: 10622b423; -[SCSpotlightRepliesActionHandler presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

void FUN_10622b3e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c10fbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10622b424; end: 10622b467; -[SCSpotlightRepliesActionHandler detachPresentedUIIfNecessary] */

void FUN_10622b424(long param_1)

{
  func_0x00010bf840c0(*(undefined8 *)(param_1 + 0x140));
  func_0x00010bf6f380(*(undefined8 *)(param_1 + 0xb8));
  if (*(long *)(param_1 + 0xb0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0xb0),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 10622b468; end: 10622b4bf; -[SCSpotlightRepliesActionHandler searchWorkflowDidEnd] */

void FUN_10622b468(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x150);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x150));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be60e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalDismissalOnCommentsTrayDid_112575d30)
    ;
    return;
  }
  return;
}



/* Entry: 10622b4c0; end: 10622b517; -[SCSpotlightRepliesActionHandler didCompleteSpotlightRepliesSettingPageScope:] */

void FUN_10622b4c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be60e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalDismissalOnCommentsTrayDid_112575d30)
    ;
    return;
  }
  return;
}



/* Entry: 10622b518; end: 10622b547; -[SCSpotlightRepliesActionHandler friendProfileDidDismiss:] */

void FUN_10622b518(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be60e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalDismissalOnCommentsTrayDid_112575d30);
  return;
}



/* Entry: 10622b548; end: 10622b54b; -[SCSpotlightRepliesActionHandler dismissCameraScope:] */

void FUN_10622b548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissChatCameraIfNecessary_11255e378);
  return;
}



/* Entry: 10622b54c; end: 10622b593; -[SCSpotlightRepliesActionHandler _dismissChatCameraIfNecessary] */

void FUN_10622b54c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10622b594; end: 10622b597; -[SCSpotlightRepliesActionHandler captureWorkflowWillDismissWithDidSendSnap:] */

void FUN_10622b594(void)

{
  return;
}



/* Entry: 10622b598; end: 10622b59b; -[SCSpotlightRepliesActionHandler captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_10622b598(void)

{
  return;
}



/* Entry: 10622b59c; end: 10622b59f; -[SCSpotlightRepliesActionHandler didStartSnapchattersUpdateDataRequest:] */

void FUN_10622b59c(void)

{
  return;
}



/* Entry: 10622b5a0; end: 10622b60f; -[SCSpotlightRepliesActionHandler didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10622b5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10622b610;
    puStack_20 = &UNK_110866b00;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,0,0,0,0,&puStack_38,0,0,0,0);
  }
  return;
}



/* Entry: 10622b610; end: 10622b69b;  */

void FUN_10622b610(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b8c0(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10622b69c; end: 10622b69f; -[SCSpotlightRepliesActionHandler didDismissSendToPage] */

void FUN_10622b69c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalDismissalOnCommentsTrayDid_112575d30);
  return;
}



/* Entry: 10622b6a0; end: 10622b6c3; -[SCSpotlightRepliesActionHandler commentsSnapReplyPlaybackPresenterDidStart] */

void FUN_10622b6a0(long param_1)

{
  func_0x00010be60e80();
                    /* WARNING: Could not recover jumptable at 0x00010c242cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_snapReplyPlaybackDidStart_11266e558);
  return;
}



/* Entry: 10622b6c4; end: 10622b6e7; -[SCSpotlightRepliesActionHandler commentsSnapReplyPlaybackPresenterDidTearDown] */

void FUN_10622b6c4(long param_1)

{
  func_0x00010be60e40();
                    /* WARNING: Could not recover jumptable at 0x00010c242cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_snapReplyPlaybackDidEnd_11266e550);
  return;
}



/* Entry: 10622b6e8; end: 10622b6eb; -[SCSpotlightRepliesActionHandler commentsSnapReplyCameraDidPresent] */

void FUN_10622b6e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalPresentationOnCommentsTray_112575d40);
  return;
}



/* Entry: 10622b6ec; end: 10622b6ef; -[SCSpotlightRepliesActionHandler commentsSnapReplyCameraDidDismiss] */

void FUN_10622b6ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalDismissalOnCommentsTrayDid_112575d30);
  return;
}



/* Entry: 10622b6f0; end: 10622b707; -[SCSpotlightRepliesActionHandler creatorApprovalDelegate] */

void FUN_10622b6f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10622b708; end: 10622b713; -[SCSpotlightRepliesActionHandler setCreatorApprovalDelegate:] */

void FUN_10622b708(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x170,param_3);
  return;
}



/* Entry: 10622b714; end: 10622b72b; -[SCSpotlightRepliesActionHandler presentingDelegate] */

void FUN_10622b714(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10622b72c; end: 10622b737; -[SCSpotlightRepliesActionHandler setPresentingDelegate:] */

void FUN_10622b72c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x178,param_3);
  return;
}



/* Entry: 10622b738; end: 10622b917; -[SCSpotlightRepliesActionHandler .cxx_destruct] */

void FUN_10622b738(long param_1)

{
  _objc_destroyWeak(param_1 + 0x178);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10622b918; end: 10622ba5b;  */

undefined * FUN_10622b918(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_118 + uVar7 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          puVar5 = (undefined *)0x1;
          goto LAB_10622ba10;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar1 != 0);
  }
  puVar5 = (undefined *)0x0;
LAB_10622ba10:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar7 = param_1;
  func_0x00010bf529e0();
  uVar1 = uVar7;
  if (9 < uVar7) {
    uVar1 = 10;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar3 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c08fa60();
      if (uVar3 != 0) {
        func_0x00010befa120(puVar5,param_2,uVar2);
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10622ba5c; end: 10622bb4f;  */

void FUN_10622ba5c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar6 = param_1;
  func_0x00010bf529e0();
  uVar1 = uVar6;
  if (9 < uVar6) {
    uVar1 = 10;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar3 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010c08fa60();
      if (uVar3 != 0) {
        func_0x00010befa120(puVar2,param_2,uVar4);
      }
      _objc_release(uVar4);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  puVar5 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10622bb50; end: 10622bb9f; -[SCSpotlightRepliesAutoApprovalPendingViewCell initWithFrame:] */

undefined1 * FUN_10622bb50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0890;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10622bba0; end: 10622c08b; -[SCSpotlightRepliesAutoApprovalPendingViewCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622bba0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar27 = (long)_DAT_112743ac4;
  uVar24 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar1;
  _objc_release(uVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar27),param_2,6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar27),param_2,0);
  uVar24 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c213040(uVar24,param_2,1);
  uVar25 = *(undefined8 *)(param_1 + lVar27);
  func_0x000106261fb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar25,param_2,uVar24);
  _objc_release(uVar24);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112743ac8;
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c219b60(uVar24,param_2,0);
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  func_0x000106261b90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar25,param_2,uVar24,0);
  _objc_release(uVar24);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar26),param_2,param_1,
                      PTR_s__launchRepliesSettingPage_11256fa28,0x40);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar27);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar27);
  lStack_a0 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar6;
  func_0x00010bf493c0(0xc03e000000000000,uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar27);
  uStack_98 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar9;
  func_0x00010bf493c0(0x404e000000000000,uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar27);
  uStack_90 = uVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(0xc04e000000000000,uVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar26);
  uStack_88 = uVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar26);
  uStack_80 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0x4039000000000000,uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar25);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar24);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(lVar3 + _DAT_112743acc),param_2,lVar3,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622c08c; end: 10622c0eb; -[SCSpotlightRepliesAutoApprovalPendingViewCell _launchRepliesSettingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c08c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743acc),param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622c0ec; end: 10622c183; +[SCSpotlightRepliesAutoApprovalPendingViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_10622c0ec(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  func_0x00010bf6a8c0(PTR_PTR_1126b6000);
  auVar3._8_8_ = dVar2 * param_4 + -8.0 + -23.0 + -32.0 + -38.0 + -90.0 + -15.0;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10622c184; end: 10622c1bb; -[SCSpotlightRepliesAutoApprovalPendingViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743acc);
  *(undefined8 *)(param_1 + _DAT_112743acc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10622c1bc; end: 10622c26f; -[SCSpotlightRepliesAutoApprovalPendingViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c1bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112743ad0;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    uVar2 = param_3;
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10622c258;
    }
    _objc_retain(param_3);
    uVar2 = *(ulong *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
  }
  _objc_release(uVar2);
LAB_10622c258:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10622c270; end: 10622c27f; -[SCSpotlightRepliesAutoApprovalPendingViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10622c270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112743acc);
}



/* Entry: 10622c280; end: 10622c28f; -[SCSpotlightRepliesAutoApprovalPendingViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10622c280(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112743ad0);
}



/* Entry: 10622c290; end: 10622c2ef; -[SCSpotlightRepliesAutoApprovalPendingViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c290(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743ad0,0);
  _objc_storeStrong(param_1 + _DAT_112743acc,0);
  _objc_storeStrong(param_1 + _DAT_112743ac8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743ac4,0);
  return;
}



/* Entry: 10622c2f0; end: 10622c35f; -[SCSpotlightRepliesCollectionViewCellV2 initWithFrame:] */

undefined1 * FUN_10622c2f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0898;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaf620(puVar1);
    func_0x00010beaf1e0(puVar1);
    func_0x00010be39880(puVar1);
    func_0x00010bead520(puVar1);
    func_0x00010beacc20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10622c360; end: 10622c7ff; -[SCSpotlightRepliesCollectionViewCellV2 _initConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = (long)_DAT_112743ad4;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112743ad8;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743adc);
  *(undefined8 *)(param_1 + _DAT_112743adc) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743ae0);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743ae4);
  *(undefined8 *)(param_1 + _DAT_112743ae4) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743ae8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743aec);
  *(undefined8 *)(param_1 + _DAT_112743aec) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743af0);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112743af4;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743af8);
  *(undefined8 *)(param_1 + _DAT_112743af8) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112743afc;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b00);
  *(undefined8 *)(param_1 + _DAT_112743b00) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743b04);
  *(undefined8 *)(param_1 + _DAT_112743b04) = uVar3;
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743b08);
  *(undefined8 *)(param_1 + _DAT_112743b08) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743b0c);
  *(undefined8 *)(param_1 + _DAT_112743b0c) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar6 = (long)_DAT_112743b10;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b14);
  *(undefined8 *)(param_1 + _DAT_112743b14) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743b18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b1c);
  *(undefined8 *)(param_1 + _DAT_112743b1c) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743b20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743b24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0xc000000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112743b28;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1e3380(0x437a0000,*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010beda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayoutConstraints_112594398);
  return;
}



/* Entry: 10622c800; end: 10622c883; -[SCSpotlightRepliesCollectionViewCellV2 prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c800(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0898;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bf75820(*(undefined8 *)(param_1 + _DAT_112743b2c));
  func_0x00010be94360(param_1);
  *(undefined1 *)(param_1 + _DAT_112743b30) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743b34);
  *(undefined8 *)(param_1 + _DAT_112743b34) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743b38);
  *(undefined8 *)(param_1 + _DAT_112743b38) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 10622c884; end: 10622c8d3; -[SCSpotlightRepliesCollectionViewCellV2 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c884(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf75820(*(undefined8 *)(param_1 + _DAT_112743b2c));
  puStack_28 = PTR_PTR_1126f0898;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10622c8d4; end: 10622c9d3; -[SCSpotlightRepliesCollectionViewCellV2 _setupGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c8d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010c1c8340(0x3fd3333333333333,puVar1);
  func_0x00010c178280(puVar1,param_2,0);
  func_0x00010bef9040(*(undefined8 *)(param_1 + _DAT_112743b24),param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112743b3c);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112743af4);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622c9d4; end: 10622cae7; -[SCSpotlightRepliesCollectionViewCellV2 _setupPriorities] */

/* WARNING: Possible PIC construction at 0x00010622ca20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010622ca44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010622ca68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010622ca8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010622cab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010622ca90) */
/* WARNING: Removing unreachable block (ram,0x00010622ca6c) */
/* WARNING: Removing unreachable block (ram,0x00010622ca48) */
/* WARNING: Removing unreachable block (ram,0x00010622ca24) */
/* WARNING: Removing unreachable block (ram,0x00010622cab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622c9d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112743ad4;
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c181cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x437a0000,*(undefined8 *)(param_1 + lVar1),
             PTR_s_setContentCompressionResistanceP_11263e150,0);
  return;
}



/* Entry: 10622cae8; end: 10622d6e3; -[SCSpotlightRepliesCollectionViewCellV2 _setupRepliesCellView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622cae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar8 = (long)_DAT_112743b24;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar5 = (long)_DAT_112743b44;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1d0120(*(undefined8 *)(param_1 + lVar5),param_2,2);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar7 = (long)_DAT_112743b48;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1374a0(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar7 = (long)_DAT_112743ad8;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b4c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126c9050;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743b10;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b50;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126c51b8;
  _objc_alloc();
  func_0x00010c04eb00();
  lVar5 = (long)_DAT_112743b54;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c219b60(uVar4,param_2,0);
  func_0x000106261c50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar7 = (long)_DAT_112743ad4;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743ae0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar9 = (long)_DAT_112743b58;
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b0c40;
  lVar5 = param_1;
  func_0x00010bf8d060();
  uVar4 = 0x85;
  if (lVar5 != 1) {
    uVar4 = 0x87;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,puVar1,param_2,uVar4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743b5c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1cfce0(uVar4,param_2,1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  func_0x000106261c68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e45c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar6,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fdccccccccccccd,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1fe7a0(0,0,puVar1);
  func_0x00010c1fe720(0x4018000000000000,puVar1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743ae8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uStack_78 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2,param_2,&PTR____CFConstantStringClassReference_110e20938,puVar3);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743afc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar5 = (long)_DAT_112743b40;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743af0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  func_0x000106261ae8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112743b3c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c219b60(uVar4,param_2,0);
  func_0x000106261b30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar7 = (long)_DAT_112743b18;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7),param_2,
                      &PTR____CFConstantStringClassReference_110e45c78);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b60;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b64;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b68;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126c9058;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743af4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar7 = (long)_DAT_112743b20;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b6c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar5 = (long)_DAT_112743b70;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c219b60(uVar4,param_2,0);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  func_0x000106261c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112743b74;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1951a0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar5),param_2,6);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar5),param_2,0xcf,0);
  func_0x00010c1bec80(*(undefined8 *)(param_1 + lVar5),param_2,0xcc,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1a7f60(uVar4,param_2,1);
  FUN_10623ad3c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112743b78;
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar4;
  _objc_release(uVar6);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010befbd60(uVar4,param_2,param_1,PTR_s__approveReply_11252fe48,0x40);
  func_0x00010623adf8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112743b7c;
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar4;
  _objc_release(uVar6);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010be3a380(param_1);
  func_0x00010be39460(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  uVar6 = *(undefined8 *)(puVar1 + _DAT_112743b80);
  *(undefined8 *)(puVar1 + _DAT_112743b80) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10622d6e4; end: 10622d71b; -[SCSpotlightRepliesCollectionViewCellV2 setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622d6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743b80);
  *(undefined8 *)(param_1 + _DAT_112743b80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10622d71c; end: 10622f68f; -[SCSpotlightRepliesCollectionViewCellV2 _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622d71c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  long lVar98;
  long lVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  long lVar102;
  long lVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  long lVar106;
  long lVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  long lVar110;
  long lVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined8 uVar136;
  long lVar137;
  undefined8 uVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  undefined8 uVar144;
  undefined8 uVar145;
  undefined8 uVar146;
  undefined8 uVar147;
  undefined8 uVar148;
  undefined8 uVar149;
  undefined8 uVar150;
  undefined8 uVar151;
  undefined8 uVar152;
  undefined8 uVar153;
  undefined8 uVar154;
  undefined8 uVar155;
  undefined8 uVar156;
  undefined8 uVar157;
  long lVar158;
  long lVar159;
  undefined8 uVar160;
  undefined8 uVar161;
  long lVar162;
  long lVar163;
  undefined8 uVar164;
  undefined8 uVar165;
  undefined8 uVar166;
  undefined8 uVar167;
  undefined8 uVar168;
  undefined8 uVar169;
  undefined8 uVar170;
  undefined8 uVar171;
  undefined8 uVar172;
  undefined8 uVar173;
  undefined8 uVar174;
  undefined8 uVar175;
  undefined8 uVar176;
  undefined8 uVar177;
  undefined8 uVar178;
  undefined8 uVar179;
  undefined8 uVar180;
  undefined8 uVar181;
  undefined8 uVar182;
  undefined8 uVar183;
  undefined8 uVar184;
  undefined8 uVar185;
  undefined8 uVar186;
  undefined8 uVar187;
  undefined8 uVar188;
  undefined8 uVar189;
  undefined8 uVar190;
  undefined8 uVar191;
  undefined8 uVar192;
  ulong uVar193;
  ulong uVar194;
  ulong uVar195;
  undefined8 uVar196;
  undefined8 uVar197;
  undefined *puVar198;
  undefined8 uVar199;
  undefined *puVar200;
  undefined8 uVar201;
  undefined8 uVar202;
  undefined8 uVar203;
  undefined8 uVar204;
  undefined *puVar205;
  long lVar206;
  long lVar207;
  long lVar208;
  long lVar209;
  long lVar210;
  long lVar211;
  ulong uVar212;
  long lVar213;
  long lVar214;
  long lVar215;
  long lVar216;
  long lVar217;
  long lVar218;
  long lVar219;
  long lVar220;
  long lVar221;
  long lVar222;
  
  lVar206 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar207 = (long)_DAT_112743b78;
  lVar3 = *(long *)(param_1 + lVar207);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar217 = (long)_DAT_112743b24;
  uVar4 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  func_0x00010c1e3380(0x41c80000,lVar5);
  lVar3 = (long)_DAT_112743b4c;
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar209 = (long)_DAT_112743ad8;
  uVar7 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar196 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar197 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112743b50;
  uVar15 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar208 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar199 = uVar21;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar213 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar214 = lVar213;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar201 = uVar22;
  func_0x00010bf49520(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar218 = (long)_DAT_112743ad4;
  uVar23 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar202 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = (long)_DAT_112743ae0;
  uVar25 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar203 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = (long)_DAT_112743b58;
  uVar31 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar36;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = (long)_DAT_112743b5c;
  uVar39 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar42;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743ae8;
  uVar45 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar45;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = (long)_DAT_112743afc;
  uVar48 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar48;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar51;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743af4;
  uVar54 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar54;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar221 = (long)_DAT_112743b18;
  uVar58 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar57;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_1 + _DAT_112743b10);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = uVar60;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b54;
  uVar63 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar65 = uVar63;
  func_0x00010bf493c0(0x401e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar66 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = uVar66;
  func_0x00010bf493c0(0xbff8000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b40;
  uVar69 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar70 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar71 = uVar69;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar72 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar73 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar74 = uVar72;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar75 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar76 = uVar75;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar77 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar78 = uVar77;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar79 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar80 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar81 = uVar79;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743af0;
  uVar82 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar83 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar84 = uVar82;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar85 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar86 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar87 = uVar85;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b3c;
  uVar88 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar89 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar90 = uVar88;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar91 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar92 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar93 = uVar91;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar94 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar95 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar96 = uVar94;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar97 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar98 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = lVar98;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar100 = uVar97;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar101 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar102 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar103 = lVar102;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar104 = uVar101;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar105 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar106 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar107 = lVar106;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar108 = uVar105;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar216 = (long)_DAT_112743b20;
  uVar109 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar110 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = lVar110;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar112 = uVar109;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar113 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar114 = uVar113;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b6c;
  uVar115 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar116 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar117 = uVar115;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar118 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar119 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar120 = uVar118;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = (long)_DAT_112743b70;
  uVar121 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar122 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar123 = uVar121;
  func_0x00010bf493c0(0x401c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar124 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar125 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar126 = uVar124;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar127 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar128 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar129 = uVar127;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b74;
  uVar130 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar131 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar132 = uVar130;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar133 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar134 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar135 = uVar133;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar136 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar222 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = lVar222;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar138 = uVar136;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = (long)_DAT_112743b60;
  uVar139 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar140 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar141 = uVar139;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar142 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar143 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar144 = uVar142;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b64;
  uVar145 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar146 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar147 = uVar145;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar148 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar149 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar150 = uVar148;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar215 = (long)_DAT_112743b68;
  uVar151 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar152 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar153 = uVar151;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar154 = *(undefined8 *)(param_1 + lVar215);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar155 = *(undefined8 *)(param_1 + lVar210);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar156 = uVar154;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar157 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar158 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar159 = lVar158;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar160 = uVar157;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar161 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar162 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar163 = lVar162;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar164 = uVar161;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar165 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar166 = uVar165;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar167 = *(undefined8 *)(param_1 + lVar221);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar210 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar215 = lVar210;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar168 = uVar167;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar211 = (long)_DAT_112743b7c;
  uVar169 = *(undefined8 *)(param_1 + lVar211);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar219 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar220 = lVar219;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar204 = uVar169;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar170 = *(undefined8 *)(param_1 + lVar211);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar171 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar172 = uVar170;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar173 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar174 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar175 = uVar173;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar176 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar177 = *(undefined8 *)(param_1 + lVar211);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar178 = uVar176;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar207 = (long)_DAT_112743b84;
  uVar179 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar180 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar181 = uVar179;
  func_0x00010bf493c0(0x4004000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar182 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar183 = *(undefined8 *)(param_1 + lVar209);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar184 = uVar182;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar185 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar186 = *(undefined8 *)(param_1 + lVar217);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar187 = uVar185;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar188 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar189 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar190 = uVar188;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar191 = *(undefined8 *)(param_1 + lVar218);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar192 = uVar191;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar198 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar198);
  _objc_release(uVar192);
  _objc_release(uVar191);
  _objc_release(uVar190);
  _objc_release(uVar189);
  _objc_release(uVar188);
  _objc_release(uVar187);
  _objc_release(uVar186);
  _objc_release(uVar185);
  _objc_release(uVar184);
  _objc_release(uVar183);
  _objc_release(uVar182);
  _objc_release(uVar181);
  _objc_release(uVar180);
  _objc_release(uVar179);
  _objc_release(uVar178);
  _objc_release(uVar177);
  _objc_release(uVar176);
  _objc_release(uVar175);
  _objc_release(uVar174);
  _objc_release(uVar173);
  _objc_release(uVar172);
  _objc_release(uVar171);
  _objc_release(uVar170);
  _objc_release(uVar204);
  _objc_release(lVar220);
  _objc_release(lVar219);
  _objc_release(uVar169);
  _objc_release(uVar168);
  _objc_release(lVar215);
  _objc_release(lVar210);
  _objc_release(uVar167);
  _objc_release(uVar166);
  _objc_release(uVar165);
  _objc_release(uVar164);
  _objc_release(lVar163);
  _objc_release(lVar162);
  _objc_release(uVar161);
  _objc_release(uVar160);
  _objc_release(lVar159);
  _objc_release(lVar158);
  _objc_release(uVar157);
  _objc_release(uVar156);
  _objc_release(uVar155);
  _objc_release(uVar154);
  _objc_release(uVar153);
  _objc_release(uVar152);
  _objc_release(uVar151);
  _objc_release(uVar150);
  _objc_release(uVar149);
  _objc_release(uVar148);
  _objc_release(uVar147);
  _objc_release(uVar146);
  _objc_release(uVar145);
  _objc_release(uVar144);
  _objc_release(uVar143);
  _objc_release(uVar142);
  _objc_release(uVar141);
  _objc_release(uVar140);
  _objc_release(uVar139);
  _objc_release(uVar138);
  _objc_release(lVar137);
  _objc_release(lVar222);
  _objc_release(uVar136);
  _objc_release(uVar135);
  _objc_release(uVar134);
  _objc_release(uVar133);
  _objc_release(uVar132);
  _objc_release(uVar131);
  _objc_release(uVar130);
  _objc_release(uVar129);
  _objc_release(uVar128);
  _objc_release(uVar127);
  _objc_release(uVar126);
  _objc_release(uVar125);
  _objc_release(uVar124);
  _objc_release(uVar123);
  _objc_release(uVar122);
  _objc_release(uVar121);
  _objc_release(uVar120);
  _objc_release(uVar119);
  _objc_release(uVar118);
  _objc_release(uVar117);
  _objc_release(uVar116);
  _objc_release(uVar115);
  _objc_release(uVar114);
  _objc_release(uVar113);
  _objc_release(uVar112);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(uVar109);
  _objc_release(uVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(uVar105);
  _objc_release(uVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(uVar101);
  _objc_release(uVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(uVar97);
  _objc_release(uVar96);
  _objc_release(uVar95);
  _objc_release(uVar94);
  _objc_release(uVar93);
  _objc_release(uVar92);
  _objc_release(uVar91);
  _objc_release(uVar90);
  _objc_release(uVar89);
  _objc_release(uVar88);
  _objc_release(uVar87);
  _objc_release(uVar86);
  _objc_release(uVar85);
  _objc_release(uVar84);
  _objc_release(uVar83);
  _objc_release(uVar82);
  _objc_release(uVar81);
  _objc_release(uVar80);
  _objc_release(uVar79);
  _objc_release(uVar78);
  _objc_release(uVar77);
  _objc_release(uVar76);
  _objc_release(uVar75);
  _objc_release(uVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(uVar71);
  _objc_release(uVar70);
  _objc_release(uVar69);
  _objc_release(uVar68);
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
  _objc_release(uVar27);
  _objc_release(uVar203);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar202);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar201);
  _objc_release(lVar214);
  _objc_release(lVar213);
  _objc_release(uVar22);
  _objc_release(uVar199);
  _objc_release(lVar208);
  _objc_release(lVar3);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar197);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar196);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar198 = PTR_PTR_1126c9060;
  uVar212 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar212);
  _objc_opt_class(puVar198);
  uVar193 = uVar212;
  _objc_opt_isKindOfClass(uVar212,puVar198);
  uVar1 = uVar212;
  if ((uVar193 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar212);
  if (uVar1 != 0) {
    uVar193 = uVar212;
    func_0x00010bf91e60();
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar194 = uVar212;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    uVar195 = uVar194;
    func_0x00010bf529e0();
    _objc_release(uVar194);
    _objc_release(uVar212);
    if ((uVar195 != 0) && ((int)uVar193 != 0)) {
      lVar3 = (long)_DAT_112743b8c;
      uVar196 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar197 = *(undefined8 *)(param_1 + lVar207);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar196;
      func_0x00010bf493c0(0x4008000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar198 = *(undefined **)(param_1 + lVar3);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar199 = *(undefined8 *)(param_1 + lVar207);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar200 = puVar198;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar201 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar201;
      func_0x00010bf49420(0x4059000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar202 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar202;
      func_0x00010bf49420(0x4059000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar203 = *(undefined8 *)(param_1 + lVar216);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar204 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar203;
      func_0x00010bf493c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar205 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(puVar205);
      _objc_release(uVar20);
      _objc_release(uVar204);
      _objc_release(uVar203);
      _objc_release(uVar17);
      _objc_release(uVar202);
      _objc_release(uVar14);
      _objc_release(uVar201);
      _objc_release(puVar200);
      _objc_release(uVar199);
      goto LAB_10622f550;
    }
  }
  uVar196 = *(undefined8 *)(param_1 + lVar216);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar197 = *(undefined8 *)(param_1 + lVar207);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar196;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar198 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
LAB_10622f550:
  _objc_release(puVar198);
  _objc_release(uVar4);
  _objc_release(uVar197);
  _objc_release(uVar196);
  uVar193 = uVar1;
  func_0x00010c238f20();
  if ((int)uVar193 == 0) {
    uVar196 = *(undefined8 *)(param_1 + lVar217);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar197 = *(undefined8 *)(param_1 + lVar221);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar196;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar198 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar198);
    _objc_release(uVar4);
    _objc_release(uVar197);
    _objc_release(uVar196);
  }
  else {
    func_0x00010c181cc0(0x41200000,*(undefined8 *)(param_1 + lVar207));
    func_0x00010c181f00(0x40a00000,*(undefined8 *)(param_1 + lVar207));
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar206) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar198 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112743b84;
  func_0x00010c19e480(*(undefined8 *)(lVar5 + lVar3));
  _objc_release(puVar198);
  lVar213 = (long)_DAT_112743ae0;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar213));
  lVar220 = (long)_DAT_112743ae8;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar220));
  lVar219 = (long)_DAT_112743afc;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar219));
  lVar208 = (long)_DAT_112743af0;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar208));
  lVar210 = (long)_DAT_112743b3c;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar210));
  lVar214 = (long)_DAT_112743b5c;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar214));
  lVar222 = (long)_DAT_112743b68;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar222));
  lVar215 = (long)_DAT_112743b70;
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar215));
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar213));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar214));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar220));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar219));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar222));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar3));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar210));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar215));
  _objc_release(puVar198);
  puVar198 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar208));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar198);
  return;
}



/* Entry: 10622f690; end: 10622f92b; -[SCSpotlightRepliesCollectionViewCellV2 _setupLabelFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622f690(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112743b84;
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  lVar4 = (long)_DAT_112743ae0;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,7);
  lVar9 = (long)_DAT_112743ae8;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar9),param_2,0x18);
  lVar8 = (long)_DAT_112743afc;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar8),param_2,6);
  lVar3 = (long)_DAT_112743af0;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,0x18);
  lVar6 = (long)_DAT_112743b3c;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6),param_2,0x18);
  lVar5 = (long)_DAT_112743b5c;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5),param_2,6);
  lVar10 = (long)_DAT_112743b68;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar10),param_2,0x18);
  lVar7 = (long)_DAT_112743b70;
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar7),param_2,0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar10),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar7),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622f92c; end: 10622fa53; -[SCSpotlightRepliesCollectionViewCellV2 _updateFavoriteViewWithReactionViewModel:] */

/* WARNING: Possible PIC construction at 0x00010622f9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010622fa00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010622f9c4) */
/* WARNING: Removing unreachable block (ram,0x00010622fa28) */
/* WARNING: Removing unreachable block (ram,0x00010c1a9f00) */
/* WARNING: Removing unreachable block (ram,0x00010622f9e8) */
/* WARNING: Removing unreachable block (ram,0x00010622fa04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622f92c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b10c8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112743b68);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c120aa0(param_3);
  func_0x00010c22d8c0((double)lVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar3);
  _objc_release(puVar2);
  lVar1 = param_3;
  func_0x00010bfd3fa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743b64),PTR_s_setHidden__1126479f8,(int)lVar1 == 0);
  return;
}



/* Entry: 10622fa54; end: 10622fab7; -[SCSpotlightRepliesCollectionViewCellV2 _updateLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622fa54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112743b94;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1;
  func_0x00010beabac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10622fab8; end: 106230d93; -[SCSpotlightRepliesCollectionViewCellV2 _updateView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10622fab8(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined1 *puVar33;
  int iVar34;
  double dVar35;
  int iStack_140;
  int iStack_124;
  int iStack_110;
  int iStack_d8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x00010bead520();
  puVar7 = PTR_PTR_1126c9060;
  uVar23 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar23);
  _objc_opt_class(puVar7);
  uVar8 = uVar23;
  _objc_opt_isKindOfClass(uVar23,puVar7);
  uVar1 = uVar23;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar23);
  uVar8 = uVar1;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074da0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar18);
  _objc_release(puVar7);
  uVar23 = uVar1;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar23;
  func_0x00010c131a00();
  _objc_release(uVar23);
  uVar23 = uVar8;
  FUN_1062687a4();
  if ((int)uVar23 == 0) {
    bVar4 = false;
  }
  else {
    uVar23 = uVar8;
    func_0x00010c132000();
    bVar4 = uVar23 == 1;
  }
  uVar23 = uVar8;
  func_0x00010c131a00();
  if (uVar23 == 2) {
    uVar23 = uVar8;
    func_0x00010c132000();
    bVar5 = uVar23 == 1;
  }
  else {
    bVar5 = false;
  }
  func_0x00010c132000(uVar8);
  uVar23 = uVar8;
  func_0x00010c132000();
  uVar10 = uVar1;
  func_0x00010c07eaa0();
  iStack_124 = (int)uVar10;
  uVar10 = uVar8;
  func_0x00010bf15100();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010623bf40();
  _objc_release(uVar10);
  uVar10 = uVar8;
  func_0x00010bf15100(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010623bf34();
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010bf8ff60();
  uVar12 = uVar1;
  func_0x00010c120d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120aa0();
  _objc_release(uVar12);
  uVar12 = uVar1;
  func_0x00010bf92100();
  if ((int)uVar12 == 0) {
    bVar6 = true;
    bVar2 = false;
  }
  else {
    uVar30 = uVar8;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar6 = uVar30 == 0;
    bVar2 = false;
    if (bVar6) {
      bVar2 = bVar4;
    }
  }
  uVar30 = uVar1;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar30;
  FUN_106268744();
  _objc_release(uVar30);
  uVar30 = uVar8;
  func_0x00010c131f80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar30;
  func_0x00010c08fa60();
  _objc_release(uVar30);
  lVar18 = (long)_DAT_112743b10;
  uVar29 = *(undefined8 *)(param_1 + lVar18);
  uVar30 = uVar1;
  func_0x00010bf5b620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185d40(uVar29);
  _objc_release(uVar30);
  if (bVar2) {
    uVar30 = uVar8;
    func_0x00010c26d4e0();
  }
  else {
    uVar30 = 0;
  }
  lVar19 = (long)_DAT_112743af0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743b3c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743b50));
  uVar29 = 0x4024000000000000;
  if (!bVar6) {
    uVar29 = 0x404d000000000000;
  }
  dVar35 = 40.0;
  if (!bVar6) {
    dVar35 = 30.0;
  }
  func_0x00010c181140(uVar29,*(undefined8 *)(param_1 + _DAT_112743b04));
  func_0x00010c181140(dVar35,*(undefined8 *)(param_1 + _DAT_112743b08));
  func_0x00010c181140(dVar35,*(undefined8 *)(param_1 + _DAT_112743b0c));
  lVar31 = (long)_DAT_112743ad8;
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c08c0e0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar35 * 0.5);
  _objc_release(uVar29);
  lVar20 = (long)_DAT_112743b4c;
  uVar29 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08c0e0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar35 * 0.5);
  _objc_release(uVar29);
  iVar28 = _DAT_112743b5c;
  puVar24 = (undefined8 *)(param_1 + _DAT_112743b5c);
  if ((int)uVar11 == 0) {
    func_0x00010c1a7f60(*puVar24);
    iStack_110 = _DAT_112743ae8;
    uVar29 = *(undefined8 *)(param_1 + _DAT_112743ae8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = (undefined8 *)(param_1 + _DAT_112743ad4);
  }
  else {
    func_0x00010c1a7f60(*puVar24);
    iStack_110 = _DAT_112743ae8;
    uVar29 = *(undefined8 *)(param_1 + _DAT_112743ae8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar15 = *puVar24;
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar29;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112743aec);
  *(undefined8 *)(param_1 + _DAT_112743aec) = uVar32;
  _objc_release(uVar21);
  _objc_release(uVar15);
  _objc_release(uVar29);
  if (uVar30 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743b74));
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    lVar26 = (long)_DAT_112743b74;
    puVar16 = *(undefined **)(param_1 + lVar26);
    func_0x00010c1a7f60(puVar16);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar30 == 1) {
      func_0x000106262058();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar16;
    }
    else {
      func_0x000106262040();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(puVar16);
    }
    uVar30 = uVar1;
    func_0x00010c26d4a0();
    if ((long)uVar30 < 2) {
      if (uVar30 == 0) {
LAB_10623007c:
        func_0x00010c216260(*(undefined8 *)(param_1 + lVar26));
        func_0x00010c216380(*(undefined8 *)(param_1 + lVar26));
        uVar29 = *(undefined8 *)(param_1 + lVar26);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106230d94;
        puStack_90 = &UNK_1108434b0;
        puVar33 = auStack_88;
        _objc_copyWeak(puVar33,auStack_80);
        func_0x00010c1d3960(uVar29);
        func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar26));
LAB_106230194:
        _objc_destroyWeak(puVar33);
      }
      else if (uVar30 == 1) {
        uVar29 = *(undefined8 *)(param_1 + lVar26);
        func_0x00010c1beb60(uVar29);
        uVar32 = *(undefined8 *)(param_1 + lVar26);
        func_0x000106262070();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216260(uVar32);
        _objc_release(uVar29);
        func_0x00010c216380(*(undefined8 *)(param_1 + lVar26));
      }
    }
    else {
      if (uVar30 == 2) {
        uVar29 = *(undefined8 *)(param_1 + lVar26);
        func_0x00010c1beb60(uVar29);
        uVar32 = *(undefined8 *)(param_1 + lVar26);
        func_0x000106262070();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216260(uVar32);
        _objc_release(uVar29);
        func_0x00010c216380(*(undefined8 *)(param_1 + lVar26));
        uVar29 = *(undefined8 *)(param_1 + lVar26);
        puVar33 = auStack_b0;
        _objc_copyWeak(puVar33,auStack_80);
        func_0x00010c1d3960(uVar29);
        goto LAB_106230194;
      }
      if (uVar30 == 3) goto LAB_10623007c;
    }
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_80);
  }
  iVar3 = _DAT_112743ad4;
  lVar26 = (long)_DAT_112743ad4;
  uVar29 = *(undefined8 *)(param_1 + lVar26);
  if ((int)uVar10 == 0) {
    if (uVar14 == 0) {
      func_0x00010c21e900(uVar29);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar31));
      iStack_140 = _DAT_112743ae0;
      uVar32 = *(undefined8 *)(param_1 + _DAT_112743ae0);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar26);
      func_0x00010c2793a0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar32;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + _DAT_112743ae4);
      *(undefined8 *)(param_1 + _DAT_112743ae4) = uVar29;
      _objc_release(uVar21);
      _objc_release(uVar15);
      _objc_release(uVar32);
      uVar29 = *(undefined8 *)(param_1 + _DAT_112743b58);
    }
    else {
      func_0x00010c21e900(uVar29);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar31));
      uVar29 = *(undefined8 *)(param_1 + lVar26);
      puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(uVar29);
      _objc_release(puVar7);
      uVar29 = *(undefined8 *)(param_1 + lVar31);
      puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(uVar29);
      _objc_release(puVar7);
      iStack_140 = _DAT_112743ae0;
      uVar32 = *(undefined8 *)(param_1 + _DAT_112743ae0);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = (long)_DAT_112743b58;
      uVar15 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010c08de00(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar32;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + _DAT_112743ae4);
      *(undefined8 *)(param_1 + _DAT_112743ae4) = uVar29;
      _objc_release(uVar21);
      _objc_release(uVar15);
      _objc_release(uVar32);
      uVar29 = *(undefined8 *)(param_1 + lVar27);
    }
    func_0x00010c1a7f60(uVar29);
  }
  else {
    func_0x00010c21e900(uVar29);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar31));
    uVar29 = *(undefined8 *)(param_1 + lVar26);
    puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar29);
    _objc_release(puVar7);
    uVar29 = *(undefined8 *)(param_1 + lVar31);
    puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar29);
    _objc_release(puVar7);
    iStack_140 = _DAT_112743ae0;
    uVar32 = *(undefined8 *)(param_1 + _DAT_112743ae0);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = (long)_DAT_112743b58;
    uVar15 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c08de00(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar32;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + _DAT_112743ae4);
    *(undefined8 *)(param_1 + _DAT_112743ae4) = uVar29;
    _objc_release(uVar21);
    _objc_release(uVar15);
    _objc_release(uVar32);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar27));
  }
  lVar27 = (long)_DAT_112743b40;
  if (uVar23 == 0) {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar27));
  }
  else {
    func_0x00010c2558c0();
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar27));
  if (bVar4) {
    uVar23 = uVar1;
    func_0x00010bf91a60();
    if ((((uint)uVar13 | (uint)uVar23 ^ 0xffffffff) & 1) != 0) {
      iStack_124 = 1;
      goto LAB_1062304ac;
    }
    lVar27 = (long)_DAT_112743af4;
    iStack_d8 = _DAT_112743af4;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar27));
    uVar32 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c2793a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar32;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + _DAT_112743af8);
    *(undefined8 *)(param_1 + _DAT_112743af8) = uVar29;
    _objc_release(uVar21);
    _objc_release(uVar15);
    _objc_release(uVar32);
LAB_1062305d4:
    uVar23 = uVar1;
    func_0x00010bf92100();
    if ((int)uVar23 != 0) {
      lVar27 = (long)_DAT_112743b20;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar27));
      uVar29 = 0xc000000000000000;
      if ((int)uVar12 == 0) {
        uVar29 = 0xc024000000000000;
      }
      goto LAB_106230624;
    }
  }
  else {
LAB_1062304ac:
    iStack_d8 = _DAT_112743af4;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743af4));
    uVar32 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + _DAT_112743afc);
    func_0x00010c2793a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar32;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + _DAT_112743af8);
    *(undefined8 *)(param_1 + _DAT_112743af8) = uVar29;
    _objc_release(uVar21);
    _objc_release(uVar15);
    _objc_release(uVar32);
    if (iStack_124 != 0) goto LAB_1062305d4;
  }
  lVar27 = (long)_DAT_112743b20;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar27));
  uVar29 = 0;
LAB_106230624:
  func_0x00010c181140(uVar29,*(undefined8 *)(param_1 + _DAT_112743b28));
  func_0x00010c21e900(*(undefined8 *)(param_1 + iStack_d8));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar27));
  lVar22 = (long)_DAT_112743b18;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22));
  lVar25 = (long)_DAT_112743b54;
  uVar29 = *(undefined8 *)(param_1 + lVar25);
  if (uVar9 == 4) {
    func_0x00010c1a7f60(uVar29);
    uVar29 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010c2793a0(uVar32);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x400c000000000000;
  }
  else {
    func_0x00010c1a7f60(uVar29);
    uVar29 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c2793a0(uVar32);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x4020000000000000;
  }
  uVar21 = uVar29;
  func_0x00010bf493c0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112743adc);
  *(undefined8 *)(param_1 + _DAT_112743adc) = uVar21;
  _objc_release(uVar15);
  _objc_release(uVar32);
  _objc_release(uVar29);
  if (bVar4 || bVar5) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar31));
    func_0x00010c1d4c20(*(undefined8 *)(param_1 + lVar31));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar20));
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + iStack_140));
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    iVar34 = _DAT_112743b84;
    func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112743b84));
    _objc_release(puVar7);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar27));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar22));
    if ((uint)uVar13 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22));
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22));
    }
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + iVar34));
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1677c0(0x3fe3333333333333,*(undefined8 *)(param_1 + lVar31));
    func_0x00010c1d4c20(*(undefined8 *)(param_1 + lVar31));
    func_0x00010c1677c0(0x3fe3333333333333,*(undefined8 *)(param_1 + lVar20));
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + iStack_140));
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    iVar34 = _DAT_112743b84;
    func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112743b84));
    _objc_release(puVar7);
    func_0x00010c1677c0(0x3fe3333333333333,*(undefined8 *)(param_1 + lVar27));
    func_0x00010c1677c0(0x3fe3333333333333,*(undefined8 *)(param_1 + lVar22));
  }
  lVar20 = (long)_DAT_112743b68;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20));
  if (bVar5) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + iStack_d8));
  }
  func_0x00010c238f20(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743b78));
  func_0x00010c238f20(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112743b7c));
  uVar23 = uVar1;
  func_0x00010c238f20();
  if ((int)uVar23 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + iStack_d8));
  }
  uVar23 = uVar1;
  func_0x00010c131c20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar23;
  func_0x00010c08fa60();
  _objc_release(uVar23);
  if (uVar9 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + iStack_110));
    uVar29 = *(undefined8 *)(param_1 + iStack_d8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar11 == 0) {
      iVar28 = iVar3;
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + iStack_110));
    uVar29 = *(undefined8 *)(param_1 + iStack_d8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    iVar28 = _DAT_112743afc;
  }
  uVar15 = *(undefined8 *)(param_1 + iVar28);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar29;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112743b00;
  uVar21 = *(undefined8 *)(param_1 + lVar20);
  *(undefined8 *)(param_1 + lVar20) = uVar32;
  _objc_release(uVar21);
  _objc_release(uVar15);
  _objc_release(uVar29);
  uVar32 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + iVar28);
  func_0x00010c2793a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar32;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112743b14);
  *(undefined8 *)(param_1 + _DAT_112743b14) = uVar29;
  _objc_release(uVar21);
  _objc_release(uVar15);
  _objc_release(uVar32);
  uVar29 = *(undefined8 *)(param_1 + iVar34);
  func_0x00010c26b920(uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + iVar34);
  func_0x00010bfb3a80(uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  FUN_10623c2b8(uVar8,uVar29,uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + iVar34));
  _objc_release(uVar23);
  _objc_release(uVar32);
  _objc_release(uVar29);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18));
  uVar32 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar32;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112743b1c;
  uVar21 = *(undefined8 *)(param_1 + lVar19);
  *(undefined8 *)(param_1 + lVar19) = uVar29;
  _objc_release(uVar21);
  _objc_release(uVar15);
  _objc_release(uVar32);
  uVar23 = uVar1;
  func_0x00010bf5b620();
  _objc_retainAutoreleasedReturnValue();
  if (uVar23 != 0) {
    uVar9 = uVar8;
    func_0x00010c072ae0();
    _objc_release(uVar23);
    if ((int)uVar9 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar18));
      uVar32 = *(undefined8 *)(param_1 + iStack_d8);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c2793a0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar32;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + lVar20);
      *(undefined8 *)(param_1 + lVar20) = uVar29;
      _objc_release(uVar21);
      _objc_release(uVar15);
      _objc_release(uVar32);
      uVar32 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + iStack_d8);
      func_0x00010c08de00(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar32;
      func_0x00010bf493c0(0xc020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + lVar19);
      *(undefined8 *)(param_1 + lVar19) = uVar29;
      _objc_release(uVar21);
      _objc_release(uVar15);
      _objc_release(uVar32);
    }
  }
  uVar23 = uVar1;
  func_0x00010bf91e60();
  if ((int)uVar23 != 0) {
    uVar23 = uVar8;
    func_0x00010c131a20(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde4ae0(param_1);
    _objc_release(uVar23);
  }
  func_0x00010beda7c0(param_1);
  func_0x00010be139a0(param_1);
  _objc_release(uVar8);
  _objc_release(uVar1);
  return;
}



/* Entry: 106230d94; end: 106230deb;  */

void FUN_106230d94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106230dec; end: 106230f3f; -[SCSpotlightRepliesCollectionViewCellV2 _setupLayoutManagerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106230dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_112743b38;
  if (*(long *)(param_5 + lVar6) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
  _objc_alloc();
  lVar7 = (long)_DAT_112743b84;
  uVar2 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010bf0e540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f40();
  lVar4 = (long)_DAT_112743b98;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  *(undefined **)(param_5 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
  _objc_alloc();
  func_0x00010c0469e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  lVar5 = (long)_DAT_112743b9c;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1bdbc0(0,*(undefined8 *)(param_5 + lVar5));
  func_0x00010c099180(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c1bdb00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c0def20(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c1c3c00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c202c80(param_3,param_4,*(undefined8 *)(param_5 + lVar5));
  func_0x00010befbe20(*(undefined8 *)(param_5 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bef96b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar4),PTR_s_addLayoutManager__11259bf50,
             *(undefined8 *)(param_5 + lVar6));
  return;
}



/* Entry: 106230f40; end: 1062311b3; -[SCSpotlightRepliesCollectionViewCellV2 _fetchReplyPosterPhotoWithViewModelIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106230f40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_1 + _DAT_112743b34);
  lVar2 = lVar1;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar2);
  if ((uVar7 & 1) == 0) {
    lVar2 = lVar1;
    func_0x00010c131f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108ffe710();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    func_0x000108ffef38(0,lVar3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743b4c));
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1062311b4;
    puStack_70 = &UNK_110917968;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    ppuVar5 = &puStack_88;
    lStack_68 = param_3;
    _objc_retainBlock(ppuVar5);
    lVar2 = lVar1;
    func_0x00010c131fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112743ba0);
    lVar2 = lVar1;
    if (lVar3 == 0) {
      func_0x00010c131f60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c131f20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c131f00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa5580(uVar4);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c131fa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa98a0(uVar4);
    }
    _objc_release(lVar2);
    _objc_release(ppuVar5);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1062311b4; end: 10623120f;  */

void FUN_1062311b4(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfcdc0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106231210; end: 1062313df; -[SCSpotlightRepliesCollectionViewCellV2 _didCompleteFetchingSelfieWithImage:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231210(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c9060;
  if (param_3 != 0) {
    uVar8 = *(ulong *)(param_1 + _DAT_112743b88);
    _objc_retain(uVar8);
    _objc_opt_class(puVar2);
    uVar3 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar1 = uVar8;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar8);
    uVar3 = uVar1;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c24bfa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      uVar4 = param_4;
      func_0x00010c24bfa0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112743b34);
      *(undefined8 *)(param_1 + _DAT_112743b34) = uVar5;
      _objc_release(uVar7);
      _objc_release(uVar4);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1062313e0;
      puStack_78 = &UNK_110841f80;
      lStack_70 = param_1;
      _objc_retain(param_3);
      lStack_68 = param_3;
      func_0x0001000d76cc("APPSTORE",&puStack_90);
      _objc_release(lStack_68);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062313e0; end: 1062313f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062313e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112743b4c),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1062313f4; end: 10623142f; -[SCSpotlightRepliesCollectionViewCellV2 _handleLongPress:] */

void FUN_1062313f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be2bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleLongPress_1125688b8);
    return;
  }
  return;
}



/* Entry: 106231430; end: 10623156b; -[SCSpotlightRepliesCollectionViewCellV2 _buildActionModelWithAvatarImageWithActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231430(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c0d3c80(uVar5);
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112743b4c);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(uVar4);
  if (*(long *)(param_1 + _DAT_112743ba4) != 0) {
    func_0x00010c1d0640(uVar1);
  }
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  uVar5 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01b460(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10623156c; end: 106231683; -[SCSpotlightRepliesCollectionViewCellV2 _buildActionModelWithGesture:withActionModel:] */

void FUN_10623156c(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_x3;
  
  _objc_retain(in_x3);
  uVar1 = in_x3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0d3c80(uVar4);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  uVar4 = in_x3;
  func_0x00010bfe5ec0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  func_0x00010c01b460(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106231684; end: 10623179b; -[SCSpotlightRepliesCollectionViewCellV2 _buildActionModelWithInteractionContext:withActionModel:] */

void FUN_106231684(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_x3;
  
  _objc_retain(in_x3);
  uVar1 = in_x3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0d3c80(uVar4);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  uVar4 = in_x3;
  func_0x00010bfe5ec0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  func_0x00010c01b460(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10623179c; end: 10623186f; -[SCSpotlightRepliesCollectionViewCellV2 _handleLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10623179c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106231870; end: 106231a43; -[SCSpotlightRepliesCollectionViewCellV2 setImageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45c98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743b50),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743b60),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743b64),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743af4),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45d18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743b6c),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45d38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743b90);
  *(undefined8 *)(param_1 + _DAT_112743b90) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45cf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112743ba8);
  *(undefined8 *)(param_1 + _DAT_112743ba8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bfc6480(param_3,param_2,&PTR____CFConstantStringClassReference_110e45d58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743b7c),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106231a44; end: 106231a7b; -[SCSpotlightRepliesCollectionViewCellV2 setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743bac);
  *(undefined8 *)(param_1 + _DAT_112743bac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106231a7c; end: 106231b93; -[SCSpotlightRepliesCollectionViewCellV2 _initReplyLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231a7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_112743b84;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010c1374a0(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112743b44));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08cc60();
  uVar4 = 2;
  if (lVar3 != 1) {
    uVar4 = 0;
  }
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112743b24),param_2,
                      *(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106231b94; end: 106231d97; -[SCSpotlightRepliesCollectionViewCellV2 setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231b94(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c9068;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  func_0x00010bf34260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = (long)_DAT_112743b88;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  if (uVar5 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  else {
    if (uVar2 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_106231d7c;
    }
    *(undefined1 *)(param_1 + _DAT_112743bb0) = 0;
    uVar5 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_112743b84;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar5 = uVar2;
    func_0x00010c24bfa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c132180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + _DAT_112743afc);
    uVar5 = uVar2;
    func_0x00010c131c20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar4);
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112743ae0);
    uVar5 = uVar2;
    func_0x00010c131f40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c120d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7de0(param_1);
    _objc_release(uVar5);
    func_0x00010bee3540(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_106231d7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106231d98; end: 106231e57; +[SCSpotlightRepliesCollectionViewCellV2 sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_106231d98(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c9068;
  _objc_opt_class(PTR_PTR_1126c9068);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1061c0(uVar1);
  uVar3 = uVar1;
  if (dVar4 <= 0.0) {
    func_0x00010bf34260(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    FUN_10623db90(uVar3);
  }
  else {
    func_0x00010c1061c0();
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106231e58; end: 106231ec7; -[SCSpotlightRepliesCollectionViewCellV2 _initAttachmentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231e58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112743b8c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112743b24),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106231ec8; end: 10623203f; -[SCSpotlightRepliesCollectionViewCellV2 _configureAttachmentViewIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106231ec8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010be922e0(param_1);
  if ((param_3 != 0) &&
     (lVar2 = param_3, func_0x00010bf529e0(), puVar3 = PTR_PTR_1126c9060, lVar2 != 0)) {
    uVar6 = *(ulong *)(param_1 + _DAT_112743b88);
    _objc_retain(uVar6);
    _objc_opt_class(puVar3);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar1 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112743bb4);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar1);
    func_0x00010bfa7820(uVar5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106232040; end: 1062320c3;  */

void FUN_106232040(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bea1fe0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062320c4; end: 10623265b; -[SCSpotlightRepliesCollectionViewCellV2 _setAttachmentView:attachmentImage:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062320c4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c9060;
  if (param_3 != 0) {
    uVar7 = *(ulong *)(param_1 + _DAT_112743b88);
    _objc_retain(uVar7);
    _objc_retain(param_5);
    _objc_opt_class(puVar2);
    uVar3 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar1 = uVar7;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    uVar3 = uVar1;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c24bfa0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar5 = uVar4;
    func_0x00010c131d20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      _objc_retain(param_3);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar7 = param_3;
        func_0x00010010fab4(param_3,PTR_DAT_1126a52d8);
        uVar3 = param_3;
        if ((int)uVar7 == 0) {
          uVar3 = 0;
        }
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x1062322ec;
      puStack_88 = &UNK_11084c4a0;
      lStack_80 = param_1;
      _objc_retain(param_3);
      uStack_78 = param_3;
      uStack_70 = uVar3;
      _objc_retain(param_4);
      uStack_68 = param_4;
      _objc_retain(uVar3);
      func_0x0001000d76cc("APPSTORE",&puStack_a0);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10623265c; end: 10623279f; -[SCSpotlightRepliesCollectionViewCellV2 _resetAttachmentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10623265c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112743b2c;
  func_0x00010bf75820(*(undefined8 *)(param_3 + lVar13));
  uVar2 = *(undefined8 *)(param_3 + lVar13);
  *(undefined8 *)(param_3 + lVar13) = 0;
  _objc_release(uVar2);
  uVar2 = 0;
  lVar14 = (long)_DAT_112743b8c;
  lVar3 = *(long *)(param_3 + lVar14);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar16 * 8));
      lVar16 = lVar16 + 1;
    } while (lVar13 != lVar16);
    lVar13 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_3 + _DAT_112743ba4);
  *(undefined8 *)(param_3 + _DAT_112743ba4) = 0;
  _objc_release(uVar4);
  lVar13 = *(long *)(param_3 + lVar14);
  lVar10 = 1;
  func_0x00010c1a7f60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar10);
  puVar5 = PTR_PTR_1126c9060;
  puVar15 = *(undefined **)(lVar13 + _DAT_112743b88);
  _objc_retain(puVar15);
  _objc_opt_class();
  puVar18 = puVar15;
  _objc_opt_isKindOfClass();
  puVar8 = puVar15;
  if (((ulong)puVar18 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar15);
  puVar18 = puVar8;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar18;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar15;
  func_0x00010bf529e0();
  _objc_release(puVar15);
  _objc_release(puVar18);
  puVar18 = puVar8;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar18;
  func_0x00010c262200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar15;
  func_0x00010bf529e0();
  _objc_release(puVar15);
  _objc_release(puVar18);
  if (puVar6 != (undefined *)0x0 || puVar19 != (undefined *)0x0) {
    func_0x00010bead740(lVar13);
    lVar11 = lVar10;
    func_0x00010c29bf00(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(lVar10);
    _objc_release(lVar11);
    puVar6 = *(undefined **)(lVar13 + _DAT_112743b38);
    func_0x00010bf359a0(uVar2,param_2);
    puVar18 = puVar8;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar18;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = puVar15;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar18 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar15);
        }
        puVar17 = *(undefined **)((long)puVar19 * 8);
        func_0x00010c11f2a0();
        if (puVar17 <= puVar6 && puVar6 + -(long)puVar17 < puVar5) {
          puVar5 = PTR_PTR_1126b02a8;
          _objc_alloc();
          puVar18 = puVar8;
          func_0x00010c24bfa0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b460();
          goto LAB_106232bd8;
        }
        puVar19 = puVar19 + 1;
      } while (puVar18 != puVar19);
      puVar18 = puVar15;
      func_0x00010bf52a60();
    }
    _objc_release(puVar15);
    puVar18 = puVar8;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar18;
    func_0x00010c262200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar19 = puVar15;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar19 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar15);
        }
        puVar18 = *(undefined **)((long)puVar17 * 8);
        puVar7 = puVar18;
        func_0x00010c11f2a0();
        if (puVar7 <= puVar6 && puVar6 + -(long)puVar7 < puVar5) {
          puVar5 = PTR_PTR_1126b02a8;
          _objc_alloc();
          func_0x00010c153fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c24bfa0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b460();
          _objc_release(puVar19);
LAB_106232bd8:
          _objc_release(puVar6);
          _objc_release(puVar18);
          func_0x00010bfd0140(*(undefined8 *)(lVar13 + _DAT_112743b80));
          _objc_release(puVar5);
          _objc_release(puVar15);
          goto LAB_106232c14;
        }
        puVar17 = puVar17 + 1;
      } while (puVar19 != puVar17);
      puVar19 = puVar15;
      func_0x00010bf52a60();
    }
    _objc_release(puVar15);
  }
  func_0x00010be30520(lVar13);
LAB_106232c14:
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126c9060;
  if (*(char *)(lVar10 + _DAT_112743bb0) == '\x01') {
    uVar12 = *(ulong *)(lVar10 + _DAT_112743b88);
    _objc_retain(uVar12);
    _objc_opt_class(puVar8);
    uVar9 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar8);
    uVar1 = uVar12;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar12);
    uVar9 = uVar1;
    func_0x00010c1321c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010bdd5a80(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010bfd0140(*(undefined8 *)(lVar10 + _DAT_112743b80));
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar13);
    return;
  }
  return;
}



/* Entry: 1062327a0; end: 106232c63; -[SCSpotlightRepliesCollectionViewCellV2 _handleTapOnReplyText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062327a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c9060;
  puVar10 = *(undefined **)(param_3 + _DAT_112743b88);
  _objc_retain(puVar10);
  _objc_opt_class();
  puVar12 = puVar10;
  _objc_opt_isKindOfClass();
  puVar6 = puVar10;
  if (((ulong)puVar12 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar10);
  puVar12 = puVar6;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  _objc_release(puVar12);
  puVar12 = puVar6;
  func_0x00010c24bfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010c262200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  _objc_release(puVar12);
  if (puVar4 != (undefined *)0x0 || puVar13 != (undefined *)0x0) {
    func_0x00010bead740(param_3);
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    _objc_release(lVar3);
    puVar4 = *(undefined **)(param_3 + _DAT_112743b38);
    func_0x00010bf359a0(param_1,param_2);
    puVar12 = puVar6;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar10;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar12 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar10);
        }
        puVar11 = *(undefined **)((long)puVar13 * 8);
        func_0x00010c11f2a0();
        if (puVar11 <= puVar4 && puVar4 + -(long)puVar11 < puVar2) {
          puVar2 = PTR_PTR_1126b02a8;
          _objc_alloc();
          puVar12 = puVar6;
          func_0x00010c24bfa0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b460();
          goto LAB_106232bd8;
        }
        puVar13 = puVar13 + 1;
      } while (puVar12 != puVar13);
      puVar12 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
    puVar12 = puVar6;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010c262200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar13 = puVar10;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar13 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar10);
        }
        puVar12 = *(undefined **)((long)puVar11 * 8);
        puVar5 = puVar12;
        func_0x00010c11f2a0();
        if (puVar5 <= puVar4 && puVar4 + -(long)puVar5 < puVar2) {
          puVar2 = PTR_PTR_1126b02a8;
          _objc_alloc();
          func_0x00010c153fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar6;
          func_0x00010c24bfa0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b460();
          _objc_release(puVar13);
LAB_106232bd8:
          _objc_release(puVar4);
          _objc_release(puVar12);
          func_0x00010bfd0140(*(undefined8 *)(param_3 + _DAT_112743b80));
          _objc_release(puVar2);
          _objc_release(puVar10);
          goto LAB_106232c14;
        }
        puVar11 = puVar11 + 1;
      } while (puVar13 != puVar11);
      puVar13 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
  }
  func_0x00010be30520(param_3);
LAB_106232c14:
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c9060;
  if (*(char *)(param_5 + _DAT_112743bb0) == '\x01') {
    uVar9 = *(ulong *)(param_5 + _DAT_112743b88);
    _objc_retain(uVar9);
    _objc_opt_class(puVar6);
    uVar7 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar6);
    uVar1 = uVar9;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar9);
    uVar7 = uVar1;
    func_0x00010c1321c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    func_0x00010bdd5a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010bfd0140(*(undefined8 *)(param_5 + _DAT_112743b80));
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 106232c64; end: 106232d4f; -[SCSpotlightRepliesCollectionViewCellV2 _handleSingleTapToReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106232c64(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  if (*(char *)(param_1 + _DAT_112743bb0) == '\x01') {
    uVar5 = *(ulong *)(param_1 + _DAT_112743b88);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c1321c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdd5a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743b80));
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 106232d50; end: 106232e3b; -[SCSpotlightRepliesCollectionViewCellV2 _handleDoubleTapToFavorite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106232d50(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar5 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c120d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c120920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdd5a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743b80));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106232e3c; end: 106232ee7; -[SCSpotlightRepliesCollectionViewCellV2 _rejectReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106232e3c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010c127fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106232ee8; end: 106232f93; -[SCSpotlightRepliesCollectionViewCellV2 _approveReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106232ee8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010bf08c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106232f94; end: 10623307f; -[SCSpotlightRepliesCollectionViewCellV2 _shareReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106232f94(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010be94360();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743af4));
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010c22ada0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106233080; end: 10623312b; -[SCSpotlightRepliesCollectionViewCellV2 _resubmitReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106233080(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010c104f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10623312c; end: 1062331d7; -[SCSpotlightRepliesCollectionViewCellV2 _openPublicProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10623312c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010c0e9700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062331d8; end: 106233283; -[SCSpotlightRepliesCollectionViewCellV2 _openReplyPosterFriendProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062331d8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010c0e96e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106233284; end: 1062332e3; -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnPendingApprovalLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106233284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743b80),param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062332e4; end: 106233463; -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnFavoriteView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062332e4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar5 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c120d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c120920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdd5a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743b80));
  uVar3 = uVar1;
  func_0x00010c120d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfd3fa0();
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112743b30) = 1;
    _dispatch_time(0,1000000000);
    func_0x00010058c530();
  }
  _objc_release(lVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 106233464; end: 10623346b;  */

void FUN_106233464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateUpsellShareComment_112550670);
  return;
}



/* Entry: 10623346c; end: 106233517; -[SCSpotlightRepliesCollectionViewCellV2 _didTapHideThreadedReplies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10623346c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010bfe2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106233518; end: 1062335c3; -[SCSpotlightRepliesCollectionViewCellV2 _didTapNumThreadedReplies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106233518(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112743b80);
  uVar3 = uVar1;
  func_0x00010bfaad40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062335c4; end: 106233697; -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnReplyToCommentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062335c4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar5 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c1321c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdd5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112743b80));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106233698; end: 10623371b; -[SCSpotlightRepliesCollectionViewCellV2 _didTapOnFavByCreatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106233698(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfa0e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bfdd2a0(*(undefined8 *)(param_1 + _DAT_112743bb8));
    func_0x00010bfa0e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10623371c; end: 1062337d7; -[SCSpotlightRepliesCollectionViewCellV2 _animateUpsellShareComment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10623371c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c9060;
  uVar4 = *(ulong *)(param_1 + _DAT_112743b88);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c120d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd3fa0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112743af4));
    func_0x00010be9ab20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062337d8; end: 106233907; -[SCSpotlightRepliesCollectionViewCellV2 _scaleUpShareCommentAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062337d8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112743af4));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1062338a4;
  puStack_50 = &UNK_110870f70;
  auVar1 = NEON_fmov(0x3ff8000000000000,8);
  dStack_40 = param_3 * auVar1._0_8_;
  dStack_38 = param_4 * auVar1._8_8_;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106233908;
  puStack_78 = &UNK_110841f20;
  lStack_70 = param_5;
  lStack_48 = param_5;
  dStack_30 = param_3;
  dStack_28 = param_4;
  func_0x00010bf03460(0x3fd3333333333333,0,0x3feccccccccccccd,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_6,0,&puStack_68,&puStack_90);
  return;
}



/* Entry: 106233908; end: 1062339cb;  */

void FUN_106233908(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x106233984;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_38,0);
  return;
}



/* Entry: 1062339cc; end: 106233a3b; -[SCSpotlightRepliesCollectionViewCellV2 _resetUpsellShareCommentAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062339cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = (long)_DAT_112743af4;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_50);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  return;
}



/* Entry: 106233a3c; end: 106233a4b; -[SCSpotlightRepliesCollectionViewCellV2 viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106233a3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112743b88);
}


