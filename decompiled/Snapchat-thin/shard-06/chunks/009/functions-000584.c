/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f30c34; end: 104f30c3b; -[SCCreateChatNewGroupSectionCreator uiContainer] */

undefined8 FUN_104f30c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f30c3c; end: 104f30c8f; -[SCCreateChatNewGroupSectionCreator .cxx_destruct] */

void FUN_104f30c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f30c90; end: 104f30c9b; +[SCCreateChatNewGroupSectionDataProvider announcerIdentifier] */

undefined ** FUN_104f30c90(void)

{
  return &PTR____CFConstantStringClassReference_110dbb4d8;
}



/* Entry: 104f30c9c; end: 104f30ca3; -[SCCreateChatNewGroupSectionDataProvider addListener:] */

void FUN_104f30c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104f30ca4; end: 104f30cab; -[SCCreateChatNewGroupSectionDataProvider removeListener:] */

void FUN_104f30ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104f30cac; end: 104f30d7f; -[SCCreateChatNewGroupSectionDataProvider initWithCreateChatTooltipService:newChatStateObservable:] */

undefined1 *
FUN_104f30cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5198;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    func_0x00010bec8580(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f30d80; end: 104f30d87; -[SCCreateChatNewGroupSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_104f30d80(void)

{
  return 1;
}



/* Entry: 104f30d88; end: 104f30def; -[SCCreateChatNewGroupSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104f30d88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_104f30df0;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dbb4b8;
    puVar1 = PTR_PTR_1126b2840;
    puStack_30 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      puVar2 = puVar2 + 0x28;
      _objc_loadWeakRetained(puVar2);
      func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f30df0; end: 104f30e73; -[SCCreateChatNewGroupSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104f30df0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dbb4b8;
  puVar1 = PTR_PTR_1126b2840;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + 0x28;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f30e74; end: 104f30ea7; -[SCCreateChatNewGroupSectionDataProvider setSectionDataModel:] */

void FUN_104f30e74(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f30ea8; end: 104f30f83; -[SCCreateChatNewGroupSectionDataProvider _subscribeToStateUpdates:] */

void FUN_104f30ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f30f84; end: 104f30fcb;  */

void FUN_104f30f84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ce20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f30fcc; end: 104f3105f; -[SCCreateChatNewGroupSectionDataProvider _handleNewState:] */

void FUN_104f30fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f31060;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104f31068;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104f31074;
  puStack_70 = &UNK_1108450c8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bef20(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104f31060; end: 104f3107f;  */

void FUN_104f31060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAndAnnounceModelForNewCha_1125925c0);
  return;
}



/* Entry: 104f31080; end: 104f310ff; -[SCCreateChatNewGroupSectionDataProvider _updateAndAnnounceModelForNewChat] */

void FUN_104f31080(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22fb20();
  _objc_release(uVar1);
  FUN_104f31790();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f31100; end: 104f31187; -[SCCreateChatNewGroupSectionDataProvider _updateAndAnnounceModelForNewGroupWithDeleteOption:] */

void FUN_104f31100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22fb40();
  _objc_release(uVar1);
  FUN_104f318c4(uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f31188; end: 104f3119f; -[SCCreateChatNewGroupSectionDataProvider dataProviderDelegate] */

void FUN_104f31188(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f311a0; end: 104f311ab; -[SCCreateChatNewGroupSectionDataProvider setDataProviderDelegate:] */

void FUN_104f311a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104f311ac; end: 104f311b3; -[SCCreateChatNewGroupSectionDataProvider sectionDataModel] */

undefined8 FUN_104f311ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f311b4; end: 104f311bb; -[SCCreateChatNewGroupSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104f311b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f311bc; end: 104f311eb; -[SCCreateChatNewGroupSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104f311bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f311ec; end: 104f31253; -[SCCreateChatNewGroupSectionDataProvider .cxx_destruct] */

void FUN_104f311ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f31254; end: 104f31343; -[SCCreateChatNewGroupStateManager initWithNewChatStatePublisher:selectionTracker:] */

undefined1 *
FUN_104f31254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e51a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c15a8c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec83c0(puVar1);
    _objc_release(uVar2);
    func_0x00010bec8560(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f31344; end: 104f31467; -[SCCreateChatNewGroupStateManager _subscribeToSelectionUpdates:] */

void FUN_104f31344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104f31468; end: 104f31493;  */

void FUN_104f31468(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f31494; end: 104f3155f; -[SCCreateChatNewGroupStateManager _subscribeToStateChanges] */

void FUN_104f31494(long param_1)

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



/* Entry: 104f31560; end: 104f315a7;  */

void FUN_104f31560(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ce20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f315a8; end: 104f3163f; -[SCCreateChatNewGroupStateManager _handleNewState:] */

void FUN_104f315a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104f31640;
  puStack_40 = &UNK_1108450c8;
  lStack_38 = param_1;
  func_0x00010c0bef20(param_3,param_2,0,0,&puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f31640; end: 104f3164f;  */

void FUN_104f31640(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  return;
}



/* Entry: 104f31650; end: 104f316fb; -[SCCreateChatNewGroupStateManager _handleSelectionChanges] */

void FUN_104f31650(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b27d8;
  if (lVar2 < 2) {
    if (*(long *)(param_1 + 0x20) < 2) goto LAB_104f316e8;
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d8660(PTR_PTR_1126b27d8);
  }
  else {
    if (1 < *(long *)(param_1 + 0x20)) goto LAB_104f316e8;
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d8980(PTR_PTR_1126b27d8);
  }
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
LAB_104f316e8:
  *(long *)(param_1 + 0x20) = lVar2;
  return;
}



/* Entry: 104f316fc; end: 104f3173f; -[SCCreateChatNewGroupStateManager advanceToNewGroupStatePermanently] */

void FUN_104f316fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b27d8;
  func_0x00010c0d8980(PTR_PTR_1126b27d8);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f31740; end: 104f31747; -[SCCreateChatNewGroupStateManager state] */

undefined8 FUN_104f31740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f31748; end: 104f3178f; -[SCCreateChatNewGroupStateManager .cxx_destruct] */

void FUN_104f31748(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f31790; end: 104f318c3;  */

void FUN_104f31790(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dbb4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000104f31a48();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar6 = puVar2;
    func_0x000104f31a60();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b27d0;
  _objc_alloc(PTR_PTR_1126b27d0);
  func_0x00010c0531e0();
  puVar5 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f318c4; end: 104f31a2f;  */

void FUN_104f318c4(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar6 = (undefined *)0x0;
  if (param_2 != 0) {
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  FUN_104f31a30();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar2;
    func_0x000104f31a60();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b27d0;
  _objc_alloc(PTR_PTR_1126b27d0);
  func_0x00010c0531e0();
  puVar5 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f31a30; end: 104f31aa7;  */

void FUN_104f31a30(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb578;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbb578,
                      &PTR____CFConstantStringClassReference_110dbb598,0);
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



/* Entry: 104f31aa8; end: 104f31c13; -[SCCreateChatCTACellViewModel initWithTitle:leadingImage:badgeText:tapAction:secondaryTapAction:accessibilityIdentifier:] */

undefined1 *
FUN_104f31aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e51a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f31c14; end: 104f31c37; -[SCCreateChatCTACellViewModel copyWithZone:] */

undefined8 FUN_104f31c14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f31c38; end: 104f31cdb; -[SCCreateChatCTACellViewModel hash] */

undefined8 * FUN_104f31c38(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f31dbc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f31dc8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_104f31dc8;
                }
                goto LAB_104f31dbc;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f31dc8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f31cdc; end: 104f31de3; -[SCCreateChatCTACellViewModel isEqual:] */

long FUN_104f31cdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f31dbc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f31dc8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_104f31dc8;
                }
                goto LAB_104f31dbc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f31dc8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f31de4; end: 104f31deb; -[SCCreateChatCTACellViewModel title] */

undefined8 FUN_104f31de4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f31dec; end: 104f31df3; -[SCCreateChatCTACellViewModel leadingImage] */

undefined8 FUN_104f31dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f31df4; end: 104f31dfb; -[SCCreateChatCTACellViewModel badgeText] */

undefined8 FUN_104f31df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f31dfc; end: 104f31e03; -[SCCreateChatCTACellViewModel tapAction] */

undefined8 FUN_104f31dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f31e04; end: 104f31e0b; -[SCCreateChatCTACellViewModel secondaryTapAction] */

undefined8 FUN_104f31e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f31e0c; end: 104f31e13; -[SCCreateChatCTACellViewModel accessibilityIdentifier] */

undefined8 FUN_104f31e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f31e14; end: 104f31e73; -[SCCreateChatCTACellViewModel .cxx_destruct] */

void FUN_104f31e14(long param_1)

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



/* Entry: 104f31e74; end: 104f31f7f; -[SCCreateChatScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f31e74(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar2 = param_1 + _DAT_1127174b8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c064480();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bef20(lVar3);
  cVar1 = *(char *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (cVar1 == '\x01') {
    func_0x00010bdd3300();
  }
  else {
    func_0x00010bdd3780(param_1);
  }
  return;
}



/* Entry: 104f31f80; end: 104f320eb; -[SCCreateChatScopeEntryPoint _beginNewChatsWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f31f80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126b2848;
  _objc_alloc();
  lVar10 = (long)_DAT_1127174b8;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c064480();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c10aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c247520();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  func_0x00010bf54da0();
  func_0x00010c056d20();
  lVar11 = (long)_DAT_1127174bc;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127174c0),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + lVar11));
  return;
}



/* Entry: 104f320ec; end: 104f3220b; -[SCCreateChatScopeEntryPoint _beginComposerNewChatsFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f320ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b2850;
  _objc_alloc();
  lVar9 = (long)_DAT_1127174b8;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c10aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c247520();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bf54da0();
  func_0x00010c057160();
  lVar8 = (long)_DAT_1127174c4;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127174c8),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + lVar8));
  return;
}



/* Entry: 104f3220c; end: 104f323a7; -[SCCreateChatScopeEntryPoint recipientPickerDidLongPressSelectionIdentifier:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3220c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126b2858;
    _objc_alloc(PTR_PTR_1126b2858);
    uVar1 = param_3;
    func_0x00010c122b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0584e0(puVar3,param_2,param_4,uVar1,0xfb,1,param_1,0);
    _objc_release(uVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127174cc),param_2,puVar3);
    _objc_release(puVar3);
  }
  uVar1 = param_3;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    uVar1 = param_3;
    func_0x00010c122b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058a60(puVar3,param_2,param_4,uVar1,0xfb,0,1,0xffffffffcf5d0adf,0x2f,param_1);
    _objc_release(uVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127174d0),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f323a8; end: 104f323ab; -[SCCreateChatScopeEntryPoint friendActionSheetOpenProfile:] */

void FUN_104f323a8(void)

{
  return;
}



/* Entry: 104f323ac; end: 104f323af; -[SCCreateChatScopeEntryPoint friendActionSheetShowCameraForSnap:] */

void FUN_104f323ac(void)

{
  return;
}



/* Entry: 104f323b0; end: 104f32407; -[SCCreateChatScopeEntryPoint friendActionSheetDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f323b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127174d0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f32408; end: 104f3240b; -[SCCreateChatScopeEntryPoint groupActionSheetOpenProfileForGroupId:] */

void FUN_104f32408(void)

{
  return;
}



/* Entry: 104f3240c; end: 104f3240f; -[SCCreateChatScopeEntryPoint groupActionSheetShowCameraForGroupId:] */

void FUN_104f3240c(void)

{
  return;
}



/* Entry: 104f32410; end: 104f32467; -[SCCreateChatScopeEntryPoint groupActionSheetDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f32410(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127174cc;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f32468; end: 104f324db; -[SCCreateChatScopeEntryPoint createChatSelectionScopeWantsToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f32468(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127174b8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55180(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f324dc; end: 104f3254f; -[SCCreateChatScopeEntryPoint createChatSelectionScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f324dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127174b8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55140(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f32550; end: 104f325e3; -[SCCreateChatScopeEntryPoint createChatSelectionScope:wantsToDismissWithNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f32550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127174b8;
  _objc_retain(param_4);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55120(lVar2,param_2,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f325e4; end: 104f32657; -[SCCreateChatScopeEntryPoint createNewChatsPageWantsToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f325e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127174b8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55180(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f32658; end: 104f326cb; -[SCCreateChatScopeEntryPoint createNewChatsPageDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f32658(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127174b8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55140(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f326cc; end: 104f3275f; -[SCCreateChatScopeEntryPoint createNewChatsPageWantsToDismissWithNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f326cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127174b8;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55120(lVar2,param_2,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f32760; end: 104f3284b; -[SCCreateChatScopeEntryPoint createNewChatsPageWantsToDismissForCallWithChatIdentifier:callMediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f32760(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127174b8;
  _objc_retain(param_3);
  uVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bf55120(lVar5);
  }
  else {
    func_0x00010bf55100();
  }
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104f3284c; end: 104f328d7; -[SCCreateChatScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3284c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127174c8,0);
  _objc_storeStrong(param_1 + _DAT_1127174c0,0);
  _objc_storeStrong(param_1 + _DAT_1127174cc,0);
  _objc_storeStrong(param_1 + _DAT_1127174d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127174b8);
  _objc_storeStrong(param_1 + _DAT_1127174c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127174bc,0);
  return;
}



/* Entry: 104f328d8; end: 104f328eb;  */

void FUN_104f328d8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f328ec; end: 104f328f7; -[SCFeatureSettingsService isAcceptedInviteContactToGroupPromptAvailable] */

void FUN_104f328ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbb698);
  return;
}



/* Entry: 104f328f8; end: 104f32903; -[SCFeatureSettingsService hasAcceptedInviteContactToGroupPromptServerParam] */

undefined ** FUN_104f328f8(void)

{
  return &PTR____CFConstantStringClassReference_110dbb698;
}



/* Entry: 104f32904; end: 104f32913; -[SCFeatureSettingsService setAcceptedInviteContactToGroupPrompt:] */

void FUN_104f32904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dbb698,param_3);
  return;
}



/* Entry: 104f32914; end: 104f3291b; -[SCFeatureSettingsService SHARING_CONTACT_GROUP_INVITE_PROMPT_SEEN_client_value:] */

undefined * FUN_104f32914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104f3291c; end: 104f32923; -[SCFeatureSettingsService SHARING_CONTACT_GROUP_INVITE_PROMPT_SEEN_server_value:] */

void FUN_104f3291c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f32924; end: 104f32933; -[SCFeatureSettingsService hasAcceptedInviteContactToGroupPrompt] */

void FUN_104f32924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dbb698,0);
  return;
}



/* Entry: 104f32934; end: 104f329a7; -[SCCreateChatErrorHandler initWithNotificationPool:] */

undefined1 * FUN_104f32934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e51b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f329a8; end: 104f32b0f; -[SCCreateChatErrorHandler newGroupAlertWithNonMutualFriends:uiContainer:] */

void FUN_104f329a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104f365a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000104f365bc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000105e59584(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar4);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f32b10; end: 104f32b1f;  */

void FUN_104f32b10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f32b20; end: 104f32c6f; -[SCCreateChatErrorHandler newGroupAlertFilterOutNonMutualFriends:uiContainer:] */

void FUN_104f32b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104f365a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar1 = param_3;
  func_0x000105e59804(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f32c70; end: 104f32c7f;  */

void FUN_104f32c70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f32c80; end: 104f32deb; -[SCCreateChatErrorHandler newGroupAlertWithNonUsers:uiContainer:] */

void FUN_104f32c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104f365a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar1 = param_3;
  func_0x000105e59a84(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x000105e59b98(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f32dec; end: 104f32dfb;  */

void FUN_104f32dec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f32dfc; end: 104f32dff; -[SCCreateChatErrorHandler newGroupAlreadyExistingMessage] */

void FUN_104f32dfc(void)

{
  return;
}



/* Entry: 104f32e00; end: 104f32e83; -[SCCreateChatErrorHandler cannotEditGroupNameMessage] */

void FUN_104f32e00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000104f365d4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f32e84; end: 104f32e8f; -[SCCreateChatErrorHandler .cxx_destruct] */

void FUN_104f32e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f32e90; end: 104f32fbf; -[SCCreateChatLogger initWithSource:createButtonExtensionType:userTrackedLogger:] */

undefined1 *
FUN_104f32e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126e51b8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010beec800(*(undefined8 *)((long)puVar1 + 0x10));
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be3bac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined1 **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be3b1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined1 **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be3b2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined1 **)((long)puVar1 + 0x48) = puVar4;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be3b2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined1 **)((long)puVar1 + 0x50) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 104f32fc0; end: 104f332af; -[SCCreateChatLogger completeAndEmitIfNecessaryWithDidContinue:] */

undefined **
FUN_104f32fc0(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *unaff_x19;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **unaff_x20;
  undefined **ppuVar17;
  undefined **unaff_x21;
  int iVar18;
  undefined **unaff_x22;
  undefined **unaff_x23;
  long lVar19;
  undefined **unaff_x24;
  undefined8 uVar20;
  int iVar21;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar22;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 auStack_470 [256];
  long lStack_370;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_220;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_2[5] & 1) == 0) {
    *(undefined1 *)(param_2 + 5) = 1;
    unaff_x28 = (undefined **)0x18;
    if ((uint)param_4 == 0) {
      unaff_x28 = (undefined **)0x12;
    }
    unaff_x25 = (undefined **)(ulong)((uint)param_4 ^ 1);
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dbb778;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_2[0xd]);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110dbb798;
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar10;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_2[0xe]);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar15;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_78,&ppuStack_88,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar10);
    unaff_x21 = param_2;
    func_0x00010be46600(param_2,param_3,unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_2;
    func_0x00010be46600(param_2,param_3,param_2[7]);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_2;
    func_0x00010be46600(param_2,param_3,param_2[8]);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_2;
    func_0x00010be46600(param_2,param_3,param_2[9]);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = param_2;
    func_0x00010be46600(param_2,param_3,param_2[10]);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = (undefined **)PTR_PTR_1126b2868;
    _objc_opt_new();
    func_0x00010c198340();
    func_0x00010c206c40(unaff_x27,param_3,param_2[3]);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbb7d8;
    if (param_2[4] != (undefined *)0x2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbb7b8;
    }
    ppuVar22 = &PTR____CFConstantStringClassReference_110db6c78;
    if (param_2[4] != (undefined *)0x0) {
      ppuVar22 = ppuVar1;
    }
    func_0x00010c17b0c0(unaff_x27,param_3,ppuVar22);
    func_0x00010c19d500(unaff_x27,param_3,*(undefined1 *)((long)param_2 + 0x59));
    func_0x00010c1cca80(unaff_x27,param_3,*(undefined1 *)((long)param_2 + 0x5a));
    func_0x00010c1cb060(unaff_x27,param_3,*(undefined1 *)(param_2 + 0xb));
    func_0x00010c1971c0(unaff_x27,param_3,param_2[0xc]);
    func_0x00010c1cd480(unaff_x27,param_3,unaff_x25);
    func_0x00010c1f98a0(unaff_x27,param_3,unaff_x22);
    func_0x00010c17a5a0(unaff_x27,param_3,unaff_x21);
    func_0x00010c1f9880(unaff_x27,param_3,unaff_x23);
    func_0x00010c1f9800(unaff_x27,param_3,unaff_x24);
    func_0x00010c1f97e0(unaff_x27,param_3,unaff_x26);
    func_0x00010beec800(param_2[2]);
    func_0x00010c2150c0(unaff_x27,param_3,(long)((param_1 - (double)param_2[6]) * 1000.0));
    func_0x00010c1f81a0(unaff_x27,param_3,param_2[0xf]);
    unaff_x19 = param_2[1];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x27;
    func_0x00010c0b2e60();
    _objc_release(unaff_x19);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    param_2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  ppuVar22 = &puStack_1b0;
  pcStack_98 = FUN_104f332b0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = unaff_x28;
  ppuStack_d8 = unaff_x27;
  ppuStack_d0 = unaff_x24;
  ppuStack_c8 = unaff_x23;
  ppuStack_c0 = unaff_x22;
  ppuStack_b8 = unaff_x21;
  ppuStack_b0 = unaff_x20;
  puStack_a8 = unaff_x19;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  lStack_1a8 = 0;
  puStack_1b0 = (undefined *)0x0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar1 = param_4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_1a0;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x23) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x22 = param_4;
        func_0x00010c0e00e0(param_4,param_3,*(undefined8 *)(lStack_1a8 + (long)unaff_x24 * 8));
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = unaff_x22;
        func_0x00010bf1f3c0();
        if ((int)ppuVar22 == 0) {
          param_2[0xe] = param_2[0xe] + 1;
        }
        else {
          param_2[0xd] = param_2[0xd] + 1;
        }
        _objc_release(unaff_x22);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar1 != unaff_x24);
      ppuVar1 = param_4;
      ppuVar22 = &puStack_1b0;
      func_0x00010bf52a60();
      unaff_x21 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  ppuVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_104f333e8;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_210 = unaff_x28;
  ppuStack_208 = unaff_x27;
  ppuStack_200 = unaff_x26;
  ppuStack_1f8 = unaff_x25;
  ppuStack_1f0 = unaff_x24;
  ppuStack_1e8 = unaff_x23;
  ppuStack_1e0 = unaff_x22;
  ppuStack_1d8 = unaff_x21;
  ppuStack_1d0 = param_2;
  ppuStack_1c8 = param_4;
  ppuStack_1c0 = &puStack_a0;
  _objc_retain(ppuVar22);
  ppuStack_2f8 = ppuVar1 + 7;
  func_0x00010bde0ea0(ppuVar1,param_3,*ppuStack_2f8);
  ppuStack_300 = ppuVar1 + 9;
  func_0x00010bde0ea0(ppuVar1,param_3,*ppuStack_300);
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  puStack_2e0 = (undefined *)0x0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  _objc_retain(ppuVar22);
  ppuVar2 = &puStack_2e0;
  ppuStack_2f0 = ppuVar22;
  func_0x00010bf52a60();
  if (ppuVar22 != (undefined **)0x0) {
    lVar14 = *plStack_2d0;
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110f52e78;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if (*plStack_2d0 != lVar14) {
          _objc_enumerationMutation(ppuStack_2f0);
        }
        unaff_x24 = *(undefined ***)(lStack_2d8 + (long)unaff_x21 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppuVar1;
        func_0x00010bde9420(ppuVar1,param_3,unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        if (unaff_x23 != (undefined **)0x0) {
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = ppuVar2;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(ppuVar2);
          _objc_release(unaff_x24);
          unaff_x25 = ppuStack_2f8;
          if ((int)unaff_x28 != 0) {
            unaff_x25 = ppuStack_300;
          }
          unaff_x24 = (undefined **)*unaff_x25;
          func_0x00010c0dff20(unaff_x24,param_3,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 != (undefined **)0x0) {
            ppuVar2 = unaff_x24;
            func_0x00010c067ec0(unaff_x24);
            unaff_x25 = (undefined **)*unaff_x25;
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(int)ppuVar2 + 1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(unaff_x25,param_3,unaff_x26,unaff_x23);
            _objc_release(unaff_x26);
          }
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (ppuVar22 != unaff_x21);
      ppuVar2 = &puStack_2e0;
      ppuVar22 = ppuStack_2f0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar22 != (undefined **)0x0);
  }
  ppuVar22 = ppuStack_2f0;
  _objc_release(ppuStack_2f0);
  ppuVar3 = ppuVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuStack_318 = ppuVar22;
  pcStack_308 = FUN_104f33660;
  lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_360 = unaff_x28;
  ppuStack_358 = unaff_x27;
  ppuStack_350 = unaff_x26;
  ppuStack_348 = unaff_x25;
  ppuStack_340 = unaff_x24;
  ppuStack_338 = unaff_x23;
  ppuStack_330 = unaff_x22;
  ppuStack_328 = unaff_x21;
  ppuStack_320 = ppuVar1;
  pppuStack_310 = &ppuStack_1c0;
  _objc_retain(ppuVar2);
  func_0x00010bde0ea0(ppuVar3,param_3,ppuVar3[8]);
  func_0x00010bde0ea0(ppuVar3,param_3,ppuVar3[10]);
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  lStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  plStack_4a0 = (long *)0x0;
  _objc_retain(ppuVar2);
  puVar13 = &uStack_4b0;
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar14 = *plStack_4a0;
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (*plStack_4a0 != lVar14) {
          _objc_enumerationMutation(ppuVar2);
        }
        uVar20 = *(undefined8 *)(lStack_4a8 + (long)ppuVar22 * 8);
        ppuVar4 = ppuVar3;
        func_0x00010bde9420(ppuVar3,param_3,uVar20);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar5 = ppuVar2;
          func_0x00010c0e00e0(ppuVar2,param_3,uVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bf529e0();
          iVar18 = (int)ppuVar6;
          lStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          plStack_4e0 = (long *)0x0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          _objc_retain(ppuVar5);
          ppuVar6 = ppuVar5;
          func_0x00010bf52a60(ppuVar5,param_3,&uStack_4f0,auStack_470,0x10);
          ppuVar17 = ppuVar5;
          if (ppuVar6 == (undefined **)0x0) {
LAB_104f338f4:
            _objc_release(ppuVar17);
          }
          else {
            iVar21 = 0;
            lVar19 = *plStack_4e0;
            do {
              ppuVar17 = (undefined **)0x0;
              do {
                if (*plStack_4e0 != lVar19) {
                  _objc_enumerationMutation(ppuVar5);
                }
                uVar7 = *(undefined8 *)(lStack_4e8 + (long)ppuVar17 * 8);
                func_0x00010c122a80();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar7;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar20;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c0720c0();
                _objc_release(uVar8);
                _objc_release(uVar20);
                _objc_release(uVar7);
                iVar21 = iVar21 + (int)uVar9;
                ppuVar17 = (undefined **)((long)ppuVar17 + 1);
              } while (ppuVar6 != ppuVar17);
              ppuVar6 = ppuVar5;
              func_0x00010bf52a60(ppuVar5,param_3,&uStack_4f0,auStack_470,0x10);
            } while (ppuVar6 != (undefined **)0x0);
            _objc_release(ppuVar5);
            iVar18 = iVar18 - iVar21;
            if (0 < iVar21) {
              ppuVar17 = (undefined **)ppuVar3[10];
              func_0x00010c0dff20(ppuVar17,param_3,ppuVar4);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar17 != (undefined **)0x0) {
                ppuVar6 = ppuVar17;
                func_0x00010c067ec0(ppuVar17);
                puVar15 = ppuVar3[10];
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                                    (int)ppuVar6 + iVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(puVar15,param_3,puVar10,ppuVar4);
                _objc_release(puVar10);
              }
              goto LAB_104f338f4;
            }
          }
          if (0 < iVar18) {
            puVar10 = ppuVar3[8];
            func_0x00010c0dff20(puVar10,param_3,ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 != (undefined *)0x0) {
              puVar15 = puVar10;
              func_0x00010c067ec0(puVar10);
              puVar16 = ppuVar3[8];
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(int)puVar15 + iVar18
                                 );
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar16,param_3,puVar11,ppuVar4);
              _objc_release(puVar11);
            }
            _objc_release(puVar10);
          }
          _objc_release(ppuVar5);
        }
        _objc_release(ppuVar4);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar22 != ppuVar1);
      puVar13 = &uStack_4b0;
      ppuVar1 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_370) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    puVar12 = puVar13;
    func_0x00010c0720c0(puVar13,param_3,&PTR____CFConstantStringClassReference_110f487d8);
    if (((ulong)puVar12 & 1) == 0) {
      puVar12 = puVar13;
      func_0x00010c0720c0(puVar13,param_3,&PTR____CFConstantStringClassReference_110f48818);
      if (((ulong)puVar12 & 1) == 0) {
        puVar12 = puVar13;
        func_0x00010c0720c0(puVar13,param_3,&PTR____CFConstantStringClassReference_110f48998);
        if (((ulong)puVar12 & 1) == 0) {
          puVar12 = puVar13;
          func_0x00010c0720c0(puVar13,param_3,&PTR____CFConstantStringClassReference_110f487f8);
          if (((ulong)puVar12 & 1) == 0) {
            puVar12 = puVar13;
            func_0x00010c0720c0(puVar13,param_3,&PTR____CFConstantStringClassReference_110f48838);
            if (((ulong)puVar12 & 1) == 0) {
              puVar12 = puVar13;
              func_0x00010c0720c0(puVar13,param_3,&PTR____CFConstantStringClassReference_110f489b8);
              ppuVar1 = &PTR____CFConstantStringClassReference_110dbb758;
              if ((int)puVar12 == 0) {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6f8;
              }
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110dbb738;
            }
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dbb718;
          }
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
        }
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6b8;
      }
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6d8;
    }
    _objc_release(puVar13);
    return ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 104f332b0; end: 104f333e7; -[SCCreateChatLogger onSelectionItemToStateMapUpdate:] */

undefined ** FUN_104f332b0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **unaff_x21;
  int iVar18;
  undefined **unaff_x22;
  undefined **unaff_x23;
  long lVar19;
  undefined **unaff_x24;
  undefined8 uVar20;
  int iVar21;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar22;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [256];
  long lStack_2e0;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  ppuVar2 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_110;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = param_3;
        func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(lStack_118 + (long)unaff_x24 * 8));
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = unaff_x22;
        func_0x00010bf1f3c0();
        if ((int)ppuVar2 == 0) {
          *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
        }
        else {
          *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
        }
        _objc_release(unaff_x22);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar1 != unaff_x24);
      ppuVar1 = param_3;
      ppuVar2 = &puStack_120;
      func_0x00010bf52a60();
      unaff_x21 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104f333e8;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  ppuStack_268 = param_3 + 7;
  func_0x00010bde0ea0(param_3,param_2,*ppuStack_268);
  ppuStack_270 = param_3 + 9;
  func_0x00010bde0ea0(param_3,param_2,*ppuStack_270);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  puStack_250 = (undefined *)0x0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  _objc_retain(ppuVar2);
  ppuVar1 = &puStack_250;
  ppuStack_260 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar14 = *plStack_240;
    ppuStack_258 = &PTR____CFConstantStringClassReference_110f52e78;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if (*plStack_240 != lVar14) {
          _objc_enumerationMutation(ppuStack_260);
        }
        unaff_x24 = *(undefined ***)(lStack_248 + (long)unaff_x21 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_3;
        func_0x00010bde9420(param_3,param_2,unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        if (unaff_x23 != (undefined **)0x0) {
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = ppuVar1;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(ppuVar1);
          _objc_release(unaff_x24);
          unaff_x25 = ppuStack_268;
          if ((int)unaff_x28 != 0) {
            unaff_x25 = ppuStack_270;
          }
          unaff_x24 = (undefined **)*unaff_x25;
          func_0x00010c0dff20(unaff_x24,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 != (undefined **)0x0) {
            ppuVar1 = unaff_x24;
            func_0x00010c067ec0(unaff_x24);
            unaff_x25 = (undefined **)*unaff_x25;
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)ppuVar1 + 1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(unaff_x25,param_2,unaff_x26,unaff_x23);
            _objc_release(unaff_x26);
          }
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (ppuVar2 != unaff_x21);
      ppuVar1 = &puStack_250;
      ppuVar2 = ppuStack_260;
      func_0x00010bf52a60();
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  ppuVar2 = ppuStack_260;
  _objc_release(ppuStack_260);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuStack_288 = ppuVar2;
  pcStack_278 = FUN_104f33660;
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2d0 = unaff_x28;
  ppuStack_2c8 = unaff_x27;
  ppuStack_2c0 = unaff_x26;
  ppuStack_2b8 = unaff_x25;
  ppuStack_2b0 = unaff_x24;
  ppuStack_2a8 = unaff_x23;
  ppuStack_2a0 = unaff_x22;
  ppuStack_298 = unaff_x21;
  ppuStack_290 = param_3;
  ppuStack_280 = &puStack_130;
  _objc_retain(ppuVar1);
  func_0x00010bde0ea0(ppuVar3,param_2,ppuVar3[8]);
  func_0x00010bde0ea0(ppuVar3,param_2,ppuVar3[10]);
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  plStack_410 = (long *)0x0;
  _objc_retain(ppuVar1);
  puVar13 = &uStack_420;
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar14 = *plStack_410;
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (*plStack_410 != lVar14) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar20 = *(undefined8 *)(lStack_418 + (long)ppuVar22 * 8);
        ppuVar4 = ppuVar3;
        func_0x00010bde9420(ppuVar3,param_2,uVar20);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar5 = ppuVar1;
          func_0x00010c0e00e0(ppuVar1,param_2,uVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bf529e0();
          iVar18 = (int)ppuVar6;
          lStack_458 = 0;
          uStack_460 = 0;
          uStack_448 = 0;
          plStack_450 = (long *)0x0;
          uStack_438 = 0;
          uStack_440 = 0;
          uStack_428 = 0;
          uStack_430 = 0;
          _objc_retain(ppuVar5);
          ppuVar6 = ppuVar5;
          func_0x00010bf52a60(ppuVar5,param_2,&uStack_460,auStack_3e0,0x10);
          ppuVar17 = ppuVar5;
          if (ppuVar6 == (undefined **)0x0) {
LAB_104f338f4:
            _objc_release(ppuVar17);
          }
          else {
            iVar21 = 0;
            lVar19 = *plStack_450;
            do {
              ppuVar17 = (undefined **)0x0;
              do {
                if (*plStack_450 != lVar19) {
                  _objc_enumerationMutation(ppuVar5);
                }
                uVar7 = *(undefined8 *)(lStack_458 + (long)ppuVar17 * 8);
                func_0x00010c122a80();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar7;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar20;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c0720c0();
                _objc_release(uVar8);
                _objc_release(uVar20);
                _objc_release(uVar7);
                iVar21 = iVar21 + (int)uVar9;
                ppuVar17 = (undefined **)((long)ppuVar17 + 1);
              } while (ppuVar6 != ppuVar17);
              ppuVar6 = ppuVar5;
              func_0x00010bf52a60(ppuVar5,param_2,&uStack_460,auStack_3e0,0x10);
            } while (ppuVar6 != (undefined **)0x0);
            _objc_release(ppuVar5);
            iVar18 = iVar18 - iVar21;
            if (0 < iVar21) {
              ppuVar17 = (undefined **)ppuVar3[10];
              func_0x00010c0dff20(ppuVar17,param_2,ppuVar4);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar17 != (undefined **)0x0) {
                ppuVar6 = ppuVar17;
                func_0x00010c067ec0(ppuVar17);
                puVar15 = ppuVar3[10];
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                                    (int)ppuVar6 + iVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(puVar15,param_2,puVar10,ppuVar4);
                _objc_release(puVar10);
              }
              goto LAB_104f338f4;
            }
          }
          if (0 < iVar18) {
            puVar10 = ppuVar3[8];
            func_0x00010c0dff20(puVar10,param_2,ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 != (undefined *)0x0) {
              puVar15 = puVar10;
              func_0x00010c067ec0(puVar10);
              puVar16 = ppuVar3[8];
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)puVar15 + iVar18
                                 );
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar16,param_2,puVar11,ppuVar4);
              _objc_release(puVar11);
            }
            _objc_release(puVar10);
          }
          _objc_release(ppuVar5);
        }
        _objc_release(ppuVar4);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar22 != ppuVar2);
      puVar13 = &uStack_420;
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    puVar12 = puVar13;
    func_0x00010c0720c0(puVar13,param_2,&PTR____CFConstantStringClassReference_110f487d8);
    if (((ulong)puVar12 & 1) == 0) {
      puVar12 = puVar13;
      func_0x00010c0720c0(puVar13,param_2,&PTR____CFConstantStringClassReference_110f48818);
      if (((ulong)puVar12 & 1) == 0) {
        puVar12 = puVar13;
        func_0x00010c0720c0(puVar13,param_2,&PTR____CFConstantStringClassReference_110f48998);
        if (((ulong)puVar12 & 1) == 0) {
          puVar12 = puVar13;
          func_0x00010c0720c0(puVar13,param_2,&PTR____CFConstantStringClassReference_110f487f8);
          if (((ulong)puVar12 & 1) == 0) {
            puVar12 = puVar13;
            func_0x00010c0720c0(puVar13,param_2,&PTR____CFConstantStringClassReference_110f48838);
            if (((ulong)puVar12 & 1) == 0) {
              puVar12 = puVar13;
              func_0x00010c0720c0(puVar13,param_2,&PTR____CFConstantStringClassReference_110f489b8);
              ppuVar1 = &PTR____CFConstantStringClassReference_110dbb758;
              if ((int)puVar12 == 0) {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6f8;
              }
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110dbb738;
            }
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dbb718;
          }
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
        }
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6b8;
      }
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6d8;
    }
    _objc_release(puVar13);
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 104f333e8; end: 104f3365f; -[SCCreateChatLogger onSelectedItemAttributionsUpdate:] */

undefined ** FUN_104f333e8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **unaff_x21;
  int iVar18;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar19;
  undefined8 *unaff_x24;
  undefined8 uVar20;
  int iVar21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined **ppuVar22;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [256];
  long lStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_148 = (undefined8 *)(param_1 + 0x38);
  func_0x00010bde0ea0(param_1,param_2,*puStack_148);
  puStack_150 = (undefined8 *)(param_1 + 0x48);
  func_0x00010bde0ea0(param_1,param_2,*puStack_150);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  ppuVar12 = &puStack_130;
  ppuStack_140 = param_3;
  func_0x00010bf52a60();
  if (param_3 != (undefined **)0x0) {
    lVar14 = *plStack_120;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110f52e78;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(ppuStack_140);
        }
        unaff_x24 = *(undefined8 **)(lStack_128 + (long)unaff_x21 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_1;
        func_0x00010bde9420(param_1,param_2,unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        if (unaff_x23 != 0) {
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar1;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(puVar1);
          _objc_release(unaff_x24);
          unaff_x25 = puStack_148;
          if ((int)unaff_x28 != 0) {
            unaff_x25 = puStack_150;
          }
          unaff_x24 = (undefined8 *)*unaff_x25;
          func_0x00010c0dff20(unaff_x24,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 != (undefined8 *)0x0) {
            puVar1 = unaff_x24;
            func_0x00010c067ec0(unaff_x24);
            unaff_x25 = (undefined8 *)*unaff_x25;
            unaff_x26 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)puVar1 + 1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(unaff_x25,param_2,unaff_x26,unaff_x23);
            _objc_release(unaff_x26);
          }
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (param_3 != unaff_x21);
      ppuVar12 = &puStack_130;
      param_3 = ppuStack_140;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (param_3 != (undefined **)0x0);
  }
  ppuVar3 = ppuStack_140;
  _objc_release(ppuStack_140);
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuStack_168 = ppuVar3;
  pcStack_158 = FUN_104f33660;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  lStack_188 = unaff_x23;
  uStack_180 = unaff_x22;
  ppuStack_178 = unaff_x21;
  lStack_170 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  func_0x00010bde0ea0(ppuVar2,param_2,ppuVar2[8]);
  func_0x00010bde0ea0(ppuVar2,param_2,ppuVar2[10]);
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  _objc_retain(ppuVar12);
  puVar1 = &uStack_300;
  ppuVar3 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    lVar14 = *plStack_2f0;
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (*plStack_2f0 != lVar14) {
          _objc_enumerationMutation(ppuVar12);
        }
        uVar20 = *(undefined8 *)(lStack_2f8 + (long)ppuVar22 * 8);
        ppuVar4 = ppuVar2;
        func_0x00010bde9420(ppuVar2,param_2,uVar20);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar5 = ppuVar12;
          func_0x00010c0e00e0(ppuVar12,param_2,uVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bf529e0();
          iVar18 = (int)ppuVar6;
          lStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          plStack_330 = (long *)0x0;
          uStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          _objc_retain(ppuVar5);
          ppuVar6 = ppuVar5;
          func_0x00010bf52a60(ppuVar5,param_2,&uStack_340,auStack_2c0,0x10);
          ppuVar17 = ppuVar5;
          if (ppuVar6 == (undefined **)0x0) {
LAB_104f338f4:
            _objc_release(ppuVar17);
          }
          else {
            iVar21 = 0;
            lVar19 = *plStack_330;
            do {
              ppuVar17 = (undefined **)0x0;
              do {
                if (*plStack_330 != lVar19) {
                  _objc_enumerationMutation(ppuVar5);
                }
                uVar7 = *(undefined8 *)(lStack_338 + (long)ppuVar17 * 8);
                func_0x00010c122a80();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar7;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar20;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c0720c0();
                _objc_release(uVar8);
                _objc_release(uVar20);
                _objc_release(uVar7);
                iVar21 = iVar21 + (int)uVar9;
                ppuVar17 = (undefined **)((long)ppuVar17 + 1);
              } while (ppuVar6 != ppuVar17);
              ppuVar6 = ppuVar5;
              func_0x00010bf52a60(ppuVar5,param_2,&uStack_340,auStack_2c0,0x10);
            } while (ppuVar6 != (undefined **)0x0);
            _objc_release(ppuVar5);
            iVar18 = iVar18 - iVar21;
            if (0 < iVar21) {
              ppuVar17 = (undefined **)ppuVar2[10];
              func_0x00010c0dff20(ppuVar17,param_2,ppuVar4);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar17 != (undefined **)0x0) {
                ppuVar6 = ppuVar17;
                func_0x00010c067ec0(ppuVar17);
                puVar15 = ppuVar2[10];
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                                    (int)ppuVar6 + iVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(puVar15,param_2,puVar10,ppuVar4);
                _objc_release(puVar10);
              }
              goto LAB_104f338f4;
            }
          }
          if (0 < iVar18) {
            puVar10 = ppuVar2[8];
            func_0x00010c0dff20(puVar10,param_2,ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 != (undefined *)0x0) {
              puVar15 = puVar10;
              func_0x00010c067ec0(puVar10);
              puVar16 = ppuVar2[8];
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)puVar15 + iVar18
                                 );
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar16,param_2,puVar11,ppuVar4);
              _objc_release(puVar11);
            }
            _objc_release(puVar10);
          }
          _objc_release(ppuVar5);
        }
        _objc_release(ppuVar4);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar22 != ppuVar3);
      puVar1 = &uStack_300;
      ppuVar3 = ppuVar12;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
    ___stack_chk_fail();
    _objc_retain(puVar1);
    puVar13 = puVar1;
    func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f487d8);
    if (((ulong)puVar13 & 1) == 0) {
      puVar13 = puVar1;
      func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f48818);
      if (((ulong)puVar13 & 1) == 0) {
        puVar13 = puVar1;
        func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f48998);
        if (((ulong)puVar13 & 1) == 0) {
          puVar13 = puVar1;
          func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f487f8);
          if (((ulong)puVar13 & 1) == 0) {
            puVar13 = puVar1;
            func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f48838);
            if (((ulong)puVar13 & 1) == 0) {
              puVar13 = puVar1;
              func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f489b8);
              ppuVar12 = &PTR____CFConstantStringClassReference_110dbb758;
              if ((int)puVar13 == 0) {
                ppuVar12 = &PTR____CFConstantStringClassReference_110dbb6f8;
              }
            }
            else {
              ppuVar12 = &PTR____CFConstantStringClassReference_110dbb738;
            }
          }
          else {
            ppuVar12 = &PTR____CFConstantStringClassReference_110dbb718;
          }
        }
        else {
          ppuVar12 = &PTR____CFConstantStringClassReference_110db9e78;
        }
      }
      else {
        ppuVar12 = &PTR____CFConstantStringClassReference_110dbb6b8;
      }
    }
    else {
      ppuVar12 = &PTR____CFConstantStringClassReference_110dbb6d8;
    }
    _objc_release(puVar1);
    return ppuVar12;
  }
  return ppuVar12;
}



/* Entry: 104f33660; end: 104f33a07; -[SCCreateChatLogger onSectionIdentifierToSelectionItemsMapUpdate:] */

undefined ** FUN_104f33660(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bde0ea0(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010bde0ea0(param_1,param_2,*(undefined8 *)(param_1 + 0x50));
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar11 = &uStack_1b0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar17 = *plStack_1a0;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if (*plStack_1a0 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_1a8 + (long)ppuVar18 * 8);
        lVar2 = param_1;
        func_0x00010bde9420(param_1,param_2,uVar15);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          ppuVar3 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar15);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010bf529e0();
          iVar13 = (int)ppuVar4;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          _objc_retain(ppuVar3);
          ppuVar4 = ppuVar3;
          func_0x00010bf52a60(ppuVar3,param_2,&uStack_1f0,auStack_170,0x10);
          ppuVar12 = ppuVar3;
          if (ppuVar4 == (undefined **)0x0) {
LAB_104f338f4:
            _objc_release(ppuVar12);
          }
          else {
            iVar16 = 0;
            lVar14 = *plStack_1e0;
            do {
              ppuVar12 = (undefined **)0x0;
              do {
                if (*plStack_1e0 != lVar14) {
                  _objc_enumerationMutation(ppuVar3);
                }
                uVar5 = *(undefined8 *)(lStack_1e8 + (long)ppuVar12 * 8);
                func_0x00010c122a80();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar5;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar15;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                func_0x00010c0720c0();
                _objc_release(uVar6);
                _objc_release(uVar15);
                _objc_release(uVar5);
                iVar16 = iVar16 + (int)uVar7;
                ppuVar12 = (undefined **)((long)ppuVar12 + 1);
              } while (ppuVar4 != ppuVar12);
              ppuVar4 = ppuVar3;
              func_0x00010bf52a60(ppuVar3,param_2,&uStack_1f0,auStack_170,0x10);
            } while (ppuVar4 != (undefined **)0x0);
            _objc_release(ppuVar3);
            iVar13 = iVar13 - iVar16;
            if (0 < iVar16) {
              ppuVar12 = *(undefined ***)(param_1 + 0x50);
              func_0x00010c0dff20(ppuVar12,param_2,lVar2);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar12 != (undefined **)0x0) {
                ppuVar4 = ppuVar12;
                func_0x00010c067ec0(ppuVar12);
                uVar15 = *(undefined8 *)(param_1 + 0x50);
                puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                                    (int)ppuVar4 + iVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(uVar15,param_2,puVar8,lVar2);
                _objc_release(puVar8);
              }
              goto LAB_104f338f4;
            }
          }
          if (0 < iVar13) {
            lVar14 = *(long *)(param_1 + 0x40);
            func_0x00010c0dff20(lVar14,param_2,lVar2);
            _objc_retainAutoreleasedReturnValue();
            if (lVar14 != 0) {
              lVar9 = lVar14;
              func_0x00010c067ec0(lVar14);
              uVar15 = *(undefined8 *)(param_1 + 0x40);
              puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)lVar9 + iVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(uVar15,param_2,puVar8,lVar2);
              _objc_release(puVar8);
            }
            _objc_release(lVar14);
          }
          _objc_release(ppuVar3);
        }
        _objc_release(lVar2);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar18 != ppuVar1);
      puVar11 = &uStack_1b0;
      ppuVar1 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    puVar10 = puVar11;
    func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110f487d8);
    if (((ulong)puVar10 & 1) == 0) {
      puVar10 = puVar11;
      func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110f48818);
      if (((ulong)puVar10 & 1) == 0) {
        puVar10 = puVar11;
        func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110f48998);
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = puVar11;
          func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110f487f8);
          if (((ulong)puVar10 & 1) == 0) {
            puVar10 = puVar11;
            func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110f48838);
            if (((ulong)puVar10 & 1) == 0) {
              puVar10 = puVar11;
              func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110f489b8);
              ppuVar1 = &PTR____CFConstantStringClassReference_110dbb758;
              if ((int)puVar10 == 0) {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6f8;
              }
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110dbb738;
            }
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dbb718;
          }
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
        }
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6b8;
      }
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6d8;
    }
    _objc_release(puVar11);
    return ppuVar1;
  }
  return param_3;
}



/* Entry: 104f33a08; end: 104f33aef; -[SCCreateChatLogger _convertSectionSourceToSectionName:] */

undefined ** FUN_104f33a08(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f487d8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f48818);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f48998);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f487f8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f48838);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f489b8);
            ppuVar2 = &PTR____CFConstantStringClassReference_110dbb758;
            if ((int)uVar1 == 0) {
              ppuVar2 = &PTR____CFConstantStringClassReference_110dbb6f8;
            }
          }
          else {
            ppuVar2 = &PTR____CFConstantStringClassReference_110dbb738;
          }
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110dbb718;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db9e78;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dbb6b8;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbb6d8;
  }
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 104f33af0; end: 104f33b83; -[SCCreateChatLogger _initializeAvailableSectionsToCellCountDictionary] */

void FUN_104f33af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb6b8);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb6f8);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb738);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f33b84; end: 104f33c2b; -[SCCreateChatLogger _initializeSelectedSectionsToCellCountDictionary] */

void FUN_104f33b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb6b8);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb6f8);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110db9e78);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb738);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f33c2c; end: 104f33c97; -[SCCreateChatLogger _initializeContactSelectedSectionsToCellCountDictionary] */

void FUN_104f33c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb738);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f33c98; end: 104f33d03; -[SCCreateChatLogger _initializeContactAvailableSectionsToCellCountDictionary] */

void FUN_104f33c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb738);
  func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                      &PTR____CFConstantStringClassReference_110dbb758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f33d04; end: 104f33d8b; -[SCCreateChatLogger _jsonStringForDictionary:] */

void FUN_104f33d04(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104f33d8c; end: 104f33eab; -[SCCreateChatLogger _clearSectionsToCellsCountDictionary:] */

ulong FUN_104f33d8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
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
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar3 = *plStack_110;
    do {
      uVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010c1d0640(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be4f8,
                            *(undefined8 *)(lStack_118 + uVar4 * 8));
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      uVar2 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(param_3 + 0x58);
}



/* Entry: 104f33eac; end: 104f33eb3; -[SCCreateChatLogger didInputGroupName] */

undefined1 FUN_104f33eac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



/* Entry: 104f33eb4; end: 104f33ebb; -[SCCreateChatLogger setDidInputGroupName:] */

void FUN_104f33eb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 104f33ebc; end: 104f33ec3; -[SCCreateChatLogger didRenderSuccessfully] */

undefined1 FUN_104f33ebc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 104f33ec4; end: 104f33ecb; -[SCCreateChatLogger setDidRenderSuccessfully:] */

void FUN_104f33ec4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 104f33ecc; end: 104f33ed3; -[SCCreateChatLogger didSelectNewGroup] */

undefined1 FUN_104f33ecc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5a);
}



/* Entry: 104f33ed4; end: 104f33edb; -[SCCreateChatLogger setDidSelectNewGroup:] */

void FUN_104f33ed4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5a) = param_3;
  return;
}


