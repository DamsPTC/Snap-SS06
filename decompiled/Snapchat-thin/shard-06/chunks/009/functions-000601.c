/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f87b08; end: 104f87bdb;  */

void FUN_104f87b08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c064120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1 < uVar5;
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f87bdc; end: 104f8811b; -[SCMessagingPlaybackWorkflow _beginChatMediaWorkflowWithConversationId:messageType:isLockedConversation:launchCandidates:baseView:transitionMode:featureMajorName:viewSource:viewLocation:loggingSource:playbackSource:] */

void FUN_104f87bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b23f0;
  _objc_alloc();
  func_0x00010c011ae0();
  uVar3 = param_6;
  FUN_104f86c30();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa120();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0xffffffffffffffff;
  uVar16 = param_6;
  func_0x00010c064120(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar18;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfe80();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  puVar7 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar8 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c038f40();
  _objc_release(lVar8);
  puVar9 = PTR_PTR_1126b2400;
  _objc_alloc();
  func_0x00010c018aa0(0);
  puVar10 = PTR_PTR_1126b2ec0;
  _objc_alloc(PTR_PTR_1126b2ec0);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = puStack_80[3];
  uVar16 = param_6;
  func_0x00010c077e40(param_6);
  func_0x00010c005020(puVar10,*(undefined8 *)(param_1 + 0xb8),param_3,param_5,uVar17,param_4,uVar18,
                      uVar16,in_stack_00000018,in_stack_00000020,puVar7,
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x90),param_1,*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf8),
                      *(undefined8 *)(param_1 + 0x100));
  func_0x00010befa120(puVar4);
  lVar11 = *(long *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    func_0x00010befa120(puVar4);
  }
  lVar12 = *(long *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar12;
  func_0x00010bf58300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (lVar11 != 0) {
    func_0x00010befa120(puVar4);
  }
  lVar13 = *(long *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar13;
  func_0x00010bf544a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (lVar12 != 0) {
    func_0x00010befa120(puVar4);
  }
  lVar14 = *(long *)(param_1 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010bf55660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (lVar13 != 0) {
    func_0x00010befa120(puVar4);
  }
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  lVar14 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar14);
  puVar15 = puVar4;
  func_0x00010bf51e00();
  func_0x00010bf23920(uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(lVar14);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar16);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8811c; end: 104f881e7;  */

void FUN_104f8811c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0c6c20();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f881e8; end: 104f8832f; -[SCMessagingPlaybackWorkflow reportSnapWithParams:source:] */

void FUN_104f881e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x00010c27ece0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar3,param_2,lVar2,1);
  _objc_release(lVar2);
  ppuVar1 = &PTR_PTR_1133bb270;
  if (param_4 != 0x29) {
    ppuVar1 = &PTR_PTR_1133bb258;
  }
  puVar6 = *ppuVar1;
  _objc_retain(puVar6);
  puVar4 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  func_0x00010c0587e0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104f88330; end: 104f8846f; -[SCMessagingPlaybackWorkflow blockAndReportSnapWithParams:reportedUserId:source:] */

void FUN_104f88330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x108);
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    func_0x00010c133bc0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_5;
    func_0x00010bf1d5e0(lVar1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f88470; end: 104f884a7;  */

void FUN_104f88470(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c133bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f884a8; end: 104f884ef; -[SCMessagingPlaybackWorkflow reportDidCompleteWithCancelled:] */

void FUN_104f884a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f884f0; end: 104f88557; -[SCMessagingPlaybackWorkflow operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_104f884f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1000e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f88558; end: 104f8858b; -[SCMessagingPlaybackWorkflow operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_104f88558(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8858c; end: 104f886cb; -[SCMessagingPlaybackWorkflow operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_104f8858c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2c60;
  _objc_opt_class(PTR_PTR_1126b2c60);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c0cbb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0cb340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  uVar2 = uVar4;
  func_0x00010c0c5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1000c0(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104f886cc; end: 104f886ff; -[SCMessagingPlaybackWorkflow operaPresenterDidCancelDismissing:] */

void FUN_104f886cc(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fffe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f88700; end: 104f88703; -[SCMessagingPlaybackWorkflow operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_104f88700(void)

{
  return;
}



/* Entry: 104f88704; end: 104f8873b; -[SCMessagingPlaybackWorkflow operaPresenterDidFailToPresent:] */

void FUN_104f88704(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f8873c; end: 104f8876f; -[SCMessagingPlaybackWorkflow operaPresenterDidFinishDismissing:] */

void FUN_104f8873c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f88770; end: 104f887a3; -[SCMessagingPlaybackWorkflow operaPresenterDidTearDown:] */

void FUN_104f88770(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f887a4; end: 104f887a7; -[SCMessagingPlaybackWorkflow operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_104f887a4(void)

{
  return;
}



/* Entry: 104f887a8; end: 104f887ab; -[SCMessagingPlaybackWorkflow operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_104f887a8(void)

{
  return;
}



/* Entry: 104f887ac; end: 104f888ab; -[SCMessagingPlaybackWorkflow _dismissPlaybackWhenExitingFriendsFeedWithDeckEventObservable:] */

void FUN_104f887ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar1;
  _objc_release(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f888ac; end: 104f88957;  */

void FUN_104f888ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1a00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f88958; end: 104f889cb;  */

void FUN_104f88958(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c110220();
  if (((int)lVar1 == 6) &&
     ((lVar1 = param_2, func_0x00010bf9a440(), lVar1 == 1 ||
      (lVar1 = param_2, func_0x00010bf9a440(), lVar1 == 2)))) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be02fe0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f889cc; end: 104f889cf;  */

void FUN_104f889cc(void)

{
  return;
}



/* Entry: 104f889d0; end: 104f88a2b; -[SCMessagingPlaybackWorkflow _dismissOpera] */

void FUN_104f889d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xf0));
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf84cc0(*(undefined8 *)(param_1 + 0x110),param_2,1);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f88a2c; end: 104f88bd3; -[SCMessagingPlaybackWorkflow .cxx_destruct] */

void FUN_104f88a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
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
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 104f88bd4; end: 104f8904b; -[SCSnapPlaybackPlugin initWithConversationId:isLockedConversation:userId:loggingSource:playbackSource:presentingUiContainer:cachedSummaryInfoProvider:contentDelivery:musicContentRestrictionServices:conversationActionHandler:imageDownloader:notificationPool:playbackGrapheneLogger:reportDelegate:snapCountDownManager:circumstanceEngine:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:messagingExperimentService:featureSettingsService:isBundledMultiSnapPlayback:lensPrefetchingFactory:snapProIdValidity:] */

undefined8 *
FUN_104f88bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_25);
  _objc_retain(param_26);
  puStack_70 = PTR_PTR_1126e54d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 2) = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_16);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x19) = param_23;
    _objc_retain(param_25);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_26;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2d40;
    _objc_alloc();
    func_0x00010c0031e0();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_21);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_21);
  }
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f8904c; end: 104f890a7;  */

void FUN_104f8904c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070100();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f890a8; end: 104f890b3; -[SCSnapPlaybackPlugin setPlaylistItemController:] */

void FUN_104f890a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 104f890b4; end: 104f890bf; -[SCSnapPlaybackPlugin setOperaControlling:] */

void FUN_104f890b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 104f890c0; end: 104f893a3; -[SCSnapPlaybackPlugin dependentPlugins] */

void FUN_104f890c0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  byte bVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126b2d48;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_1 + 0x98);
  _objc_retain(lVar17);
  _objc_alloc();
  func_0x00010c005120();
  puVar3 = PTR_PTR_1126b2d50;
  puStack_c0 = puVar2;
  _objc_alloc();
  func_0x00010c004c60();
  puVar4 = PTR_PTR_1126b2d58;
  puStack_b8 = puVar3;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126b2d68;
  puStack_b0 = puVar4;
  _objc_alloc();
  uVar18 = *(undefined8 *)(param_1 + 8);
  uVar20 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  lVar6 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c23f9c0();
  func_0x00010c004e80(puVar5,param_2,uVar18,uVar20,uVar1,lVar7 != 0,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0xb0));
  puVar8 = PTR_PTR_1126b2d70;
  puStack_a8 = puVar5;
  _objc_alloc();
  func_0x00010c004c00();
  puVar9 = PTR_PTR_1126b2d78;
  puStack_a0 = puVar8;
  _objc_alloc();
  uVar20 = *(undefined8 *)(param_1 + 8);
  uVar21 = *(undefined8 *)(param_1 + 0x40);
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c004ca0(puVar9,param_2,uVar20,uVar21,uVar19,uVar18,lVar7,
                      *(undefined8 *)(param_1 + 0x68));
  puVar10 = PTR_PTR_1126b2d80;
  puStack_98 = puVar9;
  _objc_alloc();
  func_0x00010bffaac0();
  puVar11 = PTR_PTR_1126b2d88;
  puStack_90 = puVar10;
  _objc_alloc();
  func_0x00010c0053e0();
  puVar12 = PTR_PTR_1126b2d90;
  puStack_88 = puVar11;
  _objc_alloc();
  func_0x00010c004cc0();
  puVar13 = PTR_PTR_1126b2d98;
  puStack_80 = puVar12;
  _objc_alloc();
  func_0x00010c0253e0();
  puVar14 = PTR_PTR_1126b2da0;
  puStack_78 = puVar13;
  _objc_opt_new();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,0xb);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b23c0;
    func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(lVar17 + 200) == '\x01') {
      func_0x00010c2b5ea0(puVar2,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b4880(puVar2,param_2,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      bVar16 = *(byte *)(lVar17 + 200);
    }
    else {
      bVar16 = 0;
    }
    func_0x00010c2b69c0(puVar2,param_2,bVar16 & 1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9060(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2b33a0(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8100(puVar2,param_2,*(undefined1 *)(lVar17 + 200));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ae960(puVar2,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a75e0(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afd20(puVar2,param_2,2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b5480(puVar2,param_2,0xb7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bd1e0(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104f893a4; end: 104f89517; -[SCSnapPlaybackPlugin updateOperaConfiguration:] */

void FUN_104f893a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010c2b5ea0(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4880(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    bVar3 = *(byte *)(param_1 + 200);
  }
  else {
    bVar3 = 0;
  }
  func_0x00010c2b69c0(puVar1,param_2,bVar3 & 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9060(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b33a0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8100(puVar1,param_2,*(undefined1 *)(param_1 + 200));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae960(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a75e0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd20(puVar1,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5480(puVar1,param_2,0xb7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd1e0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f89518; end: 104f8951b; -[SCSnapPlaybackPlugin extraPropertiesProvider] */

void FUN_104f89518(void)

{
  return;
}



/* Entry: 104f8951c; end: 104f8a70b; -[SCSnapPlaybackPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f8951c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  bool bVar23;
  uint uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126b2c68;
  if (param_6 == 0) goto LAB_104f8a60c;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2368;
  _objc_opt_new();
  uVar5 = uVar4;
  func_0x00010c0cb5a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uStack_a8 = 0;
  dVar26 = 1.02270250269256e-312;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104f8a70c;
  uStack_88 = 0x104f8a71c;
  uStack_80 = 0;
  uVar5 = uVar4;
  puStack_a0 = &uStack_a8;
  func_0x00010c0cb340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104f8a724;
  puStack_b8 = &UNK_11085e698;
  puStack_b0 = &uStack_a8;
  func_0x00010c0bfe80();
  _objc_release(uVar5);
  lVar8 = puStack_a0[5];
  func_0x00010c100380();
  dVar28 = dVar26;
  dVar27 = 0.0;
  if (lVar8 == 1) {
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0cb5a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1553a0(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar9);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dVar28 = dVar26;
    func_0x00010c0df720(dVar26,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar12);
    dVar27 = dVar26;
  }
  uVar5 = uVar4;
  func_0x00010c0cb340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  FUN_104f76fac();
  _objc_release(uVar5);
  puVar11 = PTR_PTR_1126b2dc0;
  _objc_alloc();
  uVar5 = uVar4;
  func_0x00010bf026e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b62cb88(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff20();
  _objc_release(uVar10);
  _objc_release(uVar5);
  func_0x00010c1d0640(puVar3);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c6c20(uVar7);
  func_0x0001085439dc();
  func_0x00010c0df780(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar12);
  uVar5 = uVar7;
  func_0x00010bf4cce0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(uVar5);
  uVar5 = uVar7;
  func_0x00010c075780();
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar7;
    func_0x00010bf8b160(uVar7);
    _objc_retainAutoreleasedReturnValue();
    if (dVar27 <= 0.0) {
      func_0x00010bf885a0(uVar5);
    }
    else {
      func_0x00010bf885a0(uVar5);
      dVar28 = dVar28 - dVar27;
    }
    uVar10 = uVar7;
    func_0x00010c0c6c20();
    if ((uVar10 < 0x16) && ((1L << (uVar10 & 0x3f) & 0x363f36U) != 0)) {
      ppuVar22 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be678;
      bVar23 = true;
    }
    else {
      ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar28,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      bVar23 = false;
    }
    func_0x00010c1d0640(puVar3);
    if (!bVar23) {
      _objc_release(ppuVar22);
    }
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    _objc_release(uVar5);
  }
  uVar5 = uVar4;
  func_0x00010c0efbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (uVar10 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  uVar5 = uVar4;
  func_0x00010bf4d6e0();
  if (uVar5 != 4) {
    func_0x00010c1d0640(puVar3);
  }
  func_0x00010c1d0640(puVar3);
  func_0x00010c1d0640(puVar3);
  uVar5 = uVar7;
  func_0x00010c0c6c20();
  if (uVar5 < 0x16) {
    if ((1L << (uVar5 & 0x3f) & 0x363e36U) == 0) {
      if ((1L << (uVar5 & 0x3f) & 0x9c081U) != 0) {
        func_0x00010c1d0640(puVar3);
        uVar5 = uVar7;
        func_0x00010c0c5180(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 1;
        func_0x0001085436d4(1,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar9);
        _objc_release(uVar5);
        iVar2 = 2;
        func_0x000100029b9c(2,0x11,0,0);
        if ((iVar2 != 0) && (puVar12 = PTR_PTR_1126b2dc8, func_0x00010c06dc40(), (int)puVar12 != 0))
        {
          puVar13 = PTR_PTR_1126b2dd0;
          _objc_alloc(PTR_PTR_1126b2dd0);
          uVar5 = uVar7;
          func_0x00010c0c5180(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar7;
          func_0x00010c0c5180(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = 1;
          func_0x0001085436d4(1,uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c029500(puVar13);
          _objc_release(uVar9);
          _objc_release(uVar14);
          _objc_release(uVar5);
          puVar16 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar15 = puVar16;
          _objc_opt_isKindOfClass(puVar16,puVar12);
          puVar12 = puVar16;
          if (((ulong)puVar15 & 1) == 0) {
            puVar12 = (undefined *)0x0;
          }
          _objc_retain(puVar12);
          _objc_release(puVar16);
          puVar16 = PTR____NSArray0__struct_11034ab48;
          if (puVar12 != (undefined *)0x0) {
            puVar16 = puVar12;
          }
          _objc_retain(puVar16);
          _objc_release(puVar12);
          puVar12 = puVar16;
          func_0x00010bf09f60(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          goto LAB_104f89f74;
        }
      }
    }
    else {
      func_0x00010c1d0640(puVar3);
      func_0x00010c1d0640(puVar3);
      uVar5 = uVar7;
      func_0x00010c0c5180(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 3;
      func_0x0001085436d4(3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar5);
      puVar12 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0c5180(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c29bc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar12);
      if (puVar13 == (undefined *)0x0) {
        uVar9 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3100();
        _objc_release(uVar9);
      }
      else {
        func_0x00010c1d0640(puVar3);
      }
      func_0x00010c075780();
      func_0x00010c1d0640(puVar3);
      iVar2 = 2;
      func_0x000100029b9c(2,0x11,0,0);
      if ((iVar2 != 0) && (puVar12 = PTR_PTR_1126b2dc8, func_0x00010c06dc40(), (int)puVar12 != 0)) {
        uVar5 = uVar7;
        func_0x00010c0c5180(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = (undefined *)0x3;
        func_0x0001085436d4(3,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar12 = PTR_PTR_1126b2dd0;
        uVar5 = uVar7;
        if (puVar13 == (undefined *)0x0) {
          _objc_alloc(PTR_PTR_1126b2dd0);
          func_0x00010c0c5180(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c029500(puVar12);
        }
        else {
          _objc_alloc();
          func_0x00010c0c5180(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c029520(puVar12);
        }
        _objc_release(uVar5);
        puVar17 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar18 = puVar17;
        _objc_opt_isKindOfClass(puVar17,puVar15);
        puVar15 = puVar17;
        if (((ulong)puVar18 & 1) == 0) {
          puVar15 = (undefined *)0x0;
        }
        _objc_retain(puVar15);
        _objc_release(puVar17);
        puVar17 = PTR____NSArray0__struct_11034ab48;
        if (puVar15 != (undefined *)0x0) {
          puVar17 = puVar15;
        }
        _objc_retain(puVar17);
        _objc_release(puVar15);
        puVar15 = puVar17;
        func_0x00010bf09f60(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar15);
        _objc_release(puVar17);
LAB_104f89f74:
        _objc_release(puVar12);
        _objc_release(puVar16);
      }
      _objc_release(puVar13);
    }
  }
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  iVar2 = (int)puStack_a0[5];
  func_0x00010bf2c580();
  if (iVar2 != 0) {
    uVar19 = puStack_a0[5];
    func_0x00010c14ba60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar19;
    func_0x00010bf4b900();
    _objc_release(uVar19);
    ppuVar22 = &PTR____CFConstantStringClassReference_110dbdd38;
    if ((int)uVar9 == 0) {
      ppuVar22 = &PTR____CFConstantStringClassReference_110dbdd58;
    }
    func_0x00010bcbeaa8(ppuVar22,0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    func_0x00010c056260();
    func_0x00010befa120(puVar12);
    _objc_release(puVar13);
    _objc_release(ppuVar22);
  }
  uVar5 = uVar4;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((uVar14 & 1) == 0) {
    puVar13 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar16 = puVar13;
    func_0x00010b75e404();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar13);
    _objc_release(puVar16);
    func_0x00010befa120(puVar12);
    _objc_release(puVar13);
  }
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  uVar5 = uVar1;
  func_0x00010c0f4aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf240();
  _objc_release(uVar5);
  uVar5 = uVar7;
  func_0x00010c0cb2a0();
  uVar14 = uVar7;
  func_0x00010c0c6c20();
  uVar24 = (uint)puStack_a0[5];
  func_0x00010bf2c580();
  if ((uVar14 + 1 < 0x17) && ((0x7ffff1U >> (ulong)((uint)(uVar14 + 1) & 0x1f) & 1) != 0)) {
    uVar24 = 0;
  }
  else {
    uVar24 = uVar24 & ((uint)(0x2c < uVar5) | 0x11c0cU >> (uVar5 & 0x3f));
  }
  uVar5 = uVar7;
  func_0x00010c075780();
  if ((uVar24 & (uint)uVar5) == 1) {
    puVar13 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar16 = puVar13;
    func_0x00010723c9d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar13);
    _objc_release(puVar16);
    func_0x00010befa120(puVar12);
    _objc_release(puVar13);
  }
  uVar5 = uVar7;
  func_0x00010c0c6c20();
  uVar14 = uVar1;
  func_0x00010c0f4aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = puStack_a0[5];
  func_0x00010bf2c580(uVar19);
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar20;
  func_0x00010c080e80();
  FUN_104f7b260(uVar5,uVar14,uVar19,uVar9);
  _objc_release(uVar20);
  _objc_release(uVar14);
  if ((int)uVar5 != 0) {
    puVar13 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar16 = puVar13;
    func_0x00010509ac14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar13);
    _objc_release(puVar16);
    func_0x00010befa120(puVar12);
    _objc_release(puVar13);
  }
  func_0x00010c1d0640(puVar3);
  func_0x00010c1d0640(puVar3);
  func_0x00010c1d0640(puVar3);
  uVar5 = uVar7;
  func_0x00010c075780();
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar7;
    func_0x00010c242120();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010c0d2280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar14);
    _objc_release(uVar5);
  }
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar13);
  func_0x00010c1d0640(puVar3);
  func_0x00010c1d0640(puVar3);
  puVar13 = puVar12;
  func_0x00010bf51e00(puVar12);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar13);
  uVar25 = *(undefined8 *)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar20;
  func_0x00010c07e300();
  uVar21 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar21;
  func_0x00010c07e320();
  uVar5 = uVar4;
  FUN_104f6ec4c(uVar4,uVar25,uVar9,uVar19,1,1,0);
  _objc_release(uVar21);
  _objc_release(uVar20);
  puVar13 = puVar3;
  if ((int)uVar5 != 0) {
    func_0x00010c1d0640(puVar3);
    uVar5 = uVar4;
    FUN_104f6f3d8();
    if (((uVar5 & 1) == 0) && (uVar5 = uVar4, FUN_104f6f438(), (uVar5 & 1) == 0)) {
      func_0x00010c100fc0(PTR_PTR_1126b2de0);
    }
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar13);
    func_0x00010c1d0640(puVar3);
    puVar16 = PTR_PTR_1126b2de0;
    func_0x00010befa320(PTR_PTR_1126b2de0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar16);
  }
  puVar3 = puVar13;
  func_0x00010bf51e00(puVar13);
  (**(code **)(param_6 + 0x10))(param_6,puVar3,0);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar11);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar7);
  _objc_release(puVar13);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_104f8a60c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8a70c; end: 104f8a723;  */

void FUN_104f8a70c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f8a724; end: 104f8a75b;  */

void FUN_104f8a724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f8a75c; end: 104f8a77f;  */

void FUN_104f8a75c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f8a780; end: 104f8a91b; -[SCSnapPlaybackPlugin registeredEventsForOperaSession] */

void FUN_104f8a780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_a8 = puVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_a0 = puVar2;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_98 = puVar3;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_90 = puVar4;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_88 = puVar5;
  func_0x00010c0f60e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2338;
  puStack_80 = puVar6;
  func_0x00010c13d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2ea8;
  puStack_78 = puVar7;
  func_0x00010c2bf2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &puStack_a8;
  uVar14 = 8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar13);
  _objc_retain(uVar14);
  _objc_retain(param_5);
  uVar10 = uVar14;
  func_0x00010be36bc0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar13;
  func_0x00010c0720c0(ppuVar13,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar11 != 0) {
    func_0x00010be58ce0(puVar1);
    goto LAB_104f8abc0;
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar13;
  func_0x00010c0720c0(ppuVar13,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar11 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar13;
    func_0x00010c0720c0(ppuVar13,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar11 == 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c0c4dc0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar13;
      func_0x00010c0720c0(ppuVar13,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)ppuVar11 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar13;
        func_0x00010c0720c0(ppuVar13,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)ppuVar11 == 0) {
          puVar2 = PTR_PTR_1126b2338;
          func_0x00010c0f60e0(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar13;
          func_0x00010c0720c0(ppuVar13,param_2,puVar2);
          _objc_release(puVar2);
          if ((int)ppuVar11 == 0) {
            puVar2 = PTR_PTR_1126b2338;
            func_0x00010c13d9e0(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar13;
            func_0x00010c0720c0(ppuVar13,param_2,puVar2);
            _objc_release(puVar2);
            if ((int)ppuVar11 == 0) {
              puVar2 = PTR_PTR_1126b2ea8;
              func_0x00010c2bf2c0(PTR_PTR_1126b2ea8);
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar13;
              func_0x00010c0720c0(ppuVar13,param_2,puVar2);
              _objc_release(puVar2);
              if ((int)ppuVar11 != 0) {
                uVar15 = *(undefined8 *)(puVar1 + 0x50);
                func_0x00010c269d40(uVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0aff80();
                _objc_release(uVar15);
              }
            }
            else {
              func_0x00010be95ee0(puVar1,param_2,uVar10);
            }
          }
          else {
            func_0x00010be70f20(puVar1,param_2,uVar10);
          }
        }
        else {
          func_0x00010be174a0(puVar1,param_2,uVar10,uVar14,param_5);
        }
      }
      else {
        uVar12 = uVar14;
        FUN_104f8abf8(uVar14);
        func_0x00010be2e200(puVar1,param_2,uVar10,uVar12,param_5);
      }
      goto LAB_104f8abc0;
    }
    uVar12 = uVar14;
    FUN_104f8abf8();
    if ((int)uVar12 == 0) goto LAB_104f8abc0;
    uVar15 = 1;
  }
  else {
    uVar12 = uVar14;
    FUN_104f8abf8();
    if ((uVar12 & 1) != 0) goto LAB_104f8abc0;
    uVar15 = 0;
  }
  func_0x00010be6d620(puVar1,param_2,uVar10,uVar15);
LAB_104f8abc0:
  _objc_release(uVar10);
  _objc_release(param_5);
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
  return;
}



/* Entry: 104f8a91c; end: 104f8abf7; -[SCSnapPlaybackPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f8a91c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar4 != 0) {
    func_0x00010be58ce0(param_1);
    goto LAB_104f8abc0;
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar4 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar4 == 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c0c4dc0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)uVar4 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)uVar4 == 0) {
          puVar2 = PTR_PTR_1126b2338;
          func_0x00010c0f60e0(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar2);
          _objc_release(puVar2);
          if ((int)uVar4 == 0) {
            puVar2 = PTR_PTR_1126b2338;
            func_0x00010c13d9e0(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar2);
            _objc_release(puVar2);
            if ((int)uVar4 == 0) {
              puVar2 = PTR_PTR_1126b2ea8;
              func_0x00010c2bf2c0(PTR_PTR_1126b2ea8);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_3;
              func_0x00010c0720c0(param_3,param_2,puVar2);
              _objc_release(puVar2);
              if ((int)uVar4 != 0) {
                uVar4 = *(undefined8 *)(param_1 + 0x50);
                func_0x00010c269d40(uVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0aff80();
                _objc_release(uVar4);
              }
            }
            else {
              func_0x00010be95ee0(param_1,param_2,uVar1);
            }
          }
          else {
            func_0x00010be70f20(param_1,param_2,uVar1);
          }
        }
        else {
          func_0x00010be174a0(param_1,param_2,uVar1,param_4,param_5);
        }
      }
      else {
        uVar3 = param_4;
        FUN_104f8abf8(param_4);
        func_0x00010be2e200(param_1,param_2,uVar1,uVar3,param_5);
      }
      goto LAB_104f8abc0;
    }
    uVar3 = param_4;
    FUN_104f8abf8();
    if ((int)uVar3 == 0) goto LAB_104f8abc0;
    uVar4 = 1;
  }
  else {
    uVar3 = param_4;
    FUN_104f8abf8();
    if ((uVar3 & 1) != 0) goto LAB_104f8abc0;
    uVar4 = 0;
  }
  func_0x00010be6d620(param_1,param_2,uVar1,uVar4);
LAB_104f8abc0:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f8abf8; end: 104f8ac4f;  */

bool FUN_104f8abf8(long param_1)

{
  long lVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 104f8ac50; end: 104f8ac83; -[SCSnapPlaybackPlugin _logSnapViewAttempt] */

void FUN_104f8ac50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b30c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f8ac84; end: 104f8ae2b; -[SCSnapPlaybackPlugin _openSnapMediaForPageId:isVideo:] */

void FUN_104f8ac84(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar1 = param_2;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0cb5a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfd5e00(uVar2,param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0cb340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bf8b160(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar8 = lVar6;
    func_0x00010c075780(lVar6);
    lVar9 = lVar1;
    func_0x00010c0cb5a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126200(param_1,uVar7,param_3,puVar5,lVar8,lVar9,*(undefined8 *)(param_2 + 8));
    _objc_release(lVar9);
    _objc_release(lVar3);
    _objc_release(uVar7);
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 8);
    lVar3 = lVar1;
    func_0x00010c0cb5a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf502e0(uVar10,param_3,uVar7,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f8ae2c; end: 104f8afc7; -[SCSnapPlaybackPlugin _handlePlaybackErrorForPageId:isVideo:params:] */

void FUN_104f8ae2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 in_x4;
  undefined8 uVar6;
  
  _objc_retain(in_x4);
  lVar1 = param_1;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c120300(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = in_x4;
  func_0x00010c0e00e0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_opt_isKindOfClass(uVar6,puVar4);
  _objc_release(uVar6);
  lVar2 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar1;
  func_0x00010c0cb5a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    lVar2 = lVar1;
    func_0x00010c0cb5a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf502c0(uVar6);
    _objc_release(lVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3100();
  _objc_release(uVar6);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f8afc8; end: 104f8b16b; -[SCSnapPlaybackPlugin _finishViewingSnapForPageId:page:params:] */

void FUN_104f8afc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x80;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x00010c0cb340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010beb4740();
    if ((int)lVar1 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = uVar4;
      func_0x00010c0cb5a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf502c0(uVar7);
      _objc_release(uVar3);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b30e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f8b16c; end: 104f8b293; -[SCSnapPlaybackPlugin _shouldMarkSnapAsViewedForMedia:page:] */

undefined8 FUN_104f8b16c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27dd80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 < 0xb && (1L << (uVar4 & 0x3f) & 0x640U) != 0) {
    lVar5 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c067fc0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (lVar7 == 0) {
      uVar8 = param_3;
      func_0x00010c075780(param_3);
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 104f8b294; end: 104f8b313; -[SCSnapPlaybackPlugin _pauseSnapForPageId:] */

void FUN_104f8b294(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0cb5a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1846e0(uVar2,param_2,1,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f8b314; end: 104f8b393; -[SCSnapPlaybackPlugin _resumeSnapForPageId:] */

void FUN_104f8b314(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0cb5a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1846e0(uVar2,param_2,0,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f8b394; end: 104f8b473; -[SCSnapPlaybackPlugin _playbackMessageForPageId:] */

void FUN_104f8b394(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x80;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0cb140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f8b474; end: 104f8b593; -[SCSnapPlaybackPlugin .cxx_destruct] */

void FUN_104f8b474(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f8b594; end: 104f8b5bf; +[SCGrapheneMessagingPlaybackMetric ffMediaPrepLatency] */

void FUN_104f8b594(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b5c0; end: 104f8b5eb; +[SCGrapheneMessagingPlaybackMetric ffViewAttempt] */

void FUN_104f8b5c0(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b5ec; end: 104f8b617; +[SCGrapheneMessagingPlaybackMetric ffViewComplete] */

void FUN_104f8b5ec(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b618; end: 104f8b643; +[SCGrapheneMessagingPlaybackMetric ffViewFailed] */

void FUN_104f8b618(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b644; end: 104f8b66f; +[SCGrapheneMessagingPlaybackMetric ffUnableToPresent] */

void FUN_104f8b644(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b670; end: 104f8b69b; +[SCGrapheneMessagingPlaybackMetric ffTapLatency] */

void FUN_104f8b670(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b69c; end: 104f8b6c7; +[SCGrapheneMessagingPlaybackMetric ffPrepareMedia] */

void FUN_104f8b69c(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b6c8; end: 104f8b6f3; +[SCGrapheneMessagingPlaybackMetric chatMediaPrepLatency] */

void FUN_104f8b6c8(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b6f4; end: 104f8b71f; +[SCGrapheneMessagingPlaybackMetric chatViewAttempt] */

void FUN_104f8b6f4(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b720; end: 104f8b74b; +[SCGrapheneMessagingPlaybackMetric chatViewComplete] */

void FUN_104f8b720(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b74c; end: 104f8b777; +[SCGrapheneMessagingPlaybackMetric chatViewFailed] */

void FUN_104f8b74c(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b778; end: 104f8b7a3; +[SCGrapheneMessagingPlaybackMetric chatUnableToPresent] */

void FUN_104f8b778(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b7a4; end: 104f8b7cf; +[SCGrapheneMessagingPlaybackMetric chatPrepareMedia] */

void FUN_104f8b7a4(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b7d0; end: 104f8b7fb; +[SCGrapheneMessagingPlaybackMetric snapZoom] */

void FUN_104f8b7d0(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b7fc; end: 104f8b827; +[SCGrapheneMessagingPlaybackMetric mediaIdMissing] */

void FUN_104f8b7fc(void)

{
  _objc_alloc(PTR_PTR_1126b2cf8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8b828; end: 104f8b8c7; -[SCGrapheneMessagingPlaybackMetric description] */

void FUN_104f8b828(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbde78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dbde78,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e54e0;
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



/* Entry: 104f8b8c8; end: 104f8ba97; -[SCGrapheneRegistry messagingPlaybackGraphene] */

void FUN_104f8b8c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104f8b950;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9160 != -1) {
    func_0x00010002a2fc(0x1136b9160,&puStack_48);
  }
  uVar1 = uRam00000001136b9158;
  _objc_retain(uRam00000001136b9158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f8ba98; end: 104f8bc2f; -[SCMessagingPlaybackMessage initWithMessageId:messageSender:orderKey:messageContent:contentState:overlayKey:sentTimestamp:analyticsMessageId:isSaved:mediaOrigin:] */

undefined8 *
FUN_104f8ba98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e54e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_11;
    puVar1[10] = param_13;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f8bc30; end: 104f8bc53; -[SCMessagingPlaybackMessage copyWithZone:] */

undefined8 FUN_104f8bc30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8bc54; end: 104f8bd23; -[SCMessagingPlaybackMessage hash] */

undefined8 * FUN_104f8bc54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x50);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_78;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f8be44:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8be50;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[4] == param_3[4] && (puVar3[6] == param_3[6])) &&
         (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) && (puVar3[10] == param_3[10])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[7];
            if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[8];
              if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[9];
                if (puVar6 != (undefined8 *)param_3[9]) {
                  func_0x00010c071ae0();
                  goto LAB_104f8be50;
                }
                goto LAB_104f8be44;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f8be50:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f8bd24; end: 104f8be6b; -[SCMessagingPlaybackMessage isEqual:] */

long FUN_104f8bd24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8be44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8be50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if (lVar3 != *(long *)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_104f8be50;
                }
                goto LAB_104f8be44;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f8be50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8be6c; end: 104f8be73; -[SCMessagingPlaybackMessage messageId] */

undefined8 FUN_104f8be6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8be74; end: 104f8be7b; -[SCMessagingPlaybackMessage messageSender] */

undefined8 FUN_104f8be74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f8be7c; end: 104f8be83; -[SCMessagingPlaybackMessage orderKey] */

undefined8 FUN_104f8be7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f8be84; end: 104f8be8b; -[SCMessagingPlaybackMessage messageContent] */

undefined8 FUN_104f8be84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f8be8c; end: 104f8be93; -[SCMessagingPlaybackMessage contentState] */

undefined8 FUN_104f8be8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f8be94; end: 104f8be9b; -[SCMessagingPlaybackMessage overlayKey] */

undefined8 FUN_104f8be94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f8be9c; end: 104f8bea3; -[SCMessagingPlaybackMessage sentTimestamp] */

undefined8 FUN_104f8be9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f8bea4; end: 104f8beab; -[SCMessagingPlaybackMessage analyticsMessageId] */

undefined8 FUN_104f8bea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f8beac; end: 104f8beb3; -[SCMessagingPlaybackMessage isSaved] */

undefined1 FUN_104f8beac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f8beb4; end: 104f8bebb; -[SCMessagingPlaybackMessage mediaOrigin] */

undefined8 FUN_104f8beb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f8bebc; end: 104f8bf1b; -[SCMessagingPlaybackMessage .cxx_destruct] */

void FUN_104f8bebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8bf1c; end: 104f8bf87; +[SCMessagingPlaybackMessageContent chatMediaWithChatMediaContent:] */

void FUN_104f8bf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e70;
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



/* Entry: 104f8bf88; end: 104f8bff3; +[SCMessagingPlaybackMessageContent replyMediaWithReplyMediaContent:] */

void FUN_104f8bf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f8bff4; end: 104f8c057; +[SCMessagingPlaybackMessageContent snapWithSnapContent:] */

void FUN_104f8bff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e70;
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



/* Entry: 104f8c058; end: 104f8c07b; -[SCMessagingPlaybackMessageContent copyWithZone:] */

undefined8 FUN_104f8c058(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8c07c; end: 104f8c0ff; -[SCMessagingPlaybackMessageContent hash] */

void FUN_104f8c07c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e54f0;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8c100; end: 104f8c143; -[SCMessagingPlaybackMessageContent internalInit] */

void FUN_104f8c100(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e54f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8c144; end: 104f8c213; -[SCMessagingPlaybackMessageContent isEqual:] */

long FUN_104f8c144(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8c1ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8c1f8;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104f8c1f8;
          }
          goto LAB_104f8c1ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f8c1f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8c214; end: 104f8c2bf; -[SCMessagingPlaybackMessageContent matchSnap:chatMedia:replyMedia:] */

void FUN_104f8c214(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_104f8c29c;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_104f8c29c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_104f8c29c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_104f8c29c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f8c2c0; end: 104f8c2fb; -[SCMessagingPlaybackMessageContent .cxx_destruct] */

void FUN_104f8c2c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8c2fc; end: 104f8c367; +[SCMessagingPlaybackParticipants groupWithGroup:] */

void FUN_104f8c2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2ca8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f8c368; end: 104f8c407; +[SCMessagingPlaybackParticipants oneOnOneWithSnapchatters:replySnapchatter:isCampaignConversation:] */

void FUN_104f8c368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2ca8;
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
  puVar2[0x20] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f8c408; end: 104f8c42b; -[SCMessagingPlaybackParticipants copyWithZone:] */

undefined8 FUN_104f8c408(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8c42c; end: 104f8c4b3; -[SCMessagingPlaybackParticipants hash] */

void FUN_104f8c42c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e54f8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8c4b4; end: 104f8c4f7; -[SCMessagingPlaybackParticipants internalInit] */

void FUN_104f8c4b4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e54f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8c4f8; end: 104f8c5d7; -[SCMessagingPlaybackParticipants isEqual:] */

long FUN_104f8c4f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8c5b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8c5bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_104f8c5bc;
          }
          goto LAB_104f8c5b0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f8c5bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8c5d8; end: 104f8c663; -[SCMessagingPlaybackParticipants matchOneOnOne:group:] */

void FUN_104f8c5d8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined1 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f8c664; end: 104f8c69f; -[SCMessagingPlaybackParticipants .cxx_destruct] */

void FUN_104f8c664(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8c6a0; end: 104f8c74b; -[SCMessagingPlaybackOperaGroup initWithMessages:participants:] */

undefined1 *
FUN_104f8c6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5500;
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



/* Entry: 104f8c74c; end: 104f8c76f; -[SCMessagingPlaybackOperaGroup copyWithZone:] */

undefined8 FUN_104f8c74c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8c770; end: 104f8c7e3; -[SCMessagingPlaybackOperaGroup hash] */

undefined8 * FUN_104f8c770(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_104f8c864:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8c870;
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
          goto LAB_104f8c870;
        }
        goto LAB_104f8c864;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f8c870:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f8c7e4; end: 104f8c88b; -[SCMessagingPlaybackOperaGroup isEqual:] */

long FUN_104f8c7e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8c864:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8c870;
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
          goto LAB_104f8c870;
        }
        goto LAB_104f8c864;
      }
    }
    lVar3 = 0;
  }
LAB_104f8c870:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8c88c; end: 104f8c893; -[SCMessagingPlaybackOperaGroup messages] */

undefined8 FUN_104f8c88c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


