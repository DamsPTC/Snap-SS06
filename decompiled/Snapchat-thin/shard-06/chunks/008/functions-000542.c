/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e62940; end: 104e6295b;  */

void FUN_104e62940(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6295c; end: 104e6299b;  */

void FUN_104e6295c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd40c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e6299c; end: 104e629df; -[SCShortcutsDataBestFriendsPluginImpl dealloc] */

void FUN_104e6299c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e48e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e629e0; end: 104e62aa7; -[SCShortcutsDataBestFriendsPluginImpl shortcutForSource:] */

void FUN_104e629e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e62aa8; end: 104e62b63;  */

void FUN_104e62aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126ae750;
  if (lVar1 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdd40a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e62b64; end: 104e62bb3; -[SCShortcutsDataBestFriendsPluginImpl recipientsForSource:] */

void FUN_104e62b64(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 104e62bb4; end: 104e62bbf; -[SCShortcutsDataBestFriendsPluginImpl shouldShowForSource:] */

bool FUN_104e62bb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 104e62bc0; end: 104e62bef; -[SCShortcutsDataBestFriendsPluginImpl shortcutId] */

void FUN_104e62bc0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dbb6d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dbb6d8);
  return;
}



/* Entry: 104e62bf0; end: 104e62bf3; -[SCShortcutsDataBestFriendsPluginImpl pauseUpdates] */

void FUN_104e62bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 104e62bf4; end: 104e62ccf; -[SCShortcutsDataBestFriendsPluginImpl resumeUpdates] */

void FUN_104e62bf4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd4080();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 104e62cd0; end: 104e62d3f;  */

void FUN_104e62cd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e62d40; end: 104e62d47; -[SCShortcutsDataBestFriendsPluginImpl alwaysShow] */

undefined8 FUN_104e62d40(void)

{
  return 0;
}



/* Entry: 104e62d48; end: 104e62da3; -[SCShortcutsDataBestFriendsPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e62d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e62da4; end: 104e62e47; -[SCShortcutsDataBestFriendsPluginImpl _bestFriendsShortcut:] */

void FUN_104e62da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x00010c260da0(PTR_PTR_1126b1490,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  func_0x00010b0af1c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbb6d8,0,puVar3,
                      puVar1,0,10);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e62e48; end: 104e62f3f; -[SCShortcutsDataBestFriendsPluginImpl _bestFriendsShortcutRecipientsObservable] */

void FUN_104e62e48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd4080();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e62f40; end: 104e62faf;  */

void FUN_104e62f40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e62fb0; end: 104e6307f; -[SCShortcutsDataBestFriendsPluginImpl _bestFriendsRecipientsObservable] */

void FUN_104e62fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf19580(uVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104e63080; end: 104e6309f;  */

void FUN_104e63080(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108545d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e630a0; end: 104e630f7;  */

void FUN_104e630a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b14a0;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e630f8; end: 104e63123; -[SCShortcutsDataBestFriendsPluginImpl _disposeObserver] */

void FUN_104e630f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e63124; end: 104e63183; -[SCShortcutsDataBestFriendsPluginImpl .cxx_destruct] */

void FUN_104e63124(long param_1)

{
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



/* Entry: 104e63184; end: 104e632bf; -[SCShortcutsDataBestFriendsPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e63184(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + _DAT_112714b34;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b14a8;
  _objc_alloc(PTR_PTR_1126b14a8);
  lVar4 = param_1 + _DAT_112714b38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714b3c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bfb9740();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714b40;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049f80(puVar3,param_2,lVar5,lVar7,lVar8);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e632c0; end: 104e6330f; -[SCShortcutsDataBestFriendsPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e632c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714b40);
  _objc_destroyWeak(param_1 + _DAT_112714b3c);
  _objc_destroyWeak(param_1 + _DAT_112714b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714b34);
  return;
}



/* Entry: 104e63310; end: 104e634cf; -[SCCommunityFeedNativeDataProvider initWithUserId:groupsDataTracker:performerProvider:translator:] */

undefined8 *
FUN_104e63310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e48e8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e634d0; end: 104e634e3;  */

void FUN_104e634d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b14b0,PTR_s__createPerformerWithPerformerPro_112559e48,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104e634e4; end: 104e63677; -[SCCommunityFeedNativeDataProvider _setupObserversIfNeeded] */

void FUN_104e634e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf00180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = uVar3;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar5 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 104e63678; end: 104e6369b;  */

void FUN_104e63678(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd869d0(param_2,0,&PTR___NSConcreteGlobalBlock_110854680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6369c; end: 104e6370b;  */

void FUN_104e6369c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c06ecc0();
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6370c; end: 104e63797;  */

void FUN_104e6370c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b14b0;
    func_0x00010bececc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e63798; end: 104e637bf; -[SCCommunityFeedNativeDataProvider itemsObservable] */

void FUN_104e63798(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e637c0; end: 104e637e7; -[SCCommunityFeedNativeDataProvider consumableConversationIdsObservable] */

void FUN_104e637c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e637e8; end: 104e63baf; -[SCCommunityFeedNativeDataProvider processFeedEntries:deletedFeedEntries:] */

void FUN_104e637e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      ppuVar12 = &PTR___NSConcreteGlobalBlock_110854700;
      uVar8 = param_4;
      func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110854700);
      func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x10));
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar17 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar17);
      lVar4 = lVar17;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar5 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar17);
          }
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar10;
          func_0x000100bf37c4();
          _objc_release(uVar10);
          if ((int)uVar16 != 0) {
            func_0x00010befa120(puVar9);
          }
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
        lVar4 = lVar17;
        func_0x00010bf52a60();
      }
      _objc_release(lVar17);
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      puVar11 = puVar9;
      func_0x00010bf51e00(puVar9);
      func_0x00010c0d9840(uVar16);
      _objc_release(puVar11);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
      func_0x00010beae7e0(param_1);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bfa3ba0(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar12;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar13;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
      return;
    }
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar18 = *(ulong *)(lVar17 * 8);
      lVar5 = *(long *)(param_1 + 0x48);
      func_0x00010bfb9fc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar7 = uVar18;
        func_0x00010bf50280(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100bc2aec(uVar18,uVar6,0,*(undefined8 *)(param_1 + 8));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar7);
        uVar7 = *(ulong *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(uVar18);
        if (uVar7 == uVar18) {
          _objc_release(uVar18);
          _objc_release(uVar7);
        }
        else {
          if (uVar18 == 0) {
            _objc_release();
          }
          else {
            uVar6 = uVar7;
            func_0x00010c071ae0();
            _objc_release(uVar18);
            _objc_release(uVar7);
            if ((uVar6 & 1) != 0) goto LAB_104e639a8;
          }
          func_0x00010c1d0640(puVar3);
        }
LAB_104e639a8:
        func_0x00010befa120(puVar2);
        _objc_release(uVar7);
        _objc_release(uVar18);
      }
      _objc_release(lVar5);
      lVar17 = lVar17 + 1;
    } while (lVar4 != lVar17);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104e63bb0; end: 104e63c17;  */

void FUN_104e63bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e63c18; end: 104e63d5f; +[SCCommunityFeedNativeDataProvider _transformGroupsData:activeMessageDataByFeedId:userId:] */

void FUN_104e63c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf002e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e63d60;
  puStack_60 = &UNK_110854720;
  _objc_retain(param_3);
  uVar2 = uVar1;
  uStack_58 = param_3;
  func_0x000100504554(uVar1,&puStack_78);
  puVar3 = PTR_PTR_1126b14b0;
  func_0x00010be813c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b14b0;
    func_0x00010be111c0(PTR_PTR_1126b14b0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e63d60; end: 104e63d6b;  */

void FUN_104e63d60(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 104e63d6c; end: 104e63f0b; +[SCCommunityFeedNativeDataProvider _processGroupEntities:userId:] */

void FUN_104e63d6c(undefined8 param_1,undefined **param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  long lStack_1a0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar13 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar18 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar17 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 != (undefined1 *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar18 = auStack_e8;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar16 = *plStack_120;
      do {
        puVar18 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(param_3);
          }
          uVar15 = *(undefined8 *)(lStack_128 + (long)puVar18 * 8);
          puVar2 = PTR_PTR_1126b14b0;
          func_0x00010be24820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfceb20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar17);
          _objc_release(uVar15);
          _objc_release(puVar2);
          puVar18 = puVar18 + 1;
        } while (puVar1 != puVar18);
        puVar18 = auStack_e8;
        puVar1 = param_3;
        puVar13 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar8 = (undefined1 *)puVar13;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    _objc_retain(puVar18);
    puVar1 = puVar8;
    func_0x00010c06ecc0();
    if ((int)puVar1 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar8;
      func_0x000108ef2144(puVar8,puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010050471c();
      puVar1 = puVar4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x000108ef5d54();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_248 = 0xc2000000;
      pcStack_240 = FUN_104e6422c;
      puStack_238 = &UNK_110854750;
      _objc_retain(puVar4);
      puStack_230 = puVar4;
      _objc_retain(puVar5);
      param_2 = &puStack_250;
      puVar6 = puVar3;
      puStack_228 = puVar5;
      func_0x000100504554(puVar3,param_2);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      _objc_retain(puVar6);
      puVar1 = puVar6;
      func_0x00010bf52a60();
      lVar16 = lRam0000000000000000;
      while (puVar1 != (undefined1 *)0x0) {
        puVar14 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar16) {
            _objc_enumerationMutation(puVar6);
          }
          uVar19 = *(undefined8 *)((long)puVar14 * 8);
          func_0x00010c244340(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar19;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar15);
          _objc_release(uVar19);
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        puVar1 = puVar6;
        func_0x00010bf52a60();
      }
      _objc_release(puVar6);
      puVar7 = PTR_PTR_1126b14d0;
      _objc_alloc();
      puVar1 = puVar8;
      func_0x00010bfceb20(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar8;
      func_0x00010bfcef60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010c018d60();
      _objc_release(puVar17);
      _objc_release(puVar14);
      _objc_release(puVar1);
      puVar17 = PTR_PTR_1126b14d8;
      func_0x00010bfcf5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puStack_228);
      _objc_release(puStack_230);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar18);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      uVar15 = *(undefined8 *)(puVar8 + 0x20);
      _objc_retain(param_2);
      func_0x00010c0e00e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b14b8;
      _objc_alloc(PTR_PTR_1126b14b8);
      ppuVar9 = param_2;
      func_0x00010bf1acc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_2;
      func_0x00010bf1c0a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_2;
      func_0x00010bf1c000(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = param_2;
      func_0x00010bf1af00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7be0(puVar2);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      puVar7 = PTR_PTR_1126b14c0;
      _objc_alloc(PTR_PTR_1126b14c0);
      ppuVar9 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_2;
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05c020(puVar7);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      puVar17 = PTR_PTR_1126b14c8;
      _objc_alloc(PTR_PTR_1126b14c8);
      uVar19 = *(undefined8 *)(puVar8 + 0x28);
      func_0x00010c0e00e0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_2;
      func_0x00010bf40c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_2;
      func_0x00010bf1a5c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      func_0x00010c049240(puVar17);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(uVar19);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(uVar15);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 104e63f0c; end: 104e6422b; +[SCCommunityFeedNativeDataProvider _groupEntityForGroup:userId:] */

void FUN_104e63f0c(undefined8 param_1,undefined **param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c06ecc0();
  if ((int)lVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x000108ef2144(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010050471c();
    lVar1 = lVar3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000108ef5d54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_104e6422c;
    puStack_108 = &UNK_110854750;
    _objc_retain(lVar3);
    lStack_100 = lVar3;
    _objc_retain(lVar4);
    param_2 = &puStack_120;
    lVar5 = lVar2;
    lStack_f8 = lVar4;
    func_0x000100504554(lVar2,param_2);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        uVar16 = *(undefined8 *)(lVar14 * 8);
        func_0x00010c244340(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar16;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar13);
        _objc_release(uVar16);
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar7 = PTR_PTR_1126b14d0;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bfcef60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar6;
    func_0x00010bf51e00(puVar6);
    func_0x00010c018d60();
    _objc_release(puVar15);
    _objc_release(lVar8);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126b14d8;
    func_0x00010bfcf5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lStack_f8);
    _objc_release(lStack_100);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0e00e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    ppuVar9 = param_2;
    func_0x00010bf1acc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_2;
    func_0x00010bf1c0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_2;
    func_0x00010bf1c000(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_2;
    func_0x00010bf1af00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar6);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    puVar7 = PTR_PTR_1126b14c0;
    _objc_alloc(PTR_PTR_1126b14c0);
    ppuVar9 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c020(puVar7);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    puVar15 = PTR_PTR_1126b14c8;
    _objc_alloc(PTR_PTR_1126b14c8);
    uVar16 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0e00e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_2;
    func_0x00010bf1a5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c049240(puVar15);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(uVar16);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104e6422c; end: 104e6443f;  */

void FUN_104e6422c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf1c000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b14c0;
  _objc_alloc(PTR_PTR_1126b14c0);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c020(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b14c8;
  _objc_alloc(PTR_PTR_1126b14c8);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1a5c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c049240(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e64440; end: 104e6465f; +[SCCommunityFeedNativeDataProvider _fetchFeedInfoWithGroupFeedIds:activeMessageDataByFeedId:entityDataByFeedId:] */

void FUN_104e64440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x104e6457c;
  puStack_60 = &UNK_110854780;
  uStack_58 = param_4;
  uStack_50 = param_5;
  puStack_48 = puVar1;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x000100504554(param_3,&puStack_78);
  _objc_release(param_3);
  _objc_retain(&PTR___NSConcreteGlobalBlock_110a08698);
  uVar3 = uVar2;
  func_0x00010c246ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR___NSConcreteGlobalBlock_110a08698);
  _objc_release(uVar2);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e64660; end: 104e646bb; +[SCCommunityFeedNativeDataProvider _createPerformerWithPerformerProvider:] */

void FUN_104e64660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e646bc; end: 104e64767; -[SCCommunityFeedNativeDataProvider .cxx_destruct] */

void FUN_104e646bc(long param_1)

{
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



/* Entry: 104e64768; end: 104e6476f;  */

void FUN_104e64768(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_nameToDisplay_112612e68);
  return;
}



/* Entry: 104e64770; end: 104e6477b; -[SCFeatureSettingsService isFfCommunitiesShortcutImpressionCountAvailable] */

void FUN_104e64770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110db7bf8);
  return;
}



/* Entry: 104e6477c; end: 104e64787; -[SCFeatureSettingsService ffCommunitiesShortcutImpressionCountServerParam] */

undefined ** FUN_104e6477c(void)

{
  return &PTR____CFConstantStringClassReference_110db7bf8;
}



/* Entry: 104e64788; end: 104e64797; -[SCFeatureSettingsService setFfCommunitiesShortcutImpressionCount:] */

void FUN_104e64788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110db7bf8,param_3);
  return;
}



/* Entry: 104e64798; end: 104e6479f; -[SCFeatureSettingsService FF_COMMUNITIES_SHORTCUT_IMPRESSION_COUNT_client_value:] */

void FUN_104e64798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104e647a0; end: 104e647a7; -[SCFeatureSettingsService FF_COMMUNITIES_SHORTCUT_IMPRESSION_COUNT_server_value:] */

void FUN_104e647a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104e647a8; end: 104e647b7; -[SCFeatureSettingsService ffCommunitiesShortcutImpressionCount] */

void FUN_104e647a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110db7bf8,0);
  return;
}



/* Entry: 104e647b8; end: 104e649f7; -[SCShortcutsDataCommunitiesPluginImpl initWithPerformerProvider:customStoriesDataFetcher:featureSettingsService:messagingExperimentService:nativeCommunityFeedManager:communityFeedDataProvider:] */

undefined8 *
FUN_104e647b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126e48f0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec79c0(puVar1);
    _objc_release(param_6);
    _objc_release(param_3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e649f8; end: 104e64a0b;  */

void FUN_104e649f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b14e8,PTR_s__createPerformerWithPerformerPro_112559e48,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104e64a0c; end: 104e64a67;  */

void FUN_104e64a0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8faa0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e64a68; end: 104e64abb; -[SCShortcutsDataCommunitiesPluginImpl dealloc] */

void FUN_104e64a68(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e48f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e64abc; end: 104e64b43; -[SCShortcutsDataCommunitiesPluginImpl shortcutForSource:] */

void FUN_104e64abc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104e64b44; end: 104e64d4b;  */

void FUN_104e64b44(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar3 = 0;
  if (lVar2 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar9 = *(ulong *)(lVar10 * 8);
        uVar3 = uVar9;
        func_0x00010bf60900();
        if ((uVar3 & 1) != 0) {
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          func_0x00010bf0a5c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar3 = uVar4;
          func_0x00010c22d240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          goto LAB_104e64c54;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar3 = 0;
  }
LAB_104e64c54:
  _objc_release(param_2);
  _objc_release(param_2);
  uVar9 = uVar3;
  func_0x00010c08fa60();
  if (uVar9 == 0) {
    ppuVar8 = (undefined **)PTR_PTR_1126ae750;
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126b1490;
    func_0x00010c260da0(PTR_PTR_1126b1490);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1498;
    _objc_alloc(PTR_PTR_1126b1498);
    func_0x00010c045ee0();
    ppuVar8 = (undefined **)PTR_PTR_1126ae750;
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e20e18;
    _objc_retain(&PTR____CFConstantStringClassReference_110e20e18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 104e64d4c; end: 104e64d7b; -[SCShortcutsDataCommunitiesPluginImpl shortcutId] */

void FUN_104e64d4c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e20e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e20e18);
  return;
}



/* Entry: 104e64d7c; end: 104e64d87; -[SCShortcutsDataCommunitiesPluginImpl shouldShowForSource:] */

bool FUN_104e64d7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e64d88; end: 104e64df7; -[SCShortcutsDataCommunitiesPluginImpl recipientsForSource:] */

void FUN_104e64d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beffcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e64df8; end: 104e64e03;  */

undefined * FUN_104e64df8(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104e64e04; end: 104e64e07; -[SCShortcutsDataCommunitiesPluginImpl pauseUpdates] */

void FUN_104e64e04(void)

{
  return;
}



/* Entry: 104e64e08; end: 104e64e0b; -[SCShortcutsDataCommunitiesPluginImpl resumeUpdates] */

void FUN_104e64e08(void)

{
  return;
}



/* Entry: 104e64e0c; end: 104e64e13; -[SCShortcutsDataCommunitiesPluginImpl alwaysShow] */

undefined8 FUN_104e64e0c(void)

{
  return 1;
}



/* Entry: 104e64e14; end: 104e64e1b; -[SCShortcutsDataCommunitiesPluginImpl shortcutType] */

undefined8 FUN_104e64e14(void)

{
  return 0xc;
}



/* Entry: 104e64e1c; end: 104e64e8b; -[SCShortcutsDataCommunitiesPluginImpl friendsFeedItemsObservable] */

void FUN_104e64e1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0851e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e64e8c; end: 104e6501f; -[SCShortcutsDataCommunitiesPluginImpl badgeObservable] */

void FUN_104e64e8c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126ae750;
  puVar9 = PTR_PTR_1126ae6b8;
  if ((uVar2 & 1) == 0) {
    puVar5 = PTR_PTR_1126b14f0;
    func_0x00010bf80d20(PTR_PTR_1126b14f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar9,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bec0aa0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfabdc0();
    _objc_release(uVar3);
    puVar5 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf49860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2519e0(uVar3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf41860(puVar8,param_2,uVar3,&PTR___NSConcreteGlobalBlock_1108548b0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(puVar6);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104e65020; end: 104e6510f;  */

void FUN_104e65020(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126b14f0;
  puVar3 = PTR_PTR_1126ae750;
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c067fc0();
    puVar3 = PTR_PTR_1126ae750;
    if (4 < lVar1) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e650d4;
    }
    puVar2 = PTR_PTR_1126b14f0;
    func_0x00010c0da600(PTR_PTR_1126b14f0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0(param_2);
    func_0x00010bf52fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2468a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_104e650d4:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e65110; end: 104e6511b; -[SCShortcutsDataCommunitiesPluginImpl shouldBadgeForSource:] */

bool FUN_104e65110(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e6511c; end: 104e651e3; -[SCShortcutsDataCommunitiesPluginImpl selectShortcut] */

void FUN_104e6511c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e651e4; end: 104e6520f;  */

void FUN_104e651e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e65210; end: 104e652d7; -[SCShortcutsDataCommunitiesPluginImpl deselectShortcut] */

void FUN_104e65210(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e652d8; end: 104e65303;  */

void FUN_104e652d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e65304; end: 104e65383; -[SCShortcutsDataCommunitiesPluginImpl incrementImpressionCount] */

void FUN_104e65304(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfabdc0();
  _objc_release(lVar1);
  if (lVar2 < 6) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104e65384; end: 104e653ef; -[SCShortcutsDataCommunitiesPluginImpl loadingStatusStreaming] */

void FUN_104e65384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be0ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c09d480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a4e98);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e653f0; end: 104e65427; -[SCShortcutsDataCommunitiesPluginImpl loadMoreConversationsIfPossibleForceOnFailed:] */

void FUN_104e653f0(undefined8 param_1)

{
  func_0x00010be0ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e65428; end: 104e6546b; -[SCShortcutsDataCommunitiesPluginImpl hasMoreFeedEntriesObservable] */

void FUN_104e65428(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be0ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd9380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6546c; end: 104e6564b; -[SCShortcutsDataCommunitiesPluginImpl _subscribeToImpressionCountIfNeeded] */

void FUN_104e6546c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar9);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110db7c38;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_68;
  _objc_copyWeak(auStack_70);
  uVar5 = uVar2;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  puVar6 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar6);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf4b900();
  _objc_release(puVar7);
  if ((int)puVar8 != 0) {
    puVar6 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar6);
    func_0x00010becfc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 104e6564c; end: 104e656c3;  */

void FUN_104e6564c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010becfc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e656c4; end: 104e65737; -[SCShortcutsDataCommunitiesPluginImpl _triggerImpressionCountUpdate] */

void FUN_104e656c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfabdc0();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e65738; end: 104e65777; -[SCShortcutsDataCommunitiesPluginImpl _selectShortcut] */

void FUN_104e65738(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be0ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf969e0();
  func_0x00010bec0aa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e65778; end: 104e6587f; -[SCShortcutsDataCommunitiesPluginImpl _startObservingFeedManagerUpdatesIfNeeded] */

void FUN_104e65778(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = param_1;
    func_0x00010be0ecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    lVar3 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104e65880; end: 104e658c7;  */

void FUN_104e65880(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e658c8; end: 104e65913; -[SCShortcutsDataCommunitiesPluginImpl _deselectShortcut] */

void FUN_104e658c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be0ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b780();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e65914; end: 104e659ab; -[SCShortcutsDataCommunitiesPluginImpl _processUpdateEvent:] */

void FUN_104e65914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c28d320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6cee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c114a40(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104e659ac; end: 104e659b3; -[SCShortcutsDataCommunitiesPluginImpl _feedManager] */

void FUN_104e659ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 104e659b4; end: 104e65a0f; +[SCShortcutsDataCommunitiesPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e659b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e65a10; end: 104e65aab; -[SCShortcutsDataCommunitiesPluginImpl .cxx_destruct] */

void FUN_104e65a10(long param_1)

{
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



/* Entry: 104e65aac; end: 104e65d5f; -[SCShortcutsDataCommunitiesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e65aac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar12 = (long)_DAT_112714b94;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf8fac0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar5 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b14e8;
    _objc_alloc(PTR_PTR_1126b14e8);
    lVar1 = param_1 + _DAT_112714b98;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112714b9c;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112714ba0;
    _objc_loadWeakRetained(lVar3);
    lVar9 = lVar3;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar12);
    lVar10 = lVar12;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112714ba4;
    _objc_loadWeakRetained(lVar4);
    lVar11 = lVar4;
    func_0x00010c0d5860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0352e0(puVar6);
    _objc_release(lVar11);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(lVar12);
    _objc_release(lVar9);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_112714ba8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 104e65d60; end: 104e65d9f;  */

void FUN_104e65d60(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde25e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e65da0; end: 104e65f0b; -[SCShortcutsDataCommunitiesPluginEntryPoint _communityFeedDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e65da0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b14b0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112714bac;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112714bb0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112714b98;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714bb4;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c27ae60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b440(puVar1,param_2,lVar4,lVar6,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e65f0c; end: 104e65f97; -[SCShortcutsDataCommunitiesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e65f0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714b94);
  _objc_destroyWeak(param_1 + _DAT_112714bb4);
  _objc_destroyWeak(param_1 + _DAT_112714bac);
  _objc_destroyWeak(param_1 + _DAT_112714b98);
  _objc_destroyWeak(param_1 + _DAT_112714ba0);
  _objc_destroyWeak(param_1 + _DAT_112714b9c);
  _objc_destroyWeak(param_1 + _DAT_112714ba4);
  _objc_destroyWeak(param_1 + _DAT_112714bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714ba8);
  return;
}



/* Entry: 104e65f98; end: 104e66033;  */

long FUN_104e65f98(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((param_2 == 0) || (lVar1 == 0)) {
    lVar2 = 1;
    if (param_2 != 0) {
      lVar2 = -1;
    }
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf433a0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 104e66034; end: 104e662bb; -[SCShortcutsDataGroupsPluginImpl initWithGroupsDataTracker:performerProvider:friendsFeedDataCoordinator:] */

undefined8 *
FUN_104e66034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1126e48f8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104e662bc;
    puStack_a8 = &UNK_1108544e0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_4);
    uStack_a0 = param_4;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104e66304;
    puStack_d0 = &UNK_110854530;
    _objc_copyWeak(auStack_c8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_f0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e662bc; end: 104e6638b;  */

void FUN_104e662bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e6638c; end: 104e663a7;  */

void FUN_104e6638c(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e663a8; end: 104e663eb; -[SCShortcutsDataGroupsPluginImpl dealloc] */

void FUN_104e663a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e48f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e663ec; end: 104e663ff; -[SCShortcutsDataGroupsPluginImpl shortcutForSource:] */

void FUN_104e663ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_1108549b0);
  return;
}



/* Entry: 104e66400; end: 104e66507;  */

void FUN_104e66400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x00010b0af1ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260da0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  FUN_104e67170();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbbaf8,0,puVar3,
                      puVar1,0,3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e66508; end: 104e66563; -[SCShortcutsDataGroupsPluginImpl recipientsForSource:] */

void FUN_104e66508(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + *(long *)(&UNK_10dd8d3c8 + param_3 * 8));
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 104e66564; end: 104e6656f; -[SCShortcutsDataGroupsPluginImpl shouldShowForSource:] */

bool FUN_104e66564(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 2;
}



/* Entry: 104e66570; end: 104e6659f; -[SCShortcutsDataGroupsPluginImpl shortcutId] */

void FUN_104e66570(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dbbaf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dbbaf8);
  return;
}



/* Entry: 104e665a0; end: 104e665a3; -[SCShortcutsDataGroupsPluginImpl pauseUpdates] */

void FUN_104e665a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}


