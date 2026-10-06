/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e78e70; end: 104e78f33; -[SCAddFriendsPageEntryPoint _actionMenuPresenterWithPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e78e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1670;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar2 = 0;
    param_1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112714ff4);
    _objc_retain(uVar2);
    param_1 = param_1 + _DAT_112714fbc;
    _objc_loadWeakRetained(param_1);
  }
  func_0x00010c0334a0(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e4c0,param_3,uVar2,
                      param_1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e78f34; end: 104e79007; -[SCAddFriendsPageEntryPoint _userSearchingDependenciesWithsearchUIUserSearchingFactory:presentingViewController:] */

void FUN_104e78f34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104e79008;
    puStack_40 = &UNK_110855740;
    puVar2 = PTR_PTR_1126ae720;
    lStack_38 = lVar1;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e79008; end: 104e7909b;  */

void FUN_104e79008(void)

{
  _objc_alloc(PTR_PTR_1126b1678);
  func_0x00010c017a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7909c; end: 104e790f3; -[SCAddFriendsPageEntryPoint _composerBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7909c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112714fd4;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e790f4; end: 104e7923f; -[SCAddFriendsPageEntryPoint _addFriendsHooksProviderFromPlacement:seenAndAddEventLogger:pageEventDataSubject:hideSuggestionLogger:incomingFriendStore:activeStoryFetcher:circumstanceEngine:quickAddRefresher:debuggingInfoFetcher:pageLoadMetricManager:performerProvider:] */

void FUN_104e790f4(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  puVar1 = PTR_PTR_1126b1680;
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c0438c0();
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e79240; end: 104e79643; -[SCAddFriendsPageEntryPoint _createAddFriendsActionHandlerWithViewController:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e79240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126b1688;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112714f74;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038d40();
  _objc_release(lVar1);
  func_0x00010c1d0640(puVar3);
  puVar5 = PTR_PTR_1126b1690;
  _objc_alloc(PTR_PTR_1126b1690);
  lVar1 = param_1 + _DAT_112714fc0;
  _objc_loadWeakRetained(lVar1);
  lVar14 = param_1 + _DAT_112714f7c;
  _objc_loadWeakRetained(lVar14);
  lVar6 = lVar14;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038d00(puVar5);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715018;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar6;
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1698;
  func_0x00010befe6e0(PTR_PTR_1126b1698);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf1f320(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar1);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112714f80);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112714f84);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112714f88);
  lVar1 = param_1 + _DAT_112714f8c;
  _objc_loadWeakRetained(lVar1);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112714f90);
  lVar14 = param_1 + _DAT_112714f94;
  _objc_loadWeakRetained();
  uVar8 = param_3;
  func_0x00010699f4e0(param_3,uVar12,uVar15,uVar16,lVar1,uVar13,lVar7,0,0,lVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar1);
  func_0x00010bef7f60(puVar3);
  puVar5 = PTR_PTR_1126b16a0;
  lVar14 = (long)_DAT_112714f98;
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c0d4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar9 = lVar14;
  func_0x00010c0d4a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee5a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(lVar1);
  func_0x00010bef7f60(puVar3);
  puVar10 = PTR_PTR_1126b16a8;
  _objc_alloc(PTR_PTR_1126b16a8);
  param_1 = param_1 + _DAT_112714fb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038d60(puVar10);
  _objc_release(param_3);
  _objc_release(param_1);
  func_0x00010c1d0640(puVar3);
  puVar11 = PTR_PTR_1126b16b0;
  _objc_alloc(PTR_PTR_1126b16b0);
  func_0x00010c049c40();
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104e79644; end: 104e79863; -[SCAddFriendsPageEntryPoint _iOS18contactSyncUpsellViewFactory:circumstanceEngine:contactPermissionManager:delegate:] */

void FUN_104e79644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_6);
  _objc_retain();
  _objc_release(param_6);
  if (param_6 != 0) {
    lVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf49c00();
    _objc_release(lVar2);
    if (lVar3 != 3) {
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar1 != 0) {
        uVar4 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c142e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(param_4);
        _objc_opt_class(PTR_PTR_1126b16b8);
        uVar4 = uVar5;
        func_0x00010c0b7ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ae720;
        func_0x00010bf11fe0(PTR_PTR_1126ae720);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_70);
        _objc_release(uVar5);
        goto LAB_104e797f4;
      }
    }
  }
  puVar6 = (undefined *)0x0;
LAB_104e797f4:
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e79864; end: 104e798cf;  */

void FUN_104e79864(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b16b8;
  _objc_alloc(PTR_PTR_1126b16b8);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108c07984(uVar3);
  func_0x00010c04a6e0(puVar1,param_2,4,lVar2,uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e798d0; end: 104e798eb;  */

void FUN_104e798d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c3fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMeasureDelegate__11264ea10,&PTR___NSConcreteGlobalBlock_110855800);
  return;
}



/* Entry: 104e798ec; end: 104e79913;  */

void FUN_104e798ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e79914; end: 104e799fb; -[SCAddFriendsPageEntryPoint dismissAddFriendsVCAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e79914(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112714f1c;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    func_0x00010bf6f440(lVar2,param_2,param_4);
  }
  uVar3 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c294b20();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bef8fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8fa0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e799fc; end: 104e79a4b; -[SCAddFriendsPageEntryPoint onAddFriendsVCDeallocated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e799fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112714f1c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef8fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8fa0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e79a4c; end: 104e79def; -[SCAddFriendsPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e79a4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714f94);
  _objc_destroyWeak(param_1 + _DAT_112715028);
  _objc_destroyWeak(param_1 + _DAT_112714f6c);
  _objc_destroyWeak(param_1 + _DAT_112715024);
  _objc_destroyWeak(param_1 + _DAT_112715020);
  _objc_destroyWeak(param_1 + _DAT_112714f68);
  _objc_destroyWeak(param_1 + _DAT_11271501c);
  _objc_destroyWeak(param_1 + _DAT_112715018);
  _objc_destroyWeak(param_1 + _DAT_112714f34);
  _objc_destroyWeak(param_1 + _DAT_112714f64);
  _objc_storeStrong(param_1 + _DAT_112714f60,0);
  _objc_destroyWeak(param_1 + _DAT_112715014);
  _objc_storeStrong(param_1 + _DAT_112715010,0);
  _objc_destroyWeak(param_1 + _DAT_112714f44);
  _objc_destroyWeak(param_1 + _DAT_11271500c);
  _objc_storeStrong(param_1 + _DAT_112714f9c,0);
  _objc_storeStrong(param_1 + _DAT_112715008,0);
  _objc_storeStrong(param_1 + _DAT_112714f84,0);
  _objc_storeStrong(param_1 + _DAT_112714f90,0);
  _objc_destroyWeak(param_1 + _DAT_112714f8c);
  _objc_storeStrong(param_1 + _DAT_112714f88,0);
  _objc_storeStrong(param_1 + _DAT_112714f78,0);
  _objc_storeStrong(param_1 + _DAT_112714f80,0);
  _objc_destroyWeak(param_1 + _DAT_112715004);
  _objc_destroyWeak(param_1 + _DAT_112715000);
  _objc_destroyWeak(param_1 + _DAT_112714ffc);
  _objc_destroyWeak(param_1 + _DAT_112714ff8);
  _objc_destroyWeak(param_1 + _DAT_112714f7c);
  _objc_storeStrong(param_1 + _DAT_112714f70,0);
  _objc_storeStrong(param_1 + _DAT_112714ff4,0);
  _objc_destroyWeak(param_1 + _DAT_112714ff0);
  _objc_destroyWeak(param_1 + _DAT_112714f98);
  _objc_destroyWeak(param_1 + _DAT_112714f30);
  _objc_destroyWeak(param_1 + _DAT_112714fec);
  _objc_destroyWeak(param_1 + _DAT_112714fe8);
  _objc_destroyWeak(param_1 + _DAT_112714fe4);
  _objc_destroyWeak(param_1 + _DAT_112714fe0);
  _objc_destroyWeak(param_1 + _DAT_112714fdc);
  _objc_destroyWeak(param_1 + _DAT_112714fd8);
  _objc_destroyWeak(param_1 + _DAT_112714f50);
  _objc_destroyWeak(param_1 + _DAT_112714fd4);
  _objc_destroyWeak(param_1 + _DAT_112714fd0);
  _objc_destroyWeak(param_1 + _DAT_112714fcc);
  _objc_destroyWeak(param_1 + _DAT_112714fc8);
  _objc_destroyWeak(param_1 + _DAT_112714fc4);
  _objc_destroyWeak(param_1 + _DAT_112714f74);
  _objc_destroyWeak(param_1 + _DAT_112714f1c);
  _objc_destroyWeak(param_1 + _DAT_112714fc0);
  _objc_destroyWeak(param_1 + _DAT_112714fbc);
  _objc_destroyWeak(param_1 + _DAT_112714fb8);
  _objc_destroyWeak(param_1 + _DAT_112714fb4);
  _objc_destroyWeak(param_1 + _DAT_112714fb0);
  _objc_destroyWeak(param_1 + _DAT_112714f2c);
  _objc_destroyWeak(param_1 + _DAT_112714fac);
  _objc_destroyWeak(param_1 + _DAT_112714fa8);
  _objc_destroyWeak(param_1 + _DAT_112714fa4);
  _objc_destroyWeak(param_1 + _DAT_112714f38);
  _objc_destroyWeak(param_1 + _DAT_112714fa0);
  _objc_storeStrong(param_1 + _DAT_112714f5c,0);
  _objc_storeStrong(param_1 + _DAT_112714f3c,0);
  _objc_storeStrong(param_1 + _DAT_112714f24,0);
  _objc_storeStrong(param_1 + _DAT_112714f20,0);
  _objc_storeStrong(param_1 + _DAT_112714f40,0);
  _objc_storeStrong(param_1 + _DAT_112714f48,0);
  _objc_storeStrong(param_1 + _DAT_112714f28,0);
  _objc_storeStrong(param_1 + _DAT_112714f58,0);
  _objc_storeStrong(param_1 + _DAT_112714f54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714f4c,0);
  return;
}



/* Entry: 104e79df0; end: 104e79f67; -[SCAddFriendsSeenStatusMarker initWithPageEventObservable:snapchattersDataFetcher:viewedIncomingFriendsTracker:userPreferences:performerProvider:] */

undefined1 *
FUN_104e79df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e4980;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdef1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined1 **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010be667e0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e79f68; end: 104e7a05b; -[SCAddFriendsSeenStatusMarker _createLazyPerformerWithProvider:] */

void FUN_104e79f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e7a000;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e7a05c; end: 104e7a197; -[SCAddFriendsSeenStatusMarker _observePageEventData:inLifecycle:] */

void FUN_104e7a05c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
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
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7a198; end: 104e7a2e7;  */

void FUN_104e7a198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e7a2e8;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104e7a314;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c15e0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104e7a2e8; end: 104e7a387;  */

void FUN_104e7a2e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7a388; end: 104e7a3eb; -[SCAddFriendsSeenStatusMarker _viewWillDisappear] */

void FUN_104e7a388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010be5d520();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4ac0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7a3ec; end: 104e7a4f7; -[SCAddFriendsSeenStatusMarker _willDisplayCell:] */

void FUN_104e7a3ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_3;
  func_0x00010bfec9e0(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      func_0x00010befa120();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar4,lVar1);
    }
    else {
      puVar4 = *(undefined **)(param_1 + 0x30);
      func_0x00010c0e00e0(puVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e7a4f8; end: 104e7a5ff; -[SCAddFriendsSeenStatusMarker _willDealloc] */

void FUN_104e7a4f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x30),param_2,
                            *(undefined8 *)(lStack_108 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08b0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb6e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104e7a600; end: 104e7a677; -[SCAddFriendsSeenStatusMarker _markIncomingFriendsViewed] */

void FUN_104e7a600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08b0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb6e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e7a678; end: 104e7a6e3; -[SCAddFriendsSeenStatusMarker .cxx_destruct] */

void FUN_104e7a678(long param_1)

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



/* Entry: 104e7a6e4; end: 104e7a70f; +[SCGrapheneHideSuggestionMetric hide] */

void FUN_104e7a6e4(void)

{
  _objc_alloc(PTR_PTR_1126b15f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7a710; end: 104e7a73b; +[SCGrapheneHideSuggestionMetric unhide] */

void FUN_104e7a710(void)

{
  _objc_alloc(PTR_PTR_1126b15f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7a73c; end: 104e7a767; +[SCGrapheneHideSuggestionMetric setFeedback] */

void FUN_104e7a73c(void)

{
  _objc_alloc(PTR_PTR_1126b15f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7a768; end: 104e7a793; +[SCGrapheneHideSuggestionMetric commit] */

void FUN_104e7a768(void)

{
  _objc_alloc(PTR_PTR_1126b15f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7a794; end: 104e7a7bf; +[SCGrapheneHideSuggestionMetric hiddenCount] */

void FUN_104e7a794(void)

{
  _objc_alloc(PTR_PTR_1126b15f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7a7c0; end: 104e7a7eb; +[SCGrapheneHideSuggestionMetric feedbackSetRatio] */

void FUN_104e7a7c0(void)

{
  _objc_alloc(PTR_PTR_1126b15f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7a7ec; end: 104e7a88b; -[SCGrapheneHideSuggestionMetric description] */

void FUN_104e7a7ec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db81d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db81d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e4988;
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



/* Entry: 104e7a88c; end: 104e7a9ff; -[SCGrapheneRegistry hideSuggestionGraphene] */

void FUN_104e7a88c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e7a914;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b90d8 != -1) {
    func_0x00010002a2fc(0x1136b90d8,&puStack_48);
  }
  uVar1 = uRam00000001136b90d0;
  _objc_retain(uRam00000001136b90d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e7aa00; end: 104e7aa73; -[SCGrapheneFriendingMetadataMetric2 init] */

undefined1 * FUN_104e7aa00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e7aa74; end: 104e7ac5f;  */

char * FUN_104e7aa74(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  char *pcStack_3f0;
  undefined *puStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar8 = param_4;
  iVar6 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar7 = &UNK_110855880;
    pcVar1 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855880,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      iVar6 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_104e7ac60;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  uVar9 = uVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  iVar5 = iVar6;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_1108558d0;
    pcVar3 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108558d0,pcVar3,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      iVar5 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_148 = FUN_104e7ae4c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  uVar8 = uVar9;
  ppuStack_150 = &puStack_b0;
  iVar6 = iVar5;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    puVar7 = &UNK_110855920;
    pcVar1 = acStack_1d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855920,pcVar1,uVar9);
    pcStack_1c0 = acStack_1d8;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar10 = 0;
    uVar8 = uVar9;
    do {
      if ((&cStack_189)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
      }
      iVar6 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcStack_1e8 = FUN_104e7b038;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  uVar9 = uVar8;
  pppuStack_1f0 = &ppuStack_150;
  iVar5 = iVar6;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    puVar7 = &UNK_110855970;
    pcVar3 = acStack_278;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855970,pcVar3,uVar8);
    pcStack_260 = acStack_278;
    func_0x00010007e5dc(&pcStack_260);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_229)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar10));
      }
      iVar5 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_288 = FUN_104e7b224;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  uVar8 = uVar9;
  pppuStack_290 = &pppuStack_1f0;
  iVar6 = iVar5;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2f8,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar1);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    puVar7 = &UNK_1108559c0;
    pcVar1 = acStack_318;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108559c0,pcVar1,uVar9);
    pcStack_300 = acStack_318;
    func_0x00010007e5dc(&pcStack_300);
    lVar10 = 0;
    uVar8 = uVar9;
    do {
      if ((&cStack_2c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar10));
      }
      iVar6 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcStack_328 = FUN_104e7b410;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_380,pcVar2);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855a10,&uStack_3b8,uVar8);
    puStack_3a0 = &uStack_3b8;
    func_0x00010007e5dc(&puStack_3a0);
    lVar10 = 0;
    do {
      if ((&cStack_369)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_3f0;
  pcStack_3c8 = FUN_104e7b5fc;
  puStack_3e8 = PTR_PTR_1126e4998;
  pcStack_3f0 = pcVar3;
  pcStack_3e0 = pcVar2;
  pcStack_3d8 = pcVar1;
  pppuStack_3d0 = &pppuStack_330;
  _objc_msgSendSuper2(&pcStack_3f0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104e7ac60; end: 104e7ae4b;  */

char * FUN_104e7ac60(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  char *pcStack_350;
  undefined *puStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar8 = param_4;
  iVar4 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar6 = &UNK_1108558d0;
    pcVar1 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108558d0,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      iVar4 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_104e7ae4c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  uVar9 = uVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  iVar5 = iVar4;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110855920;
    pcVar7 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855920,pcVar7,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      iVar5 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_148 = FUN_104e7b038;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  uVar8 = uVar9;
  ppuStack_150 = &puStack_b0;
  iVar4 = iVar5;
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    puVar6 = &UNK_110855970;
    pcVar1 = acStack_1d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855970,pcVar1,uVar9);
    pcStack_1c0 = acStack_1d8;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar10 = 0;
    uVar8 = uVar9;
    do {
      if ((&cStack_189)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
      }
      iVar4 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcStack_1e8 = FUN_104e7b224;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  uVar9 = uVar8;
  pppuStack_1f0 = &ppuStack_150;
  iVar5 = iVar4;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    puVar6 = &UNK_1108559c0;
    pcVar7 = acStack_278;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108559c0,pcVar7,uVar8);
    pcStack_260 = acStack_278;
    func_0x00010007e5dc(&pcStack_260);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_229)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar10));
      }
      iVar5 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_288 = FUN_104e7b410;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2f8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_2e0,pcVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855a10,&uStack_318,uVar9);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar10 = 0;
    do {
      if ((&cStack_2c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_350;
  pcStack_328 = FUN_104e7b5fc;
  puStack_348 = PTR_PTR_1126e4998;
  pcStack_350 = pcVar2;
  pcStack_340 = pcVar1;
  pcStack_338 = pcVar7;
  pppuStack_330 = &pppuStack_290;
  _objc_msgSendSuper2(&pcStack_350,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104e7ae4c; end: 104e7b037;  */

char * FUN_104e7ae4c(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  char *pcStack_2b0;
  undefined *puStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar8 = param_4;
  iVar6 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar7 = &UNK_110855920;
    pcVar1 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855920,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      iVar6 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_104e7b038;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  uVar9 = uVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  iVar5 = iVar6;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110855970;
    pcVar3 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855970,pcVar3,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      iVar5 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_148 = FUN_104e7b224;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  uVar8 = uVar9;
  ppuStack_150 = &puStack_b0;
  iVar6 = iVar5;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    puVar7 = &UNK_1108559c0;
    pcVar1 = acStack_1d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108559c0,pcVar1,uVar9);
    pcStack_1c0 = acStack_1d8;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar10 = 0;
    uVar8 = uVar9;
    do {
      if ((&cStack_189)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
      }
      iVar6 = (int)puVar7;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcStack_1e8 = FUN_104e7b410;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_240,pcVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855a10,&uStack_278,uVar8);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar10 = 0;
    do {
      if ((&cStack_229)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_2b0;
  pcStack_288 = FUN_104e7b5fc;
  puStack_2a8 = PTR_PTR_1126e4998;
  pcStack_2b0 = pcVar3;
  pcStack_2a0 = pcVar2;
  pcStack_298 = pcVar1;
  pppuStack_290 = &pppuStack_1f0;
  _objc_msgSendSuper2(&pcStack_2b0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104e7b038; end: 104e7b223;  */

char * FUN_104e7b038(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  char *pcStack_210;
  undefined *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar8 = param_4;
  iVar4 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar6 = &UNK_110855970;
    pcVar1 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855970,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      iVar4 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_104e7b224;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  uVar9 = uVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  iVar5 = iVar4;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_1108559c0;
    pcVar7 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108559c0,pcVar7,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      iVar5 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_148 = FUN_104e7b410;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110855a10,&uStack_1d8,uVar9);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar10 = 0;
    do {
      if ((&cStack_189)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_210;
  pcStack_1e8 = FUN_104e7b5fc;
  puStack_208 = PTR_PTR_1126e4998;
  pcStack_210 = pcVar2;
  pcStack_200 = pcVar1;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_msgSendSuper2(&pcStack_210,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104e7b224; end: 104e7b40f;  */

char * FUN_104e7b224(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char *pcStack_170;
  undefined *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar7 = param_4;
  iVar5 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar6 = &UNK_1108559c0;
    pcVar1 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108559c0,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      iVar5 = (int)puVar6;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_104e7b410;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110855a10,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_170;
  pcStack_148 = FUN_104e7b5fc;
  puStack_168 = PTR_PTR_1126e4998;
  pcStack_170 = pcVar3;
  pcStack_160 = pcVar2;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_170,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104e7b410; end: 104e7b5fb;  */

char * FUN_104e7b410(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long lVar4;
  long *plVar5;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110855a10,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_d0;
  pcStack_a8 = FUN_104e7b5fc;
  puStack_c8 = PTR_PTR_1126e4998;
  pcStack_d0 = pcVar2;
  pcStack_c0 = pcVar1;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104e7b5fc; end: 104e7b66f; -[SCGrapheneAddFriendsMetadataMetric2 init] */

undefined1 * FUN_104e7b5fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4998;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e7b670; end: 104e7b7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7b670(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110855b20,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar6 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110855b70,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar2);
  pcVar1 = pcVar2 + _DAT_112715050;
  _objc_loadWeakRetained(pcVar1);
  pcVar3 = pcVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1e0(pcVar2);
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104e7b7e4; end: 104e7b957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7b7e4(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110855b70,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  pcVar2 = pcVar1 + _DAT_112715050;
  _objc_loadWeakRetained(pcVar2);
  pcVar3 = pcVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1e0(pcVar1);
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 104e7b958; end: 104e7b9b7; -[SCAllContactsPageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7b958(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112715050;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a1e0(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e7b9b8; end: 104e7c497; -[SCAllContactsPageEntryPoint _presentAllContactsPageWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7b9b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  undefined1 uStack_e0;
  
  _objc_retain(param_4);
  lVar38 = param_2;
  FUN_104e7c498();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar38;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  lVar38 = param_2;
  FUN_104e7c498();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar38;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  lVar38 = param_2;
  FUN_104e7c498();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar38;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  lVar38 = param_2;
  FUN_104e7c498();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar38;
  func_0x00010c0dafe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  puVar5 = PTR_PTR_1126b16c0;
  _objc_alloc();
  lVar38 = param_2;
  FUN_104e7c498(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar38;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015a40();
  _objc_release(lVar6);
  _objc_release(lVar38);
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_1127150a4;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar38;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_11271508c;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar38;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar40;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar40);
  _objc_release(lVar38);
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_112715088;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar38;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  lVar38 = param_2;
  func_0x000104e7c4bc();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar38;
  func_0x00010c06a7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar40;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar40);
  _objc_release(lVar38);
  lVar38 = param_2;
  func_0x000104e7c4bc();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar38;
  func_0x00010c06a7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar40;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar40);
  _objc_release(lVar38);
  lVar40 = (long)_DAT_112715054;
  lVar38 = param_2 + lVar40;
  _objc_loadWeakRetained();
  lVar11 = lVar38;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x000104e7c4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x000108c7c620(lVar11,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar38);
  if ((int)lVar13 == 0) {
    uStack_e0 = 0;
  }
  else {
    lVar38 = param_2 + lVar40;
    _objc_loadWeakRetained();
    lVar11 = lVar38;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x000108c7c7a4();
    uStack_e0 = (undefined1)lVar12;
    _objc_release(lVar11);
    _objc_release(lVar38);
    lVar38 = param_2 + lVar40;
    _objc_loadWeakRetained();
    lVar11 = lVar38;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108c7c7ec();
    _objc_release(lVar11);
    _objc_release(lVar38);
  }
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_1127150b4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar38;
  func_0x00010c0653e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_1127150b8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar38;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_112715098;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar38;
  func_0x00010bf4a720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar38);
  puVar14 = PTR_PTR_1126b16c8;
  _objc_alloc();
  lVar38 = param_2;
  func_0x000104e7c4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar38;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar16 == (undefined *)0x0) {
    param_1 = 0x10000000000000;
  }
  else {
    func_0x00010c26f320();
  }
  lVar17 = param_2 + lVar40;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2 + _DAT_112715058;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf4a300();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112715050;
  lVar21 = param_2 + lVar33;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f1a0();
  lVar23 = param_2 + _DAT_11271505c;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c122860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2 + _DAT_112715060;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049b00(param_1);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar38);
  puVar16 = PTR_PTR_1126b16d0;
  _objc_alloc();
  lVar38 = param_2 + lVar33;
  _objc_loadWeakRetained(lVar38);
  lVar15 = lVar38;
  func_0x00010beffd60();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2 + lVar33;
  _objc_loadWeakRetained(lVar33);
  lVar17 = lVar33;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f1a0();
  func_0x00010c042ee0();
  _objc_release(lVar17);
  _objc_release(lVar33);
  _objc_release(lVar15);
  _objc_release(lVar38);
  puVar27 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c21b220(puVar14);
  _objc_release(puVar27);
  func_0x00010c19cbc0(puVar14);
  if (param_2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_2 + _DAT_112715094;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar38;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar38);
  if (param_2 == 0) {
    uVar39 = 0;
  }
  else {
    uVar39 = param_2 + _DAT_1127150cc;
    _objc_loadWeakRetained();
  }
  uVar28 = uVar39;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar39);
  uVar39 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126b1698;
  func_0x00010befe6e0(PTR_PTR_1126b1698);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar39;
  func_0x00010bf1f320();
  _objc_release(puVar27);
  _objc_release(uVar39);
  uVar37 = *(undefined8 *)(param_2 + _DAT_112715064);
  uVar34 = *(undefined8 *)(param_2 + _DAT_112715068);
  uVar35 = *(undefined8 *)(param_2 + _DAT_11271506c);
  lVar38 = param_2 + _DAT_112715070;
  _objc_loadWeakRetained();
  uVar36 = *(undefined8 *)(param_2 + _DAT_112715074);
  lVar15 = param_2 + _DAT_112715078;
  _objc_loadWeakRetained();
  lVar33 = lVar15;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2 + _DAT_11271507c;
  _objc_loadWeakRetained();
  lVar18 = lVar19;
  func_0x00010c06a600();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar17;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2 + _DAT_1127150ac;
  _objc_loadWeakRetained();
  lVar24 = lVar21;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2 + _DAT_1127150bc;
  _objc_loadWeakRetained();
  lVar26 = lVar23;
  func_0x00010bf4aa00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2 + _DAT_1127150c8;
  _objc_loadWeakRetained();
  lVar30 = lVar25;
  func_0x00010c22d320();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_2 + lVar40;
  _objc_loadWeakRetained();
  lVar31 = lVar40;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + _DAT_112715080;
  _objc_loadWeakRetained();
  puVar27 = puVar16;
  func_0x00010699ebf8(puVar16,lVar9,lVar10,uVar37,uVar34,uVar35,lVar38,uVar36,lVar33,lVar18,lVar22,
                      lVar24,lVar26,lVar30,uStack_e0,lVar31,uVar29 & 0xff,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar31);
  _objc_release(lVar40);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar26);
  _objc_release(lVar23);
  _objc_release(lVar24);
  _objc_release(lVar21);
  _objc_release(lVar22);
  _objc_release(lVar20);
  _objc_release(lVar18);
  _objc_release(lVar19);
  _objc_release(lVar33);
  _objc_release(lVar15);
  _objc_release(lVar38);
  puVar32 = PTR_PTR_1126b16b0;
  _objc_alloc(PTR_PTR_1126b16b0);
  func_0x00010c049c40();
  func_0x00010c161980(puVar14);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar32);
  _objc_release(puVar27);
  _objc_release(uVar28);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e7c498; end: 104e7c503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7c498(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715084);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7c504; end: 104e7c6b3; -[SCAllContactsPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7c504(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715080);
  _objc_destroyWeak(param_1 + _DAT_112715070);
  _objc_storeStrong(param_1 + _DAT_11271506c,0);
  _objc_storeStrong(param_1 + _DAT_112715074,0);
  _objc_storeStrong(param_1 + _DAT_112715068,0);
  _objc_storeStrong(param_1 + _DAT_112715064,0);
  _objc_destroyWeak(param_1 + _DAT_1127150cc);
  _objc_destroyWeak(param_1 + _DAT_112715060);
  _objc_destroyWeak(param_1 + _DAT_11271505c);
  _objc_destroyWeak(param_1 + _DAT_11271507c);
  _objc_destroyWeak(param_1 + _DAT_1127150c8);
  _objc_destroyWeak(param_1 + _DAT_1127150c4);
  _objc_destroyWeak(param_1 + _DAT_1127150c0);
  _objc_destroyWeak(param_1 + _DAT_112715058);
  _objc_destroyWeak(param_1 + _DAT_1127150bc);
  _objc_destroyWeak(param_1 + _DAT_1127150b8);
  _objc_destroyWeak(param_1 + _DAT_1127150b4);
  _objc_destroyWeak(param_1 + _DAT_1127150b0);
  _objc_destroyWeak(param_1 + _DAT_1127150ac);
  _objc_destroyWeak(param_1 + _DAT_1127150a8);
  _objc_destroyWeak(param_1 + _DAT_1127150a4);
  _objc_destroyWeak(param_1 + _DAT_112715054);
  _objc_destroyWeak(param_1 + _DAT_1127150a0);
  _objc_destroyWeak(param_1 + _DAT_112715078);
  _objc_destroyWeak(param_1 + _DAT_11271509c);
  _objc_destroyWeak(param_1 + _DAT_112715098);
  _objc_destroyWeak(param_1 + _DAT_112715094);
  _objc_destroyWeak(param_1 + _DAT_112715090);
  _objc_destroyWeak(param_1 + _DAT_11271508c);
  _objc_destroyWeak(param_1 + _DAT_112715088);
  _objc_destroyWeak(param_1 + _DAT_112715084);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715050);
  return;
}



/* Entry: 104e7c6b4; end: 104e7c6bf; +[SCAddFriendsContactNonSnapchatterSectionDataProvider announcerIdentifier] */

undefined ** FUN_104e7c6b4(void)

{
  return &PTR____CFConstantStringClassReference_110db82d8;
}



/* Entry: 104e7c6c0; end: 104e7c6c7; -[SCAddFriendsContactNonSnapchatterSectionDataProvider addListener:] */

void FUN_104e7c6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104e7c6c8; end: 104e7c6cf; -[SCAddFriendsContactNonSnapchatterSectionDataProvider removeListener:] */

void FUN_104e7c6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104e7c6d0; end: 104e7c91f; -[SCAddFriendsContactNonSnapchatterSectionDataProvider initWithDataProvider:snapchattersDataTracker:imageDownloader:stateTracker:viewModelGenerator:displayFilter:enableTwilioInvites:circumstanceEngine:contactPhotosService:avatarFactory:] */

undefined8 *
FUN_104e7c6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e49a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 10) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(puVar1[5]);
    uVar2 = puVar1[8];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e7c920; end: 104e7c9c7; -[SCAddFriendsContactNonSnapchatterSectionDataProvider reloadSections] */

void FUN_104e7c920(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e7c9c8; end: 104e7c9f3;  */

void FUN_104e7c9c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7c9f4; end: 104e7ca03; -[SCAddFriendsContactNonSnapchatterSectionDataProvider tearDown] */

void FUN_104e7c9f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7ca04; end: 104e7cb1f; -[SCAddFriendsContactNonSnapchatterSectionDataProvider setSectionDataModel:] */

void FUN_104e7ca04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf49e60(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7cb20; end: 104e7cb67;  */

void FUN_104e7cb20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5e80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7cb68; end: 104e7cbbb; -[SCAddFriendsContactNonSnapchatterSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104e7cb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e7cbbc;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7cbbc; end: 104e7cbe7;  */

void FUN_104e7cbbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c142240(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bde7410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__containerCellViewModelForIndex__1125576a0,param_2);
  return;
}



/* Entry: 104e7cbe8; end: 104e7cc67; -[SCAddFriendsContactNonSnapchatterSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104e7cbe8(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104e7cc68; end: 104e7cc6f; -[SCAddFriendsContactNonSnapchatterSectionDataProvider numberOfItemsInSection:] */

void FUN_104e7cc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104e7cc70; end: 104e7cd9b; -[SCAddFriendsContactNonSnapchatterSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104e7cc70(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e7cd9c;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db82b8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4ec0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104e7cd9c; end: 104e7cde3;  */

void FUN_104e7cd9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4ec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7cde4; end: 104e7cde7; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_104e7cde4(void)

{
  return;
}



/* Entry: 104e7cde8; end: 104e7cdeb; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_104e7cde8(void)

{
  return;
}



/* Entry: 104e7cdec; end: 104e7cec3; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didEndSnapchattersContactDataRequest:withResult:] */

void FUN_104e7cdec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7cec4; end: 104e7ceef;  */

void FUN_104e7cec4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7cef0; end: 104e7cfb3; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didStartFetchingFriendDeeplinkForPhoneNumber:] */

void FUN_104e7cef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7cfb4; end: 104e7cfdf;  */

void FUN_104e7cfb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7cfe0; end: 104e7d0bf; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didEndFetchingFriendDeeplinkForPhoneNumber:deeplink:success:] */

void FUN_104e7cfe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7d0c0; end: 104e7d0eb;  */

void FUN_104e7d0c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7d0ec; end: 104e7d1af; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didEndInvitingFriendWithPhoneNumber:success:] */

void FUN_104e7d0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7d1b0; end: 104e7d1db;  */

void FUN_104e7d1b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7d1dc; end: 104e7d213; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _updateSectionDataModel] */

void FUN_104e7d1dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1f9220(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7d214; end: 104e7d3a7; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _containerCellViewModelForIndex:] */

void FUN_104e7d214(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c06ab80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c06aaa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar10 = *(long *)(param_1 + 0x30);
  uVar5 = uVar3;
  func_0x00010c0faf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf4b900(uVar2);
  uVar7 = uVar3;
  func_0x00010c0faf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf4b900(uVar1);
  puVar9 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0deec0(param_1);
  (**(code **)(lVar10 + 0x10))(lVar10,uVar3,uVar6,uVar8,puVar9,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar4);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e7d3a8; end: 104e7d4cf; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _contactNonSnaphcatterFromViewModel:index:] */

void FUN_104e7d3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104e7d4d0;
  uStack_40 = 0x104e7d4e0;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c244760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010beed3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bccc0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e7d4d0; end: 104e7d4e7;  */

void FUN_104e7d4d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e7d4e8; end: 104e7d5ab;  */

void FUN_104e7d4e8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010beee1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b16e0;
  _objc_opt_class(PTR_PTR_1126b16e0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf49da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104e7d5ac; end: 104e7d79b; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _updateContactNonSnaphcatters:] */

void FUN_104e7d5ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  
  puVar2 = PTR_PTR_1126b16e8;
  uVar6 = *(ulong *)(param_1 + 0x78);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e7d79c;
  puStack_68 = &UNK_110855c10;
  lStack_60 = param_1;
  _objc_retain(uVar1);
  uVar3 = param_3;
  uStack_58 = uVar1;
  func_0x0001006372a4(param_3,&puStack_80);
  _objc_release(param_3);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  if (uVar3 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
    }
    else {
      uVar4 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_104e7d744;
    }
    _objc_initWeak(auStack_88,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010be80aa0(param_1);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
LAB_104e7d744:
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 104e7d79c; end: 104e7d80f;  */

long FUN_104e7d79c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(param_2);
  func_0x00010c11da20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
  return lVar2;
}



/* Entry: 104e7d810; end: 104e7d857;  */

void FUN_104e7d810(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7d858; end: 104e7d9a7; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _processContactNonSnapchatters:completionQueue:completionBlock:] */

void FUN_104e7d858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09b160(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7d9a8; end: 104e7da07;  */

void FUN_104e7d9a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be85ca0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e7da08; end: 104e7db07; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _rankNonSnapchatters:contactPhotos:completionQueue:completionBlock:] */

void FUN_104e7da08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = *(undefined1 *)(param_1 + 0x50);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104e7db08;
  puStack_70 = &UNK_110855c70;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = uVar1;
  uStack_50 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(uVar1);
  func_0x00010007380c(param_5,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 104e7db08; end: 104e7db57;  */

void FUN_104e7db08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x0001064e555c(uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),0,
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e7db58; end: 104e7dbef; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _configureCollectionViewCell:] */

void FUN_104e7db58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b16d8;
  _objc_opt_class(PTR_PTR_1126b16d8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e7dbf0; end: 104e7dc23; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _reloadViewForStateChange] */

void FUN_104e7dbf0(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7dc24; end: 104e7dceb; -[SCAddFriendsContactNonSnapchatterSectionDataProvider _setNonSnapchatters:] */

void FUN_104e7dc24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e7dcec;
  puStack_40 = &UNK_110855ca0;
  uVar1 = param_3;
  lStack_38 = param_1;
  func_0x00010bd86420(param_3,&puStack_58);
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88));
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e7dcec; end: 104e7dcf3;  */

void FUN_104e7dcec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerCellViewModelForIndex__1125576a0);
  return;
}



/* Entry: 104e7dcf4; end: 104e7df4f; -[SCAddFriendsContactNonSnapchatterSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104e7dcf4(long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c142240();
    _objc_release(uVar1);
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010bf529e0();
    lVar8 = 0;
    if (uVar2 < uVar5) {
      uVar2 = uVar4;
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bde7220(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    puVar7 = PTR_PTR_1126b15e0;
    _objc_alloc(PTR_PTR_1126b15e0);
    func_0x00010c043720();
    puVar3 = PTR_PTR_1126b1560;
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010c2a60c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48));
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(lVar8);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e7df50; end: 104e7df57; -[SCAddFriendsContactNonSnapchatterSectionDataProvider pageEventObservable] */

undefined8 FUN_104e7df50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104e7df58; end: 104e7df87; -[SCAddFriendsContactNonSnapchatterSectionDataProvider setPageEventObservable:] */

void FUN_104e7df58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7df88; end: 104e7df9f; -[SCAddFriendsContactNonSnapchatterSectionDataProvider dataProviderDelegate] */

void FUN_104e7df88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7dfa0; end: 104e7dfab; -[SCAddFriendsContactNonSnapchatterSectionDataProvider setDataProviderDelegate:] */

void FUN_104e7dfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104e7dfac; end: 104e7dfb3; -[SCAddFriendsContactNonSnapchatterSectionDataProvider sectionDataModel] */

undefined8 FUN_104e7dfac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104e7dfb4; end: 104e7dfbb; -[SCAddFriendsContactNonSnapchatterSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104e7dfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104e7dfbc; end: 104e7dfeb; -[SCAddFriendsContactNonSnapchatterSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104e7dfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7dfec; end: 104e7dff7; -[SCAddFriendsContactNonSnapchatterSectionDataProvider containerCellViewModelsSubject] */

void FUN_104e7dfec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 104e7dff8; end: 104e7e0cb; -[SCAddFriendsContactNonSnapchatterSectionDataProvider .cxx_destruct] */

void FUN_104e7dff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104e7e0cc; end: 104e7e187; -[SCAllContactsSearchQueryCoordinator initWithSnapchatterViewMoreEnabled:inlineShareSheetViewProviderService:contactPermissionInfoProvider:contextSource:] */

undefined1 *
FUN_104e7e0cc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e49a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104e7e188; end: 104e7e18f; -[SCAllContactsSearchQueryCoordinator canPerformQuery:] */

undefined8 FUN_104e7e188(void)

{
  return 1;
}



/* Entry: 104e7e190; end: 104e7e497; -[SCAllContactsSearchQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_104e7e190(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar2);
  lVar11 = *(long *)(param_1 + 0x18);
  lVar6 = param_3;
  if (lVar11 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000104e83da4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c155ba0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar11 == 3) {
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar11 == 2) {
    func_0x00010c11da20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar11 = param_3;
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    FUN_104e7e498();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar7);
    _objc_release(lVar11);
    func_0x00010c11da20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = lVar6;
  FUN_104e7e498();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(lVar11);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar11 != 0) {
    func_0x0001079ec4bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar6);
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((iVar1 != 0) && (*(long *)(param_1 + 0x18) != 3)) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfcdbe0();
    _objc_release(uVar8);
    if ((uVar9 & 1) == 0) {
      func_0x0001079ec54c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar8);
    }
  }
  puVar10 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  func_0x00010c042a40();
  (**(code **)(param_4 + 0x10))(param_4,puVar10,0);
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e7e498; end: 104e7e5e3;  */

void FUN_104e7e498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b16f8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b16e8;
  _objc_alloc(PTR_PTR_1126b16e8);
  func_0x00010c043740();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  puVar4 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0x402e000000000000,0x4020000000000000,0x4034000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar4);
  func_0x00010c055bc0(puVar3);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


