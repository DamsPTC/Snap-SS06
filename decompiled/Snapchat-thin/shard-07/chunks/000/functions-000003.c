/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105001ce0; end: 105001d77;  */

void FUN_105001ce0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3b90;
  _objc_retain(param_2);
  func_0x00010bfb7ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c260(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105001d78; end: 105001e27; -[SCAuraFriendProfileWorkflow _presentCompatibilityDiviningPage] */

void FUN_105001d78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105001e28; end: 105001eb7;  */

void FUN_105001e28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190ba0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10bb60(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105001eb8; end: 105001fb3; -[SCAuraFriendProfileWorkflow _presentBirthInfoPage:] */

void FUN_105001eb8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a13e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1a60();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105001fb4; end: 105002033;  */

void FUN_105001fb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170320();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10ecc0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002034; end: 105002087; -[SCAuraFriendProfileWorkflow actionSheetDidDismiss:] */

void FUN_105002034(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002088; end: 1050020db; -[SCAuraFriendProfileWorkflow introCardDidCancel] */

void FUN_105002088(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050020dc; end: 1050020e3; -[SCAuraFriendProfileWorkflow introCardDidContinue] */

void FUN_1050020dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentBirthInfoPage__11257c2b0,0);
  return;
}



/* Entry: 1050020e4; end: 10500217f; -[SCAuraFriendProfileWorkflow dismissedWithBirthInfoUpdated:] */

void FUN_1050020e4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1400();
  _objc_release(uVar1);
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentCompatibilityDiviningPag_11257c488)
    ;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002180; end: 105002233; -[SCAuraFriendProfileWorkflow diviningPageUpdateAuraDataCompletionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_105002180(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x58) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286040();
    _objc_release(uVar1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105002234; end: 10500235b; -[SCAuraFriendProfileWorkflow diviningPageDidComplete] */

void FUN_105002234(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6b40();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPersonalityProfile_11257ce80);
    return;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6b20();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentCompatibilityProfile_11257c490);
    return;
  }
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be10700(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10500235c; end: 105002413;  */

void FUN_10500235c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7a100();
    }
    else {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      *(long *)(lVar1 + 0x58) = param_2;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a6b20();
      _objc_release(uVar2);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7abc0();
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105002414; end: 105002467; -[SCAuraFriendProfileWorkflow diviningPageDidCancel] */

void FUN_105002414(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002468; end: 10500246f; -[SCAuraFriendProfileWorkflow diviningPageDidFail] */

void FUN_105002468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAlertMessageThenFinishWo_11257c1e0,5)
  ;
  return;
}



/* Entry: 105002470; end: 1050024eb; -[SCAuraFriendProfileWorkflow dialogDidDismiss:] */

void FUN_105002470(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050024ec; end: 10500253f; -[SCAuraFriendProfileWorkflow willBeginPresentingOpera] */

void FUN_1050024ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d53e0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf10400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002540; end: 10500256b; -[SCAuraFriendProfileWorkflow willBeginDismissingOpera] */

void FUN_105002540(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500256c; end: 105002597; -[SCAuraFriendProfileWorkflow didCancelDismissingOpera] */

void FUN_10500256c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002598; end: 1050025eb; -[SCAuraFriendProfileWorkflow didTearDownOpera] */

void FUN_105002598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050025ec; end: 10500265b; -[SCAuraFriendProfileWorkflow _presentAlertMessageThenFinishWorkflow:] */

void FUN_1050025ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_110862530);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf103c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500265c; end: 105002663;  */

void FUN_10500265c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_presentErrorStatusMessage_112620a18);
  return;
}



/* Entry: 105002664; end: 105002707; -[SCAuraFriendProfileWorkflow .cxx_destruct] */

void FUN_105002664(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105002708; end: 10500285b; -[SCAuraMyProfileRouteActionsImpl initWithUIContainer:birthInfoPageCreator:alertDialogPresenter:auraOperaPlayer:myBitmojiAvatarIdProvider:valdiRuntimeProvider:] */

undefined1 *
FUN_105002708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5988;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10500285c; end: 10500293b; -[SCAuraMyProfileRouteActionsImpl presentIntroCardWithBirthday:delegate:] */

void FUN_10500285c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  FUN_1050003a8(param_3);
  puVar1 = PTR_PTR_1126b3a18;
  _objc_alloc(PTR_PTR_1126b3a18);
  func_0x00010c063720();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3ac0;
  _objc_alloc(PTR_PTR_1126b3ac0);
  func_0x00010c061f00();
  _objc_release(param_4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10500293c; end: 10500299b; -[SCAuraMyProfileRouteActionsImpl presentMissingBirthdayAlert:] */

void FUN_10500293c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10500299c; end: 105002a3b; -[SCAuraMyProfileRouteActionsImpl presentUpdateMyBirthInfoPage:] */

void FUN_10500299c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf54cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  uVar1 = uVar3;
  func_0x00010bf54ce0(uVar3,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105002a3c; end: 105002b1b; -[SCAuraMyProfileRouteActionsImpl presentDivinigPageWithBirthday:delegate:] */

void FUN_105002a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  FUN_1050003a8(param_3);
  puVar1 = PTR_PTR_1126b3958;
  _objc_alloc(PTR_PTR_1126b3958);
  func_0x00010c063720();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3b88;
  _objc_alloc(PTR_PTR_1126b3b88);
  func_0x00010c061dc0();
  _objc_release(param_4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105002b1c; end: 105002bb3; -[SCAuraMyProfileRouteActionsImpl presentMyPersonalityProfile:delegate:] */

void FUN_105002b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b3b90;
  func_0x00010c0d47a0(PTR_PTR_1126b3b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b2e0(uVar2,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105002bb4; end: 105002bf3; -[SCAuraMyProfileRouteActionsImpl presentErrorStatusMessage] */

void FUN_105002bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afca8;
  func_0x000105005dec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105002bf4; end: 105002c5f; -[SCAuraMyProfileRouteActionsImpl .cxx_destruct] */

void FUN_105002bf4(long param_1)

{
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



/* Entry: 105002c60; end: 105002daf; -[SCAuraMyProfileWorkflow initWithRouter:birthInfoDataManager:auraDataManager:auraLogger:delegate:] */

undefined1 *
FUN_105002c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5990;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105002db0; end: 105003027; -[SCAuraMyProfileWorkflow beginWorkflow] */

void FUN_105002db0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1420();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1460();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x30) = uVar3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105003028;
    puStack_50 = &UNK_110862550;
    ppuVar4 = &puStack_68;
    lStack_48 = param_1;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1429e0(uVar1);
LAB_105002f3c:
    ppuVar4 = ppuVar4 + 5;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0785e0();
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x1050030a8;
      puStack_80 = &UNK_110862550;
      ppuVar4 = &puStack_98;
      lStack_78 = param_1;
      _objc_copyWeak(auStack_70,auStack_38);
      func_0x00010c1429e0(uVar1);
      goto LAB_105002f3c;
    }
    uVar3 = uVar2;
    func_0x00010c232260();
    if ((int)uVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad260();
      _objc_release(uVar1);
      func_0x00010be7a440(param_1);
      goto LAB_105002f44;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(&puStack_a0,auStack_38);
    func_0x00010bfa8d00(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar1);
    ppuVar4 = &puStack_a0;
  }
  _objc_destroyWeak(ppuVar4);
LAB_105002f44:
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105003028; end: 1050031cb;  */

void FUN_105003028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c86c0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d120(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050031cc; end: 10500327b; -[SCAuraMyProfileWorkflow _presentMyPersonalityProfile] */

void FUN_1050031cc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10500327c; end: 1050032db;  */

void FUN_10500327c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d280(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050032dc; end: 10500338b; -[SCAuraMyProfileWorkflow _presentDiviningPage] */

void FUN_1050032dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10500338c; end: 105003417;  */

void FUN_10500338c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190ba0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10bec0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105003418; end: 105003513; -[SCAuraMyProfileWorkflow _presentBirthInfoPage:] */

void FUN_105003418(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a13e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1a60();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105003514; end: 105003593;  */

void FUN_105003514(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170320();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10ecc0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105003594; end: 1050035f7; -[SCAuraMyProfileWorkflow _presentAlertMessageThenFinishWorkflow] */

void FUN_105003594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_1108625d0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050035f8; end: 1050035ff;  */

void FUN_1050035f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_presentErrorStatusMessage_112620a18);
  return;
}



/* Entry: 105003600; end: 10500369b; -[SCAuraMyProfileWorkflow dismissedWithBirthInfoUpdated:] */

void FUN_105003600(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1400();
  _objc_release(uVar1);
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentDiviningPage_11257c5f0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500369c; end: 10500374b; -[SCAuraMyProfileWorkflow diviningPageUpdateAuraDataCompletionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_10500369c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    _objc_retain(param_4);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287e80();
    _objc_release(param_4);
  }
  else {
    pcVar1 = *(code **)(param_4 + 0x10);
    _objc_retain(param_4);
    (*pcVar1)(param_4);
    lVar2 = param_4;
  }
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10500374c; end: 10500387b; -[SCAuraMyProfileWorkflow diviningPageDidComplete] */

void FUN_10500374c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6ba0();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMyPersonalityProfile_11257cc30);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa8d00(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10500387c; end: 10500392b;  */

void FUN_10500387c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7a0e0();
    }
    else {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
      *(long *)(lVar1 + 0x38) = param_2;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a6ba0();
      _objc_release(uVar2);
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7ca40();
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10500392c; end: 10500397f; -[SCAuraMyProfileWorkflow diviningPageDidCancel] */

void FUN_10500392c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105003980; end: 105003983; -[SCAuraMyProfileWorkflow diviningPageDidFail] */

void FUN_105003980(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAlertMessageThenFinishWo_11257c1d8);
  return;
}



/* Entry: 105003984; end: 1050039d7; -[SCAuraMyProfileWorkflow dialogDidDismiss:] */

void FUN_105003984(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050039d8; end: 105003a2b; -[SCAuraMyProfileWorkflow introCardDidCancel] */

void FUN_1050039d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105003a2c; end: 105003a33; -[SCAuraMyProfileWorkflow introCardDidContinue] */

void FUN_105003a2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentBirthInfoPage__11257c2b0,0);
  return;
}



/* Entry: 105003a34; end: 105003ac7; -[SCAuraMyProfileWorkflow willBeginPresentingOpera] */

void FUN_105003a34(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d53e0();
  _objc_release(uVar1);
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf104e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105003ac8; end: 105003b37; -[SCAuraMyProfileWorkflow willBeginDismissingOpera] */

void FUN_105003ac8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf104c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105003b38; end: 105003ba7; -[SCAuraMyProfileWorkflow didCancelDismissingOpera] */

void FUN_105003b38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf10480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105003ba8; end: 105003bfb; -[SCAuraMyProfileWorkflow didTearDownOpera] */

void FUN_105003ba8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1440();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105003bfc; end: 105003c6f; -[SCAuraMyProfileWorkflow .cxx_destruct] */

void FUN_105003bfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105003c70; end: 105003d3b; -[SCAuraSettingRouteActionsImpl initWithUiContainer:alertDialogPresenter:birthInfoPageCreator:] */

undefined1 *
FUN_105003c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5998;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105003d3c; end: 105003d9b; -[SCAuraSettingRouteActionsImpl presentMissingBirthdayAlert:] */

void FUN_105003d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105003d9c; end: 105003dfb; -[SCAuraSettingRouteActionsImpl presentClearBirthInfoConfirmationAlert:] */

void FUN_105003d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b9e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105003dfc; end: 105003e9b; -[SCAuraSettingRouteActionsImpl presentUpdateMyBirthInfoPage:] */

void FUN_105003dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf54cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = uVar3;
  func_0x00010bf54ce0(uVar3,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105003e9c; end: 105003ee3; -[SCAuraSettingRouteActionsImpl .cxx_destruct] */

void FUN_105003e9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105003ee4; end: 105003fff; -[SCAuraSettingWorkflow initWithRouter:birthInfoDataManager:auraDataManager:auraLogger:delegate:] */

undefined1 *
FUN_105003ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e59a0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105004000; end: 105004017; -[SCAuraSettingWorkflow beginWorkflowWithIntent:] */

void FUN_105004000(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginClearWorkflow_112552658);
    return;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginEditWorkflow_1125526b8);
    return;
  }
  return;
}



/* Entry: 105004018; end: 10500419f; -[SCAuraSettingWorkflow _beginEditWorkflow] */

void FUN_105004018(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050041a0;
    puStack_48 = &UNK_1108625f0;
    puVar4 = auStack_40;
    _objc_copyWeak(puVar4,auStack_38);
    func_0x00010c1429e0(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a13e0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1a60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar4 = auStack_68;
    _objc_copyWeak(puVar4,auStack_38);
    func_0x00010c1429e0(uVar3);
  }
  _objc_destroyWeak(puVar4);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050041a0; end: 105004237;  */

void FUN_1050041a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d120(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105004238; end: 105004323; -[SCAuraSettingWorkflow _beginClearWorkflow] */

void FUN_105004238(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a13e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1a60();
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105004324; end: 10500436f;  */

void FUN_105004324(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10b9c0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105004370; end: 1050043ff; -[SCAuraSettingWorkflow dismissedWithBirthInfoUpdated:] */

void FUN_105004370(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287e80();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1400();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf10600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105004400; end: 10500445b; -[SCAuraSettingWorkflow dialogDidDismiss:] */

void FUN_105004400(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1400();
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf10600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10500445c; end: 10500451f; -[SCAuraSettingWorkflow dismissedWithClearConfirmed:] */

void FUN_10500445c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d240();
    _objc_release(uVar1);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1400();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf10600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105004520; end: 1050045df;  */

void FUN_105004520(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  if (param_2 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287e80();
  }
  else {
    lVar2 = param_1;
    func_0x000105005dec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
  }
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1400();
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf10600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1050045e0; end: 10500462f; -[SCAuraSettingWorkflow .cxx_destruct] */

void FUN_1050045e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105004630; end: 1050048bf;  */

void FUN_105004630(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c08fa60(param_2);
  _objc_opt_class(PTR_PTR_1126b3b98);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_105007648();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050048c0; end: 1050049b7;  */

undefined8 * FUN_1050048c0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110862700;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_28 = param_1 + 9;
  func_0x000100105004(&puStack_28);
  return param_1;
}



/* Entry: 1050049b8; end: 105004abb;  */

void FUN_1050049b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c08fa60(param_2);
  puVar2 = PTR_PTR_1126b3ba0;
  puVar1 = PTR_PTR_1126b3b98;
  _objc_alloc(PTR_PTR_1126b3b98);
  func_0x00010c032ac0();
  FUN_10500881c(puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105004abc; end: 105004bfb;  */

void FUN_105004abc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c08fa60(param_2);
  lVar1 = param_1;
  FUN_105004630(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3ba0;
  if (lVar1 == 0) {
    FUN_105007f98(PTR_PTR_1126b3ba0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1050082fc(PTR_PTR_1126b3ba0,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    _objc_setProperty_nonatomic_copy(puVar2);
  }
  (**(code **)(param_3 + 0x10))(param_3,puVar2);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105004bfc; end: 105004d1f;  */

void FUN_105004bfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c2456c0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2456a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105004d20;
    puStack_40 = &UNK_110862620;
    _objc_retain(param_1);
    lVar2 = lVar1;
    lStack_38 = param_1;
    func_0x00010bd86420(lVar1,&puStack_58);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b3bc8;
    _objc_alloc(PTR_PTR_1126b3bc8);
    func_0x00010c04a0e0();
    _objc_release(lVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105004d20; end: 10500515f;  */

void FUN_105004d20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c27df40();
  puVar8 = PTR_PTR_1126b3ba8;
  iVar1 = (int)uVar2;
  uVar2 = param_2;
  uVar4 = param_2;
  uVar6 = param_2;
  if (iVar1 == 1) {
    puVar11 = PTR_PTR_1126b3bb0;
    _objc_alloc(PTR_PTR_1126b3bb0);
    func_0x00010c0fa6e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ec40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fa6e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf393c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fa6e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf393a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008260(puVar11);
    func_0x00010c0fa700();
    _objc_retainAutoreleasedReturnValue();
LAB_105004fa4:
    _objc_release(puVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (puVar8 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126b3ac8;
      _objc_alloc(PTR_PTR_1126b3ac8);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b9e0(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      goto LAB_105005054;
    }
  }
  else {
    if (iVar1 == 2) {
      puVar11 = PTR_PTR_1126b3bb8;
      _objc_alloc(PTR_PTR_1126b3bb8);
      func_0x00010bf43600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15ec40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf393c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43600(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf393a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008260(puVar11);
      func_0x00010bf43620();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105004fa4;
    }
    if (iVar1 == 3) {
      puVar11 = PTR_PTR_1126b3bc0;
      _objc_alloc(PTR_PTR_1126b3bc0);
      func_0x00010c262980(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15ec40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c262980(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf393c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c262980(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf393a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008260(puVar11);
      func_0x00010c2629a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105004fa4;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_105005054:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105005160; end: 1050052ab;  */

void FUN_105005160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c08fa60(param_3);
  uVar1 = param_2;
  func_0x00010c0fa6a0();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1050052ac;
  puStack_68 = &UNK_110862650;
  _objc_retain(param_2);
  uStack_60 = param_2;
  uStack_50 = param_5;
  _objc_retain(param_4);
  uStack_58 = param_4;
  uStack_48 = (int)uVar1 != 5;
  FUN_105004abc(param_1,param_3,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1050052ac; end: 1050053db;  */

void FUN_1050052ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d9f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    _objc_setProperty_nonatomic_copy(param_2);
  }
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0d9f20();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x30) + 0xf;
    if (lVar3 <= lVar1) {
      lVar3 = lVar1;
    }
    *(long *)(param_2 + 0x38) = lVar3;
    _objc_setProperty_nonatomic_copy(param_2);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d47a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    FUN_105004bfc();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) {
      _objc_setProperty_nonatomic_copy(param_2);
    }
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050053dc; end: 10500554b;  */

void FUN_1050053dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c08fa60(param_3);
  uVar1 = param_2;
  func_0x00010c0fa6a0();
  uVar2 = param_2;
  func_0x00010bf435c0();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10500554c;
  puStack_78 = &UNK_110862680;
  _objc_retain(param_2);
  uStack_70 = param_2;
  uStack_60 = param_5;
  _objc_retain(param_4);
  uStack_68 = param_4;
  uStack_58 = (int)uVar1 != 5;
  uStack_57 = (int)uVar2 != 7;
  FUN_105004abc(param_1,param_3,&puStack_90);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10500554c; end: 1050056c7;  */

void FUN_10500554c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d9f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    _objc_setProperty_nonatomic_copy(param_2);
  }
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0d9f20();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x30) + 0xf;
    if (lVar3 <= lVar1) {
      lVar3 = lVar1;
    }
    *(long *)(param_2 + 0x38) = lVar3;
    _objc_setProperty_nonatomic_copy(param_2);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb85e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    FUN_105004bfc();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) {
      _objc_setProperty_nonatomic_copy(param_2);
    }
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  if (*(char *)(param_1 + 0x39) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb7ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    FUN_105004bfc();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) {
      _objc_setProperty_nonatomic_copy(param_2);
    }
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050056c8; end: 105005937;  */

void FUN_1050056c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 uStack_e9;
  undefined **ppuStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined1 *puStack_b0;
  undefined ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b3b98);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_78,param_1);
  }
  puVar2 = &uStack_e9;
  FUN_105007648();
  uStack_158 = 0xf;
  uStack_148 = 0x100;
  _objc_retain(param_2);
  ppuStack_160 = &PTR_SUB_110862760;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  plStack_f8 = (long *)0x0;
  uStack_ce = *(undefined2 *)(puVar2 + 0x1a);
  uStack_e0 = 10;
  uStack_d0 = 0x100;
  ppuStack_e8 = &PTR_FUN_110862700;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_80 = (long *)0x0;
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_17c = 0;
  puVar3 = &uStack_78;
  uStack_130 = param_2;
  puStack_b0 = puVar2;
  pppuStack_a8 = &ppuStack_160;
  func_0x000108c7f678(puVar3,&ppuStack_e8,&puStack_178,&uStack_17c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_178 != (undefined8 *)0x0) {
    puStack_170 = puStack_178;
    __ZdlPv();
  }
  plVar1 = plStack_80;
  ppuStack_e8 = &PTR_FUN_110862700;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_178 = &uStack_a0;
  func_0x000100105004(&puStack_178);
  plVar1 = plStack_f8;
  ppuStack_160 = &PTR_SUB_110862760;
  plStack_f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_178 = &uStack_118;
  func_0x000100105004(&puStack_178);
  _objc_release(uStack_130);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  puVar4 = puVar3;
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105005938; end: 1050059d7;  */

void FUN_105005938(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0fa680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050059d8; end: 1050059df;  */

void FUN_1050059d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1050059dc);
  (*pcVar1)();
}



/* Entry: 1050059e0; end: 105005b77;  */

undefined8 * FUN_1050059e0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_SUB_110862760;
  param_1[6] = 0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105005b78; end: 105005c0f;  */

undefined8 * FUN_105005b78(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_SUB_110862760;
  param_1[6] = 0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x0001004c2ee8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105005c10; end: 105005c23;  */

void FUN_105005c10(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2358,
                      &PTR____CFConstantStringClassReference_110dc2378,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105005c24; end: 105005ef3;  */

void FUN_105005c24(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc2358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc2358,
                      &PTR____CFConstantStringClassReference_110dc2378,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105005ef4; end: 10500607b; -[SCAuraData initWithOwnerId:personalityProfile:compatibilityProfile:syncToken:nextSyncEpocSec:lastSyncReqParamsHash:hasSeenPersonalityProfileDiviningPage:hasSeenCompatibilityProfileDiviningPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105005ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e59a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127195a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127195a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127195ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127195ac) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127195b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127195b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127195b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127195b4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127195b8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127195bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127195bc) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127195c0) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127195c4) = param_9._1_1_;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10500607c; end: 10500609f; -[SCAuraData copyWithZone:] */

undefined8 FUN_10500607c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050060a0; end: 10500616f; -[SCAuraData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050060a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127195a8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127195ac);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127195b0);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127195b4);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_1127195b8);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127195bc);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_1127195c0);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_1127195c4);
  puVar3 = &uStack_68;
  uStack_40 = uVar1;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050062a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050062b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + (long)_DAT_1127195b8) ==
          *(long *)((long)param_3 + (long)_DAT_1127195b8) &&
         (*(char *)((long)puVar3 + (long)_DAT_1127195c0) ==
          *(char *)((long)param_3 + (long)_DAT_1127195c0))) &&
        (*(char *)((long)puVar3 + (long)_DAT_1127195c4) ==
         *(char *)((long)param_3 + (long)_DAT_1127195c4))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127195a8);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127195a8)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127195ac);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127195ac)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127195b0);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127195b0)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127195b4);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127195b4)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_1127195bc);
              if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_1127195bc)) {
                func_0x00010c071ae0();
                goto LAB_1050062b4;
              }
              goto LAB_1050062a8;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050062b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105006170; end: 1050062cf; -[SCAuraData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105006170(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050062a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050062b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + (long)_DAT_1127195b8) == *(long *)(param_3 + (long)_DAT_1127195b8) &&
         (*(char *)(param_1 + (long)_DAT_1127195c0) == *(char *)(param_3 + (long)_DAT_1127195c0)))
        && (*(char *)(param_1 + (long)_DAT_1127195c4) == *(char *)(param_3 + (long)_DAT_1127195c4)))
       )) {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127195a8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127195a8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127195ac);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127195ac)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127195b0);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127195b0)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_1127195b4);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127195b4)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_1127195bc);
              if (lVar3 != *(long *)(param_3 + (long)_DAT_1127195bc)) {
                func_0x00010c071ae0();
                goto LAB_1050062b4;
              }
              goto LAB_1050062a8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050062b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050062d0; end: 1050062df; -[SCAuraData ownerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050062d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127195a8);
}



/* Entry: 1050062e0; end: 1050062ef; -[SCAuraData personalityProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050062e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127195ac);
}



/* Entry: 1050062f0; end: 1050062ff; -[SCAuraData compatibilityProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050062f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127195b0);
}



/* Entry: 105006300; end: 10500630f; -[SCAuraData syncToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105006300(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127195b4);
}



/* Entry: 105006310; end: 10500631f; -[SCAuraData nextSyncEpocSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105006310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127195b8);
}



/* Entry: 105006320; end: 10500632f; -[SCAuraData lastSyncReqParamsHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105006320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127195bc);
}



/* Entry: 105006330; end: 10500633f; -[SCAuraData hasSeenPersonalityProfileDiviningPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105006330(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127195c0);
}



/* Entry: 105006340; end: 10500634f; -[SCAuraData hasSeenCompatibilityProfileDiviningPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105006340(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127195c4);
}


