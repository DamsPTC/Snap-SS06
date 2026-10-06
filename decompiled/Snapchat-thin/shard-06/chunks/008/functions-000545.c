/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e6d938; end: 104e6dcf7; -[SCAddFriendsComposerViewController initWithCurrentPageTracker:seenAndAddEventLogger:delegate:valdiRuntimeProvider:hiddenSuggestionCoordinator:hideSuggestionLogger:circumstanceEngine:userPreferences:pageChangeSubject:pageEventDataSubject:featureSettingsService:perfLogger:friendingBadgeMutator:pageLoadMetricManager:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e6d938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
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
  puStack_70 = PTR_PTR_1126e4930;
  puVar2 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    func_0x00010c1931e0(puVar2);
    lVar4 = (long)_DAT_112714d60;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d64;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_5;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112714d68,param_6);
    lVar4 = (long)_DAT_112714d6c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d70;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_13;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d74;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_12;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d78;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d7c;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d80;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112714d84;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112714d88;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112714d8c;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_16;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112714d90;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112714d94;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112714d98) = param_1;
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar4);
    func_0x00010c067f00();
    *(long *)((long)puVar2 + (long)_DAT_112714d9c) = (long)iVar1;
    if (0 < iVar1) {
      func_0x00010bec72c0(puVar2);
    }
  }
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 104e6dcf8; end: 104e6ddd7; -[SCAddFriendsComposerViewController setAddFriendsContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6dcf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1550;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d6c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032a60(puVar1,param_2,param_1,0,param_3,uVar4);
  _objc_release(param_3);
  lVar5 = (long)_DAT_112714da0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c295200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104e6ddd8; end: 104e6dddb; -[SCAddFriendsComposerViewController preferredStatusBarStyle] */

undefined8 FUN_104e6ddd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 104e6dddc; end: 104e6de27; -[SCAddFriendsComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6dddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1558;
  _objc_alloc(PTR_PTR_1126b1558);
  func_0x00010c040280();
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e6de28; end: 104e6deff; -[SCAddFriendsComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6de28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4930;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c24fc40(*(undefined8 *)(param_1 + _DAT_112714d60));
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112714d90));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714d70);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112714da4) = puVar2;
  _objc_release(puVar1);
  return;
}



/* Entry: 104e6df00; end: 104e6dfeb; -[SCAddFriendsComposerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6df00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4930;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d70);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d74);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e6dfec; end: 104e6e0ab; -[SCAddFriendsComposerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6dfec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4930;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d70);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c680(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010c0f1480(*(undefined8 *)(param_1 + _DAT_112714d90));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d8c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ba60();
  _objc_release(uVar2);
  return;
}



/* Entry: 104e6e0ac; end: 104e6e123; -[SCAddFriendsComposerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e0ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4930;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d70);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e820(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e6e124; end: 104e6e2b7; -[SCAddFriendsComposerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e124(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4930;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d70);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c860(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010c0f0fa0(*(undefined8 *)(param_1 + _DAT_112714d90));
  func_0x00010c0aef40(*(undefined8 *)(param_1 + _DAT_112714d64));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714d7c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714d78);
  _objc_retain(uVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1b20();
  _objc_release(uVar2);
  func_0x00010be38720(param_1);
  func_0x00010bde0ba0(param_1);
  func_0x00010beda420(param_1);
  _objc_release(uVar3);
  return;
}



/* Entry: 104e6e2b8; end: 104e6e41f; -[SCAddFriendsComposerViewController _subscribeToAppLifecyleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714da8);
  *(undefined **)(param_1 + _DAT_112714da8) = puVar1;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112714d70);
  _objc_retain(uVar4);
  uVar3 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104e6e420;
  puStack_70 = &UNK_11084ca60;
  uVar2 = uVar3;
  uStack_68 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c2a6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104e6e464;
  puStack_98 = &UNK_11084ca60;
  uVar2 = uVar3;
  uStack_90 = uVar4;
  func_0x00010c25ff60(uVar3,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



/* Entry: 104e6e420; end: 104e6e4a7;  */

void FUN_104e6e420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c291480(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e6e4a8; end: 104e6e4df; -[SCAddFriendsComposerViewController _clearPinnedUserIdIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e4a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112714d80;
  func_0x00010c1dbc60(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1dbcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setPinnedSuggestionUserId__112654958,0);
  return;
}



/* Entry: 104e6e4e0; end: 104e6e5d7; -[SCAddFriendsComposerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e4e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  if ((*(byte *)(param_1 + _DAT_112714dac) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112714d70);
    puVar1 = PTR_PTR_1126b1560;
    func_0x00010c2a5e20(PTR_PTR_1126b1560);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714d80);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
  _objc_release(puVar1);
  lVar2 = param_1 + _DAT_112714d68;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0e2700();
  _objc_release(lVar2);
  puStack_38 = PTR_PTR_1126e4930;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e6e5d8; end: 104e6e65f; -[SCAddFriendsComposerViewController _incrementRecentlyActiveTextShownCountIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e5d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112714d88;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1228e0();
  _objc_release(lVar1);
  if (lVar2 < 10) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104e6e660; end: 104e6e667; -[SCAddFriendsComposerViewController supportedInterfaceOrientations] */

undefined8 FUN_104e6e660(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = 2;
  puVar2 = param_1;
  _objc_retain();
  iVar1 = (int)puVar2;
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = param_1;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar3 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar3 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar3 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 104e6e668; end: 104e6e66f; -[SCAddFriendsComposerViewController destinationName] */

undefined8 FUN_104e6e668(void)

{
  return 0;
}



/* Entry: 104e6e670; end: 104e6e6bb; -[SCAddFriendsComposerViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e670(long param_1)

{
  if ((long)*(ulong *)(param_1 + _DAT_112714d9c) < 1) {
    func_0x00010bf9b820(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9b4c0((double)*(ulong *)(param_1 + _DAT_112714d9c));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6e6bc; end: 104e6e6ff; -[SCAddFriendsComposerViewController exit:] */

void FUN_104e6e6bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be05440(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e6e700; end: 104e6e707; -[SCAddFriendsComposerViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_104e6e700(void)

{
  return 0;
}



/* Entry: 104e6e708; end: 104e6e71f; -[SCAddFriendsComposerViewController accessibilityPerformEscape] */

undefined8 FUN_104e6e708(void)

{
  func_0x00010be05440();
  return 1;
}



/* Entry: 104e6e720; end: 104e6e72b; -[SCAddFriendsComposerViewController defaultProjectNameV2] */

undefined ** FUN_104e6e720(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 104e6e72c; end: 104e6e733; -[SCAddFriendsComposerViewController pageViewName] */

undefined8 FUN_104e6e72c(void)

{
  return 8;
}



/* Entry: 104e6e734; end: 104e6e7ab; -[SCAddFriendsComposerViewController _doDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e734(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_112714d68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83060();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e6e7ac; end: 104e6e7af; -[SCAddFriendsComposerViewController addContactsButtonTapped] */

void FUN_104e6e7ac(void)

{
  return;
}



/* Entry: 104e6e7b0; end: 104e6e87f; -[SCAddFriendsComposerViewController openSystemContactTapped] */

void FUN_104e6e7b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1568;
  func_0x00010bfb95a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c14d6e0(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126b1568;
    func_0x00010bfb95a0(PTR_PTR_1126b1568);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar3,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104e6e880; end: 104e6e903; -[SCAddFriendsComposerViewController didRenderValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e880(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_4 != *(long *)(param_2 + _DAT_112714da0)) {
    return;
  }
  _CACurrentMediaTime();
  dVar2 = *(double *)(param_2 + _DAT_112714d98);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112714d94);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0c60((param_1 - dVar2) * 1000.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6e904; end: 104e6e98b; -[SCAddFriendsComposerViewController _updateLastLocalTimerBadgeSetIfNewer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e904(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112714d80;
  lVar2 = *(long *)(param_2 + lVar3);
  func_0x00010c0893a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (func_0x00010c26f380(puVar1,param_3,lVar2), 0.0 < param_1)) {
    func_0x00010c1b80a0(*(undefined8 *)(param_2 + lVar3),param_3,puVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e6e98c; end: 104e6e99b; -[SCAddFriendsComposerViewController pageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e6e98c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714d70);
}



/* Entry: 104e6e99c; end: 104e6e9db; -[SCAddFriendsComposerViewController setPageEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714d70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6e9dc; end: 104e6e9eb; -[SCAddFriendsComposerViewController addFriendsContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e6e9dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112714db0);
}



/* Entry: 104e6e9ec; end: 104e6e9fb; -[SCAddFriendsComposerViewController skipDeallocPageEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104e6e9ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112714dac);
}



/* Entry: 104e6e9fc; end: 104e6ea0b; -[SCAddFriendsComposerViewController setSkipDeallocPageEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6e9fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112714dac) = param_3;
  return;
}



/* Entry: 104e6ea0c; end: 104e6eb47; -[SCAddFriendsComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6ea0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714db0,0);
  _objc_storeStrong(param_1 + _DAT_112714d90,0);
  _objc_storeStrong(param_1 + _DAT_112714d8c,0);
  _objc_storeStrong(param_1 + _DAT_112714da8,0);
  _objc_storeStrong(param_1 + _DAT_112714d94,0);
  _objc_storeStrong(param_1 + _DAT_112714d88,0);
  _objc_storeStrong(param_1 + _DAT_112714d80,0);
  _objc_storeStrong(param_1 + _DAT_112714d84,0);
  _objc_storeStrong(param_1 + _DAT_112714d7c,0);
  _objc_storeStrong(param_1 + _DAT_112714d78,0);
  _objc_storeStrong(param_1 + _DAT_112714d74,0);
  _objc_storeStrong(param_1 + _DAT_112714db4,0);
  _objc_storeStrong(param_1 + _DAT_112714da0,0);
  _objc_storeStrong(param_1 + _DAT_112714d70,0);
  _objc_storeStrong(param_1 + _DAT_112714d6c,0);
  _objc_destroyWeak(param_1 + _DAT_112714d68);
  _objc_storeStrong(param_1 + _DAT_112714d64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714d60,0);
  return;
}



/* Entry: 104e6eb48; end: 104e6ebfb; -[SCAddFriendsComposerViewControllerContainerViewV2 initWithRootView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e6eb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_38 = PTR_PTR_1126e4938;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112714d5c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104e6ebfc; end: 104e6ec27; -[SCAddFriendsComposerViewControllerContainerViewV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6ebfc(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714d5c),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104e6ec28; end: 104e6ec3b; -[SCAddFriendsComposerViewControllerContainerViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6ec28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714d5c,0);
  return;
}



/* Entry: 104e6ec3c; end: 104e6ecbf; -[SCAddFriendsWebBrowsingScopeExposer initWithUnderlyingExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e6ec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112714db8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e6ecc0; end: 104e6eccf; -[SCAddFriendsWebBrowsingScopeExposer scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6ecc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714db8),PTR_s_scope_112631b68);
  return;
}



/* Entry: 104e6ecd0; end: 104e6ed43; -[SCAddFriendsWebBrowsingScopeExposer exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6ecd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112714db8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e6ed44; end: 104e6eda3; -[SCAddFriendsWebBrowsingScopeExposer removeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6ed44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714db8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6eda4; end: 104e6edb7; -[SCAddFriendsWebBrowsingScopeExposer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6eda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714db8,0);
  return;
}



/* Entry: 104e6edb8; end: 104e6f5ff; -[SCComposerAddFriendsContextProvider initWithFriendStore:friendActionStore:incomingFriendStore:suggestedFriendStore:contactUserStore:contactAddressBookEntryStore:blockedUserStore:recentFriendStore:nearbyFriendsStore:snapchattersDataFetcher:recentlyActiveFriendStore:snapchattersFriendscoreCoordinator:viewedIncomingFriendsTracker:permissionInfoProvider:circumstanceEngine:pageChangeObservable:addFriendsRecentlyActionPageScopeExposer:blizzardLogger:inviteContactSectionLogger:cofStore:networkingClient:userInfoProvider:presentingViewController:addFriendsDeckHierarchy:recentlyActiveEducationAlertScopeExposer:recentlyActiveEducationAlertScopeServices:friendmojiProvider:friendscoreProvider:userSearchingDependencies:actionMenuPresenter:isUserEligibleForTwilio:pageEventDataSubject:iOS18ContactSyncUpsellViewFactory:userPreferences:pageSessionId:webBrowsingScopeExposer:composerDeckConverter:facebookContactSyncer:usesNavigationPresentation:callLauncher:valdiRuntimeProvider:enableFindFriendsUpsellPresenterFactory:userInfoServices:] */

undefined8 *
FUN_104e6edb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined1 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined1 param_42,undefined4 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  puStack_70 = PTR_PTR_1126e4948;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_32;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x22) = param_33;
    _objc_storeWeak(puVar1 + 2,param_25);
    _objc_storeWeak(puVar1 + 3,param_26);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_38;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1570;
    _objc_alloc();
    func_0x00010c058be0();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_41;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x2b) = param_42;
    _objc_retain(param_44);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_47;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010be49a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e6f600; end: 104e6f607; -[SCComposerAddFriendsContextProvider defaultContext] */

void FUN_104e6f600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 104e6f608; end: 104e6f6bf; -[SCComposerAddFriendsContextProvider _lazyComposerAddFriendsContext] */

void FUN_104e6f608(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e6f6c0; end: 104e6f6ff;  */

void FUN_104e6f6c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e6f700; end: 104e7050f; -[SCComposerAddFriendsContextProvider _createAddFriendsContext] */

void FUN_104e6f700(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_3b0 [8];
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b1578;
  _objc_alloc_init(PTR_PTR_1126b1578);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bfebee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010c0b4ca0();
  func_0x00010c0df720(((double)lVar3 / 1000.0) * 1000.0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b83e0(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar10);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf4a2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5740(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  func_0x00010c1d8620(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000108c07d74(uVar7,0);
  if ((int)uVar7 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f980(puVar1);
    _objc_release(uVar7);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abec0(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f980(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181760(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181220(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171da0(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e85c0(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8480(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbb40(puVar1);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126b1580;
  _objc_opt_new(PTR_PTR_1126b1580);
  func_0x00010c166b20(puVar1);
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0660(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0bc0(puVar1);
  _objc_release(uVar7);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210560(puVar1);
  _objc_release(puVar4);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e70510;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1d1a00(puVar1);
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104e7053c;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c1d1a20(puVar1);
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104e70568;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c1d1ac0(puVar1);
  puStack_120 = puVar4;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x104e70594;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c1d3d20(puVar1);
  puStack_148 = puVar4;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x104e705c0;
  puStack_130 = &UNK_1108434b0;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c1d1b00(puVar1);
  puStack_170 = puVar4;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x104e705ec;
  puStack_158 = &UNK_1108434b0;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010c1d1ae0(puVar1);
  puStack_198 = puVar4;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x104e70618;
  puStack_180 = &UNK_1108434b0;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c1d1b20(puVar1);
  puStack_1c0 = puVar4;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x104e70644;
  puStack_1a8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010c1d1aa0(puVar1);
  puStack_1e8 = puVar4;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x104e70670;
  puStack_1d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1c8,auStack_80);
  func_0x00010c1d1b60(puVar1);
  puStack_210 = puVar4;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_104e7069c;
  puStack_1f8 = &UNK_110855200;
  _objc_copyWeak(auStack_1f0,auStack_80);
  func_0x00010c1d2fa0(puVar1);
  puStack_238 = puVar4;
  uStack_230 = 0xc2000000;
  uStack_228 = 0x104e70704;
  puStack_220 = &UNK_110855230;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010c1d2f40(puVar1);
  puStack_260 = puVar4;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_104e7076c;
  puStack_248 = &UNK_110855260;
  _objc_copyWeak(auStack_240,auStack_80);
  func_0x00010c1d2f80(puVar1);
  puStack_288 = puVar4;
  uStack_280 = 0xc2000000;
  uStack_278 = 0x104e707b4;
  puStack_270 = &UNK_110855260;
  _objc_copyWeak(auStack_268,auStack_80);
  func_0x00010c1d2fc0(puVar1);
  puStack_2b0 = puVar4;
  uStack_2a8 = 0xc2000000;
  uStack_2a0 = 0x104e707fc;
  puStack_298 = &UNK_110855260;
  _objc_copyWeak(auStack_290,auStack_80);
  func_0x00010c1d2f60(puVar1);
  puStack_2d8 = puVar4;
  uStack_2d0 = 0xc2000000;
  uStack_2c8 = 0x104e70844;
  puStack_2c0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_2b8,auStack_80);
  func_0x00010c1d1940(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aea60(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar1);
  _objc_release(uVar7);
  puStack_300 = puVar4;
  uStack_2f8 = 0xc2000000;
  pcStack_2f0 = FUN_104e70870;
  puStack_2e8 = &UNK_110855290;
  _objc_copyWeak(auStack_2e0,auStack_80);
  func_0x00010c201a40(puVar1);
  puStack_328 = puVar4;
  uStack_320 = 0xc2000000;
  uStack_318 = 0x104e70908;
  puStack_310 = &UNK_1108552c0;
  _objc_copyWeak(auStack_308,auStack_80);
  func_0x00010c1fe2a0(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010befcc20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165840(puVar1);
  _objc_release(uVar7);
  lVar10 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar10);
  lVar3 = lVar10;
  func_0x00010bf553a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = lVar3;
  func_0x00010bf668c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a1e0(puVar1);
  _objc_release(lVar10);
  puVar8 = PTR_PTR_1126b1598;
  _objc_alloc_init(PTR_PTR_1126b1598);
  func_0x00010c21ab00(puVar1);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108c07468(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c0df6e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1652c0(puVar8);
  _objc_release(puVar9);
  func_0x00010c194de0(puVar8);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    func_0x000108c073d8(*(undefined8 *)(param_1 + 0xa0),1);
    func_0x00010c0df6e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194fa0(puVar8);
    _objc_release(puVar9);
    func_0x00010c195440(puVar8);
  }
  puStack_350 = puVar4;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_104e709a8;
  puStack_338 = &UNK_1108434b0;
  _objc_copyWeak(auStack_330,auStack_80);
  func_0x00010c1d1a40(puVar1);
  puStack_378 = puVar4;
  uStack_370 = 0xc2000000;
  uStack_368 = 0x104e709d4;
  puStack_360 = &UNK_1108434b0;
  _objc_copyWeak(auStack_358,auStack_80);
  func_0x00010c1d19e0(puVar1);
  lVar10 = param_1;
  func_0x00010beb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puVar1);
  _objc_release(lVar10);
  puVar9 = PTR_PTR_1126b1568;
  func_0x00010bfb9420();
  if ((int)puVar9 != 0) {
    func_0x00010c194b20(puVar8);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f200(puVar1);
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bde3ca0(param_1);
  func_0x00010c0df760(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1814c0(puVar1);
  _objc_release(puVar9);
  uVar7 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181660(puVar1);
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be02880(param_1);
  func_0x00010c0df6e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f500(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beb4060(param_1);
  func_0x00010c0df6e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200700(puVar8);
  _objc_release(puVar9);
  lVar10 = *(long *)(param_1 + 0x1b0);
  if (lVar10 != 0) {
    _objc_retain(lVar10);
    puStack_3a8 = puVar4;
    uStack_3a0 = 0xc2000000;
    pcStack_398 = FUN_104e70a00;
    puStack_390 = &UNK_110845c40;
    _objc_copyWeak(auStack_380,auStack_80);
    _objc_retain(lVar10);
    lStack_388 = lVar10;
    func_0x00010c201fa0(puVar1);
    _objc_copyWeak(auStack_3b0,auStack_80);
    func_0x00010c18f700(puVar1);
    _objc_destroyWeak(auStack_3b0);
    _objc_release(lStack_388);
    _objc_destroyWeak(auStack_380);
    _objc_release(lVar10);
  }
  _objc_destroyWeak(auStack_358);
  _objc_destroyWeak(auStack_330);
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_308);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2b8);
  _objc_destroyWeak(auStack_290);
  _objc_destroyWeak(auStack_268);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e70510; end: 104e7069b;  */

void FUN_104e70510(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7069c; end: 104e7076b;  */

void FUN_104e7069c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f360();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7076c; end: 104e7086f;  */

void FUN_104e7076c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e70870; end: 104e709a7;  */

void FUN_104e70870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1588;
    _objc_opt_new(PTR_PTR_1126b1588);
    puVar3 = PTR_PTR_1126b1590;
    func_0x00010be08ba0(PTR_PTR_1126b1590,param_2,&PTR____CFConstantStringClassReference_110db7f78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar2 = puVar1;
    func_0x00010beb8e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e709a8; end: 104e709ff;  */

void FUN_104e709a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e70a00; end: 104e70be7;  */

void FUN_104e70a00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104e70ad4;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_2);
    uStack_38 = param_2;
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar1;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_40);
    _objc_release(lStack_48);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104e70be8; end: 104e70ca3;  */

void FUN_104e70be8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x104e70c70;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_1);
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104e70ca4; end: 104e70d47; -[SCComposerAddFriendsContextProvider _showEnableFindFriendsUpsellTray] */

void FUN_104e70ca4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e70d48;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  puStack_38 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e70d48; end: 104e70ea3;  */

void FUN_104e70d48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db7f78;
  }
  else {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      ppuVar4 = &PTR____CFConstantStringClassReference_110db7ff8;
    }
    else {
      if (*(long *)(lVar1 + 0x168) != 0) {
        puVar3 = PTR_PTR_1126aead8;
        _objc_alloc();
        lVar2 = lVar1 + 0x10;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c038f40(puVar3,param_2,lVar2,1);
        _objc_release(lVar2);
        uVar6 = *(undefined8 *)(lVar1 + 0x178);
        *(undefined **)(lVar1 + 0x178) = puVar3;
        _objc_retain(puVar3);
        _objc_release(uVar6);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar5);
        uVar6 = *(undefined8 *)(lVar1 + 0x180);
        *(undefined8 *)(lVar1 + 0x180) = uVar5;
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(lVar1 + 0x168);
        func_0x00010c0b7680(uVar6,param_2,puVar3,lVar1,*(undefined8 *)(lVar1 + 0x138));
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(lVar1 + 0x170);
        *(undefined8 *)(lVar1 + 0x170) = uVar6;
        _objc_release(uVar5);
        func_0x00010c08bea0(*(undefined8 *)(lVar1 + 0x170));
        goto LAB_104e70e88;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      ppuVar4 = &PTR____CFConstantStringClassReference_110db8018;
    }
  }
  puVar3 = PTR_PTR_1126b1590;
  func_0x00010be08ba0(PTR_PTR_1126b1590,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb6e0(uVar6,param_2,puVar3);
LAB_104e70e88:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e70ea4; end: 104e70fb3; -[SCComposerAddFriendsContextProvider _setShowMeInFindFriendsEnabled:] */

void FUN_104e70ea4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new(PTR_PTR_1126b1588);
  lVar2 = *(long *)(param_1 + 0x188);
  func_0x00010c11e280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(puVar1,param_2,puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126b15b0;
    if ((param_3 & 1) == 0) {
      func_0x00010c0da8c0(PTR_PTR_1126b15b0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf9a640();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2890c0(lVar3,param_2,puVar4,&PTR___NSConcreteGlobalBlock_110855310);
    puVar5 = PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(puVar1,param_2,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e70fb4; end: 104e70fd3;  */

void FUN_104e70fb4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c07f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_error__11260dc10,&PTR___NSConcreteGlobalBlock_110855330,
             &PTR___NSConcreteGlobalBlock_110855350);
  return;
}



/* Entry: 104e70fd4; end: 104e7104f; -[SCComposerAddFriendsContextProvider _completeEnableFindFriendsUpsellPromise] */

void FUN_104e70fd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  _objc_retain(uVar3);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b15a8;
  func_0x00010c27f660(PTR_PTR_1126b15a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar3,param_2,puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e71050; end: 104e71127; +[SCComposerAddFriendsContextProvider _enableFindFriendsUpsellError:] */

void FUN_104e71050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110db7f58,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104e71128; end: 104e7112b; -[SCComposerAddFriendsContextProvider handleTakeoverDisplayed] */

void FUN_104e71128(void)

{
  return;
}



/* Entry: 104e7112c; end: 104e7112f; -[SCComposerAddFriendsContextProvider handleAccepted] */

void FUN_104e7112c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeEnableFindFriendsUpsell_112556490);
  return;
}



/* Entry: 104e71130; end: 104e71133; -[SCComposerAddFriendsContextProvider handleDismissed] */

void FUN_104e71130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeEnableFindFriendsUpsell_112556490);
  return;
}



/* Entry: 104e71134; end: 104e711e7; -[SCComposerAddFriendsContextProvider _doDismiss] */

void FUN_104e71134(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e711bc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e711e8; end: 104e7129b; -[SCComposerAddFriendsContextProvider _openSnapcode] */

void FUN_104e711e8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e71270;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e7129c; end: 104e7134f; -[SCComposerAddFriendsContextProvider _presentMoreActionMenu] */

void FUN_104e7129c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e71324;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e71350; end: 104e71403; -[SCComposerAddFriendsContextProvider _shareMessage] */

void FUN_104e71350(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e713d8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e71404; end: 104e714b7; -[SCComposerAddFriendsContextProvider _shareEmail] */

void FUN_104e71404(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e7148c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e714b8; end: 104e7156b; -[SCComposerAddFriendsContextProvider _shareMore] */

void FUN_104e714b8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e71540;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e7156c; end: 104e7161f; -[SCComposerAddFriendsContextProvider _openAllContacts] */

void FUN_104e7156c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e715f4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e71620; end: 104e716d3; -[SCComposerAddFriendsContextProvider _findFriends] */

void FUN_104e71620(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e716a8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e716d4; end: 104e717bf; -[SCComposerAddFriendsContextProvider _presentUserProfile:section:] */

void FUN_104e716d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010be22bc0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e717c0; end: 104e7187f;  */

void FUN_104e717c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e71880;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e71880; end: 104e718b3;  */

void FUN_104e71880(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e718b4; end: 104e7199f; -[SCComposerAddFriendsContextProvider _presentUserActions:section:] */

void FUN_104e718b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010be22bc0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e719a0; end: 104e71a5f;  */

void FUN_104e719a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e71a60;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e71a60; end: 104e71a93;  */

void FUN_104e71a60(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e71a94; end: 104e71b57; -[SCComposerAddFriendsContextProvider _presentUserChat:] */

void FUN_104e71a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be22bc0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e71b58; end: 104e71bff;  */

void FUN_104e71b58(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e71c00;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e71c00; end: 104e71c33;  */

void FUN_104e71c00(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e71c34; end: 104e71cf7; -[SCComposerAddFriendsContextProvider _presentUserSnap:] */

void FUN_104e71c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be22bc0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e71cf8; end: 104e71d9f;  */

void FUN_104e71cf8(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e71da0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e71da0; end: 104e71dd3;  */

void FUN_104e71da0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e71dd4; end: 104e71e9b; -[SCComposerAddFriendsContextProvider _presentUserCall:] */

void FUN_104e71dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b01c0;
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c294260(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08b560(uVar3,param_2,puVar2,0,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104e71e9c; end: 104e71f4f; -[SCComposerAddFriendsContextProvider _presentInvitesPage] */

void FUN_104e71e9c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e71f24;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e71f50; end: 104e72003; -[SCComposerAddFriendsContextProvider _presentFacebookFriendsPage] */

void FUN_104e71f50(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e71fd8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e72004; end: 104e720b7; -[SCComposerAddFriendsContextProvider _openNearbyPage] */

void FUN_104e72004(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e7208c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e720b8; end: 104e7216b; -[SCComposerAddFriendsContextProvider _presentAlertDialog] */

void FUN_104e720b8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104e72140;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e7216c; end: 104e721fb; -[SCComposerAddFriendsContextProvider _presentAlertDialogOnMainThread] */

void FUN_104e7216c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf23fa0(uVar3,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xf8),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e721fc; end: 104e722db; -[SCComposerAddFriendsContextProvider _dismissContactSyncInviteTitleWithUserPreferences:contactPermissionInfoProvider:circumstanceEngine:] */

undefined *
FUN_104e721fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfcdbe0();
  _objc_release(param_4);
  if ((uVar2 & 1) == 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x000108c07998(param_5);
      func_0x000108c079c0(param_5);
      puVar3 = PTR_PTR_1126b15b8;
      func_0x00010bfea980(PTR_PTR_1126b15b8);
    }
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 104e722dc; end: 104e723b3; -[SCComposerAddFriendsContextProvider _shouldHideFacebookSectionWithUserPreferences:circumstanceEngine:] */

undefined * FUN_104e722dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126b1568;
  func_0x00010bfb95e0();
  if (((ulong)puVar5 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0998e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = param_4;
      func_0x000108c07934(param_4);
      uVar4 = param_4;
      func_0x000108c0795c(param_4);
      puVar5 = PTR_PTR_1126b15b8;
      func_0x00010bfea980(PTR_PTR_1126b15b8,param_2,param_3,uVar3,uVar4,
                          &PTR____CFConstantStringClassReference_110db7f38,
                          &PTR____CFConstantStringClassReference_110db7f18);
    }
    else {
      puVar5 = (undefined *)0x1;
    }
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 104e723b4; end: 104e7243f; -[SCComposerAddFriendsContextProvider _doDismissOnMainThread] */

void FUN_104e723b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x1a8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf84b00();
  }
  else {
    param_1 = param_1 + 0x1a8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf6f440();
  }
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e72440; end: 104e724df; -[SCComposerAddFriendsContextProvider _openSnapcodeOnMainThread] */

void FUN_104e72440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b15c0;
  _objc_alloc(PTR_PTR_1126b15c0);
  func_0x00010c008d20();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,puVar1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e724e0; end: 104e7253f; -[SCComposerAddFriendsContextProvider _presentMoreActionMenuOnMainThread] */

void FUN_104e724e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15c0;
  _objc_alloc(PTR_PTR_1126b15c0);
  func_0x00010c008d20();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,puVar1);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72540; end: 104e72597; -[SCComposerAddFriendsContextProvider _shareMessageOnMainThread] */

void FUN_104e72540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72598; end: 104e725ef; -[SCComposerAddFriendsContextProvider _shareEmailOnMainThread] */

void FUN_104e72598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e725f0; end: 104e72647; -[SCComposerAddFriendsContextProvider _shareMoreOnMainThread] */

void FUN_104e725f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72648; end: 104e72693; -[SCComposerAddFriendsContextProvider _openAllContactsOnMainThread] */

void FUN_104e72648(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107d3df94(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e72694; end: 104e726df; -[SCComposerAddFriendsContextProvider _findFriendsOnMainThread] */

void FUN_104e72694(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107d3df94(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e726e0; end: 104e72737; -[SCComposerAddFriendsContextProvider _openNearbyPageOnMainThread] */

void FUN_104e726e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72738; end: 104e7282b; -[SCComposerAddFriendsContextProvider _getSnapchatterFromUser:completion:] */

void FUN_104e72738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e7282c;
  puStack_48 = &UNK_1108553d0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1,param_2,uVar2,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


