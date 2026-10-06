/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064ddd80; end: 1064dddd7; -[SCFeedSnapchattersRepositoryGrapheneLogger logFriendLinkFilterCount:] */

void FUN_1064ddd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1064dddd8;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 1064dddd8; end: 1064dde8b;  */

void FUN_1064dddd8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfb8380(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c08fa60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  if (lVar3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  }
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e526f8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1064dde8c; end: 1064ddf73; -[SCFeedSnapchattersRepositoryGrapheneLogger _setupProfileIdObserver] */

void FUN_1064dde8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c116a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064ddf74; end: 1064ddfbb;  */

void FUN_1064ddf74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ddfbc; end: 1064de04b; -[SCFeedSnapchattersRepositoryGrapheneLogger _snapProfileIdDidChange:] */

void FUN_1064ddfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064de04c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064de04c; end: 1064de077;  */

void FUN_1064de04c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1064de078; end: 1064de0e3; -[SCFeedSnapchattersRepositoryGrapheneLogger .cxx_destruct] */

void FUN_1064de078(long param_1)

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



/* Entry: 1064de0e4; end: 1064de0eb; -[SCPersonDataCoordinator removeDataUpdateListener:] */

void FUN_1064de0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1064de0ec; end: 1064de127;  */

void FUN_1064de0ec(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb0280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064de128; end: 1064de12b; -[SCPersonDataCoordinator handleDataRequest:] */

void FUN_1064de128(void)

{
  return;
}



/* Entry: 1064de12c; end: 1064de12f; -[SCPersonDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1064de12c(void)

{
  return;
}



/* Entry: 1064de130; end: 1064de173; -[SCPersonDataCoordinator didUpdateGroupsDataRequest:groupId:] */

void FUN_1064de130(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_opt_class();
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064de174; end: 1064de2c7; -[SCPersonDataCoordinator _setupSubscriptionsIfNeededWithSnapchattersObservableRepository:] */

void FUN_1064de174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2445c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1064de2c8; end: 1064de30f;  */

void FUN_1064de2c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064de310; end: 1064de393; -[SCPersonDataCoordinator _logGrapheneForSubstep:entriesFetched:startTime:fetchContexts:] */

void FUN_1064de310(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  uVar1 = in_x4;
  func_0x000100bbae3c();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acce0(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1064de394; end: 1064de6a7; -[SCPersonDataCoordinator _fetchAndObserveGroupsForGroupIds:] */

void FUN_1064de394(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_138 + lVar10 * 8);
        lVar3 = *(long *)(param_1 + 0x58);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
LAB_1064de498:
          puVar5 = *(undefined1 **)(param_1 + 8);
          func_0x00010c269d40(puVar5);
          _objc_retainAutoreleasedReturnValue();
          param_2 = puVar5;
          FUN_1064ecb20(lVar11,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          lVar3 = lVar11;
          func_0x00010bf529e0();
          if (lVar3 != 0) {
            func_0x00010bee1780(param_1);
            _objc_initWeak(auStack_148,param_1);
            uVar6 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c11de00(uVar7);
            _objc_retainAutoreleasedReturnValue();
            param_2 = auStack_148;
            _objc_copyWeak(auStack_150,param_2);
            uVar8 = uVar6;
            func_0x00010c0e0a80(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_destroyWeak(auStack_150);
            _objc_destroyWeak(auStack_148);
            _objc_release(lVar11);
            goto LAB_1064de5b8;
          }
        }
        else {
          lVar4 = *(long *)(param_1 + 0x50);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          if (lVar4 == 0) goto LAB_1064de498;
LAB_1064de5b8:
          lVar11 = *(long *)(param_1 + 0x58);
          func_0x00010c0e00e0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(lVar11);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bee1780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064de6a8; end: 1064de6fb;  */

void FUN_1064de6a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064de6fc; end: 1064de8db; -[SCPersonDataCoordinator _updateSummaryFetchedResult:groupId:] */

void FUN_1064de6fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50));
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain();
    _objc_retain(param_4);
    _objc_retain(uVar3);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1064df550;
    uStack_60 = 0x1064df560;
    uStack_58 = 0;
    _objc_retain(param_4);
    _objc_retain(uVar3);
    func_0x00010c0c0120(lVar2);
    uVar4 = puStack_78[5];
    _objc_retain(uVar4);
    _objc_release(uVar3);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(lVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064de8dc; end: 1064de8ef;  */

void FUN_1064de8dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 1064de8f0; end: 1064dec23; -[SCPersonDataCoordinator _groupEntityForGroup:] */

void FUN_1064de8f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000108ef2144(param_3,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    ppuVar13 = &PTR___NSConcreteGlobalBlock_110927588;
    func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_110927588);
  }
  else {
    lVar2 = lVar1;
    func_0x00010050471c(lVar1,&PTR___NSConcreteGlobalBlock_110927698,
                        &PTR___NSConcreteGlobalBlock_1109276b8);
    lVar3 = lVar2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar3;
    func_0x000108ef5d54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1064dee08;
    puStack_108 = &UNK_110854750;
    lStack_100 = lVar2;
    lStack_f8 = lVar14;
    _objc_retain(lVar14);
    _objc_retain(lVar2);
    ppuVar13 = &puStack_120;
    func_0x000100504554(lVar1,ppuVar13);
    _objc_release(lStack_f8);
    _objc_release(lStack_100);
    _objc_release(lVar14);
    _objc_release(lVar2);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
      }
      uVar15 = *(undefined8 *)(lVar14 * 8);
      func_0x00010c244340(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar15;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar6);
      _objc_release(uVar15);
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126b14d0;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf51e00(puVar5);
  lVar14 = param_3;
  func_0x00010c261460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018d60();
  _objc_release(lVar14);
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b14d8;
  func_0x00010bfcf5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b14b8;
    _objc_retain(ppuVar13);
    _objc_alloc(puVar5);
    ppuVar9 = ppuVar13;
    func_0x00010bf1acc0(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar13;
    func_0x00010bf1c0a0(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar13;
    func_0x00010bf1c000(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar13;
    func_0x00010bf1af00(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar5);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    puVar7 = PTR_PTR_1126b14c0;
    _objc_alloc(PTR_PTR_1126b14c0);
    ppuVar9 = ppuVar13;
    func_0x00010c2923e0(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar13;
    func_0x00010c294420(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar13;
    func_0x00010c0d5140(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c020(puVar7);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    puVar8 = PTR_PTR_1126b14c8;
    _objc_alloc(PTR_PTR_1126b14c8);
    ppuVar9 = ppuVar13;
    func_0x00010bf40c40(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar13;
    func_0x00010bf1a5c0(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    func_0x00010c049240(puVar8);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1064dec24; end: 1064dee07;  */

void FUN_1064dec24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b14b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1c000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf1af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b14c0;
  _objc_alloc(PTR_PTR_1126b14c0);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0d5140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c020(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b14c8;
  _objc_alloc(PTR_PTR_1126b14c8);
  uVar2 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1a5c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c049240(puVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064dee08; end: 1064df01b;  */

void FUN_1064dee08(long param_1,undefined8 param_2)

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



/* Entry: 1064df01c; end: 1064df343; -[SCPersonDataCoordinator _multiRecipientEntityWithMultiRecipientId:recipientIds:personEntities:groupEntities:] */

void FUN_1064df01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_170;
    do {
      lVar5 = 0;
      do {
        if (*plStack_170 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        if (puStack_118[3] == 3) goto LAB_1064df1c0;
        uVar2 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_1064df348;
        puStack_198 = &UNK_110905f78;
        puStack_190 = &uStack_140;
        puStack_188 = &uStack_120;
        func_0x00010c0c0020();
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_1064df1c0:
  _objc_release(param_4);
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_1064df3d0;
  puStack_1c8 = &UNK_1108a9ea0;
  _objc_retain(param_5);
  uStack_1c0 = param_5;
  _objc_retain(param_6);
  lVar1 = param_4;
  uStack_1b8 = param_6;
  func_0x000100504554(param_4,&puStack_1e0);
  puVar3 = PTR_PTR_1126cb180;
  _objc_alloc(PTR_PTR_1126cb180);
  func_0x00010c02ca40();
  puVar4 = PTR_PTR_1126b14d8;
  func_0x00010c0d1f20(PTR_PTR_1126b14d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 1064df344; end: 1064df347;  */

void FUN_1064df344(void)

{
  return;
}



/* Entry: 1064df348; end: 1064df3cb;  */

void FUN_1064df348(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar2 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  return;
}



/* Entry: 1064df3cc; end: 1064df3cf;  */

void FUN_1064df3cc(void)

{
  return;
}



/* Entry: 1064df3d0; end: 1064df477;  */

void FUN_1064df3d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar2;
  func_0x000107cfa164();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  lVar1 = param_2;
  if (lVar4 != 0) {
    lVar1 = lVar3;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064df478; end: 1064df4a7; -[SCPersonDataCoordinator _updateMerlinSnapchatter:] */

void FUN_1064df478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064df4a8; end: 1064df54f; -[SCPersonDataCoordinator .cxx_destruct] */

void FUN_1064df4a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1064df550; end: 1064df56b;  */

void FUN_1064df550(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064df56c; end: 1064df9c7;  */

void FUN_1064df56c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar1);
  lVar17 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR___NSConcreteGlobalBlock_110927678;
  lVar2 = lVar17;
  func_0x000100504554();
  _objc_release(lVar17);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar17 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar17 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      uVar20 = *(undefined8 *)(lVar18 * 8);
      func_0x00010c244340(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar20;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar20);
      lVar18 = lVar18 + 1;
    } while (lVar17 != lVar18);
    lVar17 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar17 = param_2;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar17;
  func_0x00010c08fa60();
  _objc_release(lVar17);
  puVar19 = PTR_PTR_1126ba2e0;
  if (lVar5 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar17 = param_2;
    func_0x00010c116cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234420(param_2);
    func_0x00010bf20e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
  }
  puVar6 = PTR_PTR_1126b14d0;
  _objc_alloc();
  lVar17 = param_2;
  func_0x00010bfce980(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf51e00();
  func_0x00010c018d60();
  _objc_release(puVar7);
  _objc_release(lVar17);
  puVar7 = PTR_PTR_1126b14d8;
  func_0x00010bfcf5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar8 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined **)(lVar17 + 0x28) = puVar7;
  _objc_release(uVar8);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar19 = PTR_PTR_1126b14c8;
  _objc_retain(ppuVar15);
  _objc_alloc(puVar19);
  ppuVar9 = ppuVar15;
  func_0x00010bf16620(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar15;
  func_0x00010c280540(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar15;
  func_0x00010c268a60(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  ppuVar12 = ppuVar15;
  func_0x00010bf41040(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf415c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar15;
  func_0x00010c2996e0(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar15;
  func_0x00010bf1a5c0(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  ppuVar15 = ppuVar14;
  func_0x00010901d70c(ppuVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049240(puVar19);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar3);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 1064df9c8; end: 1064df9ef;  */

void FUN_1064df9c8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1064df9f0; end: 1064df9f7;  */

void FUN_1064df9f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_nameToDisplay_112612e68);
  return;
}



/* Entry: 1064df9f8; end: 1064dff4f; -[SCFriendsFeedPresenceInfoDataProvider startPresenceSubscriptions] */

void FUN_1064df9f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
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
  
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27e2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1064dff50;
  puStack_90 = &UNK_1108531d0;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbdf80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1064dff98;
  puStack_b8 = &UNK_1108531d0;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf50500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1064dffe0;
  puStack_e0 = &UNK_1108531d0;
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0f6f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1064e0028;
  puStack_108 = &UNK_1109276d8;
  _objc_copyWeak(auStack_100,auStack_80);
  uVar5 = uVar4;
  func_0x00010c2656e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1064e010c;
  puStack_130 = &UNK_11086a720;
  _objc_copyWeak(auStack_128,auStack_80);
  uVar7 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c10acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1064e0154;
  puStack_158 = &UNK_1109276d8;
  _objc_copyWeak(auStack_150,auStack_80);
  uVar5 = uVar4;
  func_0x00010c2656e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_178,auStack_80);
  uVar2 = uVar7;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1064dff50; end: 1064e0027;  */

void FUN_1064dff50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2a60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e0028; end: 1064e010b;  */

void FUN_1064e0028(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010c252440();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126ae6b8;
  if ((lVar1 == 3) && (param_1 != 0)) {
    puVar2 = *(undefined **)(param_1 + 0x68);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f7080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064e010c; end: 1064e0153;  */

void FUN_1064e010c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedcd00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e0154; end: 1064e0217;  */

void FUN_1064e0154(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010c252440();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126ae6b8;
  if ((lVar1 == 3) && (param_1 != 0)) {
    puVar2 = *(undefined **)(param_1 + 0x68);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c10bc00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064e0218; end: 1064e025f;  */

void FUN_1064e0218(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beddb80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e0260; end: 1064e0567; -[SCFriendsFeedPresenceInfoDataProvider _updateTypingPresence:] */

undefined8 * FUN_1064e0260(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  long lStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar1 = param_1[5];
  puStack_148 = param_1;
  puStack_140 = puVar15;
  func_0x00010bf51e00();
  puVar15 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar2 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010c174be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar3);
  puVar16 = &uStack_130;
  puStack_138 = puVar3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puStack_138);
        }
        lVar2 = lVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        FUN_1064e0568();
        _objc_release(lVar4);
        _objc_release(lVar2);
        puVar16 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar16;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_1064e0568();
        _objc_release(puVar6);
        _objc_release(puVar16);
        if (lVar5 != 3 && lVar5 != 0 || puVar7 != (undefined8 *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_140);
          _objc_release(puVar8);
        }
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar16 = &uStack_130;
      puVar3 = puStack_138;
      func_0x00010bf52a60();
      lVar2 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puStack_138;
  _objc_release(puStack_138);
  puVar7 = param_3;
  func_0x00010bf51e00();
  puVar6 = puStack_148;
  uVar12 = puStack_148[5];
  puStack_148[5] = puVar7;
  _objc_release(uVar12);
  puVar15 = puStack_140;
  puVar8 = puStack_140;
  func_0x00010bf51e00();
  uVar12 = puVar6[7];
  puVar6[7] = puVar8;
  _objc_release(uVar12);
  func_0x00010be1a760(puVar6);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar15);
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_260;
  puStack_188 = puVar3;
  puStack_178 = puVar15;
  puStack_170 = puVar6;
  pcStack_158 = FUN_1064e0568;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = lVar2;
  lStack_180 = lVar1;
  puStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar14 = puVar7;
  func_0x00010bf529e0();
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = puVar7;
    func_0x00010bf529e0();
    puVar9 = puVar7;
    if (puVar14 == (undefined8 *)0x1) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar9;
      func_0x00010c252440();
      puVar11 = puVar16;
      puVar10 = puVar9;
    }
    else {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      _objc_retain(puVar7);
      puVar10 = puVar7;
      func_0x00010bf52a60();
      if (puVar10 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
        puVar10 = puVar6;
      }
      else {
        lVar1 = *plStack_250;
        do {
          puVar16 = (undefined8 *)0x0;
          do {
            if (*plStack_250 != lVar1) {
              _objc_enumerationMutation(puVar7);
            }
            puVar14 = *(undefined8 **)(lStack_258 + (long)puVar16 * 8);
            puVar6 = puVar14;
            func_0x00010c252440();
            if ((puVar6 == (undefined8 *)0x1) ||
               (puVar6 = puVar14, func_0x00010c252440(), puVar6 == (undefined8 *)0x2)) {
              func_0x00010c252440();
              goto LAB_1064e06ac;
            }
            func_0x00010c252440();
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar10 != puVar16);
          puVar10 = puVar7;
          puVar11 = &uStack_260;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined8 *)0x0);
      }
    }
LAB_1064e06ac:
    _objc_release(puVar9);
    puVar16 = puVar11;
    puVar6 = puVar10;
  }
  puVar11 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    pcStack_268 = FUN_1064e06f0;
    lStack_290 = lVar1;
    puStack_288 = puVar14;
    puStack_280 = puVar6;
    puStack_278 = puVar7;
    ppuStack_270 = &puStack_160;
    _objc_retain(puVar16);
    puVar6 = puVar16;
    func_0x00010bf51e00();
    uVar12 = puVar11[10];
    puVar11[10] = puVar6;
    _objc_release(uVar12);
    _objc_initWeak(auStack_298,puVar11);
    _objc_copyWeak(auStack_2a0,auStack_298);
    func_0x00010be81340(puVar11);
    _objc_destroyWeak(auStack_2a0);
    _objc_destroyWeak(auStack_298);
    _objc_release(puVar16);
    return puVar16;
  }
  return puVar14;
}



/* Entry: 1064e0568; end: 1064e06ef;  */

undefined1 * FUN_1064e0568(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *unaff_x20;
  undefined1 *puVar6;
  long unaff_x22;
  undefined1 *puVar7;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar6 = param_1;
  func_0x00010bf529e0();
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = param_1;
    func_0x00010bf529e0();
    puVar1 = param_1;
    if (puVar6 == (undefined1 *)0x1) {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c252440();
      puVar4 = (undefined8 *)param_3;
      puVar2 = puVar1;
    }
    else {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      _objc_retain(param_1);
      puVar2 = param_1;
      func_0x00010bf52a60();
      if (puVar2 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
        puVar2 = unaff_x20;
      }
      else {
        unaff_x22 = *plStack_100;
        do {
          puVar7 = (undefined1 *)0x0;
          do {
            if (*plStack_100 != unaff_x22) {
              _objc_enumerationMutation(param_1);
            }
            puVar6 = *(undefined1 **)(lStack_108 + (long)puVar7 * 8);
            puVar3 = puVar6;
            func_0x00010c252440();
            if ((puVar3 == (undefined1 *)0x1) ||
               (puVar3 = puVar6, func_0x00010c252440(), puVar3 == (undefined1 *)0x2)) {
              func_0x00010c252440();
              goto LAB_1064e06ac;
            }
            func_0x00010c252440();
            puVar7 = puVar7 + 1;
          } while (puVar2 != puVar7);
          puVar2 = param_1;
          puVar4 = &uStack_110;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined1 *)0x0);
      }
    }
LAB_1064e06ac:
    _objc_release(puVar1);
    param_3 = (undefined1 *)puVar4;
    unaff_x20 = puVar2;
  }
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_118 = FUN_1064e06f0;
    lStack_140 = unaff_x22;
    puStack_138 = puVar6;
    puStack_130 = unaff_x20;
    puStack_128 = param_1;
    puStack_120 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    puVar6 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(puVar1 + 0x50);
    *(undefined1 **)(puVar1 + 0x50) = puVar6;
    _objc_release(uVar5);
    _objc_initWeak(auStack_148,puVar1);
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x00010be81340(puVar1);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_release(param_3);
    return param_3;
  }
  return puVar6;
}



/* Entry: 1064e06f0; end: 1064e07cf; -[SCFriendsFeedPresenceInfoDataProvider _updateGamePresence:] */

void FUN_1064e06f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be81340(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e07d0; end: 1064e07fb;  */

void FUN_1064e07d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e07fc; end: 1064e0c0f; -[SCFriendsFeedPresenceInfoDataProvider _processGameConversations:completion:] */

void FUN_1064e07fc(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar9;
    _objc_release(uVar8);
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          lVar4 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126cb188;
          func_0x00010c0b6c80();
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 != (undefined *)0x0) {
            puVar6 = puVar5;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c08fa60();
            _objc_release(puVar6);
            if (puVar7 != (undefined *)0x0) {
              puVar6 = puVar5;
              func_0x00010c15ffa0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar9);
              _objc_release(puVar6);
              puVar6 = puVar5;
              func_0x00010c094540(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2);
              _objc_release(puVar6);
              puVar6 = puVar5;
              func_0x00010c094540(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar6);
            }
          }
          _objc_release(puVar5);
          _objc_release(lVar4);
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    puVar5 = puVar3;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new();
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar5;
      _objc_release(uVar8);
      (**(code **)(param_4 + 0x10))();
    }
    else {
      _objc_initWeak(auStack_138,param_1);
      puVar5 = PTR_PTR_1126cb188;
      puVar6 = puVar3;
      func_0x00010bf00560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      param_2 = auStack_138;
      _objc_copyWeak(auStack_140,param_2);
      _objc_retain(param_3);
      _objc_retain(puVar9);
      _objc_retain(puVar2);
      _objc_retain(param_4);
      func_0x00010bfa7f40(puVar5);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_138);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 0x40);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x40;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2b4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064e0c10; end: 1064e0c67;  */

void FUN_1064e0c10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e0c68; end: 1064e0ecb; -[SCFriendsFeedPresenceInfoDataProvider _handleLensMetadataFetchResult:gameConversations:conversationIdToSessionId:conversationIdToLensId:completion:] */

void FUN_1064e0c68(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(long *)(param_1 + 0x50) == param_4) {
    puVar1 = (undefined8 *)PTR____NSDictionary0__struct_11034ab58;
    if (param_3 != (undefined8 *)0x0) {
      puVar1 = param_3;
    }
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_5);
    puVar5 = &uStack_130;
    lVar3 = param_5;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_5);
          }
          lVar4 = param_5;
          func_0x00010c0e00e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = param_6;
          func_0x00010c0e00e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126cb190;
          _objc_alloc(PTR_PTR_1126cb190);
          func_0x00010c045120();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(uVar7);
          _objc_release(lVar4);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        puVar5 = &uStack_130;
        lVar3 = param_5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_5);
    puVar6 = puVar2;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar6;
    _objc_release(uVar7);
    (**(code **)(param_7 + 0x10))(param_7);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar7 = param_3[6];
  param_3[6] = puVar5;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010be1a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__generateActivePresenceInfo_112564378);
  return;
}



/* Entry: 1064e0ecc; end: 1064e0f03; -[SCFriendsFeedPresenceInfoDataProvider _updateCalls:] */

void FUN_1064e0ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be1a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateActivePresenceInfo_112564378);
  return;
}



/* Entry: 1064e0f04; end: 1064e0f3b; -[SCFriendsFeedPresenceInfoDataProvider _updatePeeks:] */

void FUN_1064e0f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be1a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateActivePresenceInfo_112564378);
  return;
}



/* Entry: 1064e0f3c; end: 1064e0f73; -[SCFriendsFeedPresenceInfoDataProvider _updatePresentParticipants:] */

void FUN_1064e0f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be1a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateActivePresenceInfo_112564378);
  return;
}



/* Entry: 1064e0f74; end: 1064e1423; -[SCFriendsFeedPresenceInfoDataProvider _generateActivePresenceInfo] */

void FUN_1064e0f74(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  long lStack_360;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_1064e1424;
  puStack_370 = &UNK_110847310;
  _objc_retain();
  ppuVar3 = &puStack_388;
  puStack_368 = puVar2;
  lStack_360 = param_1;
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar16 * 8);
      (*(code *)ppuVar3[2])(ppuVar3);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar16 * 8);
      (*(code *)ppuVar3[2])(ppuVar3);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar16 * 8);
      (*(code *)ppuVar3[2])(ppuVar3);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar16 * 8);
      (*(code *)ppuVar3[2])(ppuVar3);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar16 * 8);
      (*(code *)ppuVar3[2])(ppuVar3);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x50);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      param_2 = *(long *)(lVar16 * 8);
      (*(code *)ppuVar3[2])(ppuVar3);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  func_0x00010bed2860(param_1);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  _objc_release(puStack_368);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar6 = *(long *)(puVar2 + 0x20);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      uVar7 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x30);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x28);
      func_0x00010c0e00e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x38);
      func_0x00010c0e00e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c067fc0();
      uVar11 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x40);
      func_0x00010bf4b900(uVar11);
      uVar12 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x50);
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x58);
      func_0x00010c0e00e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x48);
      func_0x00010c0e00e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar7;
      func_0x000107cf70bc(uVar7,uVar8,uVar10,uVar11,uVar12,uVar13,uVar14);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      func_0x00010c1d0640(*(undefined8 *)(puVar2 + 0x20));
      _objc_release(uVar15);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e1424; end: 1064e15c3;  */

void FUN_1064e1424(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c067fc0();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
      func_0x00010bf4b900(uVar6);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
      func_0x00010c0e00e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
      func_0x00010c0e00e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar2;
      func_0x000107cf70bc(uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e15c4; end: 1064e170f; -[SCFriendsFeedPresenceInfoDataProvider _updateActivePresenceInfoWithActivePresenceInfo:] */

void FUN_1064e15c4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  puVar3 = param_3;
  if (puVar4 != param_3) {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    else {
      puVar1 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(puVar4);
      if (((ulong)puVar1 & 1) != 0) goto LAB_1064e16f8;
    }
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf002e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = param_3;
    func_0x00010bf002e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(param_3);
    func_0x00010c0d9840(uVar2,param_2,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
LAB_1064e16f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064e1710; end: 1064e18a7; -[SCFriendsFeedPresenceInfoDataProvider .cxx_destruct] */

void FUN_1064e1710(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064e18a8; end: 1064e194f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e18a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127492e8;
    _objc_loadWeakRetained();
    lVar1 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f440();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 != 0) {
      lVar3 = param_1;
      func_0x00010be19760(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064e1934;
    }
  }
  lVar3 = 0;
LAB_1064e1934:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1064e1950; end: 1064e196b;  */

void FUN_1064e1950(void)

{
  _objc_opt_new(PTR_PTR_1126ba0c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064e196c; end: 1064e1a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e196c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112749310;
    _objc_loadWeakRetained(lVar2);
    func_0x000108c7c620(uVar4,lVar2);
    if ((int)uVar4 != 0) {
      func_0x000108c7c834(*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064e1a1c; end: 1064e1b53; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedChatMediaPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e1a1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + _DAT_112749324;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0c5fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112749378;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c108640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112749300;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cb1d8;
  _objc_alloc(PTR_PTR_1126cb1d8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127492e4);
  param_1 = param_1 + _DAT_112749320;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0dc260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029b40(puVar5,param_2,lVar2,uVar6,lVar3,lVar1,lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064e1b54; end: 1064e202f; -[SCFriendsFeedDataServicesEntryPoint _actionTextGeneratorWithFeedIconGenerator:isRTL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e1b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
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
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112749318;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR_PTR_1126ae720;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1064e2030;
  puStack_90 = &UNK_11084cac0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_d0 = puVar12;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1064e2100;
  puStack_b8 = &UNK_11084cac0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_f8 = puVar12;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1064e21ac;
  puStack_e0 = &UNK_11084cac0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_120 = puVar12;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1064e2258;
  puStack_108 = &UNK_11084cac0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  puStack_148 = puVar12;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1064e2328;
  puStack_130 = &UNK_11084cac0;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11274937c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0cb0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112749300;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80280();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126ae720;
  puStack_170 = puVar12;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1064e23d4;
  puStack_158 = &UNK_11084cac0;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126cb1e8;
  _objc_alloc(PTR_PTR_1126cb1e8);
  param_1 = param_1 + _DAT_11274932c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c14c300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016420(puVar13);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_150);
  _objc_release(lVar2);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1064e2030; end: 1064e20db;  */

void FUN_1064e2030(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1064e20dc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c074c60();
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064e20dc; end: 1064e20ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e20dc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112749300);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064e2100; end: 1064e2303;  */

void FUN_1064e2100(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1064e20dc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfba140();
  func_0x00010c0df840(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064e2304; end: 1064e2327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e2304(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112749398);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064e2328; end: 1064e252b;  */

void FUN_1064e2328(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1064e20dc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf902e0();
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064e252c; end: 1064e291f; -[SCFriendsFeedDataServicesEntryPoint _iconGenerator] */

void FUN_1064e252c(undefined8 param_1)

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
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1064e2920;
  puStack_90 = &UNK_11084cac0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar8;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1064e29cc;
  puStack_b8 = &UNK_11084cac0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar8;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1064e2a78;
  puStack_e0 = &UNK_11084cac0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar8;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1064e2b24;
  puStack_108 = &UNK_11084cac0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_148 = puVar8;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x1064e2bd0;
  puStack_130 = &UNK_11084cac0;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_170 = puVar8;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1064e2c7c;
  puStack_158 = &UNK_11084cac0;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_198 = puVar8;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x1064e2d28;
  puStack_180 = &UNK_11084cac0;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126cb1f0;
  _objc_alloc(PTR_PTR_1126cb1f0);
  func_0x00010c00f800();
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1064e2920; end: 1064e2e7f;  */

void FUN_1064e2920(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1064e20dc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf902c0();
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064e2e80; end: 1064e2f57; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedActiveSignalProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e2e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cb1f8;
  _objc_alloc(PTR_PTR_1126cb1f8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127492e4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127492e0);
  lVar2 = param_1 + _DAT_112749300;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112749380;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0162e0(puVar1,param_2,uVar5,uVar6,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064e2f58; end: 1064e31df; -[SCFriendsFeedDataServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064e2f58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127492f0,0);
  _objc_destroyWeak(param_1 + _DAT_112749344);
  _objc_destroyWeak(param_1 + _DAT_11274936c);
  _objc_destroyWeak(param_1 + _DAT_112749330);
  _objc_destroyWeak(param_1 + _DAT_112749338);
  _objc_destroyWeak(param_1 + _DAT_112749398);
  _objc_destroyWeak(param_1 + _DAT_11274937c);
  _objc_destroyWeak(param_1 + _DAT_112749394);
  _objc_destroyWeak(param_1 + _DAT_112749334);
  _objc_destroyWeak(param_1 + _DAT_112749368);
  _objc_destroyWeak(param_1 + _DAT_112749350);
  _objc_destroyWeak(param_1 + _DAT_112749390);
  _objc_destroyWeak(param_1 + _DAT_112749380);
  _objc_destroyWeak(param_1 + _DAT_112749300);
  _objc_destroyWeak(param_1 + _DAT_112749370);
  _objc_destroyWeak(param_1 + _DAT_11274935c);
  _objc_destroyWeak(param_1 + _DAT_112749378);
  _objc_destroyWeak(param_1 + _DAT_112749374);
  _objc_destroyWeak(param_1 + _DAT_112749304);
  _objc_destroyWeak(param_1 + _DAT_112749310);
  _objc_destroyWeak(param_1 + _DAT_112749364);
  _objc_destroyWeak(param_1 + _DAT_112749328);
  _objc_destroyWeak(param_1 + _DAT_112749308);
  _objc_destroyWeak(param_1 + _DAT_112749348);
  _objc_destroyWeak(param_1 + _DAT_11274930c);
  _objc_destroyWeak(param_1 + _DAT_112749314);
  _objc_destroyWeak(param_1 + _DAT_11274934c);
  _objc_destroyWeak(param_1 + _DAT_11274938c);
  _objc_destroyWeak(param_1 + _DAT_112749360);
  _objc_destroyWeak(param_1 + _DAT_1127492fc);
  _objc_destroyWeak(param_1 + _DAT_11274933c);
  _objc_destroyWeak(param_1 + _DAT_11274932c);
  _objc_destroyWeak(param_1 + _DAT_1127492dc);
  _objc_destroyWeak(param_1 + _DAT_112749340);
  _objc_destroyWeak(param_1 + _DAT_112749324);
  _objc_destroyWeak(param_1 + _DAT_11274931c);
  _objc_destroyWeak(param_1 + _DAT_1127492e8);
  _objc_destroyWeak(param_1 + _DAT_112749358);
  _objc_destroyWeak(param_1 + _DAT_112749354);
  _objc_destroyWeak(param_1 + _DAT_112749318);
  _objc_destroyWeak(param_1 + _DAT_112749388);
  _objc_destroyWeak(param_1 + _DAT_112749320);
  _objc_destroyWeak(param_1 + _DAT_112749384);
  _objc_storeStrong(param_1 + _DAT_1127492ec,0);
  _objc_storeStrong(param_1 + _DAT_11274939c,0);
  _objc_storeStrong(param_1 + _DAT_1127492e0,0);
  _objc_storeStrong(param_1 + _DAT_1127492e4,0);
  _objc_storeStrong(param_1 + _DAT_1127492f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127492f4,0);
  return;
}



/* Entry: 1064e31e0; end: 1064e322f; -[SCFriendsFeedActiveResult initWithIsActive:usedHeuristic:] */

void FUN_1064e31e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1838;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 1064e3230; end: 1064e3253; -[SCFriendsFeedActiveResult copyWithZone:] */

undefined8 FUN_1064e3230(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1064e3254; end: 1064e32af; -[SCFriendsFeedActiveResult hash] */

ulong * FUN_1064e3254(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1064e32b0; end: 1064e3347; -[SCFriendsFeedActiveResult isEqual:] */

bool FUN_1064e32b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1064e3348; end: 1064e334f; -[SCFriendsFeedActiveResult isActive] */

undefined1 FUN_1064e3348(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1064e3350; end: 1064e3357; -[SCFriendsFeedActiveResult usedHeuristic] */

undefined1 FUN_1064e3350(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1064e3358; end: 1064e337b; -[SCFriendsFeedUpdate copyWithZone:] */

undefined8 FUN_1064e3358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1064e337c; end: 1064e38ab; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _refetch] */

void FUN_1064e337c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined1 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar2 = param_1;
  func_0x00010bfa3c40();
  if ((int)uVar2 == 0) {
    return;
  }
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1064e38ac;
  uStack_80 = 0x1064e38bc;
  puStack_78 = PTR____NSArray0__struct_11034ab48;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1064e38ac;
  uStack_b0 = 0x1064e38bc;
  puStack_a8 = PTR____NSArray0__struct_11034ab48;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_1064e38ac;
  uStack_e0 = 0x1064e38bc;
  puStack_d8 = PTR____NSArray0__struct_11034ab48;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1064e38ac;
  uStack_110 = 0x1064e38bc;
  puStack_108 = PTR____NSArray0__struct_11034ab48;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_1064e38ac;
  uStack_140 = 0x1064e38bc;
  uStack_138 = 0;
  puVar3 = auStack_168;
  _objc_initWeak(puVar3,param_1);
  _dispatch_group_create();
  uVar2 = param_1;
  func_0x00010be430a0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar2 != 0) {
    _dispatch_group_enter(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1064e38c4;
    puStack_180 = &UNK_110860220;
    puStack_170 = &uStack_d0;
    _objc_retain(puVar3);
    puStack_178 = puVar3;
    func_0x00010bf00220(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _dispatch_group_enter(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar1;
    uStack_1c0 = 0xc2000000;
    uStack_1b8 = 0x1064e3944;
    puStack_1b0 = &UNK_110860220;
    puStack_1a0 = &uStack_100;
    _objc_retain(puVar3);
    puStack_1a8 = puVar3;
    func_0x00010bf4a460(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _dispatch_group_enter(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = puVar1;
    uStack_1f0 = 0xc2000000;
    uStack_1e8 = 0x1064e39c4;
    puStack_1e0 = &UNK_110860220;
    puStack_1d0 = &uStack_130;
    _objc_retain(puVar3);
    puStack_1d8 = puVar3;
    func_0x00010bf49e60(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _dispatch_group_enter(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = puVar1;
    uStack_220 = 0xc2000000;
    uStack_218 = 0x1064e3a44;
    puStack_210 = &UNK_110927ab0;
    puStack_200 = &uStack_160;
    _objc_retain(puVar3);
    puStack_208 = puVar3;
    func_0x00010c09b160(uVar4);
    _objc_release(uVar4);
    _objc_release(puStack_208);
    _objc_release(puStack_1d8);
    _objc_release(puStack_1a8);
    _objc_release(puStack_178);
  }
  uVar2 = param_1;
  func_0x00010be430a0();
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf90580();
    _objc_release(uVar5);
    if ((int)uVar4 == 0) goto LAB_1064e373c;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90580();
  _objc_release(uVar4);
  _dispatch_group_enter(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = puVar1;
  uStack_250 = 0xc2000000;
  uStack_248 = 0x1064e3adc;
  puStack_240 = &UNK_110860220;
  puStack_230 = &uStack_a0;
  _objc_retain(puVar3);
  puStack_238 = puVar3;
  func_0x00010c2622c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puStack_238);
LAB_1064e373c:
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_2a8 = puVar1;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_1064e3b5c;
  puStack_290 = &UNK_110927ae0;
  _objc_copyWeak(auStack_260,auStack_168);
  puStack_288 = &uStack_a0;
  puStack_280 = &uStack_d0;
  puStack_278 = &uStack_100;
  puStack_270 = &uStack_130;
  puStack_268 = &uStack_160;
  func_0x000100bc0718(puVar3,uVar4,&puStack_2a8);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_260);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_168);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(puStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(puStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  return;
}



/* Entry: 1064e38ac; end: 1064e38c3;  */

void FUN_1064e38ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064e38c4; end: 1064e3b5b;  */

void FUN_1064e38c4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e3b5c; end: 1064e3c93;  */

void FUN_1064e3b5c(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e3c94; end: 1064e3eef; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _fetchContactNonSnapchattersOnly] */

void FUN_1064e3c94(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1064e38ac;
  uStack_60 = 0x1064e38bc;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1064e38ac;
  uStack_90 = 0x1064e38bc;
  uStack_88 = 0;
  puVar2 = auStack_b8;
  _objc_initWeak(puVar2,param_1);
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1064e3ef0;
  puStack_d0 = &UNK_110860220;
  puStack_c0 = &uStack_80;
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  func_0x00010bf49e60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_enter(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1064e3f70;
  puStack_100 = &UNK_110927ab0;
  puStack_f0 = &uStack_b0;
  _objc_retain(puVar2);
  puStack_f8 = puVar2;
  func_0x00010c09b160(uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1064e4008;
  puStack_138 = &UNK_1108ad760;
  _objc_copyWeak(auStack_120,auStack_b8);
  puStack_130 = &uStack_80;
  puStack_128 = &uStack_b0;
  func_0x000100bc0718(puVar2,uVar3,&puStack_150);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_120);
  _objc_release(puStack_f8);
  _objc_release(puStack_c8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 1064e3ef0; end: 1064e4007;  */

void FUN_1064e3ef0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064e4008; end: 1064e405b;  */

void FUN_1064e4008(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e405c; end: 1064e4083; -[SCDefaultFriendsFeedAddFriendsDataCoordinator addFriendsDataObservable] */

void FUN_1064e405c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064e4084; end: 1064e40eb; -[SCDefaultFriendsFeedAddFriendsDataCoordinator identifier] */

void FUN_1064e4084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e53018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064e40ec; end: 1064e41eb; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _updateSuggestedFriends:incomingFriends:contactSnapchatters:contactNonSnapchatters:contactPhotos:] */

void FUN_1064e40ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be16080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be80ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceListener_1125509d0);
  return;
}



/* Entry: 1064e41ec; end: 1064e4237; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _announceListener] */

void FUN_1064e41ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126cb200;
  _objc_alloc(PTR_PTR_1126cb200);
  func_0x00010c04f5c0();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064e4238; end: 1064e436f; -[SCDefaultFriendsFeedAddFriendsDataCoordinator handleFriendsFeedViewDataRequest:] */

void FUN_1064e4238(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be430a0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf90580();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(uVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      goto LAB_1064e4338;
    }
  }
  func_0x00010c0c1620(param_3);
LAB_1064e4338:
  _objc_release(param_3);
  return;
}



/* Entry: 1064e4370; end: 1064e439b;  */

void FUN_1064e4370(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e439c; end: 1064e43fb;  */

void FUN_1064e439c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_initWeak(auStack_28,uVar1);
  _objc_retain();
  func_0x00010be332c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064e43fc; end: 1064e43ff; -[SCDefaultFriendsFeedAddFriendsDataCoordinator didStartSnapchattersUpdateDataRequest:] */

void FUN_1064e43fc(void)

{
  return;
}



/* Entry: 1064e4400; end: 1064e454f; -[SCDefaultFriendsFeedAddFriendsDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1064e4400(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1064e4550;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0bc700(param_3);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bc6c0(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e4550; end: 1064e45a7;  */

void FUN_1064e4550(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be724e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e45a8; end: 1064e471b; -[SCDefaultFriendsFeedAddFriendsDataCoordinator didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_1064e45a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1064e471c;
    puStack_68 = &UNK_110927b10;
    _objc_copyWeak(auStack_60,auStack_58);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1064e4748;
    puStack_90 = &UNK_110927b40;
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_copyWeak(auStack_b0,auStack_58);
    func_0x00010c0bdc80(param_3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1064e471c; end: 1064e479f;  */

void FUN_1064e471c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be724e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064e47a0; end: 1064e47a3;  */

void FUN_1064e47a0(void)

{
  return;
}



/* Entry: 1064e47a4; end: 1064e4803; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _mergeIncomingFriendsAndUpdate:] */

void FUN_1064e47a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be16080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf8b80(param_1,param_2,lVar1,*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar2;
  _objc_release(uVar3);
  func_0x00010bdcc0c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064e4804; end: 1064e4823; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _filterIgnoredSnapchatters:] */

void FUN_1064e4804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110927b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064e4824; end: 1064e48a7;  */

uint FUN_1064e4824(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bfebe20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0737e0();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1064e48a8; end: 1064e49e7; -[SCDefaultFriendsFeedAddFriendsDataCoordinator _dedupAndSortSnapchatters:withLocalSnapchatters:] */

void FUN_1064e48a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      _objc_retain(param_4);
      lVar1 = param_4;
    }
    else {
      lVar2 = param_4;
      func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110927bb0);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1064e49f0;
      puStack_50 = &UNK_11085a548;
      lStack_48 = lVar2;
      _objc_retain();
      lVar1 = param_3;
      func_0x0001006372a4(param_3,&puStack_68);
      lVar3 = param_4;
      func_0x00010bf09f80(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c246ca0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lStack_48);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064e49e8; end: 1064e49ef;  */

void FUN_1064e49e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1064e49f0; end: 1064e4a3b;  */

uint FUN_1064e49f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}


