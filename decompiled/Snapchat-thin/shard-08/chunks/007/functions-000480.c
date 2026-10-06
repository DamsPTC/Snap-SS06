/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10650a2fc; end: 10650a42f; -[SCChatScopeWorkflow _beginGroupChatNonFriendWarningWorkflowIfNeededForGroup:] */

/* WARNING: Removing unreachable block (ram,0x00010650a3d8) */

long FUN_10650a2fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c2a21c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x00010c231fa0();
      _objc_retain(0);
      if ((int)lVar1 != 0) {
        func_0x00010bf529e0(0);
        func_0x00010be54840(param_1);
        func_0x00010bf18240(*(undefined8 *)(param_1 + 0x18));
      }
      _objc_release(0);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10650a430; end: 10650a513; -[SCChatScopeWorkflow _logGroupChatEnterQualifyingGroupForGroup:nonFriendCount:] */

void FUN_10650a430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cb440;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ecc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bf529e0(uVar3);
  func_0x00010c1a4a80(puVar1,param_2,uVar2);
  _objc_release(uVar3);
  func_0x00010c1cd9c0(puVar1,param_2,param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10650a514; end: 10650a6c7; -[SCChatScopeWorkflow _beginNFMWorkflowForUserId:intent:] */

void FUN_10650a514(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60,puVar5);
  _objc_retain(param_4);
  func_0x00010c09d7c0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar5);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  puVar4 = puVar5;
  func_0x00010bfb1920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010be696c0(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650a6c8; end: 10650a73b;  */

void FUN_10650a6c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be696c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650a73c; end: 10650a82f; -[SCChatScopeWorkflow _onGetSnapchatter:intent:] */

void FUN_10650a73c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07ee60();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be1f8c0(param_1,param_2,param_3,param_4);
      goto LAB_10650a810;
    }
    lVar3 = param_4;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf37160();
    _objc_release(lVar3);
    if (lVar4 != 4) {
      func_0x00010bf17dc0(*(undefined8 *)(param_1 + 0x18),param_2,param_4,0,param_1);
      goto LAB_10650a810;
    }
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf375a0();
  _objc_release(param_1);
LAB_10650a810:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650a830; end: 10650aa5f; -[SCChatScopeWorkflow _getHasUnreadMessageForSnapchatter:intent:] */

void FUN_10650a830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b0cd8;
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cb448;
  _objc_alloc(PTR_PTR_1126cb448);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10650aa60;
  puStack_88 = &UNK_11085dbf8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(puVar2);
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfddd40();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10650aa60; end: 10650ab2b;  */

void FUN_10650aa60(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10650ab2c;
  puStack_58 = &UNK_110844dd0;
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10650ab2c; end: 10650ab63;  */

void FUN_10650ab2c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650ab64; end: 10650ac07;  */

void FUN_10650ab64(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10650ac08;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10650ac08; end: 10650ac3b;  */

void FUN_10650ac08(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650ac3c; end: 10650ac67; -[SCChatScopeWorkflow _onGetHasUnreadMessageSuccessWithHasUnreadMessages:snapchatter:intent:] */

void FUN_10650ac3c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf18e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_beginUnreadMessageAlertWorkflowF_1125a3d40,
               param_4,0,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf17dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_beginChatSessionWithIntent_resto_1125a3918,
             param_5,0,param_1);
  return;
}



/* Entry: 10650ac68; end: 10650ac77; -[SCChatScopeWorkflow _onGetHasUnreadMessageFailureForSnapchatter:] */

void FUN_10650ac68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf18e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_beginUnreadMessageAlertWorkflowF_1125a3d40,
             param_3,1,param_1);
  return;
}



/* Entry: 10650ac78; end: 10650ac7f; -[SCChatScopeWorkflow modalChatViewControllerDidAppear:] */

void FUN_10650ac78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf76dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_didFinishPresentingChat_1125bb518);
  return;
}



/* Entry: 10650ac80; end: 10650acd3; -[SCChatScopeWorkflow modalChatViewControllerDidDisappear:] */

void FUN_10650ac80(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c06d1a0();
  if (param_3 != 0) {
    func_0x00010bf76dc0(*(undefined8 *)(param_1 + 0x18));
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf375a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10650acd4; end: 10650ad97; -[SCChatScopeWorkflow didGrantBlockExceptionForGroupId:] */

void FUN_10650acd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010bf94300(*(undefined8 *)(param_1 + 0x18));
  uVar4 = *(ulong *)(param_1 + 0x70);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  if (uVar4 != 0) {
    uVar2 = uVar4;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar4);
      uVar4 = 0;
    }
  }
  uVar2 = param_1;
  func_0x00010bdd3580(param_1,param_2,uVar4);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf17dc0(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x68),1,
                        param_1);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650ad98; end: 10650ade7; -[SCChatScopeWorkflow blockedExceptionAlertScopeDidDismiss:] */

void FUN_10650ad98(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf94300(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c13c420(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf375a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650ade8; end: 10650ae1b; -[SCChatScopeWorkflow didGrantNonFriendWarningForGroupId:] */

void FUN_10650ade8(long param_1)

{
  func_0x00010bf94a00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bf17dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_beginChatSessionWithIntent_resto_1125a3918,
             *(undefined8 *)(param_1 + 0x68),1,param_1);
  return;
}



/* Entry: 10650ae1c; end: 10650ae5f; -[SCChatScopeWorkflow nonFriendWarningAlertScopeDidDismiss:] */

void FUN_10650ae1c(long param_1)

{
  func_0x00010bf94a00(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c13c420(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf375a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650ae60; end: 10650ae93; -[SCChatScopeWorkflow didConfirmEnterChatWithSnapchatter:] */

void FUN_10650ae60(long param_1)

{
  func_0x00010bf95a00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bf17dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_beginChatSessionWithIntent_resto_1125a3918,
             *(undefined8 *)(param_1 + 0x68),1,param_1);
  return;
}



/* Entry: 10650ae94; end: 10650aedf; -[SCChatScopeWorkflow didDismissUnreadMessageAlertScope:] */

void FUN_10650ae94(long param_1)

{
  func_0x00010bf95a00(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c13c420(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf76dc0(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf375a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650aee0; end: 10650afa7; -[SCChatScopeWorkflow .cxx_destruct] */

void FUN_10650aee0(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10650afa8; end: 10650b0a7; -[SCMessageRenderingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650afa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb450;
  _objc_alloc(PTR_PTR_1126cb450);
  func_0x00010c02b820();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112749adc));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10650b0a8; end: 10650b0e7;  */

void FUN_10650b0a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10650b0e8; end: 10650b35b; -[SCMessageRenderingPluginEntryPoint _messageTypeRenderingPluginManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650b0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = param_1 + _DAT_112749ae0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112749ae4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf50200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126cb458;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112749ae8;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c102f60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112749aec;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112749af0;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112749af4;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112749af8;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112749afc;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037680(puVar7,param_2,lVar2,lVar6,lVar8,lVar9,lVar10,lVar11,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10650b35c; end: 10650b46b;  */

void FUN_10650b35c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10650b46c;
  uStack_30 = 0x10650b47c;
  uStack_28 = 0;
  func_0x00010c0bd100(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10650b46c; end: 10650b483;  */

void FUN_10650b46c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10650b484; end: 10650b557;  */

void FUN_10650b484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10650b558; end: 10650b5f3; -[SCMessageRenderingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650b558(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749adc,0);
  _objc_destroyWeak(param_1 + _DAT_112749ae0);
  _objc_destroyWeak(param_1 + _DAT_112749afc);
  _objc_destroyWeak(param_1 + _DAT_112749ae8);
  _objc_destroyWeak(param_1 + _DAT_112749af4);
  _objc_destroyWeak(param_1 + _DAT_112749af0);
  _objc_destroyWeak(param_1 + _DAT_112749aec);
  _objc_destroyWeak(param_1 + _DAT_112749af8);
  _objc_destroyWeak(param_1 + _DAT_112749ae4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112749b00);
  return;
}



/* Entry: 10650b5f4; end: 10650b7ff; -[SCChatTextLabel init] */

undefined1 * FUN_10650b5f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f19a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1bdb00(puVar1);
    func_0x00010c1cfce0(puVar1);
    func_0x00010c165e00(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c195540(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bef0c20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    func_0x00010c12d3e0(puVar4);
    puVar2 = PTR_PTR_1126cb460;
    func_0x00010c159b40(PTR_PTR_1126cb460);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar4);
    func_0x00010c162900(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0995a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    func_0x00010c12d3e0(puVar5);
    func_0x00010c12d3e0(puVar5);
    puVar6 = PTR_PTR_1126cb460;
    func_0x00010c099620(PTR_PTR_1126cb460);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar5);
    func_0x00010c1bdd60(puVar1);
    func_0x00010c1d0840(puVar1);
    puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10650b800; end: 10650b8cb; -[SCChatTextLabel rerenderWithBoundingSize:] */

void FUN_10650b800(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_5;
  dVar3 = param_1;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(uVar2);
  func_0x00010c1cfce0(param_5,param_6,(long)(param_2 / (dVar3 * 0.9)));
  func_0x00010c1bdb00(param_5,param_6,4);
  puVar1 = PTR_PTR_1126cb468;
  func_0x00010bfb68e0(param_5);
  func_0x00010c27a5a0(&uStack_70,param_3,param_4,param_1,param_2,0x3feccccccccccccd,puVar1);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(param_5,param_6,&uStack_a0);
  return;
}



/* Entry: 10650b8cc; end: 10650b9c3; -[SCChatTextLabel setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650b8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c120360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749b08);
  *(undefined8 *)(param_1 + _DAT_112749b08) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c0ca6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749b0c);
  *(undefined8 *)(param_1 + _DAT_112749b0c) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c0c4400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749b10);
  *(undefined8 *)(param_1 + _DAT_112749b10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bfb3de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf0e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c212f20(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10650b9c4; end: 10650ba5f; -[SCChatTextLabel mentionAtCharacterIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650b9c4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112749b0c);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  do {
    uVar2 = uVar1;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar2 == 0) goto LAB_10650ba3c;
    uVar3 = uVar2;
    func_0x00010c11f2a0();
    uVar4 = uVar2;
  } while ((param_3 < uVar3) || (param_2 <= param_3 - uVar3));
  _objc_retain(uVar2);
LAB_10650ba3c:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10650ba60; end: 10650bab3; -[SCChatTextLabel mentionAtPoint:] */

void FUN_10650ba60(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f19a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_characterIndexAtPoint__1125ab008);
  func_0x00010c0ca420(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10650bab4; end: 10650bb4f; -[SCChatTextLabel mediaCardAtCharacterIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bab4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112749b10);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  do {
    uVar2 = uVar1;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar2 == 0) goto LAB_10650bb2c;
    uVar3 = uVar2;
    func_0x00010c11f2a0();
    uVar4 = uVar2;
  } while ((param_3 < uVar3) || (param_2 <= param_3 - uVar3));
  _objc_retain(uVar2);
LAB_10650bb2c:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10650bb50; end: 10650bba3; -[SCChatTextLabel mediaCardAtPoint:] */

void FUN_10650bb50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f19a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_characterIndexAtPoint__1125ab008);
  func_0x00010c0c4340(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10650bba4; end: 10650bc57; -[SCChatTextLabel gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10650bba4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c09ef00(param_6,param_4,param_3);
  lVar2 = param_3;
  func_0x00010c0ca440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112749b14;
  uVar3 = *(undefined8 *)(param_3 + lVar5);
  *(long *)(param_3 + lVar5) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_3;
  func_0x00010c0c4360(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112749b18;
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  *(long *)(param_3 + lVar4) = lVar2;
  _objc_release(uVar3);
  if (*(long *)(param_3 + lVar5) == 0) {
    bVar1 = *(long *)(param_3 + lVar4) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10650bc58; end: 10650bd1b; -[SCChatTextLabel onTextTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112749b14;
  lVar1 = param_1;
  if (*(long *)(param_1 + lVar3) == 0) {
    if (*(long *)(param_1 + _DAT_112749b18) == 0) {
      uVar2 = 0;
      goto LAB_10650bce4;
    }
    func_0x00010c0c43e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ac00();
  }
  else {
    func_0x00010c0ca580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ac60();
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
LAB_10650bce4:
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749b18);
  *(undefined8 *)(param_1 + _DAT_112749b18) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650bd1c; end: 10650bd83; -[SCChatTextLabel resetWithOriginalSettings] */

void FUN_10650bd1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_50);
  func_0x00010c1cfce0(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c099180();
  if (lVar1 != 0) {
    func_0x00010c1bdb00(param_1,param_2,0);
  }
  return;
}



/* Entry: 10650bd84; end: 10650beeb; -[SCChatTextLabel traitCollectionDidChange:] */

void FUN_10650bd84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c263d80();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd64c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c1069c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1069c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0();
      if ((int)uVar5 != 0) {
        uVar5 = param_1;
        func_0x00010c279540();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c08f9e0();
        uVar7 = param_3;
        func_0x00010c08f9e0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar6 == uVar7) goto LAB_10650bec4;
        goto LAB_10650bea4;
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
LAB_10650bea4:
  puStack_68 = PTR_PTR_1126f19a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_traitCollectionDidChange__11267bf88,param_3);
LAB_10650bec4:
  _objc_release(param_3);
  return;
}



/* Entry: 10650beec; end: 10650befb; +[SCChatTextLabel linkColor] */

void FUN_10650beec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc3);
  return;
}



/* Entry: 10650befc; end: 10650bf0b; +[SCChatTextLabel selectedLinkColor] */

void FUN_10650befc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc1);
  return;
}



/* Entry: 10650bf0c; end: 10650bf2b; -[SCChatTextLabel mentionSelectedDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bf0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749b1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10650bf2c; end: 10650bf3f; -[SCChatTextLabel setMentionSelectedDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bf2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749b1c,param_3);
  return;
}



/* Entry: 10650bf40; end: 10650bf5f; -[SCChatTextLabel mediaCardSelectedDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bf40(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10650bf60; end: 10650bf73; -[SCChatTextLabel setMediaCardSelectedDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bf60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749b20,param_3);
  return;
}



/* Entry: 10650bf74; end: 10650bf83; -[SCChatTextLabel suppressNoOpTraitChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10650bf74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749b04);
}



/* Entry: 10650bf84; end: 10650bf93; -[SCChatTextLabel setSuppressNoOpTraitChanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bf84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749b04) = param_3;
  return;
}



/* Entry: 10650bf94; end: 10650c01b; -[SCChatTextLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650bf94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749b20);
  _objc_destroyWeak(param_1 + _DAT_112749b1c);
  _objc_storeStrong(param_1 + _DAT_112749b18,0);
  _objc_storeStrong(param_1 + _DAT_112749b10,0);
  _objc_storeStrong(param_1 + _DAT_112749b14,0);
  _objc_storeStrong(param_1 + _DAT_112749b0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749b08,0);
  return;
}



/* Entry: 10650c01c; end: 10650c183; -[SCSnapStatusView initWithActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10650c01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f19b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112749b28;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749b2c);
    *(undefined **)((long)puVar1 + (long)_DAT_112749b2c) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_opt_new();
    func_0x00010c21ad00();
    lVar5 = (long)_DAT_112749b30;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1c83a0(0x3fe6666666666666,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10650c184; end: 10650c3c3; -[SCSnapStatusView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c184(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f19b0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_112749b2c;
  dVar6 = 21.0;
  dVar7 = 21.0;
  func_0x00010c1739e0(0,0,0x4035000000000000,0x4035000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf20c00(param_1);
  func_0x00010c17a6a0(0x4033800000000000,dVar7 * 0.5,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + _DAT_112749b34));
  func_0x00010bf20c00(param_1);
  dVar7 = dVar6 + -7.0;
  dVar8 = dVar7 + -9.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
  _CGRectGetMaxX();
  dVar8 = dVar8 - dVar7;
  func_0x00010bf20c00(param_1);
  dVar7 = (dVar6 + -9.0) - dVar8 * 0.5;
  lVar4 = (long)_DAT_112749b38;
  uVar1 = *(ulong *)(param_1 + lVar4);
  if ((uVar1 == 0) || (func_0x00010c074c20(), (uVar1 & 1) != 0)) {
    lVar4 = (long)_DAT_112749b3c;
    uVar1 = *(ulong *)(param_1 + lVar4);
    if ((uVar1 == 0) || (func_0x00010c074c20(), (uVar1 & 1) != 0)) {
      lVar3 = (long)_DAT_112749b30;
      dVar6 = 40.0;
      func_0x00010c1739e0(0,0,dVar8,0x4044000000000000,*(undefined8 *)(param_1 + lVar3));
      func_0x00010bf20c00(param_1);
      dVar6 = dVar6 * 0.5;
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      goto LAB_10650c3a0;
    }
    lVar5 = (long)_DAT_112749b30;
    func_0x00010c1739e0(0,0,dVar8,0x4042000000000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c17a6a0(dVar7,0x4034000000000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c17a6a0(0x4033800000000000,0x4034000000000000,*(undefined8 *)(param_1 + lVar3));
    func_0x00010bf20c00(param_1);
    dVar8 = dVar8 + -18.0;
    func_0x00010c1739e0(0,0,dVar8,0x4030000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010bf20c00(param_1);
    dVar6 = 0.5;
    dVar7 = dVar8 * 0.5;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
  }
  else {
    lVar3 = (long)_DAT_112749b30;
    func_0x00010c1739e0(0,0,dVar8,0x4033000000000000,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c17a6a0(dVar7,0x402d000000000000,*(undefined8 *)(param_1 + lVar3));
    dVar6 = 0.0;
    func_0x00010c1739e0(0,0,dVar8,0x4030000000000000,*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  func_0x00010bfb68e0(uVar2);
  _CGRectGetMaxY();
  dVar6 = dVar6 + 8.0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
LAB_10650c3a0:
  func_0x00010c17a6a0(dVar7,dVar6,uVar2);
  return;
}



/* Entry: 10650c3c4; end: 10650c417; -[SCSnapStatusView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10650c3c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + _DAT_112749b3c);
  if (lVar1 == 0) {
    uVar2 = 0x4044000000000000;
  }
  else {
    func_0x00010c074c20();
    uVar2 = 0x4044000000000000;
    if ((int)lVar1 == 0) {
      uVar2 = 0x404c000000000000;
    }
  }
  auVar3._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar3._8_8_ = uVar2;
  return auVar3;
}



/* Entry: 10650c418; end: 10650c4af; -[SCSnapStatusView activity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c418(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b34;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c066f80(param_1,param_2,*(undefined8 *)(param_1 + lVar4),
                        *(undefined8 *)(param_1 + _DAT_112749b2c));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650c4b0; end: 10650c5c3; -[SCSnapStatusView subLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c4b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b38;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar4),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x000107087564();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650c5c4; end: 10650c6eb; -[SCSnapStatusView gameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c5c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b3c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar4),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650c6ec; end: 10650c6fb; -[SCSnapStatusView setStatusText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749b30),PTR_s_setAttributedText__1126387e8);
  return;
}



/* Entry: 10650c6fc; end: 10650c72b; -[SCSnapStatusView statusIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c6fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749b2c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10650c72c; end: 10650c7b3; -[SCSnapStatusView showStatusIconImage:] */

/* WARNING: Possible PIC construction at 0x00010650c768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010650c76c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749b34);
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10650c7b4; end: 10650c84f; -[SCSnapStatusView setSubLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c7b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  piVar2 = (int *)&DAT_112749b38;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c25e620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    piVar2 = (int *)&DAT_112749b3c;
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112749b38),param_2,param_3);
    func_0x00010bddf700(param_1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + *piVar2),param_2,1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650c850; end: 10650c8ff; -[SCSnapStatusView setGameLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c850(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112749b38);
    if ((lVar1 == 0) || (func_0x00010c074c20(), (int)lVar1 != 0)) {
      lVar1 = param_1;
      func_0x00010bfbe040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112749b3c),param_2,param_3);
      goto LAB_10650c8e4;
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b3c),param_2,1);
LAB_10650c8e4:
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650c900; end: 10650cbeb; -[SCSnapStatusView setExpirationAnimationData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650c900(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_112749b38));
    func_0x00010bddf700(param_2);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    lVar2 = param_4;
    func_0x00010c270aa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bf655e0(param_1 / 1000.0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uVar6 = 0x2020000000;
    uStack_60 = 0x2020000000;
    func_0x00010c26f380(puVar3);
    uStack_58 = uVar6;
    if ((double)puStack_68[3] <= 0.0) {
      lVar2 = param_4;
      func_0x00010bf441a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_112749b38));
      _objc_release(lVar2);
      func_0x00010bddf700(param_2);
    }
    else {
      lVar2 = param_2;
      func_0x00010c25e620(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_10650cbec;
      uStack_80 = 0x10650cbfc;
      uVar5 = *(undefined8 *)(param_2 + _DAT_112749b38);
      puStack_98 = &uStack_a0;
      _objc_retain(uVar5);
      uVar6 = 0;
      uStack_78 = uVar5;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR___dispatch_source_type_timer_11034be38;
      _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar6);
      uVar5 = *(undefined8 *)(param_2 + _DAT_112749b40);
      *(undefined **)(param_2 + _DAT_112749b40) = puVar4;
      _objc_release(uVar5);
      _objc_retain(puVar4);
      uVar5 = 0;
      _dispatch_walltime(0,0);
      _dispatch_source_set_timer(puVar4,uVar5,1000000000,0);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_10650cc04;
      puStack_d0 = &UNK_1108ba108;
      puStack_b0 = &uStack_70;
      lStack_c8 = param_2;
      puStack_c0 = puVar4;
      _objc_retain(param_4);
      lStack_b8 = param_4;
      puStack_a8 = &uStack_a0;
      _objc_retain(puVar4);
      _dispatch_source_set_event_handler(puVar4,&puStack_e8);
      _dispatch_resume(puVar4);
      _objc_release(lStack_b8);
      _objc_release(puStack_c0);
      _objc_release(puVar4);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_a0,8);
      _objc_release(uStack_78);
    }
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  func_0x00010c1cbe20(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 10650cbec; end: 10650cc03;  */

void FUN_10650cbec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10650cc04; end: 10650ccab;  */

void FUN_10650cc04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10650ccac;
  puStack_50 = &UNK_1108ba108;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  uStack_30 = uVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10650ccac; end: 10650ce13;  */

void FUN_10650ccac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    if (0.0 < *(double *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010c07d980();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e533b8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (iVar1 == 0) {
        puVar4 = puVar2;
        func_0x00010655d1cc();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      else {
        _objc_retain(puVar2);
        puVar5 = puVar2;
      }
      _objc_release(puVar2);
      func_0x00010c212f20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),param_2,
                          puVar5);
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(double *)(lVar6 + 0x18) = *(double *)(lVar6 + 0x18) + -1.0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf441a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),param_2,
                        uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_cancel_11034c160)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10650ce14; end: 10650cebf; -[SCSnapStatusView showActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650ce14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b2c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e53398);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bef13a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  func_0x00010bef13a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650cec0; end: 10650d0f3; -[SCSnapStatusView startSnapReplayAnimationIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650cec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar6 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c22faa0();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126cb470;
  if ((int)lVar7 != 0) {
    uVar5 = *(ulong *)(param_5 + _DAT_112749b44);
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
    func_0x00010c1314a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cb478;
    _objc_alloc();
    lVar7 = (long)_DAT_112749b2c;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
    _CGRectInset();
    uVar5 = uVar3;
    func_0x00010bfad500(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9520(param_1,param_2,param_3,param_4,0);
    lVar6 = (long)_DAT_112749b48;
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar7));
    _objc_initWeak(auStack_78,param_5);
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar3);
    func_0x00010bf03060(0x3fe0000000000000,uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10650d0f4; end: 10650d147;  */

void FUN_10650d0f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde31a0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650d148; end: 10650d1bf; -[SCSnapStatusView _completeReplayAnimationForMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749b2c);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar1,param_2,0);
  func_0x00010bddf500(param_1);
  param_1 = param_1 + _DAT_112749b4c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf76e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650d1c0; end: 10650d1fb; -[SCSnapStatusView _cleanupAnimationLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d1c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b48;
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10650d1fc; end: 10650d23f; -[SCSnapStatusView _cleanupExpirationTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d1fc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b40;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10650d240; end: 10650d263; -[SCSnapStatusView prepareForReuse] */

void FUN_10650d240(undefined8 param_1)

{
  func_0x00010bddf500();
                    /* WARNING: Could not recover jumptable at 0x00010bddf710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupExpirationTimer_112555760);
  return;
}



/* Entry: 10650d264; end: 10650d4bf; -[SCSnapStatusView startCountDownAnimationWithSecondsRemaining:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d264(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  uVar1 = *(ulong *)(param_5 + _DAT_112749b44);
  func_0x00010bf52a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08fa60();
  if ((uVar4 != 0) && (uVar4 = uVar3, func_0x00010c08fa60(), uVar4 != 0)) {
    uVar4 = uVar1;
    func_0x00010c276480(uVar1);
    uVar5 = uVar1;
    func_0x00010c276480(uVar1);
    dVar10 = (double)uVar5;
    dVar11 = ((double)uVar4 - param_1) / dVar10;
    func_0x00010c1cbe20(param_5);
    func_0x00010c08cdc0(param_5);
    puVar6 = PTR_PTR_1126cb478;
    _objc_alloc();
    lVar9 = (long)_DAT_112749b2c;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    _CGRectInset();
    uVar4 = uVar1;
    func_0x00010bfad500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9520(dVar10,param_2,param_3,param_4,dVar11);
    lVar8 = (long)_DAT_112749b48;
    uVar7 = *(undefined8 *)(param_5 + lVar8);
    *(undefined **)(param_5 + lVar8) = puVar6;
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar7);
    _objc_initWeak(auStack_88,param_5);
    uVar7 = *(undefined8 *)(param_5 + lVar8);
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    func_0x00010bf03080(param_1,uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10650d4c0; end: 10650d4f3;  */

void FUN_10650d4c0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde28c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650d4f4; end: 10650d503; -[SCSnapStatusView pauseTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749b48),PTR_s_pauseAnimation_11261b110);
  return;
}



/* Entry: 10650d504; end: 10650d513; -[SCSnapStatusView resumeTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749b48),PTR_s_resumeAnimation_11262cec8);
  return;
}



/* Entry: 10650d514; end: 10650d593; -[SCSnapStatusView _completeAnimationForMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d514(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bddf500(param_1);
    func_0x00010bf502c0(*(undefined8 *)(param_1 + _DAT_112749b28),param_2,param_4,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650d594; end: 10650d5b3; -[SCSnapStatusView replayDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d594(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749b4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10650d5b4; end: 10650d5c7; -[SCSnapStatusView setReplayDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749b4c,param_3);
  return;
}



/* Entry: 10650d5c8; end: 10650d5d7; -[SCSnapStatusView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10650d5c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749b44);
}



/* Entry: 10650d5d8; end: 10650d617; -[SCSnapStatusView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10650d618; end: 10650d6d3; -[SCSnapStatusView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d618(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749b44,0);
  _objc_destroyWeak(param_1 + _DAT_112749b4c);
  _objc_storeStrong(param_1 + _DAT_112749b40,0);
  _objc_storeStrong(param_1 + _DAT_112749b48,0);
  _objc_storeStrong(param_1 + _DAT_112749b28,0);
  _objc_storeStrong(param_1 + _DAT_112749b3c,0);
  _objc_storeStrong(param_1 + _DAT_112749b38,0);
  _objc_storeStrong(param_1 + _DAT_112749b34,0);
  _objc_storeStrong(param_1 + _DAT_112749b30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749b2c,0);
  return;
}



/* Entry: 10650d6d4; end: 10650d87f; -[SCBaseMediaThumbnailView initWithParentVC:delegate:chatMediaFetcher:loadMessageLogger:performer:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10650d6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f19b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749b58),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749b5c),param_4);
    lVar3 = (long)_DAT_112749b60;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112749b64;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112749b68;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112749b6c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    func_0x00010c21e900(puVar1);
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010be3a720(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10650d880; end: 10650d91f; -[SCBaseMediaThumbnailView _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cb480;
  func_0x00010bf68da0(PTR_PTR_1126cb480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c17d4c0(param_1,param_2,1);
  func_0x00010c182220(param_1,param_2,1);
  func_0x00010be39dc0(param_1);
  func_0x00010be395e0(param_1);
  func_0x00010be39ca0(param_1);
  puVar1 = PTR_PTR_1126b44c8;
  _objc_alloc();
  func_0x00010c030dc0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749b70);
  *(undefined **)(param_1 + _DAT_112749b70) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10650d920; end: 10650d9f3; -[SCBaseMediaThumbnailView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650d920(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f19b8;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = (undefined8 *)(param_5 + _DAT_112749b50);
  func_0x00010bf20c00(param_5);
  dVar4 = (double)puVar1[2];
  dVar6 = (double)puVar1[3];
  bVar2 = false;
  if ((dVar4 == param_3) && (bVar2 = false, !NAN(dVar6) && !NAN(param_4))) {
    bVar2 = dVar6 == param_4;
  }
  if (!bVar2) {
    lVar3 = param_5;
    func_0x00010bf13d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_5);
    uVar5 = 0x4008000000000000;
    func_0x00010c14dbe0(param_5);
    _objc_release(lVar3);
    func_0x00010bf20c00(param_5);
    *puVar1 = uVar5;
    puVar1[1] = dVar4;
    puVar1[2] = dVar6;
    puVar1[3] = param_3;
  }
  return;
}



/* Entry: 10650d9f4; end: 10650da07; -[SCBaseMediaThumbnailView _centerYOffsetWithThumbnailHeight:] */

double FUN_10650d9f4(double param_1)

{
  return -(param_1 * 0.5 - param_1 * 0.5);
}



/* Entry: 10650da08; end: 10650dab3; -[SCBaseMediaThumbnailView _initImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650da08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126cb488;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112749b74;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10650dab4;
  puStack_30 = &UNK_1108471b0;
  lStack_28 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10650dab4; end: 10650dbcb;  */

void FUN_10650dab4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650dbcc; end: 10650dcf7; -[SCBaseMediaThumbnailView _initBlockingOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650dbcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112749b78;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4008000000000000);
  _objc_release(uVar3);
  func_0x00010706ddbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar2 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f80(param_1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10650dcf8;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10650dcf8; end: 10650de0f;  */

void FUN_10650dcf8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650de10; end: 10650de7f; -[SCBaseMediaThumbnailView _initGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650de10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112749b7c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10650de80; end: 10650df1f; -[SCBaseMediaThumbnailView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650de80(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_112749b70));
  lVar1 = *(long *)(param_1 + _DAT_112749b80);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be8ec40(param_1);
  }
  puStack_38 = PTR_PTR_1126f19b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10650df20; end: 10650dfcf; -[SCBaseMediaThumbnailView activityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650df20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b84;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010bf1d9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80(param_1,param_2,uVar2,lVar3);
    _objc_release(lVar3);
    func_0x00010c08c820(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650dfd0; end: 10650e04b; -[SCBaseMediaThumbnailView layoutActivityIndicator] */

void FUN_10650dfd0(undefined8 param_1)

{
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10650e04c; end: 10650e183;  */

void FUN_10650e04c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c26e2a0(uVar6);
  func_0x00010bddc6e0(param_2,uVar6);
  (**(code **)(lVar5 + 0x10))(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650e184; end: 10650e263; -[SCBaseMediaThumbnailView tapToLoadLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e184(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112749b88;
  if (*(long *)(param_1 + lVar5) == 0) {
    lVar1 = param_1;
    func_0x00010b0af0ec();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010becbc20(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
    func_0x00010be3ca60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  }
  puVar3 = PTR_PTR_1126cb480;
  func_0x00010bfce0c0(PTR_PTR_1126cb480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126cb480;
  func_0x00010c087600(PTR_PTR_1126cb480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10650e264; end: 10650e2fb; -[SCBaseMediaThumbnailView failedToSendLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e264(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b8c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e53418;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53418,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010becbc20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    func_0x00010be3ca60(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650e2fc; end: 10650e393; -[SCBaseMediaThumbnailView failedToLoadLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e2fc(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b90;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e53438;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53438,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010becbc20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    func_0x00010be3ca60(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650e394; end: 10650e42b; -[SCBaseMediaThumbnailView contentUnavailableLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e394(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749b94;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e49a98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a98,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010becbc20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    func_0x00010be3ca60(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650e42c; end: 10650e58b; -[SCBaseMediaThumbnailView player] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e42c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_112749b98;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c9e68;
    _objc_alloc();
    func_0x00010c037060();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c2241a0(0,*(undefined8 *)(param_1 + lVar4));
    _objc_initWeak(auStack_48,param_1);
    lVar3 = param_1;
    func_0x00010c29a720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e0780(lVar3);
    _objc_release(puVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650e58c; end: 10650e5ef;  */

void FUN_10650e58c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_3;
  func_0x00010c252d60();
  _objc_release(param_3);
  if (lVar1 == 2) {
    func_0x00010c139240(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650e5f0; end: 10650e6df; -[SCBaseMediaThumbnailView videoOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e5f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_112749b9c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010c29bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80(param_1,param_2,uVar2,lVar3);
    _objc_release(lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10650e6e0;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


