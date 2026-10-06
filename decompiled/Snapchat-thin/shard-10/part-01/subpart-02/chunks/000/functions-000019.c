/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079901b0; end: 1079901bf; -[SCDiscoverFeedFriendStoryOptInStatusHandler _callUpdateIsOptedInForNotifications:] */

void FUN_1079901b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079901bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),1);
  return;
}



/* Entry: 107990970; end: 1079909fb;  */

void FUN_107990970(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_3 == 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7dba0(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107991124; end: 107991143; -[SCDiscoverFeedOpenFriendProfileActionHandler friendProfileDidDismiss:] */

void FUN_107991124(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1079916a0; end: 1079916e7; -[SCDiscoverFeedPostStoryActionHandler didCompletePostStoryScope:] */

void FUN_1079916a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107991784; end: 10799178b; -[SCDiscoverFeedSectionHeaderActionHandler removeListener:] */

void FUN_107991784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079925b0; end: 1079925b3; -[SCDiscoverFeedSectionHeaderActionHandler resumePlayback] */

void FUN_1079925b0(void)

{
  return;
}



/* Entry: 107992708; end: 107992763; -[SCDiscoverFeedSectionHeaderActionHandler _triggerFeedPageCloseForPresentingViewController] */

void FUN_107992708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41458,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107992e34; end: 107992ec7; -[SCDiscoverFeedSectionHeaderActionHandler _submitHideSectionRequestWithToken:forFeedType:] */

void FUN_107992e34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010846ce50(uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c135d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f5e0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


