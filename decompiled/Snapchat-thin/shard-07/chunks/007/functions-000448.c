/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10583e080; end: 10583e0cb;  */

void FUN_10583e080(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee11e0(param_1);
    func_0x00010c128900(*(undefined8 *)(param_1 + 0xf8),param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583e0cc; end: 10583e0ff; -[SCMapBasePersonLocationsProviderV2 hasHadSuccessfulUpdate] */

bool FUN_10583e0cc(long param_1)

{
  func_0x00010be47160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10583e100; end: 10583e197; -[SCMapBasePersonLocationsProviderV2 registerPeriodicUpdatesForOwner:] */

void FUN_10583e100(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 200);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10583e198;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10583e198; end: 10583e1c3;  */

void FUN_10583e198(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),param_2,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bee11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateStreamingStateIfNeeded_112595e20);
  return;
}



/* Entry: 10583e1c4; end: 10583e253; -[SCMapBasePersonLocationsProviderV2 unregisterRequestedUpdatesForOwner:] */

void FUN_10583e1c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10583e254;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10583e254; end: 10583e287;  */

void FUN_10583e254(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__updateStreamingStateIfNeeded_112595e20);
  return;
}



/* Entry: 10583e288; end: 10583e2cf; -[SCMapBasePersonLocationsProviderV2 reload:ifOlderThan:] */

void FUN_10583e288(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    func_0x00010c128d40(param_1);
  }
  if ((param_3 >> 2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfc2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getBestFriendLocationsWithComple_1125ce588,
             &PTR___NSConcreteGlobalBlock_1108b7350);
  return;
}



/* Entry: 10583e2d0; end: 10583e2d3;  */

void FUN_10583e2d0(void)

{
  return;
}



/* Entry: 10583e2d4; end: 10583e32f; -[SCMapBasePersonLocationsProviderV2 requestPeriodicUpdatesForOwner:] */

void FUN_10583e2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf110;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6ec0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10583e330; end: 10583e333; -[SCMapBasePersonLocationsProviderV2 reloadLocationIfOlderThan:] */

void FUN_10583e330(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadIfOlderThan__112627d70);
  return;
}



/* Entry: 10583e334; end: 10583e337; -[SCMapBasePersonLocationsProviderV2 isLastLocationUpdateOlderThan:] */

void FUN_10583e334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0761f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isLastUpdateOlderThan__1125fb288);
  return;
}



/* Entry: 10583e338; end: 10583e38b; -[SCMapBasePersonLocationsProviderV2 locationsUpdateObservable] */

void FUN_10583e338(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d5a0(0x3ff0000000000000,uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10583e38c; end: 10583e3eb; -[SCMapBasePersonLocationsProviderV2 personLocationForUserId:] */

void FUN_10583e38c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfb85c0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10583e3ec; end: 10583e44b; -[SCMapBasePersonLocationsProviderV2 personLocationClusterForUserId:] */

void FUN_10583e3ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fa580(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10583e44c; end: 10583e4c3; -[SCMapBasePersonLocationsProviderV2 allPersonLocations] */

void FUN_10583e44c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0fa600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10583e4c4; end: 10583e53b; -[SCMapBasePersonLocationsProviderV2 allPersonLocationClusters] */

void FUN_10583e4c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0fa5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10583e53c; end: 10583e547; -[SCMapBasePersonLocationsProviderV2 bestFriendLocationsWithType:] */

void FUN_10583e53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf19550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_bestFriendLocationsWithType_maxB_1125a3ef8,param_3,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a50);
  return;
}



/* Entry: 10583e548; end: 10583eaef; -[SCMapBasePersonLocationsProviderV2 bestFriendLocationsWithType:maxBestFriendsToProcess:] */

undefined * FUN_10583e548(undefined *param_1,undefined **param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *unaff_x22;
  undefined *puVar12;
  undefined *puStack_228;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_3 == 1) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfb80c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_228 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    if (param_4 == 0) {
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c282760(param_4);
      func_0x00010c225ec0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010c282760(param_4);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010c0b96e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_1;
        func_0x00010c0fa5c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0 && puVar10 != (undefined *)0x0) {
          func_0x00010befa120(puStack_228);
          func_0x00010befa120(unaff_x22);
          puVar4 = unaff_x22;
          func_0x00010bf529e0();
          uVar5 = param_4;
          func_0x00010c282760();
          if (puVar4 == (undefined *)(uVar5 & 0xffffffff)) {
            _objc_release(puVar10);
            _objc_release(lVar3);
            goto LAB_10583e818;
          }
        }
        _objc_release(puVar10);
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    }
LAB_10583e818:
    _objc_release(lVar1);
    if (param_4 == 0) {
LAB_10583e840:
      puVar10 = param_1;
      func_0x00010bf00660();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar4);
      _objc_release(puVar10);
      puVar10 = param_1;
      func_0x00010c0fa5c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 != (undefined *)0x0) {
        func_0x00010bf51c80(puVar10);
        param_2 = &PTR___NSConcreteGlobalBlock_1108b73c0;
        func_0x000108d320d0(puVar6,&PTR___NSConcreteGlobalBlock_1108b73c0);
      }
      _objc_retain(puVar6);
      puVar4 = puVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar6);
          }
          lVar11 = *(long *)((long)puVar12 * 8);
          lVar9 = lVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 != 0) {
            lVar3 = lVar11;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar3;
            func_0x00010c0720c0();
            if ((int)lVar7 == 0) {
              lVar7 = lVar11;
              func_0x00010c2923e0(lVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puStack_228;
              func_0x00010bf4b900();
              _objc_release(lVar7);
              _objc_release(lVar3);
              _objc_release(lVar9);
              if (((ulong)puVar8 & 1) != 0) goto LAB_10583e9a4;
              lVar9 = *(long *)(param_1 + 0x28);
              lVar3 = lVar11;
              func_0x00010c2923e0(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b96e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              if (lVar9 != 0) {
                func_0x00010c2923e0(lVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puStack_228);
                _objc_release(lVar11);
                func_0x00010befa120(unaff_x22);
                if (param_4 != 0) {
                  puVar8 = unaff_x22;
                  func_0x00010bf529e0();
                  uVar5 = param_4;
                  func_0x00010c282760();
                  if (puVar8 == (undefined *)(uVar5 & 0xffffffff)) {
                    _objc_release(lVar9);
                    goto LAB_10583ea78;
                  }
                }
              }
            }
            else {
              _objc_release(lVar3);
            }
            _objc_release(lVar9);
          }
LAB_10583e9a4:
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar4 = puVar6;
        func_0x00010bf52a60();
      }
LAB_10583ea78:
      _objc_release(puVar6);
      _objc_release(puVar10);
      _objc_release(puVar6);
    }
    else {
      puVar10 = unaff_x22;
      func_0x00010bf529e0();
      uVar5 = param_4;
      func_0x00010c282760();
      if (puVar10 < (undefined *)(uVar5 & 0xffffffff)) goto LAB_10583e840;
    }
    _objc_release(puStack_228);
  }
  else {
    if (param_3 != 0) goto LAB_10583eaa8;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf197c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      unaff_x22 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf00660();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_10583eaf0;
      puStack_180 = &UNK_1108b7370;
      puStack_178 = puVar10;
      _objc_retain(puVar10);
      param_2 = &puStack_198;
      unaff_x22 = param_1;
      func_0x0001006372a4(param_1,param_2);
      _objc_release(puStack_178);
      _objc_release(puVar10);
      _objc_release(param_1);
    }
  }
  _objc_release(lVar1);
LAB_10583eaa8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
    return unaff_x22;
  }
  ___stack_chk_fail();
  puVar10 = *(undefined **)(param_4 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(puVar10);
  _objc_release(param_2);
  return puVar10;
}



/* Entry: 10583eaf0; end: 10583eb3b;  */

undefined8 FUN_10583eaf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10583eb3c; end: 10583eb43;  */

void FUN_10583eb3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 10583eb44; end: 10583ee93; -[SCMapBasePersonLocationsProviderV2 sortedFriendLocationsFromCoordinate:maxFriendsToProcess:] */

void FUN_10583eb44(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4,
                  ulong param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_148;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_148 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (param_5 == 0) {
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c282760(param_5);
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c282760(param_5);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_3;
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d3c80();
  _objc_release(lVar4);
  _objc_release();
  iVar1 = (int)lVar3;
  _CLLocationCoordinate2DIsValid(param_1,param_2);
  if (iVar1 != 0) {
    param_4 = &PTR___NSConcreteGlobalBlock_1108b73e0;
    func_0x000108d320d0(param_1,param_2,lVar5,&PTR___NSConcreteGlobalBlock_1108b73e0);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_10583ee30:
      _objc_release(lVar5);
      _objc_release(lVar5);
      _objc_release(puStack_148);
      _objc_release(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_coordinate_1125b20c8);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      lVar13 = *(long *)(lVar12 * 8);
      lVar11 = lVar13;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar11 != 0) {
        lVar6 = lVar13;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0720c0();
        if ((int)lVar7 == 0) {
          lVar7 = lVar13;
          func_0x00010c2923e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puStack_148;
          func_0x00010bf4b900();
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar11);
          if (((ulong)puVar8 & 1) != 0) goto LAB_10583ed5c;
          lVar11 = *(long *)(param_3 + 0x28);
          lVar6 = lVar13;
          func_0x00010c2923e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b96e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (lVar11 != 0) {
            func_0x00010c2923e0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_148);
            _objc_release(lVar13);
            func_0x00010befa120(puVar2);
            if (param_5 != 0) {
              puVar8 = puVar2;
              func_0x00010bf529e0();
              uVar9 = param_5;
              func_0x00010c282760();
              if (puVar8 == (undefined *)(uVar9 & 0xffffffff)) {
                _objc_release(lVar11);
                goto LAB_10583ee30;
              }
            }
          }
        }
        else {
          _objc_release(lVar6);
        }
        _objc_release(lVar11);
      }
LAB_10583ed5c:
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10583ee94; end: 10583ee9b;  */

void FUN_10583ee94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 10583ee9c; end: 10583f43b; -[SCMapBasePersonLocationsProviderV2 bestFriendLocationsWithMaxClustersToProcess:] */

/* WARNING: Possible PIC construction at 0x00010583f164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010583f168) */

void FUN_10583ee9c(ulong param_1,ulong param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb80c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar7 = *(long *)(param_1 + 0x28);
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010c0fa5c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0 && uVar8 != 0) {
        func_0x00010befa120(puVar4);
        func_0x00010befa120(puVar6);
        uVar9 = param_1;
        func_0x00010c0fa580();
        _objc_retainAutoreleasedReturnValue();
        if (uVar9 != 0) {
          uVar10 = uVar9;
          func_0x00010bf3e6e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar5;
          func_0x00010bf4b900();
          _objc_release(uVar10);
          if ((int)puVar11 == 0) {
            uVar10 = uVar9;
            func_0x00010bf3e6e0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(uVar10);
            puVar11 = puVar5;
            func_0x00010bf529e0();
            _objc_release(uVar9);
            if (puVar11 != param_3) goto LAB_10583f098;
            _objc_release(uVar8);
            _objc_release(lVar7);
            goto LAB_10583f0e4;
          }
        }
        _objc_release(uVar9);
      }
LAB_10583f098:
      _objc_release(uVar8);
      _objc_release(lVar7);
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
LAB_10583f0e4:
  _objc_release(lVar3);
  puVar11 = puVar5;
  func_0x00010bf529e0();
  uVar8 = param_2;
  if (puVar11 < param_3) {
    uVar8 = param_1;
    func_0x00010bf00660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0d3c80();
    _objc_release(uVar9);
    _objc_release(uVar8);
    uVar8 = param_1;
    func_0x00010c0fa5c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 != 0) goto code_r0x00010bf51c80;
    _objc_retain(uVar10);
    uVar9 = uVar10;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    uVar8 = param_2;
    while (uVar9 != 0) {
      uVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar10);
        }
        uVar18 = *(ulong *)(uVar16 * 8);
        uVar15 = uVar18;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar15 != 0) {
          uVar12 = uVar18;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c0720c0();
          if ((uVar13 & 1) != 0) goto LAB_10583f210;
          uVar13 = uVar18;
          func_0x00010c2923e0(uVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar4;
          func_0x00010bf4b900();
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar15);
          if (((ulong)puVar11 & 1) == 0) {
            uVar15 = *(ulong *)(param_1 + 0x28);
            uVar12 = uVar18;
            func_0x00010c2923e0(uVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b96e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar12);
            if (uVar15 != 0) {
              uVar12 = uVar18;
              func_0x00010c2923e0(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(uVar12);
              func_0x00010befa120(puVar6);
              func_0x00010c2923e0(uVar18);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = param_1;
              func_0x00010c0fa580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar18);
              if (uVar12 != 0) {
                uVar18 = uVar12;
                func_0x00010bf3e6e0(uVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar5;
                func_0x00010bf4b900();
                _objc_release(uVar18);
                if (((ulong)puVar11 & 1) == 0) {
                  uVar18 = uVar12;
                  func_0x00010bf3e6e0(uVar12);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar5);
                  _objc_release(uVar18);
                  puVar11 = puVar5;
                  func_0x00010bf529e0();
                  _objc_release(uVar12);
                  if (puVar11 != param_3) goto LAB_10583f218;
                  _objc_release(uVar15);
                  goto LAB_10583f3c4;
                }
              }
LAB_10583f210:
              _objc_release(uVar12);
            }
LAB_10583f218:
            _objc_release(uVar15);
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar9 != uVar16);
      uVar9 = uVar10;
      func_0x00010bf52a60();
    }
LAB_10583f3c4:
    _objc_release(uVar10);
    _objc_release(0);
    _objc_release(uVar10);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf51c80:
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 10583f43c; end: 10583f443;  */

void FUN_10583f43c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 10583f444; end: 10583f447; -[SCMapBasePersonLocationsProviderV2 next:] */

void FUN_10583f444(void)

{
  return;
}



/* Entry: 10583f448; end: 10583f44b; -[SCMapBasePersonLocationsProviderV2 complete] */

void FUN_10583f448(void)

{
  return;
}



/* Entry: 10583f44c; end: 10583f497; -[SCMapBasePersonLocationsProviderV2 _streamStateDidChange:] */

void FUN_10583f44c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf00060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  FUN_1058445e0(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10583f498; end: 10583f523; -[SCMapBasePersonLocationsProviderV2 _updateStreamingStateIfNeeded] */

void FUN_10583f498(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10583f524;
  puStack_38 = &UNK_110841f80;
  uStack_30 = uVar1;
  lStack_28 = param_1;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uVar1);
  return;
}



/* Entry: 10583f524; end: 10583f5eb;  */

void FUN_10583f524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf07b60();
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 200);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = lVar1 == 2;
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10583f5ec; end: 10583f693;  */

void FUN_10583f5ec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0xd0);
    func_0x00010bf52a60();
    if ((lVar2 == 0) || ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      func_0x00010bec39a0(lVar1);
    }
    else {
      func_0x00010bec1ae0(lVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + 0x70) == 0) {
    uVar3 = *(ulong *)(lVar1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25c460();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(lVar1 + 0xc4) = 1;
      uVar5 = *(undefined8 *)(lVar1 + 0x48);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e600();
      _objc_release(uVar5);
      _objc_initWeak(auStack_128,lVar1);
      uVar6 = *(undefined8 *)(lVar1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bfb8420();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_130,auStack_128);
      uVar7 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar1 + 0x70);
      *(undefined8 *)(lVar1 + 0x70) = uVar7;
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar6);
      func_0x00010c1361c0(*(undefined8 *)(lVar1 + 0x30));
      _objc_destroyWeak(auStack_130);
      _objc_destroyWeak(auStack_128);
    }
  }
  return;
}



/* Entry: 10583f694; end: 10583f7ff; -[SCMapBasePersonLocationsProviderV2 _startStreamingIfNeeded] */

void FUN_10583f694(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25c460();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xc4) = 1;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e600();
      _objc_release(uVar3);
      _objc_initWeak(auStack_38,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfb8420();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      uVar5 = uVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar4);
      func_0x00010c1361c0(*(undefined8 *)(param_1 + 0x30));
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 10583f800; end: 10583f847;  */

void FUN_10583f800(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be312e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10583f848; end: 10583f8f3; -[SCMapBasePersonLocationsProviderV2 _stopStreamingIfNeeded] */

void FUN_10583f848(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e600();
    _objc_release(uVar1);
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x70));
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10583f8f4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_48);
    func_0x00010c12e0a0(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
  }
  return;
}



/* Entry: 10583f8f4; end: 10583f8ff;  */

void FUN_10583f8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10583f900; end: 10583f9cf; -[SCMapBasePersonLocationsProviderV2 _handleStreamedClusters:] */

void FUN_10583f900(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    FUN_105843700(0,1);
    if (((*(byte *)(param_1 + 0xc4) & 1) != 0) ||
       (lVar1 = param_3, func_0x00010c0758c0(), (int)lVar1 != 0)) {
      *(undefined1 *)(param_1 + 0xc4) = 0;
    }
    lVar1 = param_3;
    func_0x00010bf3e920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee4e00(param_1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0758c0();
    if ((int)lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf00060(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      FUN_105844568(uVar4,uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10583f9d0; end: 10583facb; -[SCMapBasePersonLocationsProviderV2 _requiresBestFriendsRefresh] */

bool FUN_10583f9d0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  lVar1 = *(long *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb80c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    bVar7 = true;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bfb80e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar7 = true;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb80e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      bVar7 = param_1 <= 0.0;
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return bVar7;
}



/* Entry: 10583facc; end: 10583fc3b; -[SCMapBasePersonLocationsProviderV2 _handleBestFriendLoadError:] */

void FUN_10583facc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b3588;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b2e0();
  _objc_release(lVar3);
  lVar4 = param_1;
  func_0x00010c0f7360();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_d8;
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      (**(code **)(*(long *)(lVar8 * 8) + 0x10))(*(long *)(lVar8 * 8),0,puVar2);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    puVar6 = auStack_d8;
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  uVar5 = 0;
  func_0x00010c1da180(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  _objc_retain(puVar6);
  _objc_retain(uVar5);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd40();
  _objc_release(puVar6);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd20();
  _objc_release(uVar5);
  _objc_release(uVar7);
  func_0x00010c0f7fc0(*(undefined8 *)(param_3 + 0x50));
  return;
}



/* Entry: 10583fc3c; end: 10583fd17; -[SCMapBasePersonLocationsProviderV2 _handleBestFriendsLoaded:expirationDate:] */

void FUN_10583fc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd40();
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd20();
  _objc_release(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10583fd18;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_58);
  return;
}



/* Entry: 10583fd18; end: 10583fd1f;  */

void FUN_10583fd18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processBestFriendCompletions_11257db58);
  return;
}



/* Entry: 10583fd20; end: 10583fe7f; -[SCMapBasePersonLocationsProviderV2 _processBestFriendCompletions] */

void FUN_10583fd20(double param_1,undefined **param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_2;
  func_0x00010bfd7a20();
  if ((int)ppuVar2 != 0) {
    func_0x00010bf0ae40(param_2[10]);
    ppuVar3 = param_2;
    func_0x00010bf19520();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &PTR___NSConcreteGlobalBlock_1108b7470;
    ppuVar4 = ppuVar3;
    func_0x000100504554();
    param_1 = 0.0;
    ppuVar5 = param_2;
    func_0x00010c0f7360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        param_3 = ppuVar4;
        (**(code **)(*(long *)((long)ppuVar9 * 8) + 0x10))(*(long *)((long)ppuVar9 * 8),ppuVar4,0);
        ppuVar9 = (undefined **)((long)ppuVar9 + 1);
      } while (ppuVar2 != ppuVar9);
      ppuVar2 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c1da180(param_2);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126b1d80;
  _objc_retain();
  _objc_alloc(puVar6);
  func_0x00010bf51c80(param_3);
  func_0x00010bf51c80(param_3);
  func_0x00010c0219a0(param_1,puVar6);
  ppuVar3 = param_3;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  puVar7 = PTR_PTR_1126bf138;
  _objc_alloc(PTR_PTR_1126bf138);
  ppuVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010bf64de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(ppuVar4);
  func_0x00010c05b340(param_1 * 1000.0,puVar7);
  _objc_release(ppuVar2);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10583fe80; end: 10583fe87;  */

void FUN_10583fe80(double param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar2 = PTR_PTR_1126b1d80;
  _objc_retain();
  _objc_alloc(puVar2);
  func_0x00010bf51c80(param_3);
  func_0x00010bf51c80(param_3);
  func_0x00010c0219a0(param_1,puVar2);
  ppuVar3 = param_3;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126bf138;
  _objc_alloc(PTR_PTR_1126bf138);
  ppuVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_3;
  func_0x00010bf64de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(ppuVar5);
  func_0x00010c05b340(param_1 * 1000.0,puVar4);
  _objc_release(ppuVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10583fe88; end: 10583ffbb;  */

void FUN_10583fe88(double param_1,undefined **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar2 = PTR_PTR_1126b1d80;
  _objc_retain();
  _objc_alloc(puVar2);
  func_0x00010bf51c80(param_2);
  func_0x00010bf51c80(param_2);
  func_0x00010c0219a0(param_1,puVar2);
  ppuVar3 = param_2;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126bf138;
  _objc_alloc(PTR_PTR_1126bf138);
  ppuVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_2;
  func_0x00010bf64de0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c26f320(ppuVar5);
  func_0x00010c05b340(param_1 * 1000.0,puVar4,param_3,ppuVar3,puVar2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10583ffbc; end: 10583ffc3; -[SCMapBasePersonLocationsProviderV2 shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10583ffbc(void)

{
  return 0;
}



/* Entry: 10583ffc4; end: 10583ffcf; -[SCMapBasePersonLocationsProviderV2 pushToValdiMarshaller:] */

undefined8 FUN_10583ffc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899130(param_3,param_1);
  func_0x00010b899128();
  func_0x00010b8990f4();
  func_0x00010b899104();
  return param_3;
}



/* Entry: 10583ffd0; end: 10584005f; -[SCMapBasePersonLocationsProviderV2 getFriendLocationsWithCompletion:] */

void FUN_10583ffd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105840060;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105840060; end: 1058400e3;  */

void FUN_105840060(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfd7a20();
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bde3b20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  func_0x00010c128900(0,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001058400e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 1058400e4; end: 105840173; -[SCMapBasePersonLocationsProviderV2 getFreshFriendLocationsWithCompletion:] */

void FUN_1058400e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105840174;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105840174; end: 1058401a3;  */

void FUN_105840174(long param_1,undefined8 param_2)

{
  func_0x00010c19f8e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c128910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_reload_ifOlderThan__112627c60,1);
  return;
}



/* Entry: 1058401a4; end: 105840233; -[SCMapBasePersonLocationsProviderV2 getBestFriendLocationsWithCompletion:] */

void FUN_1058401a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105840234;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105840234; end: 1058403fb;  */

void FUN_105840234(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0f7360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c0f7360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainBlock(uVar4);
    func_0x00010befa120(uVar3);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  func_0x00010bfd7a20();
  if ((uVar3 & 1) == 0) {
    func_0x00010c128900(0,*(undefined8 *)(param_1 + 0x20));
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock(uVar4);
  func_0x00010bf0a100(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da180(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar5);
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be91e80();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa8380(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processBestFriendCompletions_11257db58);
  return;
}



/* Entry: 1058403fc; end: 105840487;  */

void FUN_1058403fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_4 == 0) {
    func_0x00010be265a0();
  }
  else {
    func_0x00010be26580();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105840488; end: 105840543; -[SCMapBasePersonLocationsProviderV2 onFriendLocationsUpdatedWithCallback:] */

void FUN_105840488(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  func_0x00010c1bffc0();
  func_0x00010c128900(0x404e000000000000,param_1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105840544;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105840544; end: 10584057b;  */

void FUN_105840544(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1bffc0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10584057c; end: 1058406ff; -[SCMapBasePersonLocationsProviderV2 _composerAllFriendLocations] */

void FUN_10584057c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0fa600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = lVar1;
        func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(lStack_128 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        FUN_10583fe88();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,lVar6);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105840700;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105840758;
  puStack_150 = &UNK_110842e18;
  lStack_148 = lVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 0x98),param_2,&puStack_168);
  return;
}



/* Entry: 105840700; end: 105840757; -[SCMapBasePersonLocationsProviderV2 reload] */

void FUN_105840700(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105840758;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x98),param_2,&puStack_38);
  return;
}



/* Entry: 105840758; end: 10584076b;  */

void FUN_105840758(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0xb0) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be11450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__fetchFriendLocations_112561eb0);
  return;
}



/* Entry: 10584076c; end: 10584079f; -[SCMapBasePersonLocationsProviderV2 reloadIfOlderThan:] */

void FUN_10584076c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0761e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1288f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reload_112627c58);
    return;
  }
  return;
}



/* Entry: 1058407a0; end: 105840823; -[SCMapBasePersonLocationsProviderV2 isLastUpdateOlderThan:] */

bool FUN_1058407a0(double param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x00010be47160();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    bVar2 = true;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    bVar2 = param_1 < dVar3;
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return bVar2;
}



/* Entry: 105840824; end: 105840827; -[SCMapBasePersonLocationsProviderV2 cancelReload] */

void FUN_105840824(void)

{
  return;
}



/* Entry: 105840828; end: 105840953; -[SCMapBasePersonLocationsProviderV2 _fetchFriendLocations] */

void FUN_105840828(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    puVar1 = PTR_PTR_1126bf118;
    _objc_alloc(PTR_PTR_1126bf118);
    func_0x00010c01d620();
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfc5ec0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 105840954; end: 105840a13;  */

void FUN_105840954(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    FUN_105843700(param_3,0);
    *(undefined1 *)(param_1 + 0xb0) = 0;
    if (param_3 == 0) {
      uVar1 = param_2;
      func_0x00010bfb7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_10583d0d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010be4d560(param_1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105840a14; end: 105840b93; -[SCMapBasePersonLocationsProviderV2 _loadFullResponseFromClustersResponse:] */

void FUN_105840a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = param_3;
    FUN_105843290();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fa600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x0001058434b4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105840b94;
    puStack_70 = &UNK_110850cf8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(uVar2);
    ppuVar4 = &puStack_88;
    uStack_58 = uVar2;
    _objc_retainBlock();
    (*(code *)ppuVar4[2])();
    _objc_release(ppuVar4);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105840b94; end: 105840c27;  */

void FUN_105840b94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_105840c28;
      puStack_30 = &UNK_110842e18;
      lStack_28 = lVar1;
      func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 0x50),param_2,&puStack_48);
    }
    else {
      func_0x00010bee4ec0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105840c28; end: 105840cab;  */

void FUN_105840c28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea5220(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  puVar1 = PTR_PTR_1126bf120;
  func_0x00010bf77a40(PTR_PTR_1126bf120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105840cac; end: 105840d43; -[SCMapBasePersonLocationsProviderV2 _updateWithStreamedFriendClusters:clearDataStore:] */

void FUN_105840cac(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105840d44;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105840d44; end: 105841037;  */

void FUN_105840d44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bf3b180(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0));
    lVar7 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lVar11 * 8);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
        func_0x00010bf3e6e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar9);
        _objc_release(uVar8);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        uVar9 = *(undefined8 *)(lVar11 * 8);
        uVar8 = uVar9;
        func_0x00010c081340();
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
        func_0x00010bf3e6e0();
        _objc_retainAutoreleasedReturnValue();
        if ((int)uVar8 == 0) {
          func_0x00010c1d0560(uVar10);
        }
        else {
          func_0x00010c12d3e0();
        }
        _objc_release(uVar9);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    }
  }
  _objc_release(lVar7);
  puVar3 = *(undefined **)(param_1 + 0x28);
  FUN_10583d0d0(puVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8));
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010be51bc0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar5 = puVar3;
  func_0x00010bed6b40(*(undefined8 *)(param_1 + 0x20));
  if ((*(char *)(param_1 + 0x30) == '\x01') &&
     (puVar4 = puVar3, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5220(uVar8);
    _objc_release(puVar5);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
    puVar4 = PTR_PTR_1126bf120;
    func_0x00010bf77a40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d9840(uVar8);
    _objc_release(puVar4);
  }
  func_0x00010be69ec0(*(undefined8 *)(param_1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar8 = *(undefined8 *)(puVar3 + 0x50);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 105841038; end: 1058410c7; -[SCMapBasePersonLocationsProviderV2 _updateWithUnaryFriendClusters:] */

void FUN_105841038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058410c8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1058410c8; end: 10584111f;  */

void FUN_1058410c8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3b180(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_10583d0d0(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6b40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be69ec0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105841120; end: 105841193; -[SCMapBasePersonLocationsProviderV2 _reloadFromRawStreamingClusters] */

void FUN_105841120(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10583d0d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bed6b40(param_1);
  func_0x00010be69ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105841194; end: 105841197; -[SCMapBasePersonLocationsProviderV2 _logClustersForDebugging:] */

void FUN_105841194(void)

{
  return;
}



/* Entry: 105841198; end: 105841343; -[SCMapBasePersonLocationsProviderV2 _clusterContainingUserId:allClusters:] */

void FUN_105841198(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  uVar1 = uRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (uRam0000000000000000 != uVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar3 = lVar8;
      func_0x00010c0fa5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      if (lVar4 == 0) {
LAB_1058412b8:
        _objc_release(lVar3);
      }
      else {
        uVar5 = uRam0000000000000000;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) goto LAB_1058412b8;
        _objc_retain(lVar8);
        _objc_release(lVar3);
        if (lVar8 != 0) goto LAB_1058412ec;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  lVar8 = 0;
LAB_1058412ec:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_3;
  func_0x00010c09fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c09fa80();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bfb7840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bfb7840();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bde3b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar7,0);
    _objc_release(lVar7);
    _objc_release(lVar2);
    func_0x00010c19f8e0(param_3);
  }
  lVar2 = param_3;
  func_0x00010bfd7a20();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0f7360();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__processBestFriendCompletions_11257db58);
      return;
    }
  }
  return;
}



/* Entry: 105841344; end: 10584145f; -[SCMapBasePersonLocationsProviderV2 _onLocationsChanged] */

void FUN_105841344(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c09fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c09fa80();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bfb7840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfb7840();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bde3b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,lVar2,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c19f8e0(param_1);
  }
  lVar1 = param_1;
  func_0x00010bfd7a20();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0f7360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processBestFriendCompletions_11257db58);
      return;
    }
  }
  return;
}



/* Entry: 105841460; end: 1058419f3; -[SCMapBasePersonLocationsProviderV2 _updateDataStoreWithFriendClusters:] */

void FUN_105841460(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
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
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x50));
  lVar12 = param_5;
  func_0x00010bf529e0();
  if (lVar12 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    _objc_retain(param_5);
    lVar12 = param_5;
    func_0x00010bf52a60(param_5,param_4,&uStack_2c0,auStack_100,0x10);
    if (lVar12 != 0) {
      bVar11 = false;
      lVar14 = *plStack_2b0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_2b0 != lVar14) {
            _objc_enumerationMutation(param_5);
          }
          uVar19 = *(ulong *)(lStack_2b8 + lVar18 * 8);
          uVar3 = uVar19;
          func_0x00010c081340();
          if ((int)uVar3 == 0) {
            if (bVar11) {
              func_0x00010befa120(puVar2,param_4,uVar19);
              bVar11 = true;
            }
            else {
              uVar13 = 0;
              uStack_2d8 = 0;
              uStack_2e0 = 0;
              uStack_2c8 = 0;
              uStack_2d0 = 0;
              lStack_2f8 = 0;
              uStack_300 = 0;
              uStack_2e8 = 0;
              plStack_2f0 = (long *)0x0;
              uVar3 = uVar19;
              func_0x00010c0fa5e0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bf52a60();
              if (uVar4 != 0) {
                lVar15 = *plStack_2f0;
                do {
                  uVar17 = 0;
                  do {
                    if (*plStack_2f0 != lVar15) {
                      _objc_enumerationMutation(uVar3);
                    }
                    uVar20 = *(undefined8 *)(lStack_2f8 + uVar17 * 8);
                    uVar6 = uVar20;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = uVar6;
                    func_0x00010c0720c0();
                    _objc_release(uVar6);
                    if ((int)uVar5 != 0) {
                      _objc_retain(uVar20);
                      uVar6 = *(undefined8 *)(param_3 + 0xd8);
                      *(undefined8 *)(param_3 + 0xd8) = uVar20;
                      _objc_release(uVar6);
                      _objc_retain(uVar19);
                      uVar6 = *(undefined8 *)(param_3 + 0xe0);
                      *(ulong *)(param_3 + 0xe0) = uVar19;
                      _objc_release(uVar6);
                      uVar4 = uVar19;
                      func_0x00010c0fa5e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar17 = uVar4;
                      func_0x00010bf529e0();
                      _objc_release(uVar4);
                      if (1 < uVar17) {
                        uVar4 = uVar19;
                        func_0x00010c0fa5e0(uVar19);
                        _objc_retainAutoreleasedReturnValue();
                        uVar17 = uVar4;
                        func_0x00010c0d3c80();
                        _objc_release(uVar4);
                        func_0x00010c12d360(uVar17,param_4,uVar20);
                        puVar7 = PTR_PTR_1126bf100;
                        _objc_alloc(PTR_PTR_1126bf100);
                        func_0x00010bf51c80(uVar19);
                        uVar4 = uVar19;
                        func_0x00010bfb2e60(uVar19);
                        _objc_retainAutoreleasedReturnValue();
                        uVar8 = uVar19;
                        func_0x00010c118b00(uVar19);
                        _objc_retainAutoreleasedReturnValue();
                        uVar9 = uVar19;
                        func_0x00010c0b8f60(uVar19);
                        _objc_retainAutoreleasedReturnValue();
                        uVar10 = uVar19;
                        func_0x00010c06fae0(uVar19);
                        func_0x00010bf3e6e0(uVar19);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c035720(uVar13,param_2,puVar7,param_4,uVar17,uVar4,uVar8,uVar9,
                                            uVar10,uVar19,0);
                        _objc_release(uVar19);
                        _objc_release(uVar9);
                        _objc_release(uVar8);
                        _objc_release(uVar4);
                        func_0x00010befa120(puVar2,param_4,puVar7);
                        _objc_release(puVar7);
                        _objc_release(uVar17);
                      }
                      _objc_release(uVar3);
                      bVar11 = true;
                      goto LAB_1058417e0;
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar4 != uVar17);
                  uVar4 = uVar3;
                  func_0x00010bf52a60(uVar3,param_4,&uStack_300,auStack_180,0x10);
                } while (uVar4 != 0);
              }
              _objc_release(uVar3);
              func_0x00010befa120(puVar2,param_4,uVar19);
              bVar11 = false;
            }
          }
          else {
            func_0x00010befa120(puVar1,param_4,uVar19);
          }
LAB_1058417e0:
          lVar18 = lVar18 + 1;
        } while (lVar18 != lVar12);
        lVar12 = param_5;
        func_0x00010bf52a60(param_5,param_4,&uStack_2c0,auStack_100,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(param_5);
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    _objc_retain(puVar2);
    puVar7 = puVar2;
    func_0x00010bf52a60(puVar2,param_4,&uStack_340,auStack_200,0x10);
    if (puVar7 != (undefined *)0x0) {
      lVar12 = *plStack_330;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_330 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          func_0x00010bef7780(*(undefined8 *)(param_3 + 0x18),param_4,
                              *(undefined8 *)(lStack_338 + (long)puVar16 * 8));
          puVar16 = puVar16 + 1;
        } while (puVar7 != puVar16);
        puVar7 = puVar2;
        func_0x00010bf52a60(puVar2,param_4,&uStack_340,auStack_200,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    _objc_retain(puVar1);
    puVar7 = puVar1;
    func_0x00010bf52a60(puVar1,param_4,&uStack_380,auStack_280,0x10);
    if (puVar7 != (undefined *)0x0) {
      lVar12 = *plStack_370;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_370 != lVar12) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010c12b820(*(undefined8 *)(param_3 + 0x18),param_4,
                              *(undefined8 *)(lStack_378 + (long)puVar16 * 8));
          puVar16 = puVar16 + 1;
        } while (puVar7 != puVar16);
        puVar7 = puVar1;
        func_0x00010bf52a60(puVar1,param_4,&uStack_380,auStack_280,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    func_0x00010bed2940(param_3);
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5220(param_3,param_4,puVar7);
    _objc_release(puVar7);
    uVar13 = *(undefined8 *)(param_3 + 0x90);
    puVar7 = PTR_PTR_1126bf120;
    func_0x00010bf77a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar13,param_4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _os_unfair_lock_lock(param_5 + 0xc0);
    uVar13 = *(undefined8 *)(param_5 + 0xb8);
    _objc_retain(uVar13);
    _os_unfair_lock_unlock(param_5 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
    return;
  }
  return;
}



/* Entry: 1058419f4; end: 105841a2f; -[SCMapBasePersonLocationsProviderV2 _lastSuccessfulUpdateTimestamp] */

void FUN_1058419f4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105841a30; end: 105841a6f; -[SCMapBasePersonLocationsProviderV2 _setLastSuccessfulUpdateTimestamp:] */

void FUN_105841a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xc0);
  return;
}



/* Entry: 105841a70; end: 105841aff; -[SCMapBasePersonLocationsProviderV2 _didUpdateMutedFriendsList:] */

void FUN_105841a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105841b00;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105841b00; end: 105841b0b;  */

void FUN_105841b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleMutedFriendsList__112568be0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105841b0c; end: 105841d47; -[SCMapBasePersonLocationsProviderV2 _handleMutedFriendsList:] */

void FUN_105841b0c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar1 = param_3;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar2 = uVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar8 = *plStack_120;
      do {
        uVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(uVar2);
          }
          uVar7 = *(undefined8 *)(lStack_128 + uVar9 * 8);
          lVar3 = *(long *)(param_1 + 0x18);
          func_0x00010c0fa580(lVar3,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010be8dde0(param_1,param_2,lVar3,uVar7);
          }
          _objc_release(lVar3);
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
        uVar4 = uVar2;
        func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (uVar4 != 0);
    }
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf529e0();
    uVar4 = *(ulong *)(param_1 + 0xa8);
    func_0x00010bf529e0();
    if (uVar2 < uVar4) {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c25c460();
      _objc_release(uVar5);
      if ((int)uVar7 == 0) {
        func_0x00010c1288e0(param_1);
      }
      else {
        func_0x00010be8a980();
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      puVar6 = PTR_PTR_1126bf120;
      func_0x00010bf77a40(PTR_PTR_1126bf120);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar7,param_2,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  *(ulong *)(param_1 + 0xa8) = uVar1;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca700();
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105841d48;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105841da0;
  puStack_150 = &UNK_110842e18;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(param_3 + 0x50),param_2,&puStack_168);
  return;
}



/* Entry: 105841d48; end: 105841d9f; -[SCMapBasePersonLocationsProviderV2 locationProviderDidUpdateLocation] */

void FUN_105841d48(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105841da0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 105841da0; end: 105841e5f;  */

void FUN_105841da0(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xe8);
  _objc_retain(lVar3);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0x20);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(lVar4 + 0xe8);
    *(long *)(lVar4 + 0xe8) = lVar1;
    _objc_release(uVar2);
    if (lVar3 != 0) {
      func_0x00010bf51c80(lVar1);
      dVar5 = param_1;
      uVar2 = param_2;
      func_0x00010bf51c80(lVar3);
      func_0x000108d312a8(param_1,param_2,dVar5,uVar2);
      if (param_1 <= 1.0) goto LAB_105841e40;
    }
    func_0x00010bed2940(*(undefined8 *)(param_3 + 0x20));
  }
LAB_105841e40:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105841e60; end: 105841eeb; -[SCMapBasePersonLocationsProviderV2 _updateActiveUserLocation] */

void FUN_105841e60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    puVar2 = PTR_PTR_1126bf128;
    func_0x00010bf5ece0(PTR_PTR_1126bf128,param_2,*(long *)(param_1 + 0xd8),lVar1,
                        *(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5fa40(param_1,param_2,puVar2);
    func_0x00010be69ec0(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105841eec; end: 105842233; -[SCMapBasePersonLocationsProviderV2 _mergeNewCurrentUserPersonLocationIntoFriendClusters:] */

void FUN_105841eec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x50));
  lVar2 = *(long *)(param_3 + 0x18);
  func_0x00010c0fa5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010be8dde0(param_3,param_4,lVar3,*(undefined8 *)(param_3 + 8));
  }
  lVar4 = *(long *)(param_3 + 0x18);
  func_0x00010c0fa5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  dVar17 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60(lVar2,param_4,&uStack_150,auStack_108,0x10);
  if (lVar4 == 0) {
    _objc_release(lVar2);
LAB_1058420d0:
    uVar12 = *(undefined8 *)(param_3 + 0xe0);
    func_0x00010c118b00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bf100;
    _objc_alloc(PTR_PTR_1126bf100);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_110 = param_5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_110,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_5);
    uVar7 = *(undefined8 *)(param_3 + 0xe0);
    func_0x00010c0b8f60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = 0;
    func_0x00010c035720(dVar17,param_2,puVar5,param_4,puVar6,0,uVar12,uVar7,0,
                        *(undefined8 *)(param_3 + 8),0);
    _objc_release(uVar7);
    _objc_release(puVar6);
    func_0x00010bef7780(*(undefined8 *)(param_3 + 0x18),param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar12);
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    dVar19 = *(double *)PTR__CLLocationDistanceMax_110349b60;
    lVar15 = *plStack_140;
    do {
      lVar16 = 0;
      do {
        dVar18 = dVar17;
        if (*plStack_140 != lVar15) {
          _objc_enumerationMutation(lVar2);
          dVar18 = dVar17;
        }
        lVar14 = *(long *)(lStack_148 + lVar16 * 8);
        func_0x00010bf51c80(lVar14);
        func_0x00010bf51c80(lVar14);
        _CLLocationCoordinate2DMake();
        func_0x00010bf51c80(param_5);
        func_0x000108d312a8();
        bVar1 = false;
        if ((dVar18 < dVar19) && (bVar1 = false, !NAN(dVar18))) {
          bVar1 = dVar18 < 60.0;
        }
        dVar17 = dVar18;
        if (bVar1) {
          _objc_retain(lVar14);
          _objc_release(lVar13);
          lVar13 = lVar14;
          dVar19 = dVar18;
        }
        lVar16 = lVar16 + 1;
      } while (lVar4 != lVar16);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_4,&uStack_150,auStack_108,0x10);
    } while (lVar4 != 0);
    _objc_release(lVar2);
    if (lVar13 == 0) goto LAB_1058420d0;
    lVar4 = param_5;
    func_0x00010bdc8e80(param_3,param_4,lVar13);
  }
  uVar12 = *(undefined8 *)(param_3 + 0x90);
  puVar5 = PTR_PTR_1126bf120;
  func_0x00010bf77a40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d9840(uVar12);
  _objc_release(puVar5);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(lVar4);
  if ((puVar6 != (undefined *)0x0) && (lVar3 = lVar4, func_0x00010c08fa60(), lVar3 != 0)) {
    puVar5 = puVar6;
    func_0x00010c0fa5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x1) {
      puVar8 = puVar6;
      func_0x00010c0fa5e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar5);
      if ((int)puVar11 != 0) {
        func_0x00010c12b820(*(undefined8 *)(param_5 + 0x18),param_4,puVar6);
        goto LAB_105842354;
      }
    }
    else {
      _objc_release(puVar5);
    }
    lVar3 = param_5;
    func_0x00010bde1920(param_5,param_4,puVar6,lVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c12b820(*(undefined8 *)(param_5 + 0x18),param_4,puVar6);
      func_0x00010bef7780(*(undefined8 *)(param_5 + 0x18),param_4,lVar3);
      _objc_release(lVar3);
    }
  }
LAB_105842354:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105842234; end: 105842377; -[SCMapBasePersonLocationsProviderV2 _removeUserFromCluster:userId:] */

void FUN_105842234(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010c0fa5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = param_3;
      func_0x00010c0fa5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0720c0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar5 != 0) {
        func_0x00010c12b820(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
        goto LAB_105842354;
      }
    }
    else {
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010bde1920(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c12b820(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
      func_0x00010bef7780(*(undefined8 *)(param_1 + 0x18),param_2,lVar1);
      _objc_release(lVar1);
    }
  }
LAB_105842354:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105842378; end: 105842427; -[SCMapBasePersonLocationsProviderV2 _addUserToCluster:personToBeAdded:] */

void FUN_105842378(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bedcea0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bde1900(param_1,param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b820(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    _objc_release(param_3);
    func_0x00010bef7780(*(undefined8 *)(param_1 + 0x18),param_2,lVar2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105842428; end: 105842663; -[SCMapBasePersonLocationsProviderV2 _updatePersonLocationWithCluster:personToBeUpdated:] */

void FUN_105842428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

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
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126bf130;
  puVar13 = (undefined *)0x0;
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_alloc();
    lVar2 = param_6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_5);
    uVar14 = param_1;
    uVar17 = param_2;
    _objc_release(param_5);
    func_0x00010bfe4080(param_6);
    lVar3 = param_6;
    uVar15 = uVar14;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_6;
    func_0x00010c088220(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_6;
    func_0x00010c09e300(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_6;
    func_0x00010c297f60(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_6;
    func_0x00010c253880(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_6;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_6);
    lVar9 = param_6;
    uVar16 = uVar15;
    func_0x00010bf4e080();
    lVar10 = param_6;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17500(param_6);
    lVar11 = param_6;
    func_0x00010beed020();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_6;
    func_0x00010c07dcc0();
    _objc_release(param_6);
    func_0x00010c05ae80(param_1,param_2,uVar14,uVar15,uVar17,uVar16,puVar1,param_4,lVar2,lVar3,lVar4
                        ,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,(char)lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar13 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105842664; end: 105842867; -[SCMapBasePersonLocationsProviderV2 _clusterAfterRemovingUserId:userIdToBeRemoved:] */

void FUN_105842664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010c0fa5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = param_6;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    puVar6 = (undefined *)0x0;
    if (uVar2 == 0) goto LAB_105842830;
    uVar1 = param_5;
    func_0x00010c0fa5e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uVar7 = 0xc2000000;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105842868;
    puStack_80 = &UNK_1108b7370;
    _objc_retain(param_6);
    uVar2 = uVar1;
    uStack_78 = param_6;
    func_0x0001006372a4(uVar1,&puStack_98);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126bf100;
    _objc_alloc(PTR_PTR_1126bf100);
    func_0x00010bf51c80(param_5);
    uVar1 = param_5;
    func_0x00010bfb2e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c118b00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0b8f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06fae0(param_5);
    uVar5 = param_5;
    func_0x00010bf3e6e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081340();
    func_0x00010c035720(uVar7,param_2,puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar1 = uStack_78;
  }
  _objc_release(uVar1);
LAB_105842830:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105842868; end: 1058428af;  */

uint FUN_105842868(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1058428b0; end: 105842a43; -[SCMapBasePersonLocationsProviderV2 _clusterAfterAddingPersonLocation:personToBeAdded:] */

void FUN_1058428b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar8 = (undefined *)0x0;
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    lVar1 = param_5;
    func_0x00010c0fa5e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    func_0x00010befa120(lVar2,param_4,param_6);
    _objc_release(param_6);
    puVar8 = PTR_PTR_1126bf100;
    _objc_alloc(PTR_PTR_1126bf100);
    func_0x00010bf51c80(param_5);
    lVar1 = param_5;
    func_0x00010bfb2e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c118b00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0b8f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010c06fae0(param_5);
    lVar6 = param_5;
    func_0x00010bf3e6e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    func_0x00010c081340();
    _objc_release(param_5);
    func_0x00010c035720(param_1,param_2,puVar8,param_4,lVar2,lVar1,lVar3,lVar4,lVar5,lVar6,
                        (char)lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105842a44; end: 105842a4f; -[SCMapBasePersonLocationsProviderV2 locationsUpdatedCallback] */

void FUN_105842a44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x108,1);
  return;
}



/* Entry: 105842a50; end: 105842a57; -[SCMapBasePersonLocationsProviderV2 setLocationsUpdatedCallback:] */

void FUN_105842a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105842a58; end: 105842a63; -[SCMapBasePersonLocationsProviderV2 freshLocationsCallback] */

void FUN_105842a58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x110,1);
  return;
}



/* Entry: 105842a64; end: 105842a6b; -[SCMapBasePersonLocationsProviderV2 setFreshLocationsCallback:] */

void FUN_105842a64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105842a6c; end: 105842a77; -[SCMapBasePersonLocationsProviderV2 pendingBestFriendCompletions] */

void FUN_105842a6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x118,1);
  return;
}



/* Entry: 105842a78; end: 105842a7f; -[SCMapBasePersonLocationsProviderV2 setPendingBestFriendCompletions:] */

void FUN_105842a78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105842a80; end: 105842c4b; -[SCMapBasePersonLocationsProviderV2 .cxx_destruct] */

void FUN_105842a80(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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



/* Entry: 105842c4c; end: 10584306f; -[SCMapPersonLocationServiceProvider _mapPersonLocationsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105842c4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  lVar1 = param_1 + _DAT_11272aa9c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar30 = (long)_DAT_11272aaa0;
  lVar1 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar5 = lVar4;
  func_0x00010c11e0e0(lVar4,param_2,3,0x11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bf148;
  _objc_alloc();
  lVar31 = (long)_DAT_11272aaa4;
  lVar1 = param_1 + lVar31;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007520(puVar6,param_2,lVar3,lVar2,lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126bf150;
  _objc_alloc();
  lVar29 = (long)_DAT_11272aaa8;
  lVar1 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_11272aaac;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11272aab0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11272aab4;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11272aab8;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfba400();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272aabc;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11272aac0;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c0d4240();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11272aac4;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c296d20();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar24 = lVar30;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar27 = lVar31;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = 0;
  if (param_1 != 0) {
    lVar28 = param_1 + lVar29;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar28;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bcc0(puVar7,param_2,lVar3,lVar1,puVar6,lVar9,lVar12,lVar15,lVar17,lVar19,lVar21,
                      lVar23,lVar26,lVar27,lVar29);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar31);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar30);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105843070; end: 105843113; -[SCMapPersonLocationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105843070(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272aac4);
  _objc_destroyWeak(param_1 + _DAT_11272aaa0);
  _objc_destroyWeak(param_1 + _DAT_11272aaa8);
  _objc_destroyWeak(param_1 + _DAT_11272aaa4);
  _objc_destroyWeak(param_1 + _DAT_11272aaac);
  _objc_destroyWeak(param_1 + _DAT_11272aab8);
  _objc_destroyWeak(param_1 + _DAT_11272aabc);
  _objc_destroyWeak(param_1 + _DAT_11272aab4);
  _objc_destroyWeak(param_1 + _DAT_11272aab0);
  _objc_destroyWeak(param_1 + _DAT_11272aac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272aa9c);
  return;
}



/* Entry: 105843114; end: 1058431d3; -[SCMapPersonLocationsProviderObserver initWithBasePersonLocationsProvider:owner:] */

undefined1 *
FUN_105843114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea950;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    _objc_retain();
    func_0x00010c126dc0(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058431d4; end: 105843217; -[SCMapPersonLocationsProviderObserver dealloc] */

void FUN_1058431d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_1126ea950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105843218; end: 105843263; -[SCMapPersonLocationsProviderObserver unobserve] */

void FUN_105843218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2821c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


