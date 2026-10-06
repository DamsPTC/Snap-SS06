/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c79358; end: 105c795b7; -[SCShortcutsDataUnrepliedConversationsPluginImpl initWithFriendsFeedDataCoordinator:friendmojiDataProvider:messagingExperimentService:timeProvider:performerProvider:] */

undefined8 *
FUN_105c79358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_78 = PTR_PTR_1126eca50;
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
    pcStack_a8 = FUN_105c795b8;
    puStack_a0 = &UNK_1108544e0;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_7);
    uStack_98 = param_7;
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



/* Entry: 105c795b8; end: 105c7963f;  */

void FUN_105c795b8(long param_1)

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



/* Entry: 105c79640; end: 105c7965b;  */

void FUN_105c79640(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c7965c; end: 105c7969f; -[SCShortcutsDataUnrepliedConversationsPluginImpl dealloc] */

void FUN_105c7965c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126eca50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c796a0; end: 105c796ef; -[SCShortcutsDataUnrepliedConversationsPluginImpl recipientsForSource:] */

void FUN_105c796a0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 105c796f0; end: 105c79703; -[SCShortcutsDataUnrepliedConversationsPluginImpl shortcutForSource:] */

void FUN_105c796f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_1108e25f8);
  return;
}



/* Entry: 105c79704; end: 105c7980b;  */

void FUN_105c79704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x000105c79dbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260da0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  func_0x000105c79da4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e20dd8,0,puVar3,
                      puVar1,0,5);
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



/* Entry: 105c7980c; end: 105c79817; -[SCShortcutsDataUnrepliedConversationsPluginImpl shouldShowForSource:] */

bool FUN_105c7980c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 105c79818; end: 105c79847; -[SCShortcutsDataUnrepliedConversationsPluginImpl shortcutId] */

void FUN_105c79818(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e20dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e20dd8);
  return;
}



/* Entry: 105c79848; end: 105c7984b; -[SCShortcutsDataUnrepliedConversationsPluginImpl pauseUpdates] */

void FUN_105c79848(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 105c7984c; end: 105c79927; -[SCShortcutsDataUnrepliedConversationsPluginImpl resumeUpdates] */

void FUN_105c7984c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bed1dc0();
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



/* Entry: 105c79928; end: 105c79997;  */

void FUN_105c79928(long param_1,undefined8 param_2)

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



/* Entry: 105c79998; end: 105c7999f; -[SCShortcutsDataUnrepliedConversationsPluginImpl alwaysShow] */

undefined8 FUN_105c79998(void)

{
  return 0;
}



/* Entry: 105c799a0; end: 105c799fb; -[SCShortcutsDataUnrepliedConversationsPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_105c799a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c799fc; end: 105c79af3; -[SCShortcutsDataUnrepliedConversationsPluginImpl _unrepliedShortcutRecipientsObservable] */

void FUN_105c799fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bed1dc0();
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



/* Entry: 105c79af4; end: 105c79b63;  */

void FUN_105c79af4(long param_1,undefined8 param_2)

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



/* Entry: 105c79b64; end: 105c79cbb; -[SCShortcutsDataUnrepliedConversationsPluginImpl _unrepliedRecipientsObservable] */

void FUN_105c79b64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba080();
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
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c79cbc;
  puStack_68 = &UNK_1108bdb80;
  uStack_60 = uVar6;
  uStack_58 = uVar7;
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  uVar2 = uVar5;
  func_0x00010c0b8600(uVar5,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c79cbc; end: 105c79d0b;  */

void FUN_105c79cbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000105c78fd0(param_2,0x5a0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c79d0c; end: 105c79d37; -[SCShortcutsDataUnrepliedConversationsPluginImpl _disposeObserver] */

void FUN_105c79d0c(long param_1)

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



/* Entry: 105c79d38; end: 105c79da3; -[SCShortcutsDataUnrepliedConversationsPluginImpl .cxx_destruct] */

void FUN_105c79d38(long param_1)

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



/* Entry: 105c79da4; end: 105c79dd3;  */

void FUN_105c79da4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e260b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e260b8,
                      &PTR____CFConstantStringClassReference_110e260d8,0);
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



/* Entry: 105c79dd4; end: 105c79e9f; -[SCAddFriendPageLaunchHandler initWithNavigationServices:addFriendSheetScopeExposer:addFriendSheetScopeServices:] */

undefined1 *
FUN_105c79dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eca58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0x14;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c79ea0; end: 105c7a11b; -[SCAddFriendPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_105c79ea0(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0) {
    uVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    _objc_opt_respondsToSelector();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar7 & 1) != 0) {
      puVar10 = (undefined *)(param_1 + 8);
      _objc_loadWeakRetained();
      puVar8 = puVar10;
      func_0x00010c0d6760();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar9;
      func_0x00010c0cf9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar10);
      if (param_4 != (undefined *)0x0) goto LAB_105c79ee4;
    }
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_5 + 0x10))(param_5,param_4);
  }
  else {
LAB_105c79ee4:
    lVar1 = param_3;
    func_0x00010bef8700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15dac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      (**(code **)(param_5 + 0x10))(param_5,puVar10);
    }
    else {
      puVar10 = *(undefined **)(param_1 + 0x18);
      lVar1 = param_3;
      func_0x00010bef8700(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c15dac0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bef8700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081880();
      func_0x00010bf23ba0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    _objc_release(puVar10);
  }
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7a11c; end: 105c7a163; -[SCAddFriendPageLaunchHandler endAddFriendSheetScope] */

void FUN_105c7a11c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c7a164; end: 105c7a16b; -[SCAddFriendPageLaunchHandler screen] */

undefined4 FUN_105c7a164(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 105c7a16c; end: 105c7a1a3; -[SCAddFriendPageLaunchHandler .cxx_destruct] */

void FUN_105c7a16c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105c7a1a4; end: 105c7a2bf; -[SCSharingPageLauncherPlugin initWithNavigationServices:addFriendSheetScopeExposer:addFriendSheetScopeServices:] */

undefined1 *
FUN_105c7a1a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126eca60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c3848;
    _objc_alloc();
    func_0x00010c02ea60();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 105c7a2c0; end: 105c7a2c7; -[SCSharingPageLauncherPlugin handlers] */

undefined8 FUN_105c7a2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c7a2c8; end: 105c7a2f7; -[SCSharingPageLauncherPlugin setHandlers:] */

void FUN_105c7a2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c7a2f8; end: 105c7a303; -[SCSharingPageLauncherPlugin .cxx_destruct] */

void FUN_105c7a2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c7a304; end: 105c7a407; -[SCRemixCameraUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c7a304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127330dc);
  }
  lVar6 = (long)_DAT_1127330d4;
  _objc_retain(uVar5);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar1 = param_1;
  FUN_105c7a408(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6ca0();
  FUN_105c7a408();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c22ef80();
  lVar4 = lVar6;
  func_0x00010bf238e0(lVar6,param_2,8,0,0,8,2,lVar2,0,1,(char)lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar5,param_2,lVar4);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105c7a408; end: 105c7a42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c7a408(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127330d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c7a42c; end: 105c7a473; -[SCRemixCameraUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c7a42c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127330dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127330d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127330d8);
  return;
}



/* Entry: 105c7a474; end: 105c7a4ab; -[SCUserPropertiesCofConfig supSyncEnabled] */

ulong FUN_105c7a474(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e26118,bRam0000000113125e88,0);
    return uVar1;
  }
  return (ulong)bRam0000000113125e88;
}



/* Entry: 105c7a4ac; end: 105c7a4b3; -[SCUserPropertiesGrapheneMetricsReporter initWithGraphene:] */

void FUN_105c7a4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGraphene_config__1125e3a28,param_3,0)
  ;
  return;
}



/* Entry: 105c7a4b4; end: 105c7a597; -[SCUserPropertiesGrapheneMetricsReporter reportPutVersionMismatchFailureForItemKind:] */

void FUN_105c7a4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3850;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c11ca60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be60340(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c3850;
  func_0x00010c11ca80(PTR_PTR_1126c3850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60340(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar3,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a598; end: 105c7a5eb; -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobIterationCount:] */

void FUN_105c7a598(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3850;
  func_0x00010c11c7a0(PTR_PTR_1126c3850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,(long)param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a5ec; end: 105c7a63f; -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobPendingQueueSize:] */

void FUN_105c7a5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3850;
  func_0x00010c0f7ae0(PTR_PTR_1126c3850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a640; end: 105c7a693; -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobRetryAttemptCount:] */

void FUN_105c7a640(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3850;
  func_0x00010c11c7c0(PTR_PTR_1126c3850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,(long)param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a694; end: 105c7a71f; -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobPutTerminalFailureForItemKind:] */

void FUN_105c7a694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3850;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c11c9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60340(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a720; end: 105c7a7ab; -[SCUserPropertiesGrapheneMetricsReporter reportStatusAlreadyInPendingStateForItemKind:] */

void FUN_105c7a720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3850;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c11c580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60340(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a7ac; end: 105c7a8ab; -[SCUserPropertiesGrapheneMetricsReporter reportWrongTypeWriteWithDataType:itemId:] */

void FUN_105c7a7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c3850;
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c11caa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e02998,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a8ac; end: 105c7a947; -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobDequeueLatency:milliSeconds:] */

void FUN_105c7a8ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3850;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf6df40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60340(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befbfe0(uVar2,param_2,param_1,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a948; end: 105c7a99f; -[SCUserPropertiesGrapheneMetricsReporter reportWriteForItemId:] */

void FUN_105c7a948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3850;
  func_0x00010c262ae0(PTR_PTR_1126c3850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be905c0(param_1,param_2,puVar1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c7a9a0; end: 105c7aa2b; -[SCUserPropertiesGrapheneMetricsReporter _metric:itemKind:] */

void FUN_105c7a9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e26198,
                      &PTR____CFConstantStringClassReference_110dd5fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c7aa2c; end: 105c7aa37; -[SCUserPropertiesGrapheneMetricsReporter .cxx_destruct] */

void FUN_105c7aa2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c7aa38; end: 105c7ab47;  */

void FUN_105c7aa38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c087060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee60();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8720;
  _objc_alloc(PTR_PTR_1126b8720);
  func_0x00010c01ff40();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c7ab48; end: 105c7ab5b;  */

void FUN_105c7ab48(void)

{
  return;
}



/* Entry: 105c7ab5c; end: 105c7ac8b;  */

void FUN_105c7ab5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c084700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105c7aa38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c7ac8c; end: 105c7ae37;  */

void FUN_105c7ac8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105c7ae38;
  uStack_40 = 0x105c7ae48;
  uStack_38 = 0;
  func_0x00010c0c0580(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c7ae38; end: 105c7ae4f;  */

void FUN_105c7ae38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c7ae50; end: 105c7afdb;  */

void FUN_105c7ae50(long param_1,undefined8 param_2)

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



/* Entry: 105c7afdc; end: 105c7afeb;  */

void FUN_105c7afdc(void)

{
  return;
}



/* Entry: 105c7afec; end: 105c7b037;  */

void FUN_105c7afec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c7b038; end: 105c7b14b;  */

void FUN_105c7b038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_105c7b14c(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0844e0(param_1);
  _objc_release(param_1);
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126b8148;
  _objc_alloc(PTR_PTR_1126b8148);
  func_0x00010c0202a0();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c7b14c; end: 105c7b31f;  */

void FUN_105c7b14c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126b0440;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  puVar3 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c021180();
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126b0440;
  _objc_alloc();
  uVar5 = param_1;
  func_0x00010c087060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0438;
  func_0x00010c0844e0(param_1);
  _objc_release(param_1);
  func_0x00010bfe5e60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180();
  _objc_release(puVar3);
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar3);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b8130;
  _objc_alloc();
  func_0x00010c019140();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  puVar4 = puVar2;
  func_0x00010c2950a0();
  puVar3 = PTR_PTR_1126b8138;
  puVar7 = (undefined *)0x0;
  uVar1 = (uint)puVar4 & 0xff;
  puVar4 = puVar2;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      func_0x00010c294f80(puVar2);
      func_0x00010bf1f4c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
    }
    else if (uVar1 == 2) {
      func_0x00010c294fc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64c60(puVar3);
      _objc_retainAutoreleasedReturnValue();
LAB_105c7b498:
      _objc_release(puVar4);
      puVar7 = puVar3;
    }
    else if (uVar1 == 3) {
      func_0x00010c295040(puVar2);
      goto LAB_105c7b428;
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      func_0x00010c2950c0(puVar2);
LAB_105c7b428:
      func_0x00010c0b50a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
    }
    else if (uVar1 == 5) {
      func_0x00010c295020(puVar2);
      goto LAB_105c7b450;
    }
  }
  else if (uVar1 == 6) {
    func_0x00010c294fe0(puVar2);
LAB_105c7b450:
    func_0x00010bf885e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
  }
  else if (uVar1 == 7) {
    func_0x00010c295080(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105c7b498;
  }
  _objc_release(puVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c7b320; end: 105c7b4bf;  */

void FUN_105c7b320(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c2950a0();
  puVar3 = PTR_PTR_1126b8138;
  puVar4 = (undefined *)0x0;
  uVar1 = (uint)uVar2 & 0xff;
  uVar2 = param_1;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      uVar2 = param_1;
      func_0x00010c294f80(param_1);
      func_0x00010bf1f4c0(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      goto LAB_105c7b4a4;
    }
    if (uVar1 == 2) {
      func_0x00010c294fc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64c60(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105c7b498;
    }
    if (uVar1 != 3) goto LAB_105c7b4a4;
    func_0x00010c295040(param_1);
LAB_105c7b428:
    func_0x00010c0b50a0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
  }
  else {
    if (uVar1 < 6) {
      if (uVar1 == 4) {
        func_0x00010c2950c0(param_1);
        goto LAB_105c7b428;
      }
      if (uVar1 != 5) goto LAB_105c7b4a4;
      func_0x00010c295020(param_1);
    }
    else {
      if (uVar1 != 6) {
        if (uVar1 != 7) goto LAB_105c7b4a4;
        func_0x00010c295080(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25dac0(puVar3,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
LAB_105c7b498:
        _objc_release(uVar2);
        puVar4 = puVar3;
        goto LAB_105c7b4a4;
      }
      func_0x00010c294fe0(param_1);
    }
    func_0x00010bf885e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
  }
LAB_105c7b4a4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c7b4c0; end: 105c7b62b; -[SCUserPropertiesDocRepository serialize:withNewStatus:] */

void FUN_105c7b4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c3858;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c0844e0();
  uVar3 = param_4;
  func_0x00010c087060(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c1422a0(param_4);
  uVar5 = param_4;
  func_0x00010c2950a0(param_4);
  uVar6 = param_4;
  func_0x00010c294f80(param_4);
  uVar7 = param_4;
  func_0x00010c295040();
  uVar8 = param_4;
  func_0x00010c2950c0();
  func_0x00010c295020(param_4);
  uVar12 = param_1;
  func_0x00010c294fe0(param_4);
  uVar9 = param_4;
  func_0x00010c295080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c294fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf964a0();
  _objc_release(param_4);
  func_0x00010c01ff60(param_1,uVar12,puVar1,param_3,uVar2,uVar3,param_5,uVar4,uVar5,uVar6,uVar7,
                      uVar8,uVar9,uVar10,uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c7b62c; end: 105c7bac3; -[SCUserPropertiesDocRepository serializeObject:value:writeStatus:rowVersion:enqueueTimeMs:] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000105c7b874 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_105c7b62c(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  pbVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar5);
  if (((ulong)pbVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    pbVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar5);
    puVar5 = PTR_PTR_1126c3858;
    pbVar4 = param_3;
    if (((ulong)pbVar3 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      pbVar3 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar5);
      puVar5 = PTR_PTR_1126c3858;
      if (((ulong)pbVar3 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        goto LAB_105c7ba24;
      }
      _objc_retain(param_4);
      _objc_alloc(puVar5);
      func_0x00010c0844e0(param_3);
      func_0x00010c087060(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_4);
      _objc_alloc(puVar5);
      func_0x00010c0844e0(param_3);
      func_0x00010c087060(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c01ff60(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),0,puVar5);
    pbVar3 = param_4;
LAB_105c7ba14:
    _objc_release(pbVar3);
  }
  else {
    _objc_retain(param_4);
    pbVar3 = param_4;
    _objc_retainAutorelease();
    func_0x00010c0dfba0();
    puVar5 = (undefined *)0x0;
    bVar1 = *pbVar3;
    pbVar4 = param_4;
    pbVar3 = param_3;
    if (0x52 < bVar1) {
      uVar2 = bVar1 - 100;
      if (uVar2 < 0x10) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0xa120U) == 0) {
          if (uVar2 == 0) {
            puVar5 = PTR_PTR_1126c3858;
            _objc_alloc(PTR_PTR_1126c3858);
            func_0x00010c0844e0(param_3);
            func_0x00010c087060(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0(param_4);
            uVar6 = CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
          }
          else {
            if (uVar2 != 2) goto LAB_105c7b918;
            puVar5 = PTR_PTR_1126c3858;
            _objc_alloc(PTR_PTR_1126c3858);
            func_0x00010c0844e0(param_3);
            func_0x00010c087060(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80(param_4);
            uVar6 = 0;
          }
        }
        else {
          puVar5 = PTR_PTR_1126c3858;
          _objc_alloc(PTR_PTR_1126c3858);
          func_0x00010c0844e0(param_3);
          func_0x00010c087060(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4fe0();
          uVar6 = 0;
        }
      }
      else {
LAB_105c7b918:
        if (bVar1 == 0x53) goto LAB_105c7b99c;
        if (bVar1 != 99) goto LAB_105c7ba1c;
        puVar5 = PTR_PTR_1126c3858;
        _objc_alloc(PTR_PTR_1126c3858);
        func_0x00010c0844e0(param_3);
        func_0x00010c087060(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0(param_4);
        uVar6 = 0;
      }
LAB_105c7ba08:
      func_0x00010c01ff60(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),uVar6,puVar5);
      goto LAB_105c7ba14;
    }
    if (bVar1 < 0x4c) {
      if ((bVar1 == 0x43) || (bVar1 == 0x49)) {
LAB_105c7b99c:
        puVar5 = PTR_PTR_1126c3858;
        _objc_alloc(PTR_PTR_1126c3858);
        func_0x00010c0844e0(param_3);
        func_0x00010c087060(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        uVar6 = 0;
        goto LAB_105c7ba08;
      }
    }
    else if ((bVar1 == 0x4c) || (bVar1 == 0x51)) goto LAB_105c7b99c;
  }
LAB_105c7ba1c:
  _objc_release(pbVar4);
LAB_105c7ba24:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c7bac4; end: 105c7bc0b; -[SCUserPropertiesDefaultService putItemWithKey:boolValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bac4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340c0(uVar4);
    }
    lVar1 = lVar2;
    func_0x00010c294f80();
    if (param_4 == (int)lVar1) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7bbd8;
    }
  }
  puVar3 = PTR_PTR_1126b8138;
  func_0x00010bf1f4c0(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_1);
  _objc_release(puVar3);
LAB_105c7bbd8:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7bc0c; end: 105c7bd87; -[SCUserPropertiesDefaultService putItemWithKey:dataValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bc0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 2) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340c0(uVar5);
    }
    lVar1 = lVar2;
    func_0x00010c294fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c071cc0();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7bd48;
    }
  }
  puVar4 = PTR_PTR_1126b8138;
  func_0x00010bf64c60(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_1);
  _objc_release(puVar4);
LAB_105c7bd48:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7bd88; end: 105c7bd8f; -[SCUserPropertiesDefaultService putItemWithKey:doubleValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_doubleValue_writ_11257edb8,param_3,param_4 ^ 1);
  return;
}



/* Entry: 105c7bd90; end: 105c7bd97; -[SCUserPropertiesDefaultService putItemWithKey:floatValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_floatValue_write_11257edc0,param_3,param_4 ^ 1);
  return;
}



/* Entry: 105c7bd98; end: 105c7bd9f; -[SCUserPropertiesDefaultService putItemWithKey:intValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be850b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_intValue_writeTy_11257edc8,param_3,param_4,param_5 ^ 1);
  return;
}



/* Entry: 105c7bda0; end: 105c7bda7; -[SCUserPropertiesDefaultService putItemWithKey:longValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be850d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_longValue_writeT_11257edd0,param_3,param_4,param_5 ^ 1);
  return;
}



/* Entry: 105c7bda8; end: 105c7bf23; -[SCUserPropertiesDefaultService putItemWithKey:stringValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bda8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 7) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340c0(uVar5);
    }
    lVar1 = lVar2;
    func_0x00010c295080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7bee4;
    }
  }
  puVar4 = PTR_PTR_1126b8138;
  func_0x00010c25dac0(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_1);
  _objc_release(puVar4);
LAB_105c7bee4:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7bf24; end: 105c7bf2b; -[SCUserPropertiesDefaultService putItemWithKey:unsignedIntValue:isSpeculative:completionQueue:completionHandler:] */

void FUN_105c7bf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be850f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_unsignedIntValue_11257edd8,param_3,param_4,param_5 ^ 1);
  return;
}



/* Entry: 105c7bf2c; end: 105c7bf3b; -[SCUserPropertiesDefaultService putLargerValueItemWithKey:doubleValue:completionQueue:completionHandler:] */

void FUN_105c7bf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_doubleValue_writ_11257edb8,param_3,2,param_4,param_5);
  return;
}



/* Entry: 105c7bf3c; end: 105c7bf4b; -[SCUserPropertiesDefaultService putLargerValueItemWithKey:longValue:completionQueue:completionHandler:] */

void FUN_105c7bf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be850d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_longValue_writeT_11257edd0,param_3,param_4,2,param_5,
             param_6);
  return;
}



/* Entry: 105c7bf4c; end: 105c7bf5b; -[SCUserPropertiesDefaultService putLargerValueItemWithKey:floatValue:completionQueue:completionHandler:] */

void FUN_105c7bf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_floatValue_write_11257edc0,param_3,2,param_4,param_5);
  return;
}



/* Entry: 105c7bf5c; end: 105c7bf6b; -[SCUserPropertiesDefaultService putLargerValueItemWithKey:intValue:completionQueue:completionHandler:] */

void FUN_105c7bf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be850b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_intValue_writeTy_11257edc8,param_3,param_4,2,param_5,
             param_6);
  return;
}



/* Entry: 105c7bf6c; end: 105c7bf7b; -[SCUserPropertiesDefaultService putLargerValueItemWithKey:unsignedIntValue:completionQueue:completionHandler:] */

void FUN_105c7bf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be850f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItemWithKey_unsignedIntValue_11257edd8,param_3,param_4,2,param_5,
             param_6);
  return;
}



/* Entry: 105c7bf7c; end: 105c7c1ff; -[SCUserPropertiesDefaultService updateItemWithKey:addValue:completionQueue:completionHandler:] */

void FUN_105c7bf7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if (((int)lVar1 == 4) || (lVar1 = lVar2, func_0x00010c2950a0(), (int)lVar1 == 3)) {
      lVar1 = lVar2;
      func_0x00010c295040();
      lVar3 = lVar2;
      func_0x00010c2950c0();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340a0(uVar7);
      uVar7 = param_3;
      FUN_105c7b14c(param_3,*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b0448;
      _objc_alloc(PTR_PTR_1126b0448);
      func_0x00010c02d480();
      uVar6 = uVar4;
      func_0x00010c286b80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_initWeak(auStack_68,param_1);
      _objc_copyWeak(auStack_80,auStack_68);
      _objc_retain(param_3);
      uStack_78 = param_4;
      _objc_retain(param_6);
      _objc_retain(param_5);
      lStack_70 = lVar3 + lVar1;
      func_0x00010c297260(uVar6);
      _objc_release(param_5);
      _objc_release(param_6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
    else if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7c200; end: 105c7c343;  */

void FUN_105c7c200(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_105c7c308;
  if (param_3 == 0) {
    lVar4 = *(long *)(lVar1 + 8);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0896c0(param_2);
    func_0x00010c066a20(lVar4);
    _objc_release(puVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) goto LAB_105c7c308;
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0);
      goto LAB_105c7c308;
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105c7c344;
    puStack_50 = &UNK_110849530;
    _objc_retain(lVar4);
    lStack_48 = lVar4;
    func_0x00010007380c(lVar3,&puStack_68);
    lVar4 = lStack_48;
  }
  _objc_release(lVar4);
LAB_105c7c308:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105c7c344; end: 105c7c353;  */

void FUN_105c7c344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c7c350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c7c354; end: 105c7c3cf; -[SCUserPropertiesDefaultService boolForUserPropertyWithKey:] */

undefined8 FUN_105c7c354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c133e00(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f380();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105c7c3d0; end: 105c7c453; -[SCUserPropertiesDefaultService doubleForUserPropertyWithKey:] */

undefined8 FUN_105c7c3d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0844e0(param_4);
  func_0x00010c133e00(uVar2,param_3,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88380();
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105c7c454; end: 105c7c4d7; -[SCUserPropertiesDefaultService floatForUserPropertyWithKey:] */

undefined8 FUN_105c7c454(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0844e0(param_4);
  func_0x00010c133e00(uVar2,param_3,uVar1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c60();
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105c7c4d8; end: 105c7c553; -[SCUserPropertiesDefaultService integerForUserPropertyWithKey:] */

undefined8 FUN_105c7c4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c133e00(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067fa0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105c7c554; end: 105c7c5cf; -[SCUserPropertiesDefaultService longForUserPropertyWithKey:] */

undefined8 FUN_105c7c554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c133e00(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0b4b00();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105c7c5d0; end: 105c7c653; -[SCUserPropertiesDefaultService rawItemForUserPropertyWithKey:] */

void FUN_105c7c5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c133e00(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c120220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c7c654; end: 105c7c6d7; -[SCUserPropertiesDefaultService stringForUserPropertyWithKey:] */

void FUN_105c7c654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c133e00(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25d360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c7c6d8; end: 105c7c753; -[SCUserPropertiesDefaultService unsignedIntegerForUserPropertyWithKey:] */

undefined8 FUN_105c7c6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c133e00(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2827a0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105c7c754; end: 105c7c793; -[SCUserPropertiesDefaultService hasSyncedLogInResponse] */

undefined8 FUN_105c7c754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd120();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105c7c794; end: 105c7c7db; -[SCUserPropertiesDefaultService observeLoginComplete] */

void FUN_105c7c794(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c7c7dc; end: 105c7c92b; -[SCUserPropertiesDefaultService _putItemWithKey:doubleValue:writeType:completionQueue:completionHandler:] */

void FUN_105c7c7dc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 6) {
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c0844e0(param_4);
      func_0x00010c1340c0(uVar4);
    }
    func_0x00010c294fe0(lVar2);
    if (dVar5 == param_1) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7c8f4;
    }
  }
  puVar3 = PTR_PTR_1126b8138;
  func_0x00010bf885e0(param_1,PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_2);
  _objc_release(puVar3);
LAB_105c7c8f4:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c7c92c; end: 105c7ca7b; -[SCUserPropertiesDefaultService _putItemWithKey:floatValue:writeType:completionQueue:completionHandler:] */

void FUN_105c7c92c(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 5) {
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c0844e0(param_4);
      func_0x00010c1340c0(uVar4);
    }
    func_0x00010c295020(lVar2);
    if (fVar5 == param_1) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7ca44;
    }
  }
  puVar3 = PTR_PTR_1126b8138;
  func_0x00010bf885e0((double)param_1,PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_2);
  _objc_release(puVar3);
LAB_105c7ca44:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c7ca7c; end: 105c7cbc3; -[SCUserPropertiesDefaultService _putItemWithKey:intValue:writeType:completionQueue:completionHandler:] */

void FUN_105c7ca7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 3) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340c0(uVar4);
    }
    lVar1 = lVar2;
    func_0x00010c295040();
    if (lVar1 == param_4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7cb90;
    }
  }
  puVar3 = PTR_PTR_1126b8138;
  func_0x00010c0b50a0(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_1);
  _objc_release(puVar3);
LAB_105c7cb90:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7cbc4; end: 105c7cd0b; -[SCUserPropertiesDefaultService _putItemWithKey:longValue:writeType:completionQueue:completionHandler:] */

void FUN_105c7cbc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 3) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340c0(uVar4);
    }
    lVar1 = lVar2;
    func_0x00010c295040();
    if (lVar1 == param_4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7ccd8;
    }
  }
  puVar3 = PTR_PTR_1126b8138;
  func_0x00010c0b50a0(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_1);
  _objc_release(puVar3);
LAB_105c7ccd8:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7cd0c; end: 105c7ce53; -[SCUserPropertiesDefaultService _putItemWithKey:unsignedIntValue:writeType:completionQueue:completionHandler:] */

void FUN_105c7cd0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c2950a0();
    if ((int)lVar1 != 4) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0844e0(param_3);
      func_0x00010c1340c0(uVar4);
    }
    lVar1 = lVar2;
    func_0x00010c2950c0();
    if (lVar1 == param_4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
      goto LAB_105c7ce20;
    }
  }
  puVar3 = PTR_PTR_1126b8138;
  func_0x00010c0b50a0(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84fc0(param_1);
  _objc_release(puVar3);
LAB_105c7ce20:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7ce54; end: 105c7d16b; -[SCUserPropertiesDefaultService _confirmedWrite:completionQueue:key:value:useLargerValueWrite:] */

void FUN_105c7ce54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfc90c0();
  uVar2 = param_5;
  FUN_105c7b038(param_5,param_6,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105c7d16c;
  puStack_b8 = &UNK_11084fa08;
  lStack_b0 = param_1;
  puStack_90 = &uStack_98;
  _objc_retain(uVar2);
  uStack_a8 = uVar2;
  puStack_a0 = &uStack_98;
  func_0x00010006eaa4(uVar5,&puStack_d0);
  if ((*(byte *)(puStack_90 + 3) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    if (param_7 == 0) {
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b0448;
      _objc_alloc(PTR_PTR_1126b0448);
      func_0x00010c02d480();
      uVar1 = uVar5;
      func_0x00010c11c640(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b0448;
      _objc_alloc(PTR_PTR_1126b0448);
      func_0x00010c02d480();
      uVar1 = uVar5;
      func_0x00010c11c7e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_initWeak(auStack_d8,param_1);
    _objc_copyWeak(auStack_e0,auStack_d8);
    _objc_retain(uVar2);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c297260(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uVar1);
  }
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7d16c; end: 105c7d223;  */

void FUN_105c7d16c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c084700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_new(PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c084700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,puVar2,uVar1);
    _objc_release(uVar1);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c7d224; end: 105c7d41f;  */

void FUN_105c7d224(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) goto LAB_105c7d3d4;
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105c7d420;
  puStack_78 = &UNK_110841f80;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lStack_70 = lVar2;
  _objc_retain(uVar6);
  uStack_68 = uVar6;
  func_0x00010006eaa4(uVar4,&puStack_90);
  if (param_3 == 0) {
    lVar5 = *(long *)(lVar2 + 8);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_105c7ac8c(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0896c0(param_2);
    func_0x00010c066a20(lVar5);
    _objc_release(uVar4);
LAB_105c7d3c8:
    _objc_release(lVar5);
  }
  else {
    lVar5 = param_3;
    func_0x00010bf3ec40();
    if (lVar5 == 4) {
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c087060(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1339a0(uVar6);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265b60();
      _objc_release(uVar4);
    }
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        puStack_b8 = puVar1;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_105c7d464;
        puStack_a0 = &UNK_110849530;
        _objc_retain(lVar5);
        lStack_98 = lVar5;
        func_0x00010007380c(lVar3,&puStack_b8);
        lVar5 = lStack_98;
        goto LAB_105c7d3c8;
      }
      (**(code **)(lVar5 + 0x10))(lVar5,0);
    }
  }
  _objc_release(uStack_68);
LAB_105c7d3d4:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c7d420; end: 105c7d463;  */

void FUN_105c7d420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c084700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c7d464; end: 105c7d473;  */

void FUN_105c7d464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c7d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c7d474; end: 105c7d607; -[SCUserPropertiesDefaultService _speculativeWrite:completionQueue:key:value:] */

void FUN_105c7d474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  FUN_105c7ac8c(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c11c740(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c7d608; end: 105c7d6bf;  */

void FUN_105c7d608(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) &&
     ((**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2),
     (int)param_2 != 0)) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_105c7e644();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c7d6c0; end: 105c7d6c3;  */

void FUN_105c7d6c0(void)

{
  return;
}



/* Entry: 105c7d6c4; end: 105c7d7c7; -[SCUserPropertiesDefaultService _putAndUploadForItemKey:withValue:writeType:completionQueue:completionHandler:] */

void FUN_105c7d6c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  func_0x00010c1340a0(uVar2,param_2,uVar1);
  if (param_5 == 2) {
    uVar1 = 1;
  }
  else {
    if (param_5 != 1) {
      if (param_5 == 0) {
        func_0x00010bebeae0(param_1,param_2,param_7,param_6,param_3,param_4);
      }
      goto LAB_105c7d794;
    }
    uVar1 = 0;
  }
  func_0x00010bde6280(param_1,param_2,param_7,param_6,param_3,param_4,uVar1);
LAB_105c7d794:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7d7c8; end: 105c7d847; -[SCUserPropertiesDefaultService .cxx_destruct] */

void FUN_105c7d7c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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


