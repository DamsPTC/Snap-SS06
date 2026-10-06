/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e6a1c4; end: 104e6a21f; -[SCShortcutsDataStoriesPluginImpl _getShouldRemoveStoriesShortcut] */

void FUN_104e6a1c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2583e0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e6a220; end: 104e6a27b; -[SCShortcutsDataStoriesPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e6a220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e6a27c; end: 104e6a373; -[SCShortcutsDataStoriesPluginImpl _storiesShortcutRecipientsObservable] */

void FUN_104e6a27c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bec4560();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
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



/* Entry: 104e6a374; end: 104e6a3e3;  */

void FUN_104e6a374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
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



/* Entry: 104e6a3e4; end: 104e6a56b; -[SCShortcutsDataStoriesPluginImpl _eligibleStorySummaryInfosObservable] */

void FUN_104e6a3e4(long param_1,undefined8 param_2)

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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c25b4e0(uVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1006e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar6;
  func_0x00010bf41860(uVar6,param_2,uVar5,&PTR___NSConcreteGlobalBlock_110854e80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e6a56c; end: 104e6a57f;  */

void FUN_104e6a56c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 104e6a580; end: 104e6a673; -[SCShortcutsDataStoriesPluginImpl _storiesRecipientsObservable] */

void FUN_104e6a580(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be074e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf41860(uVar5,param_2,param_1,&PTR___NSConcreteGlobalBlock_110854ec0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e6a674; end: 104e6a6ff;  */

void FUN_104e6a674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000104e69484(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_104e696c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_110854dc0);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e6a700; end: 104e6a72b; -[SCShortcutsDataStoriesPluginImpl _disposeObserver] */

void FUN_104e6a700(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6a72c; end: 104e6a7af; -[SCShortcutsDataStoriesPluginImpl .cxx_destruct] */

void FUN_104e6a72c(long param_1)

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



/* Entry: 104e6a7b0; end: 104e6a95f; -[SCShortcutsDataStoriesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6a7b0(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1 + _DAT_112714c74;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1518;
  _objc_alloc(PTR_PTR_1126b1518);
  lVar4 = param_1 + _DAT_112714c78;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714c7c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c25ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112714c80;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112714c84;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714c88;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d0a0(puVar3,param_2,lVar5,lVar7,lVar9,lVar11,lVar12);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
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



/* Entry: 104e6a960; end: 104e6a9c7; -[SCShortcutsDataStoriesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6a960(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714c88);
  _objc_destroyWeak(param_1 + _DAT_112714c84);
  _objc_destroyWeak(param_1 + _DAT_112714c7c);
  _objc_destroyWeak(param_1 + _DAT_112714c80);
  _objc_destroyWeak(param_1 + _DAT_112714c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714c74);
  return;
}



/* Entry: 104e6a9c8; end: 104e6a9df;  */

void FUN_104e6a9c8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7d78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7d78,
                      &PTR____CFConstantStringClassReference_110db7d98,0);
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



/* Entry: 104e6a9e0; end: 104e6ac3f; -[SCShortcutsDataStreaksPluginImpl initWithFriendsFeedDataCoordinator:streakProvider:performerProvider:messagingExperimentService:circumstanceEngine:] */

undefined8 *
FUN_104e6a9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126e4918;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104e6ac40;
    puStack_a0 = &UNK_1108544e0;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_5);
    uStack_98 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e6ac40; end: 104e6acc7;  */

void FUN_104e6ac40(long param_1)

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



/* Entry: 104e6acc8; end: 104e6ace3;  */

void FUN_104e6acc8(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6ace4; end: 104e6ad27; -[SCShortcutsDataStreaksPluginImpl dealloc] */

void FUN_104e6ace4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e4918;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e6ad28; end: 104e6ad6f; -[SCShortcutsDataStreaksPluginImpl recipientsForSource:] */

void FUN_104e6ad28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e6ad70; end: 104e6ad83; -[SCShortcutsDataStreaksPluginImpl shortcutForSource:] */

void FUN_104e6ad70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_110854f00);
  return;
}



/* Entry: 104e6ad84; end: 104e6ae8b;  */

void FUN_104e6ad84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x000104e6b788();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260da0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  func_0x000104e6b770();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e20e58,0,puVar3,
                      puVar1,0,0xe);
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



/* Entry: 104e6ae8c; end: 104e6ae97; -[SCShortcutsDataStreaksPluginImpl shouldShowForSource:] */

bool FUN_104e6ae8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e6ae98; end: 104e6aec7; -[SCShortcutsDataStreaksPluginImpl shortcutId] */

void FUN_104e6ae98(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e20e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e20e58);
  return;
}



/* Entry: 104e6aec8; end: 104e6aecb; -[SCShortcutsDataStreaksPluginImpl pauseUpdates] */

void FUN_104e6aec8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 104e6aecc; end: 104e6afa7; -[SCShortcutsDataStreaksPluginImpl resumeUpdates] */

void FUN_104e6aecc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bec5280();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 104e6afa8; end: 104e6b017;  */

void FUN_104e6afa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 104e6b018; end: 104e6b01f; -[SCShortcutsDataStreaksPluginImpl alwaysShow] */

undefined8 FUN_104e6b018(void)

{
  return 0;
}



/* Entry: 104e6b020; end: 104e6b07b; -[SCShortcutsDataStreaksPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e6b020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e6b07c; end: 104e6b173; -[SCShortcutsDataStreaksPluginImpl _streakShortcutRecipientsObservable] */

void FUN_104e6b07c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bec5280();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 104e6b174; end: 104e6b1e3;  */

void FUN_104e6b174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 104e6b1e4; end: 104e6b2b3; -[SCShortcutsDataStreaksPluginImpl _streaksRecipientsObservable] */

void FUN_104e6b1e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25c400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
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



/* Entry: 104e6b2b4; end: 104e6b487;  */

void FUN_104e6b2b4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_2);
      puVar7 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
        return;
      }
      ___stack_chk_fail();
      func_0x00010bf86d40(*(undefined8 *)(param_2 + 0x38));
      uVar8 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar8);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar4 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c25c060();
      if (lVar5 == 0) {
        lVar5 = lVar4;
        func_0x00010bf9ca60();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c07c7e0();
        _objc_release(lVar5);
        if ((int)lVar6 != 0) goto LAB_104e6b3a8;
      }
      else {
LAB_104e6b3a8:
        lVar5 = lVar4;
        func_0x00010c0748c0();
        puVar7 = PTR_PTR_1126b14a0;
        if ((int)lVar5 == 0) {
          func_0x00010c2448a0(PTR_PTR_1126b14a0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfcf600();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar2);
        _objc_release(puVar7);
      }
      _objc_release(lVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104e6b488; end: 104e6b4b3; -[SCShortcutsDataStreaksPluginImpl _disposeObserver] */

void FUN_104e6b488(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6b4b4; end: 104e6b51f; -[SCShortcutsDataStreaksPluginImpl .cxx_destruct] */

void FUN_104e6b4b4(long param_1)

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



/* Entry: 104e6b520; end: 104e6b6d3; -[SCShortcutsDataStreaksPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6b520(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b1520;
  _objc_alloc(PTR_PTR_1126b1520);
  lVar2 = param_1 + _DAT_112714ca8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112714cac;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714cb0;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112714cb4;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112714cb8;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016320(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112714cbc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e6b6d4; end: 104e6b6f3; -[SCShortcutsDataStreaksPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6b6d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714cb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6b6f4; end: 104e6b707; -[SCShortcutsDataStreaksPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6b6f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714cb8,param_3);
  return;
}



/* Entry: 104e6b708; end: 104e6b76f; -[SCShortcutsDataStreaksPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6b708(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714cb4);
  _objc_destroyWeak(param_1 + _DAT_112714cac);
  _objc_destroyWeak(param_1 + _DAT_112714cb8);
  _objc_destroyWeak(param_1 + _DAT_112714cb0);
  _objc_destroyWeak(param_1 + _DAT_112714ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714cbc);
  return;
}



/* Entry: 104e6b770; end: 104e6b79f;  */

void FUN_104e6b770(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7dd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7dd8,
                      &PTR____CFConstantStringClassReference_110db7df8,0);
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



/* Entry: 104e6b7a0; end: 104e6ba0b; -[SCShortcutsDataUnreadConversationsPluginImpl initWithFriendsFeedDataCoordinator:messagingExperimentService:performerProvider:] */

undefined8 *
FUN_104e6b7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e4920;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104e6ba0c;
    puStack_90 = &UNK_1108544e0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e6ba0c; end: 104e6ba93;  */

void FUN_104e6ba0c(long param_1)

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



/* Entry: 104e6ba94; end: 104e6baff;  */

void FUN_104e6ba94(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6bb00; end: 104e6bb43; -[SCShortcutsDataUnreadConversationsPluginImpl dealloc] */

void FUN_104e6bb00(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126e4920;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e6bb44; end: 104e6bb57; -[SCShortcutsDataUnreadConversationsPluginImpl shortcutForSource:] */

void FUN_104e6bb44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_110854fc0);
  return;
}



/* Entry: 104e6bb58; end: 104e6bc5f;  */

void FUN_104e6bb58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x000104e6ce24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260da0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  func_0x000104e6ce0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e20db8,0,puVar3,
                      puVar1,0,4);
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



/* Entry: 104e6bc60; end: 104e6bcd7; -[SCShortcutsDataUnreadConversationsPluginImpl recipientsForSource:] */

void FUN_104e6bc60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 == 1) && (lVar1 = param_1, func_0x00010be73f60(), (int)lVar1 != 0)) {
    func_0x00010bee9ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e6bcd8; end: 104e6bed3; -[SCShortcutsDataUnreadConversationsPluginImpl _viewedRecipientsObservable] */

void FUN_104e6bcd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar4);
  uVar2 = uVar1;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  uVar1 = uVar5;
  func_0x00010c2656e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e6bed4; end: 104e6c057;  */

void FUN_104e6bed4(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010bf1f3c0();
    if ((uVar2 & 1) == 0) {
      puVar4 = puVar1;
      func_0x00010bed1ca0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = *(undefined **)(param_1 + 0x20);
      puVar3 = puVar1;
      func_0x00010be9d4a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41860(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e6c058; end: 104e6c0ab;  */

void FUN_104e6c058(long param_1,int param_2)

{
  undefined *puVar1;
  
  func_0x00010bf1f3c0();
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e6c0ac; end: 104e6c18b; -[SCShortcutsDataUnreadConversationsPluginImpl _seenUnreadFeedIdsObservable] */

void FUN_104e6c0ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c14f680(uVar4,param_2,puVar5,&PTR___NSConcreteGlobalBlock_110855080);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104e6c18c; end: 104e6c1fb;  */

void FUN_104e6c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108550a0);
  uVar1 = param_2;
  func_0x00010c174be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6c1fc; end: 104e6c203;  */

void FUN_104e6c1fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 104e6c204; end: 104e6c20f; -[SCShortcutsDataUnreadConversationsPluginImpl shouldShowForSource:] */

bool FUN_104e6c204(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e6c210; end: 104e6c23f; -[SCShortcutsDataUnreadConversationsPluginImpl shortcutId] */

void FUN_104e6c210(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e20db8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e20db8);
  return;
}



/* Entry: 104e6c240; end: 104e6c283; -[SCShortcutsDataUnreadConversationsPluginImpl pauseUpdates] */

void FUN_104e6c240(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be05220();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6c284; end: 104e6c397; -[SCShortcutsDataUnreadConversationsPluginImpl resumeUpdates] */

void FUN_104e6c284(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010be73f60();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bed1ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 104e6c398; end: 104e6c407;  */

void FUN_104e6c398(long param_1,undefined8 param_2)

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



/* Entry: 104e6c408; end: 104e6c443; -[SCShortcutsDataUnreadConversationsPluginImpl shortcutDidSelect] */

void FUN_104e6c408(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6c444; end: 104e6c47f; -[SCShortcutsDataUnreadConversationsPluginImpl shortcutDidDeselect] */

void FUN_104e6c444(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6c480; end: 104e6c487; -[SCShortcutsDataUnreadConversationsPluginImpl alwaysShow] */

undefined8 FUN_104e6c480(void)

{
  return 0;
}



/* Entry: 104e6c488; end: 104e6c5bb; -[SCShortcutsDataUnreadConversationsPluginImpl badgeObservable] */

void FUN_104e6c488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x00010be73f60();
  puVar6 = PTR_PTR_1126ae750;
  puVar7 = PTR_PTR_1126ae6b8;
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126b14f0;
    func_0x00010c122b20(PTR_PTR_1126b14f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf49880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c0e0ea0(puVar6,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e6c5bc; end: 104e6c627;  */

void FUN_104e6c5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b14f0;
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010bf529e0(param_2);
  func_0x00010bf52fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e6c628; end: 104e6c633; -[SCShortcutsDataUnreadConversationsPluginImpl shouldBadgeForSource:] */

bool FUN_104e6c628(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 104e6c634; end: 104e6c67b; -[SCShortcutsDataUnreadConversationsPluginImpl _pinViewedConversationsEnabled] */

bool FUN_104e6c634(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fc1a0();
  _objc_release(uVar1);
  return (uVar2 & 0xfffffffffffffffd) == 1;
}



/* Entry: 104e6c67c; end: 104e6c6d7; -[SCShortcutsDataUnreadConversationsPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_104e6c67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e6c6d8; end: 104e6c7cf; -[SCShortcutsDataUnreadConversationsPluginImpl _unreadConversationsShortcutRecipientsObservable] */

void FUN_104e6c6d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bed1ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar2;
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



/* Entry: 104e6c7d0; end: 104e6c83f;  */

void FUN_104e6c7d0(long param_1,undefined8 param_2)

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



/* Entry: 104e6c840; end: 104e6c913; -[SCShortcutsDataUnreadConversationsPluginImpl _unreadRecipientsObservable] */

void FUN_104e6c840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar5;
  func_0x00010c0b8600(uVar5,param_2,&PTR___NSConcreteGlobalBlock_1108550e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e6c914; end: 104e6c933;  */

void FUN_104e6c914(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110855100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6c934; end: 104e6c93b;  */

void FUN_104e6c934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  uStack_58 = 0x104e6cb88;
  uStack_50 = 0x104e6cb98;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6c93c; end: 104e6ca8f;  */

void FUN_104e6c93c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  uStack_58 = 0x104e6cb88;
  uStack_50 = 0x104e6cb98;
  uStack_48 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6ca90; end: 104e6cabb; -[SCShortcutsDataUnreadConversationsPluginImpl _disposeObserver] */

void FUN_104e6ca90(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6cabc; end: 104e6cb7f; -[SCShortcutsDataUnreadConversationsPluginImpl .cxx_destruct] */

void FUN_104e6cabc(long param_1)

{
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



/* Entry: 104e6cb80; end: 104e6cb9f;  */

void FUN_104e6cb80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  uStack_58 = 0x104e6cb88;
  uStack_50 = 0x104e6cb98;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6cba0; end: 104e6cc7f;  */

void FUN_104e6cba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b14a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e6cc80; end: 104e6cdbb; -[SCShortcutsDataUnreadConversationsPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6cc80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + _DAT_112714ce0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1528;
  _objc_alloc(PTR_PTR_1126b1528);
  lVar4 = param_1 + _DAT_112714ce4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714ce8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714cec;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016300(puVar3,param_2,lVar5,lVar7,lVar8);
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



/* Entry: 104e6cdbc; end: 104e6ce0b; -[SCShortcutsDataUnreadConversationsPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6cdbc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714cec);
  _objc_destroyWeak(param_1 + _DAT_112714ce8);
  _objc_destroyWeak(param_1 + _DAT_112714ce4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714ce0);
  return;
}



/* Entry: 104e6ce0c; end: 104e6ce3b;  */

void FUN_104e6ce0c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7e58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7e58,
                      &PTR____CFConstantStringClassReference_110db7e78,0);
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



/* Entry: 104e6ce3c; end: 104e6d2ff; -[SCAddFriendsComposerStoresDefaultProvider initWithCircumstanceEngine:placement:friendStoreFactory:friendActionStoreFactory:incomingFriendStoreFactory:suggestedFriendStoringFactory:suggestionPageType:pageChangeObservable:blockedUserStore:cofStore:contactUserStoreFactory:contactAddressBookEntryStoreFactory:uiContainer:isUserEligibleForTwilio:recentFriendStore:nearbyFriendsStore:recentlyActiveFriendStore:friendscoreProvider:friendmojiProviderFactory:userSearchingDependencies:] */

undefined8 *
FUN_104e6ce3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126e4928;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    *(undefined4 *)(puVar1 + 7) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_13;
    _objc_release(uVar2);
    uVar2 = param_14;
    _objc_retainBlock();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_15;
    _objc_retainBlock();
    uVar4 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xd) = param_17;
    _objc_retain(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    uVar2 = param_23;
    _objc_retainBlock();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_24;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be193e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be19220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be380c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bec8d60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bde72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bde7160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be19700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e6d300; end: 104e6d327; -[SCAddFriendsComposerStoresDefaultProvider friendStore] */

void FUN_104e6d300(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d328; end: 104e6d34f; -[SCAddFriendsComposerStoresDefaultProvider friendActionStore] */

void FUN_104e6d328(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d350; end: 104e6d377; -[SCAddFriendsComposerStoresDefaultProvider incomingFriendStore] */

void FUN_104e6d350(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d378; end: 104e6d39f; -[SCAddFriendsComposerStoresDefaultProvider suggestedFriendStore] */

void FUN_104e6d378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d3a0; end: 104e6d3c7; -[SCAddFriendsComposerStoresDefaultProvider recentlyActiveFriendStore] */

void FUN_104e6d3a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d3c8; end: 104e6d3ef; -[SCAddFriendsComposerStoresDefaultProvider contactUserStore] */

void FUN_104e6d3c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d3f0; end: 104e6d417; -[SCAddFriendsComposerStoresDefaultProvider contactAddressBookEntryStore] */

void FUN_104e6d3f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d418; end: 104e6d43f; -[SCAddFriendsComposerStoresDefaultProvider blockedUserStore] */

void FUN_104e6d418(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d440; end: 104e6d467; -[SCAddFriendsComposerStoresDefaultProvider recentFriendStore] */

void FUN_104e6d440(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d468; end: 104e6d48f; -[SCAddFriendsComposerStoresDefaultProvider nearbyFriendsStore] */

void FUN_104e6d468(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d490; end: 104e6d4b7; -[SCAddFriendsComposerStoresDefaultProvider friendscoreProvider] */

void FUN_104e6d490(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d4b8; end: 104e6d4df; -[SCAddFriendsComposerStoresDefaultProvider friendmojiProvider] */

void FUN_104e6d4b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d4e0; end: 104e6d507; -[SCAddFriendsComposerStoresDefaultProvider cofStore] */

void FUN_104e6d4e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d508; end: 104e6d52f; -[SCAddFriendsComposerStoresDefaultProvider userSearchingDependencies] */

void FUN_104e6d508(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e6d530; end: 104e6d58b; -[SCAddFriendsComposerStoresDefaultProvider _friendStore] */

void FUN_104e6d530(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  lVar2 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d58c; end: 104e6d5e7; -[SCAddFriendsComposerStoresDefaultProvider _friendActionStore] */

void FUN_104e6d58c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  lVar2 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d5e8; end: 104e6d647; -[SCAddFriendsComposerStoresDefaultProvider _incomingFriendStore] */

void FUN_104e6d5e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1530;
  _objc_alloc(PTR_PTR_1126b1530);
  func_0x00010c0460e0();
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d648; end: 104e6d6af; -[SCAddFriendsComposerStoresDefaultProvider _suggestedFriendStore] */

void FUN_104e6d648(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1538;
  _objc_alloc(PTR_PTR_1126b1538);
  func_0x00010c033420();
  lVar2 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d6b0; end: 104e6d70b; -[SCAddFriendsComposerStoresDefaultProvider _contactUserStore] */

void FUN_104e6d6b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1540;
  _objc_alloc(PTR_PTR_1126b1540);
  func_0x00010bffae80();
  lVar2 = *(long *)(param_1 + 0x48);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d70c; end: 104e6d79f; -[SCAddFriendsComposerStoresDefaultProvider _contactAddressBookEntryStore] */

void FUN_104e6d70c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x000108c073d8(*(undefined8 *)(param_1 + 8),0);
  }
  puVar1 = PTR_PTR_1126b13d8;
  _objc_alloc(PTR_PTR_1126b13d8);
  func_0x00010bffaea0();
  lVar2 = *(long *)(param_1 + 0x50);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d7a0; end: 104e6d7ff; -[SCAddFriendsComposerStoresDefaultProvider _friendmojiProvider] */

void FUN_104e6d7a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  lVar2 = *(long *)(param_1 + 0x58);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e6d800; end: 104e6d937; -[SCAddFriendsComposerStoresDefaultProvider .cxx_destruct] */

void FUN_104e6d800(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


