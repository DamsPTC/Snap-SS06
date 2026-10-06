/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063ca9fc; end: 1063cadfb; -[SCContentInterstitialAdDataSource _fetchStoryAdMediaIfNecessaryWithDataModel:] */

void FUN_1063ca9fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar13 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar13;
    func_0x00010bf529e0();
    _objc_release(uVar13);
    if (uVar1 != 0) {
      uVar13 = 0;
      do {
        uVar1 = param_3;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = param_1;
        func_0x00010bef3680();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c242040(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0c5940();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf925a0();
        uVar12 = uVar2;
        func_0x0001084c4f90(uVar2,uVar7,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar3;
        func_0x00010c0c4d40();
        _objc_release(uVar12);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar1);
        if ((uVar11 & 1) == 0) {
          uVar1 = uVar2;
          func_0x00010c242040();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c274c60();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bfe5ec0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x0001084c506c(uVar3,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          _objc_initWeak(auStack_78,param_1);
          uVar1 = param_1;
          func_0x00010bf6d940(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c0c4e40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c0c5660(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_3);
          _objc_retain(uVar2);
          _objc_retain(uVar5);
          _objc_copyWeak(auStack_80,auStack_78);
          func_0x00010bfa87a0(uVar4);
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          _objc_destroyWeak(auStack_80);
          _objc_release(uVar5);
          _objc_release(uVar2);
          _objc_destroyWeak(auStack_78);
          _objc_release(uVar5);
        }
        _objc_release(uVar2);
        uVar13 = uVar13 + 1;
        uVar1 = param_3;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
      } while (uVar13 < uVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1063cadfc; end: 1063cae3f;  */

void FUN_1063cadfc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063cae40; end: 1063caebf; -[SCContentInterstitialAdDataSource _handleMediaFetchResult:adSnap:] */

void FUN_1063cae40(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_4);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c280580(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c101400(param_1,param_2,uVar1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1063caec0; end: 1063cb017; -[SCContentInterstitialAdDataSource resetInsertionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063caec0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f11c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_resetInsertionState_11262bd88);
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2569e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112746f08));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746ef4));
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1063cb018; end: 1063cb15f; -[SCContentInterstitialAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cb018(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f11c0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_resetInsertionData_11262bd80);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746ee4));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746ee8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746eec));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746ef0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746ef4));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746ef8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746efc));
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2569e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112746f04);
  *(undefined8 *)(param_1 + _DAT_112746f04) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112746f00);
  *(undefined8 *)(param_1 + _DAT_112746f00) = 0;
  _objc_release(uVar4);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112746f08));
  func_0x00010bf6af80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1063cb160; end: 1063cb167; -[SCContentInterstitialAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063cb160(void)

{
  return 0;
}



/* Entry: 1063cb168; end: 1063cb16f; -[SCContentInterstitialAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063cb168(void)

{
  return 1;
}



/* Entry: 1063cb170; end: 1063cb403; -[SCContentInterstitialAdDataSource pageDataForDataModel:completion:] */

void FUN_1063cb170(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = param_1;
  func_0x00010bef3680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c242040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf925a0();
  uVar13 = uVar1;
  func_0x0001084c4f90(uVar1,uVar8,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c0c4d40();
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((uVar12 & 1) == 0) {
    if (param_4 != 0) {
      puVar2 = PTR_PTR_1126b23e0;
      _objc_alloc(PTR_PTR_1126b23e0);
      uVar3 = uVar1;
      func_0x00010c280580(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      uVar4 = uVar3;
      func_0x00010640abd4(uVar3,param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033240(puVar2);
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  else {
    puStack_68 = PTR_PTR_1126f11c0;
    uStack_70 = param_1;
    _objc_msgSendSuper2(&uStack_70,PTR_s_pageDataForDataModel_completion__112619db8,param_3,param_4)
    ;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063cb404; end: 1063cb47b; -[SCContentInterstitialAdDataSource extraPagePropertiesForDataModel:] */

undefined * FUN_1063cb404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc41b8;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5ba8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1063cb47c; end: 1063cb483; -[SCContentInterstitialAdDataSource isAdContentLoopingForDataModel:] */

undefined8 FUN_1063cb47c(void)

{
  return 1;
}



/* Entry: 1063cb484; end: 1063cb66b; -[SCContentInterstitialAdDataSource adViewContextForGroupId:] */

void FUN_1063cb484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR_s_adViewContextForGroupId__11259b230;
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f11c0;
  uStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_60,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    puVar2 = (undefined *)puVar1;
    func_0x00010c0d3c80(puVar1);
  }
  uVar3 = param_1;
  func_0x00010bef4ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef4840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126ca500;
  func_0x00010c104fc0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b92c8;
  func_0x00010c1305a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ca500;
  func_0x00010c104fc0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b92c8;
  func_0x00010c0680c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063cb66c; end: 1063cb70f; -[SCContentInterstitialAdDataSource adSnapViewLogParametersForSkippedAdGroupId:aroundGroup:pageLeft:] */

void FUN_1063cb66c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f11c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_adSnapViewLogParametersForSkippe_11259aef0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba700();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063cb710; end: 1063cb8d3; -[SCContentInterstitialAdDataSource unviewedAds] */

void FUN_1063cb710(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010c067240();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010c067240(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x000100504554();
      _objc_release(param_1);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1391e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1063cb8d4; end: 1063cb9f7; -[SCContentInterstitialAdDataSource _groupsLeftCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cb8d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    lVar5 = *(long *)(param_1 + _DAT_112746eec);
    func_0x00010bf529e0(lVar5);
    lVar6 = *(long *)(param_1 + _DAT_112746ee8);
    func_0x00010bf529e0(lVar6);
    func_0x00010c0df840(puVar7,param_2,lVar4 - (lVar5 + lVar6));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1063cb9f8; end: 1063cba7b; -[SCContentInterstitialAdDataSource _setAdRules] */

void FUN_1063cb9f8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bfd7fe0();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 & 1) == 0) {
    func_0x00010c164440();
  }
  else {
    func_0x00010c164460();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063cba7c; end: 1063cbf13; -[SCContentInterstitialAdDataSource _insertAdIfNecessaryAfterItem:insertSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cba7c(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar15 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar15;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar15);
  if ((int)uVar3 != 0) {
    lVar5 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar14;
    func_0x00010c08fa60();
    _objc_release(lVar14);
    if (lVar4 == 0) {
      _objc_release(lVar5);
      goto LAB_1063cbed0;
    }
    lVar14 = lVar5;
    func_0x00010be36bc0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010c067220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    uVar1 = uVar15;
    func_0x00010bf529e0();
    _objc_release(uVar15);
    _objc_release(lVar5);
    if (uVar1 != 0) goto LAB_1063cbed0;
  }
  uVar15 = *(ulong *)(param_1 + (long)_DAT_112746ee4);
  lVar5 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(lVar14);
  _objc_release(lVar5);
  if ((uVar15 & 1) == 0) {
    lVar14 = (long)_DAT_112746f0c;
    lVar5 = *(long *)(param_1 + lVar14);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      puVar6 = *(undefined **)(param_1 + lVar14);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1063cbf14;
      puStack_88 = &UNK_110920588;
      uStack_80 = param_1;
      func_0x000100504554(puVar6,&puStack_a0);
      puVar7 = puVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e4d678;
      puVar16 = puVar8;
      if (puVar8 == (undefined *)0x0) {
        puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_70 = puVar16;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 == (undefined *)0x0) {
        _objc_release(puVar16);
      }
      puVar16 = puVar6;
      func_0x00010bf529e0();
      if (puVar16 == (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar16 = PTR_PTR_1126bdb78;
        _objc_alloc(PTR_PTR_1126bdb78);
        puVar9 = puVar16;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b480(puVar16);
        _objc_release(puVar9);
      }
      uVar10 = *(undefined8 *)(param_1 + lVar14);
      *(undefined8 *)(param_1 + lVar14) = 0;
      _objc_release(uVar10);
      uVar15 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1da300();
      _objc_release(uVar15);
      _objc_release(puVar16);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    uVar15 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258fe0(param_1);
    uVar1 = uVar15;
    func_0x00010bf5f900();
    _objc_release(uVar15);
    lVar5 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar15;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    func_0x00010be3fd00();
    uVar10 = 0xb;
    if ((int)uVar12 == 0) {
      uVar10 = 0;
    }
    lVar4 = lVar14;
    param_2 = uVar1;
    FUN_10641701c(lVar14,uVar1,0,uVar10,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_1);
    _objc_release(lVar4);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar5);
    if ((uVar1 & 0xfffffffffffffffd) == 0) {
      func_0x00010be5b460(param_1);
    }
    else {
      uVar15 = param_1;
      func_0x00010c0f72e0();
      if ((int)uVar15 != 0) {
        func_0x00010be3c240(param_1);
      }
    }
  }
LAB_1063cbed0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010c067200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 1063cbf14; end: 1063cbf7f;  */

void FUN_1063cbf14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c067200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063cbf80; end: 1063cc503; -[SCContentInterstitialAdDataSource _insertAdAfterItem:insertSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cbf80(undefined *param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c066b80();
  puVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  if ((int)puVar1 == 0) {
    func_0x00010c0e4940(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c0e4940(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c163ca0(param_1);
    puVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf9be80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125bc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bef4840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c0e00e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    puVar12 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf21040();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a04c0(puVar4);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      uVar16 = param_3;
      func_0x00010bfce400(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + _DAT_112746efc);
      puVar1 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar19);
      _objc_release(puVar1);
      _objc_release(uVar17);
      _objc_release(uVar16);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c258ea0();
      func_0x00010c0df780(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bef4860(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    puVar1 = puVar2;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    func_0x00010c1391e0(param_1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1063cc504; end: 1063cc50b;  */

void FUN_1063cc504(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1063cc50c; end: 1063cc65b; -[SCContentInterstitialAdDataSource insertAdPod:adPlacement:afterItem:insertSource:] */

undefined1 *
FUN_1063cc50c(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef60a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0x12) {
    lVar1 = param_3;
    func_0x00010bef4c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3c800(param_1);
    _objc_release(lVar2);
    param_3 = lVar1;
    ppuVar4 = (undefined1 **)param_1;
  }
  else {
    puStack_58 = PTR_PTR_1126f11c0;
    puStack_60 = param_1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_insertAdPod_adPlacement_afterIte_1125f7358,param_3,param_4
                        ,param_5,param_6);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)ppuVar4;
}



/* Entry: 1063cc65c; end: 1063cc897; -[SCContentInterstitialAdDataSource _insertPromotedPublisherStoryWithAdData:adPlacement:afterItem:insertSource:] */

long FUN_1063cc65c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar9 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c258fe0(param_1);
  lVar2 = lVar9;
  func_0x00010bf63ea0(lVar9,param_2,param_4,param_3,lVar1);
  _objc_release(param_4);
  _objc_release(lVar9);
  if (lVar2 == 7) {
    uVar3 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c117ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f0800();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c11b1e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c259cc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf52680(uVar5);
    uVar8 = param_5;
    func_0x00010bfce400(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c066d40(lVar6,param_2,uVar3,uVar4,uVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar9 == 0) {
      func_0x00010c1391e0(param_1);
      func_0x00010be5b460(param_1,param_2,4);
    }
    else {
      uVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0560(param_1,param_2,uVar3,param_6);
      _objc_release(uVar3);
    }
    _objc_release(uVar5);
  }
  else {
    lVar9 = 0;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar9;
}



/* Entry: 1063cc898; end: 1063ccc4f; -[SCContentInterstitialAdDataSource _makeAdRequestIfNecessary:] */

void FUN_1063cc898(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar4 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x00010c0e2460(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b8cd8;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bef4240(param_1);
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf17b60();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf17be0();
  _objc_release(puVar7);
  if (param_3 - 1U < 4) {
    ppuStack_88 = (undefined **)(&PTR_PTR_110920668)[param_3 - 1U];
  }
  else {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1063ce84c;
  puStack_98 = &UNK_1108951c0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e4d6b8;
  ppuVar11 = &puStack_b0;
  puStack_80 = puVar10;
  func_0x00010bf51e00();
  _objc_release(ppuStack_88);
  _objc_release(ppuStack_90);
  _objc_initWeak(&puStack_b0,param_1);
  uVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010befe100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar4 = param_1;
  func_0x00010bef4d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bef3aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21060();
  puStack_b8 = puVar9;
  _objc_copyWeak(auStack_c0,&puStack_b0);
  func_0x00010c134800(uVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_b0);
  _objc_release(ppuVar11);
  _objc_release(puVar8);
  return;
}



/* Entry: 1063ccc50; end: 1063ccd5f;  */

void FUN_1063ccc50(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063ccd60; end: 1063cd2d3; -[SCContentInterstitialAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:] */

void FUN_1063ccd60(undefined *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  if (param_3 != 0) {
    puVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    puVar4 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c0e2440(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bdce9a0(param_1);
      puVar1 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e2300(puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar2 = PTR_PTR_1126b8cd8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bef4240(param_1);
      func_0x00010c25d840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf17b60();
      _objc_release(puVar2);
      _objc_initWeak(auStack_70,param_1);
      puVar2 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bef60a0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      if (puVar7 == (undefined *)0x12) {
        puVar2 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0f0800();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4120(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010c0f7700();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_1063cd2d4;
        puStack_88 = &UNK_1109205f8;
        puVar9 = auStack_80;
        puStack_78 = puVar3;
        _objc_copyWeak(puVar9,auStack_70);
        func_0x00010bfa6600(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(param_1);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941e0();
      }
      else {
        puVar2 = param_1;
        func_0x00010bef4120(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010c0c5660(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010bef3c60();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc0000000;
        pcStack_b8 = FUN_1063cd344;
        puStack_b0 = &UNK_110848088;
        puVar9 = auStack_d8;
        puStack_d0 = puVar3;
        uStack_a8 = param_4;
        _objc_copyWeak(puVar9,auStack_70);
        func_0x00010bfa85e0(puVar2);
        _objc_release(puVar5);
        _objc_release(param_1);
        _objc_release(puVar4);
      }
      _objc_release(puVar2);
      _objc_destroyWeak(puVar9);
      _objc_destroyWeak(auStack_70);
      _objc_release(puVar1);
    }
  }
  return;
}



/* Entry: 1063cd2d4; end: 1063cd33b;  */

void FUN_1063cd2d4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063cd33c; end: 1063cd343;  */

undefined8 FUN_1063cd33c(void)

{
  return 1;
}



/* Entry: 1063cd344; end: 1063cd383;  */

void FUN_1063cd344(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063cd384; end: 1063cd3eb;  */

void FUN_1063cd384(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063cd3ec; end: 1063cd647; -[SCContentInterstitialAdDataSource updateCachedInsertionConfigIfNeeded] */

void FUN_1063cd3ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf271c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c071ae0(uVar5,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar5 != 0) && ((uVar2 & 1) == 0)) {
    func_0x00010c175420(param_1,param_2,uVar5);
    uVar1 = param_1;
    func_0x00010bef4240();
    uVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf07ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 6) {
      func_0x00010c175240();
    }
    else {
      func_0x00010c175220();
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010bef4240(param_1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a05a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1063cd648; end: 1063cd8c3; -[SCContentInterstitialAdDataSource _applyServerAdInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cd648(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bef4240();
  lVar2 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  if (lVar1 == 6) {
    FUN_1063cef90();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1063ce8f4(lVar5,lVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar10 = *(undefined8 *)(param_1 + _DAT_112746f10);
  *(long *)(param_1 + _DAT_112746f10) = lVar9;
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c284080(param_1);
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286980();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bea1a80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be17790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fireDelayedAdOpportunitiesIfNec_112563780);
  return;
}



/* Entry: 1063cd8c4; end: 1063cdaa3; -[SCContentInterstitialAdDataSource _fireDelayedAdOpportunitiesIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cd8c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf6af80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010bf6af80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(lVar10 * 8);
        func_0x00010c067380(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *(long *)(param_1 + _DAT_112746ef4);
        func_0x00010bf529e0();
        uVar9 = *(ulong *)(param_1 + _DAT_112746f10);
        uVar5 = uVar8;
        func_0x00010c29ede0(uVar8);
        uVar6 = uVar8;
        func_0x00010c29ed40(uVar8);
        func_0x00010c29ee20(uVar8);
        if (lVar4 == 0) {
          func_0x0001063fd408(uVar9,uVar5,uVar6);
          if ((int)uVar9 != 0) goto LAB_1063cd9f4;
        }
        else {
          func_0x0001063fd558();
          if ((uVar9 & 1) != 0) {
LAB_1063cd9f4:
            func_0x00010c0a0720(param_1);
          }
        }
        _objc_release(uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    func_0x00010bf6af80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdfdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1063cdaa4; end: 1063cdaaf; -[SCContentInterstitialAdDataSource _didFetchPromotePublisherStoryWithStatus:] */

void FUN_1063cdaa4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didFetchMediaForPendingInsertAd_11255d180,param_3 == 6);
  return;
}



/* Entry: 1063cdab0; end: 1063cde7b; -[SCContentInterstitialAdDataSource _didFetchMediaForPendingInsertAdWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cdab0(double param_1,ulong param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (param_4 == 0) {
    return;
  }
  uVar1 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  func_0x00010c0e22e0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ebcc0();
  if (uVar2 == 2) {
LAB_1063cdb78:
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010bef39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ebcc0();
    if (uVar3 == 0x12) {
      _objc_release(uVar2);
      goto LAB_1063cdb78;
    }
    uVar3 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f480();
    if ((int)uVar6 == 0) {
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
LAB_1063cdc4c:
      uVar1 = param_2;
      func_0x00010bef39c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 == 0) {
        return;
      }
      uVar1 = param_2;
      func_0x00010bef39c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c105ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1139e0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      uVar1 = param_2;
      func_0x00010bef39c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c105ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfb3a00();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      lVar10 = (long)_DAT_112746f04;
      if (*(long *)(param_2 + lVar10) == 0) {
        return;
      }
      uVar1 = param_2;
      func_0x00010bef39c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c105ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0810a0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        uVar1 = param_2;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4c840();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf96200();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar4 == 0) {
          uVar1 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf4c840();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f240();
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          if (param_1 <= 0.0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010be9b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,param_2,PTR_s__scheduleRetryInsertionAfterItem_112584748,
                     *(undefined8 *)(param_2 + lVar10));
          return;
        }
      }
      lVar7 = *(long *)(param_2 + lVar10);
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar10;
      func_0x00010c08fa60();
      _objc_release(lVar10);
      _objc_release(lVar7);
      if (lVar8 == 0) {
        return;
      }
      uVar9 = 3;
      goto LAB_1063cdb88;
    }
    lVar10 = *(long *)(param_2 + (long)_DAT_112746f04);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar10 == 0) goto LAB_1063cdc4c;
  }
  uVar9 = 6;
LAB_1063cdb88:
                    /* WARNING: Could not recover jumptable at 0x00010be0b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__evaluateInsertionRulesAndInsert_1125606d0,uVar9);
  return;
}



/* Entry: 1063cde7c; end: 1063cdffb; -[SCContentInterstitialAdDataSource _scheduleRetryInsertionAfterItem:delaySec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cde7c(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  puVar3 = param_2;
  if (param_4 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e4d778;
    _objc_retain(param_4);
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar9 = (long)_DAT_112746f08;
    func_0x00010c069d00(*(undefined8 *)(param_2 + lVar9));
    puVar1 = PTR_PTR_1126bc890;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e4d598;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_70 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&lStack_70,&ppuStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c1503c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar9);
    *(undefined **)(param_2 + lVar9) = puVar1;
    _objc_release(uVar8);
    _objc_release(param_4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(puVar3 + _DAT_112746f08);
  _objc_retain(puVar2);
  func_0x00010c069d00(uVar8);
  puVar1 = puVar2;
  func_0x00010c0e00e0(puVar2,param_3,&PTR____CFConstantStringClassReference_110e4d598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (puVar5 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(puVar3 + _DAT_112746f04);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be36bc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c0720c0(uVar6,param_3,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar6);
      if ((int)uVar8 != 0) {
        puVar2 = puVar3;
        func_0x00010bf6d940(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bef4240(puVar3);
        func_0x00010c0e49a0(puVar5,param_3,puVar7);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        func_0x00010be0b4c0(puVar3,param_3,4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063cdffc; end: 1063ce173; -[SCContentInterstitialAdDataSource _retryInsertion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cdffc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_112746f08);
  _objc_retain(param_3);
  func_0x00010c069d00(uVar7);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e4d598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112746f04);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010be36bc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0720c0(uVar5,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(uVar5);
      if ((int)uVar7 != 0) {
        lVar2 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bef4240(param_1);
        func_0x00010c0e49a0(lVar4,param_2,lVar6);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        func_0x00010be0b4c0(param_1,param_2,4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063ce174; end: 1063ce4c3; -[SCContentInterstitialAdDataSource _removeAdGroups:afterPlaylistGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1063ce174(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1063ce4c4;
  puStack_b8 = &UNK_110908e38;
  lStack_b0 = param_1;
  _objc_retain(param_4);
  ppuVar12 = &puStack_d0;
  lVar2 = lVar1;
  uStack_a8 = param_4;
  func_0x0001006372a4(lVar1,ppuVar12);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_100 = puVar14;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x1063ce554;
    puStack_e8 = &UNK_11088c820;
    lStack_e0 = param_1;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    func_0x00010bf97e80(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dbdb58;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e03e58;
    puStack_90 = puVar3;
    func_0x00010bf529e0(lVar2);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(puVar3);
    lVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    FUN_1063fc8d0();
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar7 == 0) {
      lVar8 = *(long *)(param_1 + _DAT_112746f0c);
      *(long *)(param_1 + _DAT_112746f0c) = lVar5;
    }
    else {
      puStack_128 = puVar14;
      uStack_120 = 0xc2000000;
      uStack_118 = 0x1063ce5d8;
      puStack_110 = &UNK_110920588;
      ppuVar12 = &puStack_128;
      lVar8 = lVar5;
      lStack_108 = param_1;
      func_0x000100504554(lVar5,ppuVar12);
      _objc_release(lVar5);
      lVar5 = lVar8;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR_PTR_1126bdb78;
        _objc_alloc(PTR_PTR_1126bdb78);
        puVar3 = puVar14;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b480(puVar14);
        _objc_release(puVar3);
      }
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13fe00();
      _objc_release(param_1);
      _objc_release(puVar14);
    }
    _objc_release(lVar8);
    _objc_release(uStack_d8);
  }
  _objc_release(lVar2);
  _objc_release(uStack_a8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (uint)(lVar1 != 0);
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  uVar9 = *(ulong *)(*(long *)(param_3 + 0x20) + (long)_DAT_112746ee8);
  func_0x00010bf4b900();
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e460(uVar11);
    uVar13 = (uint)uVar11 ^ 1;
    _objc_release(uVar10);
  }
  else {
    uVar13 = 0;
  }
  _objc_release(ppuVar12);
  return uVar13;
}



/* Entry: 1063ce4c4; end: 1063ce643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1063ce4c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112746ee8);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be36bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e460(uVar3);
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1063ce644; end: 1063ce76b; -[SCContentInterstitialAdDataSource _isDupPayToPromoteStory:] */

undefined8 FUN_1063ce644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c117ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c11b1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf52680(uVar2);
  uVar7 = uVar3;
  func_0x00010c070fe0(uVar3,param_2,uVar4,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar7;
}



/* Entry: 1063ce76c; end: 1063ce84b; -[SCContentInterstitialAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ce76c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112746f0c,0);
  _objc_storeStrong(param_1 + _DAT_112746f08,0);
  _objc_storeStrong(param_1 + _DAT_112746f00,0);
  _objc_storeStrong(param_1 + _DAT_112746f04,0);
  _objc_storeStrong(param_1 + _DAT_112746f10,0);
  _objc_storeStrong(param_1 + _DAT_112746efc,0);
  _objc_storeStrong(param_1 + _DAT_112746ef8,0);
  _objc_storeStrong(param_1 + _DAT_112746ef4,0);
  _objc_storeStrong(param_1 + _DAT_112746ef0,0);
  _objc_storeStrong(param_1 + _DAT_112746eec,0);
  _objc_storeStrong(param_1 + _DAT_112746ee8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112746ee4,0);
  return;
}



/* Entry: 1063ce84c; end: 1063ce8f3;  */

void FUN_1063ce84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063ce8f4; end: 1063cec7f;  */

void FUN_1063ce8f4(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010bf81420();
    if ((int)puVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdba0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb40();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb20();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdce0();
        dVar11 = param_1;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar10 = dVar11;
        _objc_release(lVar2);
        goto LAB_1063ceaf8;
      }
      func_0x00010bf39580();
      func_0x00010bf39540();
      func_0x00010bf39560();
      func_0x00010bf39520();
      puVar1 = param_3;
      func_0x00010bf395c0(param_3);
      puVar3 = param_3;
      func_0x00010bf395a0(param_3);
      dVar10 = param_1;
    }
    else {
      func_0x00010bf82600();
      func_0x00010bf825c0();
      func_0x00010bf825e0();
      func_0x00010bf825a0();
      puVar1 = PTR_PTR_1126b8c98;
      func_0x00010bf82640(PTR_PTR_1126b8c98);
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf82620(PTR_PTR_1126b8c98);
      dVar10 = param_1;
    }
    param_1 = (double)(long)puVar1;
    dVar11 = (double)(long)puVar3;
  }
  else {
    dVar11 = 0.0;
    dVar10 = param_1;
    param_1 = 0.0;
  }
LAB_1063ceaf8:
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdb60();
  lVar4 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar5 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar6 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar8 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar9 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(param_1,dVar11,0,dVar10,0,puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063cec80; end: 1063cef8f;  */

void FUN_1063cec80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126ca508;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c0cdba0();
  uVar3 = param_2;
  func_0x00010c0cdb40();
  uVar4 = param_2;
  func_0x00010c0cdb20();
  uVar5 = param_2;
  func_0x00010c0cdb60(param_2);
  uVar6 = param_2;
  func_0x00010c0cdb00(param_2);
  uVar7 = param_2;
  func_0x00010c0cdaa0(param_2);
  uVar8 = param_2;
  func_0x00010c0cda60();
  uVar9 = param_2;
  func_0x00010c0cdac0();
  func_0x00010c0cdce0(param_2);
  uVar11 = param_1;
  func_0x00010c0cdca0(param_2);
  uVar12 = uVar11;
  func_0x00010c0cdc40(param_2);
  uVar13 = uVar12;
  func_0x00010c0cdc80(param_2);
  uVar14 = uVar13;
  func_0x00010c0cdd00(param_2);
  uVar10 = param_2;
  func_0x00010bf48240();
  func_0x00010bf48200();
  func_0x00010bf481e0();
  func_0x00010bf48220();
  _objc_release(param_2);
  func_0x00010c02c0e0(param_1,uVar11,uVar12,uVar13,uVar14,puVar1,param_3,uVar2,uVar3,uVar4,uVar5,
                      uVar6,uVar7,uVar8,uVar9,(char)uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063cef90; end: 1063cf327;  */

void FUN_1063cef90(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010c0f0480();
    if ((int)puVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdce0();
        dVar11 = param_1;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar10 = dVar11;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb00();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdba0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb40();
        _objc_release(lVar2);
        goto LAB_1063cf1a0;
      }
      puVar1 = param_3;
      func_0x00010bf39700(param_3);
      puVar3 = param_3;
      func_0x00010bf396e0(param_3);
      func_0x00010bf39680();
      func_0x00010bf39660();
      func_0x00010bf396c0();
      func_0x00010bf396a0();
      dVar10 = param_1;
    }
    else {
      puVar1 = PTR_PTR_1126b8c98;
      func_0x00010c229e40(PTR_PTR_1126b8c98);
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010c229e20(PTR_PTR_1126b8c98);
      func_0x00010c229dc0();
      func_0x00010c229da0();
      func_0x00010c229e00();
      func_0x00010c229de0();
      dVar10 = param_1;
    }
    dVar11 = (double)(long)puVar3;
    param_1 = (double)(long)puVar1;
  }
  else {
    dVar11 = 0.0;
    dVar10 = param_1;
    param_1 = 0.0;
  }
LAB_1063cf1a0:
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdb60();
  lVar4 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar5 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar6 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar8 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar9 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(param_1,dVar11,0,dVar10,0,puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063cf328; end: 1063cf357; -[SCContentInterstitialAdRuleTracker updateInsertionRuleConfiguration:] */

void FUN_1063cf328(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1063cf358; end: 1063cf36b; -[SCContentInterstitialAdRuleTracker enoughStoriesViewed] */

bool FUN_1063cf358(long param_1)

{
  return *(long *)(param_1 + 8) <= *(long *)(param_1 + 0x20);
}



/* Entry: 1063cf36c; end: 1063cf37f; -[SCContentInterstitialAdRuleTracker enoughSnapsViewed] */

bool FUN_1063cf36c(long param_1)

{
  return *(long *)(param_1 + 0x10) <= *(long *)(param_1 + 0x28);
}



/* Entry: 1063cf380; end: 1063cf3b3; -[SCContentInterstitialAdRuleTracker enoughTimeViewed] */

bool FUN_1063cf380(double param_1,long param_2)

{
  func_0x00010bfc1ec0(*(undefined8 *)(param_2 + 0x30));
  return (double)*(long *)(param_2 + 0x18) <= param_1;
}



/* Entry: 1063cf3b4; end: 1063cf3f3; -[SCContentInterstitialAdRuleTracker timeGapFromNextAdInSec] */

void FUN_1063cf3b4(long param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126afec0;
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = (double)(long)dVar2;
  func_0x00010bfcb560(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar3 - dVar2,puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063cf3f4; end: 1063cf447; -[SCContentInterstitialAdRuleTracker setAdRulesForFirstSessionAd] */

void FUN_1063cf3f4(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0cdb80();
  *(undefined8 *)(param_2 + 8) = uVar2;
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010c0cdcc0(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c155420(puVar1);
  *(long *)(param_2 + 0x18) = (long)param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0cdae0();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  return;
}



/* Entry: 1063cf448; end: 1063cf49b; -[SCContentInterstitialAdRuleTracker setAdRulesForNonFirstSessionAd] */

void FUN_1063cf448(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0cdb40();
  *(undefined8 *)(param_2 + 8) = uVar2;
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010c0cdca0(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c155420(puVar1);
  *(long *)(param_2 + 0x18) = (long)param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c0cdaa0();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  return;
}



/* Entry: 1063cf49c; end: 1063cf4ab; -[SCContentInterstitialAdRuleTracker incrementStoriesViewed] */

void FUN_1063cf49c(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 1063cf4ac; end: 1063cf4b3; -[SCContentInterstitialAdRuleTracker resetSnapsViewed] */

void FUN_1063cf4ac(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1063cf4b4; end: 1063cf4c3; -[SCContentInterstitialAdRuleTracker incrementSnapsViewed] */

void FUN_1063cf4b4(long param_1)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 1063cf4c4; end: 1063cf4cb; -[SCContentInterstitialAdRuleTracker startSessionAdTimer] */

void FUN_1063cf4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_start_112671080);
  return;
}



/* Entry: 1063cf4cc; end: 1063cf4d3; -[SCContentInterstitialAdRuleTracker stopSessionAdTimer] */

void FUN_1063cf4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_stop_112673008);
  return;
}



/* Entry: 1063cf4d4; end: 1063cf517; -[SCContentInterstitialAdRuleTracker reset] */

void FUN_1063cf4d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = PTR_PTR_1126ca510;
  _objc_alloc();
  func_0x00010c0293c0(0x43e0000000000000);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063cf518; end: 1063cf51f; -[SCContentInterstitialAdRuleTracker storiesViewed] */

undefined8 FUN_1063cf518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1063cf520; end: 1063cf527; -[SCContentInterstitialAdRuleTracker snapsViewed] */

undefined8 FUN_1063cf520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1063cf528; end: 1063cf553; -[SCContentInterstitialAdRuleTracker timeViewedSeconds] */

void FUN_1063cf528(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bfc1ec0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063cf554; end: 1063cf583; -[SCContentInterstitialAdRuleTracker .cxx_destruct] */

void FUN_1063cf554(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1063cf584; end: 1063cf7d3; -[SCAdPublicStoriesAdDataSource initWithDependencies:mainQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1063cf584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f11c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithDependencies__1125e0750,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f30);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f30) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f34);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f34) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f38);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f38) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f3c);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f3c) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f40);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f40) = puVar2;
    _objc_release(uVar6);
    puVar7 = (undefined1 *)puVar1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    if ((int)puVar5 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f48);
      *(undefined **)((long)puVar1 + (long)_DAT_112746f48) = puVar2;
      _objc_release(uVar6);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar7 = *(undefined1 **)((long)puVar1 + (long)_DAT_112746f4c);
      *(undefined **)((long)puVar1 + (long)_DAT_112746f4c) = puVar2;
    }
    else {
      puVar7 = (undefined1 *)puVar1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c11a960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f44);
      *(undefined1 **)((long)puVar1 + (long)_DAT_112746f44) = puVar4;
      _objc_release(uVar6);
      _objc_release(puVar3);
    }
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c18b560(puVar1);
    _objc_release(puVar2);
    lVar8 = (long)_DAT_112746f50;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar6);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1063cf7d4; end: 1063cf83b; -[SCAdPublicStoriesAdDataSource initWithDependencies:] */

undefined8 FUN_1063cf7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b640(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1063cf83c; end: 1063cfd9b; -[SCAdPublicStoriesAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cf83c(undefined **param_1,undefined **param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar10 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar10;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75ea0();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar10);
  lVar13 = (long)_DAT_112746f54;
  ppuVar10 = *(undefined ***)((long)param_1 + lVar13);
  lVar14 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar14);
  if (((ulong)ppuVar10 & 1) == 0) {
    lVar14 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)param_1 + lVar13);
    *(long *)((long)param_1 + lVar13) = lVar14;
    _objc_release(uVar9);
    ppuVar10 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar10;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112746f58;
    uVar9 = *(undefined8 *)((long)param_1 + lVar14);
    *(undefined ***)((long)param_1 + lVar14) = ppuVar1;
    _objc_release(uVar9);
    _objc_release(ppuVar10);
    ppuVar10 = param_1;
    func_0x00010be41f40();
    if ((param_4 != 0) && ((int)ppuVar10 != 0)) {
      ppuVar10 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar10;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e53a0(ppuVar2);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      _objc_release(ppuVar10);
    }
    lVar11 = (long)_DAT_112746f30;
    lVar13 = *(long *)((long)param_1 + lVar11);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 == 0) {
      func_0x00010c1d0640(*(undefined8 *)((long)param_1 + lVar11));
    }
    lVar11 = (long)_DAT_112746f34;
    lVar13 = *(long *)((long)param_1 + lVar11);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 == 0) {
      func_0x00010c1d0640(*(undefined8 *)((long)param_1 + lVar11));
    }
    ppuVar10 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar10;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf1f480();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(ppuVar10);
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar10 = *(undefined ***)((long)param_1 + (long)_DAT_112746f48);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar10 == (undefined **)0x0) {
        _objc_initWeak(&puStack_78,param_1);
        ppuVar1 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        func_0x00010c11aa00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)((long)param_1 + lVar14);
        FUN_10643f3dc();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_70 = uVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1063cfd9c;
        puStack_90 = &UNK_11085c6a8;
        ppuVar10 = &puStack_a8;
        param_2 = &puStack_78;
        _objc_copyWeak(auStack_80);
        _objc_retain(param_3);
        lStack_88 = param_3;
        func_0x00010bfa98e0(ppuVar3);
        _objc_release(puVar4);
        _objc_release(uVar9);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        _objc_release(lStack_88);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(&puStack_78);
      }
    }
    ppuVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf1f480();
    if (((ulong)ppuVar5 & 1) == 0) {
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
    }
    else {
      uVar9 = *(undefined8 *)((long)param_1 + lVar14);
      ppuVar5 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar10;
      func_0x00010c29d360();
      param_2 = ppuVar7;
      FUN_10643fa74(uVar9,ppuVar7,ppuVar8);
      _objc_release(ppuVar10);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      if ((int)uVar9 == 0) goto LAB_1063cfd1c;
    }
    func_0x00010be5b460(param_1);
  }
LAB_1063cfd1c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar10 + 5);
    _objc_destroyWeak(&puStack_78);
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar14 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (lVar14 != 0) {
      uVar12 = *(undefined8 *)(lVar14 + _DAT_112746f50);
      _objc_retain(param_2);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(uVar9);
      func_0x00010c0f7fc0(uVar12);
      _objc_release(uVar9);
      _objc_release(param_2);
    }
    _objc_release(lVar14);
    _objc_release(param_2);
    return;
  }
  return;
}



/* Entry: 1063cfd9c; end: 1063cfecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cfd9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112746f50);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1063cfed0; end: 1063d068f; -[SCAdPublicStoriesAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063cfed0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  _objc_retain(param_4);
  lVar11 = (long)_DAT_112746f5c;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar11);
  *(ulong *)(param_2 + lVar11) = param_4;
  _objc_release(uVar1);
  func_0x00010c163ca0(param_2);
  uVar2 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112746f58;
  uVar1 = *(undefined8 *)(param_2 + lVar11);
  *(ulong *)(param_2 + lVar11) = uVar13;
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((int)uVar12 == 0) {
    uVar2 = param_2;
    func_0x00010bdc5780();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      func_0x00010c250880(uVar2);
      uVar12 = param_2;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar13;
      FUN_10640a6a0();
      _objc_release(uVar13);
      _objc_release(uVar12);
      lVar15 = (long)_DAT_112746f38;
      uVar13 = *(ulong *)(param_2 + lVar15);
      uVar12 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar12);
      if ((uVar13 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          func_0x00010bfec880(uVar2);
        }
        uVar1 = *(undefined8 *)(param_2 + lVar15);
        uVar12 = param_4;
        func_0x00010be36bc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar1);
        _objc_release(uVar12);
        uVar1 = *(undefined8 *)(param_2 + (long)_DAT_112746f4c);
        lVar16 = (long)_DAT_112746f54;
        func_0x00010c0e00e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf604e0(PTR_PTR_1126afec0);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar1);
        _objc_release(puVar3);
        uVar14 = *(undefined8 *)(param_2 + (long)_DAT_112746f40);
        uVar12 = param_4;
        func_0x00010be36bc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar1);
        uVar12 = param_4;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar13;
        func_0x00010bfecde0();
        _objc_release(uVar13);
        _objc_release(uVar12);
        lVar15 = *(long *)(param_2 + lVar16);
        func_0x00010c08fa60();
        if (lVar15 != 0) {
          lVar15 = (long)_DAT_112746f34;
          uVar13 = *(ulong *)(param_2 + lVar15);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar13;
          func_0x00010c067fc0();
          _objc_release(uVar13);
          if (uVar4 < uVar12) goto LAB_1063d0660;
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_2 + lVar15));
          _objc_release(puVar3);
        }
        uVar12 = param_2;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1f480();
        if ((uVar6 & 1) == 0) {
          _objc_release(uVar5);
          _objc_release(uVar13);
          _objc_release(uVar12);
        }
        else {
          uVar1 = *(undefined8 *)(param_2 + lVar11);
          uVar6 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bef2560();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_2;
          func_0x00010bf6d940(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c29d360();
          FUN_10643fa74(uVar1,uVar8,uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar13);
          _objc_release(uVar12);
          if ((int)uVar1 == 0) goto LAB_1063d0660;
        }
        func_0x00010be56140(param_2);
        uVar12 = param_2;
        func_0x00010bef4120();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c0f7700();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar13);
        _objc_release(uVar12);
        if (uVar7 == 0) {
          uVar12 = param_2;
          func_0x00010bef4120();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = param_2;
          func_0x00010bef4120(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar13;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bef4c60();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be91e40(param_2);
          uVar8 = uVar12;
          func_0x00010bf5f900();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar13);
          _objc_release(uVar12);
          uVar14 = *(undefined8 *)(param_2 + lVar16);
          uVar12 = uVar2;
          func_0x00010c245cc0(uVar2);
          func_0x00010c26fc20(uVar2);
          uVar13 = param_4;
          func_0x00010bfce400(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar13;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          uVar1 = 0x8000000000000000;
          FUN_106416fbc(param_1,0x8000000000000000,uVar12,0x8000000000000000,uVar6 - uVar4);
          _objc_retainAutoreleasedReturnValue();
          FUN_10641701c(uVar14,uVar8,0,2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163ca0(param_2);
          _objc_release(uVar14);
          _objc_release(uVar1);
          _objc_release(uVar5);
          _objc_release(uVar13);
          if ((uVar8 & 0xfffffffffffffffd) == 0) {
            func_0x00010c1391e0(param_2);
            func_0x00010be5b460(param_2);
          }
        }
        else {
          func_0x00010be0b4c0(param_2);
        }
      }
    }
    goto LAB_1063d0660;
  }
  lVar11 = (long)_DAT_112746f3c;
  uVar12 = *(ulong *)(param_2 + lVar11);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if ((uVar12 & 1) == 0) {
    uVar12 = param_2;
    func_0x00010be41f40();
    _objc_release(uVar2);
    if ((int)uVar12 != 0) {
      uVar2 = param_2;
      func_0x00010bdc5780(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_2;
      func_0x00010bf6d940(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_2);
      func_0x00010c245cc0(uVar2);
      puVar3 = PTR_PTR_1126afec0;
      func_0x00010c26fc20(uVar2);
      func_0x00010c155420(puVar3);
      func_0x00010c0e53c0(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar13);
      _objc_release(uVar12);
      goto LAB_1063d00d0;
    }
  }
  else {
LAB_1063d00d0:
    _objc_release(uVar2);
  }
  uVar1 = *(undefined8 *)(param_2 + lVar11);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
LAB_1063d0660:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063d0690; end: 1063d195f; -[SCAdPublicStoriesAdDataSource _evaluateInsertionRulesAndInsertAdIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d0690(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 *puStack_160;
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
  lVar25 = (long)_DAT_112746f5c;
  puVar30 = *(undefined8 **)((long)param_1 + lVar25);
  _objc_retain(puVar30);
  puVar3 = param_1;
  func_0x00010bdc5780();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar29;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  puVar29 = puVar4;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar29;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar5;
  func_0x00010bfecde0();
  _objc_release(puVar5);
  _objc_release(puVar29);
  puVar29 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar5;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar31;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar19;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91e40(param_1);
  puVar7 = puVar29;
  func_0x00010bf5f900();
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar31);
  _objc_release(puVar5);
  _objc_release(puVar29);
  puVar29 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar29;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  puVar29 = puVar4;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar31;
  func_0x00010bf529e0();
  _objc_release(puVar31);
  _objc_release(puVar29);
  if ((undefined8 *)((long)puVar20 + 1U) < puVar19) {
    puVar29 = puVar4;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar29;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar31;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar31);
    _objc_release(puVar29);
    puVar31 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar31;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar31);
  }
  else {
    puVar29 = (undefined8 *)0x0;
    puStack_160 = (undefined8 *)0x0;
  }
  puVar31 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar31;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1063fd368(puVar5,puVar29,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar31);
  puVar31 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar31;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar6;
  FUN_1063fc8d0();
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar31);
  if ((int)puVar21 != 0) {
    puVar31 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar19;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    puVar21 = puVar31;
    func_0x00010c131000();
    _objc_release(puVar6);
    _objc_release(puVar19);
    _objc_release(puVar31);
    if (((ulong)puVar21 & 1) == 0) {
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_1;
      func_0x00010bf53fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126b3e90;
      func_0x00010befde80();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = (undefined8 *)0x0;
      func_0x00010bf0ad80(puVar19);
      _objc_release(puVar17);
      _objc_release(puVar19);
      _objc_release(puVar20);
      _objc_release(param_1);
      goto LAB_1063d0fd8;
    }
  }
  puVar31 = param_1;
  func_0x00010bef4240();
  puVar19 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar19;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar6;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar21;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001063fcf48(puVar31,puVar8,puVar5,0,puVar11,0,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar21);
  _objc_release(puVar6);
  _objc_release(puVar19);
  puVar19 = puVar5;
  puVar6 = puVar29;
  if (((ulong)puVar31 & 1) == 0) {
    puVar20 = puVar5;
    FUN_10640a74c();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_112746f58;
    uVar26 = *(undefined8 *)((long)param_1 + lVar25);
    FUN_10640b8b8(uVar26);
    uVar23 = *(undefined8 *)((long)param_1 + lVar25);
    FUN_10640b8b8(uVar23);
    FUN_1063fc8dc();
    FUN_1063fc8dc(puVar29);
    uVar18 = 1;
  }
  else {
    puVar31 = param_1;
    func_0x00010bef4240();
    puVar21 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar21;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001063fcf48(puVar31,puVar10,puVar29,0,puVar13,1,puVar16);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar21);
    if (((ulong)puVar31 & 1) != 0) {
      dVar32 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puVar31 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar31;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar19;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(puVar31);
      puVar31 = &uStack_140;
      puVar19 = puVar6;
      func_0x00010bf52a60();
      if (puVar19 != (undefined8 *)0x0) {
        lVar28 = *plStack_130;
        do {
          puVar31 = (undefined8 *)0x0;
          do {
            if (*plStack_130 != lVar28) {
              _objc_enumerationMutation(puVar6);
            }
            uVar26 = *(undefined8 *)(lStack_138 + (long)puVar31 * 8);
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = param_1;
            func_0x00010bef4840();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ec0(uVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar21);
            _objc_release(uVar26);
            _objc_release(puVar21);
            _objc_release(puVar17);
            puVar31 = (undefined8 *)((long)puVar31 + 1);
          } while (puVar19 != puVar31);
          puVar31 = &uStack_140;
          puVar19 = puVar6;
          func_0x00010bf52a60();
        } while (puVar19 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      puVar19 = puVar5;
      FUN_10640a6a0();
      if ((((ulong)puVar19 & 1) != 0) ||
         (puVar19 = puVar29, FUN_10640a6a0(), ((ulong)puVar19 & 1) != 0)) goto LAB_1063d0fd8;
      puVar31 = puVar5;
      FUN_10640a52c();
      if ((int)puVar31 == 0) {
        puVar31 = puVar29;
        FUN_10640a52c();
        if ((int)puVar31 != 0) {
          puVar6 = puVar29;
          FUN_10640a74c(puVar29);
          _objc_retainAutoreleasedReturnValue();
          uVar26 = 0;
          goto LAB_1063d1068;
        }
        puVar31 = puVar4;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar31;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar19;
        func_0x00010bf529e0();
        _objc_release(puVar19);
        _objc_release(puVar31);
        if (puVar6 <= (undefined8 *)((long)puVar20 + 2U)) {
LAB_1063d11c8:
          if (0 < (long)puVar20) {
            puVar31 = puVar4;
            func_0x00010bf5ee40();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar31;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar19;
            func_0x00010bf529e0();
            _objc_release(puVar19);
            _objc_release(puVar31);
            if ((undefined8 *)((long)puVar20 - 1U) < puVar6) {
              puVar31 = puVar4;
              func_0x00010bf5ee40();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar31;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar19;
              func_0x00010c0dfd20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              _objc_release(puVar31);
              puVar31 = param_1;
              func_0x00010c1013e0();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar31;
              func_0x00010bf63e60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar31);
              puVar31 = puVar19;
              FUN_10640a52c();
              if ((int)puVar31 != 0) {
                puVar20 = puVar19;
                FUN_10640a74c(puVar19);
                _objc_retainAutoreleasedReturnValue();
                uVar26 = 1;
                goto LAB_1063d12b0;
              }
              _objc_release(puVar19);
              _objc_release(puVar6);
            }
          }
          puVar31 = puVar3;
          func_0x00010c245cc0();
          func_0x00010c26fc20(puVar3);
          lVar28 = (long)_DAT_112746f60;
          uVar27 = *(ulong *)((long)param_1 + lVar28);
          puVar19 = puVar4;
          func_0x00010bf5ee40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar6;
          func_0x00010bf529e0();
          dVar33 = dVar32;
          func_0x0001063fd9e0(dVar32,0x7fefffffffffffff,uVar27,puVar31,
                              (long)puVar21 + ~(ulong)puVar20);
          _objc_release(puVar6);
          _objc_release(puVar19);
          puVar20 = param_1;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          puVar31 = puVar20;
          func_0x00010bf5ca20();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar31;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_1);
          puVar6 = puVar19;
          func_0x00010c230360();
          _objc_release(puVar19);
          _objc_release(puVar31);
          _objc_release(puVar20);
          uVar1 = (uint)puVar6 ^ 1;
          uVar2 = uVar1 & (uint)uVar27;
          if (((uVar1 & 1) == 0) && ((uVar27 & 1) != 0)) {
            uVar26 = *(undefined8 *)((long)param_1 + lVar28);
            puVar20 = param_1;
            func_0x00010bf6d940();
            _objc_retainAutoreleasedReturnValue();
            puVar31 = puVar20;
            func_0x00010bf5ca20();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar31;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar19;
            func_0x00010c245cc0();
            puVar21 = param_1;
            func_0x00010bf6d940(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar21;
            func_0x00010bf5ca20();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26fc20();
            FUN_1063fdab4(uVar26,puVar6);
            uVar2 = (uint)uVar26;
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar21);
            _objc_release(puVar19);
            _objc_release(puVar31);
            _objc_release(puVar20);
          }
          puVar20 = puVar3;
          func_0x00010c26f240(puVar3);
          if (((uVar2 & 1) == 0) && (0 < (long)dVar33)) {
            uVar26 = *(undefined8 *)((long)param_1 + (long)_DAT_112746f54);
            FUN_106416eb4();
            _objc_retainAutoreleasedReturnValue();
            FUN_10641701c(uVar26,puVar7,puVar20,0,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163ca0(param_1);
            _objc_release(uVar26);
            _objc_release(puVar20);
            func_0x00010be9b680(dVar33,param_1);
          }
          puVar20 = param_1;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          puVar31 = puVar20;
          func_0x00010bef2fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar31;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240();
          puVar6 = param_1;
          func_0x00010bef4120();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar7;
          func_0x00010bef4c60();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar21;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010bf5ee40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          puVar11 = param_1;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010bf5ca20();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c245cc0();
          puVar14 = param_1;
          func_0x00010bf6d940(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010bf5ca20();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26fc20();
          puVar22 = param_1;
          func_0x00010bfceb40();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = *(undefined8 *)((long)param_1 + lVar25);
          func_0x00010bfce400(uVar23);
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar23;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar22;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          dVar34 = dVar32;
          func_0x00010c0a05c0(dVar32,dVar33,puVar19);
          _objc_release(puVar24);
          _objc_release(uVar26);
          _objc_release(uVar23);
          _objc_release(puVar22);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar21);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar19);
          _objc_release(puVar31);
          _objc_release(puVar20);
          puVar20 = param_1;
          func_0x00010be41f40();
          if ((int)puVar20 != 0) {
            puVar20 = param_1;
            func_0x00010bf6d940(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar31 = puVar20;
            func_0x00010bef3a00();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar31;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef4240(param_1);
            func_0x00010c0e4a60(puVar19);
            _objc_release(puVar19);
            _objc_release(puVar31);
            _objc_release(puVar20);
          }
          puVar20 = param_1;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar20;
          func_0x00010bef3a00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar31 = param_1;
          func_0x00010bef4240(param_1);
          func_0x00010c0cdb40();
          func_0x00010c0cdaa0(*(undefined8 *)((long)param_1 + lVar28));
          puVar17 = PTR_PTR_1126afec0;
          func_0x00010c0cdca0(*(undefined8 *)((long)param_1 + lVar28));
          func_0x00010c155420(puVar17);
          func_0x00010c155420(dVar32,PTR_PTR_1126afec0);
          func_0x00010c0e4980(dVar34,dVar32,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar19);
          _objc_release(puVar20);
          if (uVar2 != 0) {
            puVar31 = puVar30;
            func_0x00010be3c260(param_1);
          }
          goto LAB_1063d0fd8;
        }
        puVar31 = puVar4;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar31;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar19;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puVar31);
        puVar31 = param_1;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar31;
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar31);
        puVar31 = puVar19;
        FUN_10640a52c();
        if ((int)puVar31 == 0) {
          _objc_release(puVar19);
          _objc_release(puVar6);
          goto LAB_1063d11c8;
        }
        puVar20 = puVar19;
        FUN_10640a74c(puVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar26 = 0;
LAB_1063d12b0:
        FUN_106416e18(uVar26,puVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = (undefined8 *)0x0;
        FUN_10641701c(0,puVar7,uVar26,0,0);
        _objc_retainAutoreleasedReturnValue();
        puVar31 = puVar21;
        func_0x00010c163ca0(param_1);
        _objc_release(puVar21);
        _objc_release(uVar26);
        _objc_release(puVar20);
        _objc_release(puVar19);
      }
      else {
        puVar6 = puVar5;
        FUN_10640a74c(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar26 = 1;
LAB_1063d1068:
        FUN_106416e18(uVar26,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = (undefined8 *)0x0;
        FUN_10641701c(0,puVar7,uVar26,0,0);
        _objc_retainAutoreleasedReturnValue();
        puVar31 = puVar20;
        func_0x00010c163ca0(param_1);
        _objc_release(puVar20);
        _objc_release(uVar26);
      }
      _objc_release(puVar6);
      goto LAB_1063d0fd8;
    }
    puVar20 = puVar29;
    FUN_10640a74c();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_112746f58;
    uVar26 = *(undefined8 *)((long)param_1 + lVar25);
    FUN_10640b8b8(uVar26);
    uVar23 = *(undefined8 *)((long)param_1 + lVar25);
    FUN_10640b8b8(uVar23);
    FUN_1063fc8dc();
    FUN_1063fc8dc(puVar29);
    uVar18 = 0;
  }
  FUN_106416d68(uVar18,puVar20,uVar26,uVar23,puVar19,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined8 *)0x0;
  FUN_10641701c(0,puVar7,uVar18,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar19;
  func_0x00010c163ca0(param_1);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar20);
LAB_1063d0fd8:
  _objc_release(puVar29);
  _objc_release(puStack_160);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar31);
  puVar3 = puVar30;
  func_0x00010bdc5780(puVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar30;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar29;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar5;
  func_0x00010c27dd80();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar29);
  if (puVar20 == (undefined8 *)0x2) {
    func_0x00010c2569e0(puVar3);
  }
  puVar29 = puVar30;
  func_0x00010c075a00();
  if ((int)puVar29 != 0) {
    func_0x00010c139600(puVar3);
    func_0x00010c1396e0(puVar3);
    uVar26 = *(undefined8 *)((long)puVar30 + (long)_DAT_112746f4c);
    func_0x00010c0e00e0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    func_0x00010be5b460(puVar30);
    _objc_release(uVar26);
  }
  puVar29 = puVar30;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar29;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  if (puVar4 != (undefined8 *)0x0) {
    puVar29 = puVar4;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar29;
    func_0x00010c0720c0();
    _objc_release(puVar17);
    _objc_release(puVar29);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c0a0740(puVar30);
    }
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar31);
  return;
}



/* Entry: 1063d1960; end: 1063d1b1b; -[SCAdPublicStoriesAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d1960(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5780(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar5 == 2) {
    func_0x00010c2569e0(uVar1);
  }
  uVar2 = param_1;
  func_0x00010c075a00(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010c139600(uVar1);
    func_0x00010c1396e0(uVar1);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112746f4c);
    func_0x00010c0e00e0(uVar6,param_2,*(undefined8 *)(param_1 + (long)_DAT_112746f54));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    func_0x00010be5b460(param_1,param_2,2);
    _objc_release(uVar6);
  }
  uVar2 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x00010c0a0740(param_1,param_2,uVar3);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d1b1c; end: 1063d1bf7; -[SCAdPublicStoriesAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d1b1c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar6 = (long)_DAT_112746f54;
  if ((uVar4 & 1) == 0) {
    func_0x00010bedce60(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112746f58);
  *(undefined8 *)(param_1 + (long)_DAT_112746f58) = 0;
  _objc_release(uVar5);
  func_0x00010c069d00(*(undefined8 *)(param_1 + (long)_DAT_112746f64));
                    /* WARNING: Could not recover jumptable at 0x00010c1391f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetPendingAd_11262be98);
  return;
}



/* Entry: 1063d1bf8; end: 1063d1bfb; -[SCAdPublicStoriesAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063d1bf8(void)

{
  return;
}



/* Entry: 1063d1bfc; end: 1063d1d4f; -[SCAdPublicStoriesAdDataSource startViewingPlaylistChapterId:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d1bfc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112746f40;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bdc5780();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_10640a6a0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010bfec880(uVar1);
      }
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112746f4c);
      func_0x00010c0e00e0(uVar5,param_2,*(undefined8 *)(param_1 + (long)_DAT_112746f54));
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      func_0x00010c0df720(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d1d50; end: 1063d1fa3; -[SCAdPublicStoriesAdDataSource _handleFetchPublicStoryContentViewHistory:groupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d1d50(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126afec0;
  if (param_5 != 0) {
    _objc_retain(param_4);
    func_0x00010bf604e0(puVar2);
    lVar8 = (long)_DAT_112746f4c;
    lVar1 = *(long *)(param_2 + lVar8);
    func_0x00010c0e00e0(lVar1,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + lVar8),param_3,puVar2,param_5);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010c0e00e0(uVar3,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b8c98;
    func_0x00010c0f0420();
    if ((int)puVar2 == 0) {
      puVar2 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c067f60();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      puVar6 = PTR_PTR_1126b8c98;
      func_0x00010c11a8c0();
    }
    uVar7 = param_4;
    func_0x00010bf4ce40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uVar9 = 0xc2000000;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1063d1fa4;
    puStack_80 = &UNK_1109206a8;
    uStack_78 = uVar3;
    uStack_70 = param_1;
    puStack_68 = puVar6;
    _objc_retain(uVar3);
    func_0x00010bf97e80(uVar7,param_3,&puStack_98);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ca518;
    _objc_alloc(PTR_PTR_1126ca518);
    uVar7 = uVar3;
    func_0x00010bf529e0(uVar3);
    func_0x00010bf4de20(param_4);
    _objc_release(param_4);
    func_0x00010c062280(uVar9,puVar2,param_3,uVar7);
    func_0x00010c286980();
    func_0x00010c164440(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_2 + _DAT_112746f48),param_3,puVar2,param_5);
    _objc_release(puVar2);
    _objc_release(uStack_78);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1063d1fa4; end: 1063d2003;  */

void FUN_1063d1fa4(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  
  _objc_retain(param_3);
  dVar1 = *(double *)(param_2 + 0x28);
  func_0x00010bf885a0(param_3);
  if (dVar1 - param_1 < (double)*(long *)(param_2 + 0x30)) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d2004; end: 1063d216b; -[SCAdPublicStoriesAdDataSource _updatePersistedPublicStoryContentViewHistory:groupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d2004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + _DAT_112746f48);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c2569e0(lVar1);
    uVar2 = *(undefined8 *)(param_2 + _DAT_112746f4c);
    func_0x00010c0e00e0(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c11aa00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    FUN_10643f3dc(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20(lVar1);
    uVar6 = uVar2;
    func_0x00010bf51e00(uVar2);
    func_0x00010c288ec0(param_1,lVar4,param_3,uVar5,uVar6,&PTR___NSConcreteGlobalBlock_1109206d8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063d216c; end: 1063d216f;  */

void FUN_1063d216c(void)

{
  return;
}



/* Entry: 1063d2170; end: 1063d21d7; -[SCAdPublicStoriesAdDataSource adProductTypeForItem:] */

undefined8 FUN_1063d2170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010bef4240(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063d21d8; end: 1063d2327; -[SCAdPublicStoriesAdDataSource adViewContextForItem:] */

void FUN_1063d21d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar6 = PTR_s_adViewContextForItem__11259b238;
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f11c8;
  uStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_50,puVar6,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010bef4b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bef4840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063d2328; end: 1063d2467; -[SCAdPublicStoriesAdDataSource adViewContextForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d2328(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f11c8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_adViewContextForGroupId__11259b230);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)plVar1;
  func_0x00010c0d3c80();
  _objc_release(plVar1);
  puVar3 = PTR_PTR_1126ca500;
  func_0x00010c0cd2a0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c1305a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca500;
  func_0x00010c0cd2a0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c0680c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = *(long *)(param_1 + _DAT_112746f58);
  FUN_106440058();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    func_0x00010bef7f60(puVar2);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063d2468; end: 1063d246f; -[SCAdPublicStoriesAdDataSource isAdContentLoopingForDataModel:] */

undefined8 FUN_1063d2468(void)

{
  return 0;
}



/* Entry: 1063d2470; end: 1063d252b; -[SCAdPublicStoriesAdDataSource mediaLoadContexts] */

undefined1 * FUN_1063d2470(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_b0;
  _objc_retain(ppuVar8);
  ppuVar4 = ppuVar8;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar5 == (undefined **)0x0) {
    _objc_release(ppuVar4);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1f480();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar4);
    if (((ulong)puVar7 & 1) != 0) {
      ppuVar9 = (undefined **)0x1;
      goto LAB_1063d2610;
    }
  }
  puStack_a8 = PTR_PTR_1126f11c8;
  puStack_b0 = puVar1;
  _objc_msgSendSuper2(&puStack_b0,PTR_s__requiredSnapCountForAdResponse__112582130,ppuVar8);
LAB_1063d2610:
  _objc_release(ppuVar8);
  return (undefined1 *)ppuVar9;
}



/* Entry: 1063d252c; end: 1063d2637; -[SCAdPublicStoriesAdDataSource _requiredSnapCountForAdResponse:] */

undefined1 * FUN_1063d252c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar7 = &uStack_60;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar3 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f480();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    if ((uVar6 & 1) != 0) {
      puVar7 = (ulong *)0x1;
      goto LAB_1063d2610;
    }
  }
  puStack_58 = PTR_PTR_1126f11c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s__requiredSnapCountForAdResponse__112582130,param_3);
LAB_1063d2610:
  _objc_release(param_3);
  return (undefined1 *)puVar7;
}



/* Entry: 1063d2638; end: 1063d263f; -[SCAdPublicStoriesAdDataSource adProductType] */

undefined8 FUN_1063d2638(void)

{
  return 0x11;
}



/* Entry: 1063d2640; end: 1063d28bf; -[SCAdPublicStoriesAdDataSource targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d2640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746f30);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112746f54));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29d360();
  lVar5 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar4,lVar7);
  lVar8 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112746f58;
  uVar1 = *(undefined8 *)(param_1 + lVar20);
  lVar13 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_10643fca8(uVar1,lVar15);
  lVar16 = param_1;
  func_0x00010bef4240(param_1);
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  FUN_10643f3dc(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  FUN_1064415c4(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  FUN_10643f20c();
  _objc_retainAutoreleasedReturnValue();
  FUN_1063fa1ac(lVar4,lVar10,lVar12,uVar1,lVar16,(long)((int)uVar2 + 1),uVar17,uVar18,uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1063d28c0; end: 1063d299b; -[SCAdPublicStoriesAdDataSource shouldDelayFiringAdOpportunity] */

bool FUN_1063d28c0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ebcc0();
  _objc_release(lVar2);
  if (lVar3 == 2) {
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef2f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    bVar1 = lVar5 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1063d299c; end: 1063d2a47; -[SCAdPublicStoriesAdDataSource upcomingStoriesContext] */

void FUN_1063d299c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_10640d53c(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063d2a48; end: 1063d2b2b; -[SCAdPublicStoriesAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d2a48(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f11c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_resetInsertionData_11262bd80);
  func_0x00010bedce60(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f30));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f34));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f48));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f38));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f3c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f4c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f40));
  lVar1 = param_1;
  func_0x00010bf6af80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112746f64));
  return;
}



/* Entry: 1063d2b2c; end: 1063d2b33; -[SCAdPublicStoriesAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063d2b2c(void)

{
  return 1;
}



/* Entry: 1063d2b34; end: 1063d2b3b; -[SCAdPublicStoriesAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063d2b34(void)

{
  return 0;
}



/* Entry: 1063d2b3c; end: 1063d2b43; -[SCAdPublicStoriesAdDataSource isDynamicInsertionEligibleForItem:] */

undefined8 FUN_1063d2b3c(void)

{
  return 1;
}



/* Entry: 1063d2b44; end: 1063d2d4f; -[SCAdPublicStoriesAdDataSource unviewedAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d2b44(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bef4c60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar2);
    func_0x00010c1391e0(param_1);
    _objc_release(puVar3);
  }
  puVar2 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112746f5c);
  func_0x00010bfce400(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar6 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1063d2d50;
    puStack_60 = &UNK_11089c520;
    puVar6 = puVar2;
    puStack_58 = param_1;
    func_0x000100504554(puVar2,&puStack_78);
    puVar3 = puVar6;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063d2d50; end: 1063d2e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d2d50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112746f3c);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c067280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef4820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1063d2e40; end: 1063d3093; -[SCAdPublicStoriesAdDataSource adSnapIndexForItem:] */

undefined1 * FUN_1063d2e40(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_70;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0ec0c0();
  if ((int)puVar4 == 0) {
LAB_1063d302c:
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    lVar5 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      _objc_release(lVar5);
      goto LAB_1063d302c;
    }
    puVar4 = param_1;
    func_0x00010c067280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar7 != (undefined1 *)0x0) {
      puVar1 = param_1;
      func_0x00010c067280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0e00e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(puVar1);
      func_0x00010bef4820(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(param_1);
      puVar1 = puVar3;
      func_0x00010bef52c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = (undefined1 **)puVar1;
      func_0x00010bfecde0();
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1063d3068;
    }
  }
  puStack_68 = PTR_PTR_1126f11c8;
  puStack_70 = param_1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_adSnapIndexForItem__11259ae98,param_3);
LAB_1063d3068:
  _objc_release(param_3);
  return (undefined1 *)ppuVar8;
}



/* Entry: 1063d3094; end: 1063d310f; -[SCAdPublicStoriesAdDataSource _isMidRollAoeEnabled] */

undefined8 FUN_1063d3094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1063d3110; end: 1063d32b7; -[SCAdPublicStoriesAdDataSource _logMidRollContentSlotEnterIfEnabled] */

void FUN_1063d3110(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = param_1;
  func_0x00010be41f40();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bdc5780(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010be91e40(param_1,param_2,uVar7);
    uVar9 = uVar3;
    func_0x00010bf5f900(uVar3,param_2,uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    func_0x000106416d48(uVar9);
    uVar6 = uVar2;
    func_0x00010c245cc0(uVar2);
    puVar1 = PTR_PTR_1126afec0;
    func_0x00010c26fc20(uVar2);
    func_0x00010c155420(puVar1);
    func_0x00010c0e53c0(uVar5,param_2,param_1,uVar9,0,uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1063d32b8; end: 1063d366f; -[SCAdPublicStoriesAdDataSource _makeAdRequestIfNecessary:] */

void FUN_1063d32b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar4 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x00010c0e2460(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b8cd8;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bef4240(param_1);
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf17b60();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf17be0();
  _objc_release(puVar7);
  if (param_3 - 1U < 4) {
    ppuStack_88 = (undefined **)(&PTR_PTR_110920838)[param_3 - 1U];
  }
  else {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1063d5660;
  puStack_98 = &UNK_1108951c0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e4d8f8;
  ppuVar11 = &puStack_b0;
  puStack_80 = puVar10;
  func_0x00010bf51e00();
  _objc_release(ppuStack_88);
  _objc_release(ppuStack_90);
  _objc_initWeak(&puStack_b0,param_1);
  uVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010befe100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar4 = param_1;
  func_0x00010bef4d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bef3aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21060();
  puStack_b8 = puVar9;
  _objc_copyWeak(auStack_c0,&puStack_b0);
  func_0x00010c134800(uVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_b0);
  _objc_release(ppuVar11);
  _objc_release(puVar8);
  return;
}



/* Entry: 1063d3670; end: 1063d377f;  */

void FUN_1063d3670(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063d3780; end: 1063d3b47; -[SCAdPublicStoriesAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:] */

void FUN_1063d3780(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    lVar4 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c0e2440(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bdce9a0(param_1);
    lVar1 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e2300(lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_initWeak(auStack_68,param_1);
      puVar9 = PTR_PTR_1126b8cd8;
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bef4240(param_1);
      func_0x00010c25d840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf17b60();
      _objc_release(puVar9);
      lVar1 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0c5660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bef3c60();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc0000000;
      uStack_80 = 0x1063d3b88;
      puStack_78 = &UNK_110848088;
      puStack_98 = puVar11;
      uStack_70 = param_4;
      _objc_copyWeak(auStack_a0,auStack_68);
      func_0x00010bfa85e0(lVar1);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_68);
    }
  }
  return;
}



/* Entry: 1063d3b48; end: 1063d3c1f;  */

undefined8 FUN_1063d3b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1063d3c20; end: 1063d3e3f; -[SCAdPublicStoriesAdDataSource _applyServerAdInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d3c20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  FUN_1063d5708(lVar4,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112746f60);
  *(long *)(param_1 + _DAT_112746f60) = lVar8;
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdc5780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286980();
  func_0x00010c164440(lVar1);
  func_0x00010be17780(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063d3e40; end: 1063d4027; -[SCAdPublicStoriesAdDataSource _fireDelayedAdOpportunitiesIfNecessary] */

/* WARNING: Possible PIC construction at 0x0001063d4198: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d3e40(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010bf6af80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar2 != 0) {
    param_1 = 0.0;
    lVar3 = param_2;
    func_0x00010bf6af80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        lVar7 = *(long *)(lVar10 * 8);
        func_0x00010c067380();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        func_0x00010c1292e0();
        lVar9 = (long)_DAT_112746f60;
        lVar5 = *(long *)(param_2 + lVar9);
        func_0x00010c0cda80();
        if (lVar4 <= lVar5) {
          _objc_release(lVar7);
          goto LAB_1063d3fc0;
        }
        uVar8 = *(undefined8 *)(param_2 + lVar9);
        lVar4 = lVar7;
        func_0x00010c29ed40(lVar7);
        func_0x00010c29ee20(lVar7);
        lVar5 = lVar7;
        func_0x00010c1292e0(lVar7);
        func_0x0001063fd9e0(param_1,0x7fefffffffffffff,uVar8,lVar4,lVar5);
        if ((int)uVar8 != 0) {
          func_0x00010c0a0720(param_2);
        }
        _objc_release(lVar7);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
LAB_1063d3fc0:
    _objc_release(lVar3);
    func_0x00010bf6af80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release();
    lVar1 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(lVar1);
  func_0x00010c0e22e0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c0ebcc0();
  _objc_release(lVar2);
  if (lVar6 == 2) {
    func_0x00010c163ca0();
    uVar8 = 6;
code_r0x00010be0b4c0:
                    /* WARNING: Could not recover jumptable at 0x00010be0b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s__evaluateInsertionRulesAndInsert_1125606d0,uVar8);
    return;
  }
  lVar2 = lVar1;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0810a0();
  _objc_release(lVar6);
  _objc_release(lVar2);
  if (((int)lVar3 == 0) || (*(long *)(lVar1 + _DAT_112746f54) == 0)) {
    return;
  }
  lVar2 = lVar1;
  func_0x00010bdc5780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c26f240(lVar2);
    if ((long)param_1 < 1) {
      if (*(long *)(lVar1 + _DAT_112746f5c) != 0) {
        uVar8 = 3;
        goto code_r0x00010be0b4c0;
      }
    }
    else if (*(long *)(lVar1 + _DAT_112746f5c) != 0) {
      func_0x00010be9b680(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1063d4028; end: 1063d41af; -[SCAdPublicStoriesAdDataSource _handleMediaFetchComplete] */

/* WARNING: Possible PIC construction at 0x0001063d4198: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d4028(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  func_0x00010c0e22e0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ebcc0();
  _objc_release(lVar1);
  if (lVar2 == 2) {
    func_0x00010c163ca0();
    uVar4 = 6;
code_r0x00010be0b4c0:
                    /* WARNING: Could not recover jumptable at 0x00010be0b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s__evaluateInsertionRulesAndInsert_1125606d0,uVar4);
    return;
  }
  lVar1 = param_2;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0810a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (((int)lVar3 == 0) || (*(long *)(param_2 + _DAT_112746f54) == 0)) {
    return;
  }
  lVar1 = param_2;
  func_0x00010bdc5780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c26f240(lVar1);
    if ((long)param_1 < 1) {
      if (*(long *)(param_2 + _DAT_112746f5c) != 0) {
        uVar4 = 3;
        goto code_r0x00010be0b4c0;
      }
    }
    else if (*(long *)(param_2 + _DAT_112746f5c) != 0) {
      func_0x00010be9b680(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


