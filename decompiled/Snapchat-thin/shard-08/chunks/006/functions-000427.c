/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063d41b0; end: 1063d4243; -[SCAdPublicStoriesAdDataSource _isInsertionRetryEnabled] */

undefined8 FUN_1063d41b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11a8e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1063d4244; end: 1063d43b3; -[SCAdPublicStoriesAdDataSource _scheduleRetryInsertionAfterItem:delaySec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d4244(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_4;
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be41280();
  if ((int)lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if ((0.0 < param_1) && (lVar9 != 0)) {
      lVar9 = (long)_DAT_112746f64;
      func_0x00010c069d00(*(undefined8 *)(param_2 + lVar9));
      puVar3 = PTR_PTR_1126bc890;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e4d818;
      lVar1 = param_4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_70 = lVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&lStack_70,&ppuStack_78,1
                         );
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c1503c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + lVar9);
      *(undefined **)(param_2 + lVar9) = puVar3;
      _objc_release(uVar8);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_4 + _DAT_112746f64);
  _objc_retain(lVar4);
  func_0x00010c069d00(uVar8);
  lVar1 = lVar4;
  func_0x00010c0e00e0(lVar4,param_3,&PTR____CFConstantStringClassReference_110e4d818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_4 + _DAT_112746f5c);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((int)uVar8 != 0) {
      lVar4 = param_4;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar9;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar9);
      _objc_release(lVar4);
      if (lVar7 != 0) {
        func_0x00010be0b4c0(param_4,param_3,4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063d43b4; end: 1063d44d7; -[SCAdPublicStoriesAdDataSource _retryInsertion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d43b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_112746f64);
  _objc_retain(param_3);
  func_0x00010c069d00(uVar7);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e4d818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112746f5c);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar7 != 0) {
      lVar2 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      if (lVar6 != 0) {
        func_0x00010be0b4c0(param_1,param_2,4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063d44d8; end: 1063d4d1f; -[SCAdPublicStoriesAdDataSource _insertAdIfNecessaryAfterItem:insertSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d44d8(undefined ***param_1,undefined8 param_2,long param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined ***pppuVar20;
  long lVar21;
  long lVar22;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  pppuVar20 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91e40(param_1);
  pppuVar5 = pppuVar20;
  func_0x00010bf5f900();
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  _objc_release(pppuVar1);
  _objc_release(pppuVar20);
  lVar21 = (long)_DAT_112746f54;
  uVar6 = *(undefined8 *)((long)param_1 + lVar21);
  pppuVar20 = (undefined ***)0x0;
  pppuVar1 = pppuVar5;
  FUN_10641701c(uVar6,pppuVar5,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163ca0(param_1);
  _objc_release(uVar6);
  pppuVar3 = param_1;
  func_0x00010be41f40();
  if ((int)pppuVar3 != 0) {
    pppuVar3 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar3;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    pppuVar20 = pppuVar5;
    func_0x000106416d48(pppuVar5);
    func_0x00010c0e7360(pppuVar2);
    _objc_release(pppuVar2);
    _objc_release(pppuVar4);
    _objc_release(pppuVar3);
  }
  if (((ulong)pppuVar5 & 0xfffffffffffffffd) == 0) {
    func_0x00010c1391e0();
    func_0x00010be5b460(param_1);
  }
  else {
    pppuVar20 = param_1;
    func_0x00010be41f40();
    if ((int)pppuVar20 != 0) {
      pppuVar20 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar20;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      pppuVar4 = pppuVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e4960(pppuVar4);
      _objc_release(pppuVar4);
      _objc_release(pppuVar3);
      _objc_release(pppuVar20);
    }
    pppuVar3 = param_1;
    func_0x00010c066b80();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dab0d8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e4d958;
    puStack_80 = puVar7;
    func_0x00010c241620(param_1);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = &ppuStack_90;
    puStack_78 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    _objc_release(puVar7);
    pppuVar4 = param_1;
    func_0x00010be41f40();
    if ((int)pppuVar4 != 0) {
      pppuVar4 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar4;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      pppuVar20 = pppuVar3;
      func_0x00010c0e4940(pppuVar9);
      _objc_release(pppuVar9);
      _objc_release(pppuVar5);
      _objc_release(pppuVar4);
    }
    if ((int)pppuVar3 != 0) {
      pppuVar20 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = pppuVar20;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar2;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      pppuVar4 = pppuVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar3);
      _objc_release(pppuVar2);
      _objc_release(pppuVar20);
      pppuVar20 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar20;
      func_0x00010bef2fc0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = pppuVar9;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      pppuVar11 = pppuVar10;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = pppuVar11;
      func_0x00010bfb1920(pppuVar11);
      _objc_retainAutoreleasedReturnValue();
      pppuVar13 = param_1;
      func_0x00010bef4840(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar14 = pppuVar4;
      func_0x00010bfe5ec0(pppuVar4);
      _objc_retainAutoreleasedReturnValue();
      pppuVar15 = pppuVar13;
      func_0x00010c0e00e0(pppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      pppuVar16 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = pppuVar16;
      func_0x00010bf21040();
      _objc_retainAutoreleasedReturnValue();
      pppuVar17 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar18 = pppuVar17;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a04c0(pppuVar5);
      _objc_release(pppuVar18);
      _objc_release(pppuVar17);
      _objc_release(pppuVar2);
      _objc_release(pppuVar16);
      _objc_release(pppuVar15);
      _objc_release(pppuVar14);
      _objc_release(pppuVar13);
      _objc_release(pppuVar12);
      _objc_release(pppuVar11);
      _objc_release(pppuVar10);
      _objc_release(pppuVar9);
      _objc_release(pppuVar5);
      _objc_release(pppuVar3);
      _objc_release(pppuVar20);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppuVar3 = param_1;
      func_0x00010bdc5780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c245cc0();
      func_0x00010c0df780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = param_1;
      func_0x00010bef4860(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar4;
      func_0x00010bfe5ec0(pppuVar4);
      _objc_retainAutoreleasedReturnValue();
      pppuVar20 = pppuVar9;
      func_0x00010c1d0640(pppuVar5);
      _objc_release(pppuVar9);
      _objc_release(pppuVar5);
      _objc_release(puVar8);
      _objc_release(pppuVar3);
      lVar22 = (long)_DAT_112746f30;
      lVar19 = *(long *)((long)param_1 + lVar22);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar19 != 0) {
        uVar6 = *(undefined8 *)((long)param_1 + lVar22);
        func_0x00010c0e00e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        pppuVar20 = *(undefined ****)((long)param_1 + lVar21);
        func_0x00010c1d0640(*(undefined8 *)((long)param_1 + lVar22));
        _objc_release(puVar8);
        _objc_release(uVar6);
      }
      pppuVar3 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar3;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = pppuVar9;
      func_0x00010c0ec0c0();
      _objc_release(pppuVar9);
      _objc_release(pppuVar5);
      _objc_release(pppuVar3);
      if ((int)pppuVar10 != 0) {
        _objc_initWeak(&ppuStack_98,param_1);
        pppuVar3 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar3;
        func_0x00010bf9be80();
        _objc_retainAutoreleasedReturnValue();
        pppuVar9 = param_1;
        func_0x00010bef4120();
        _objc_retainAutoreleasedReturnValue();
        pppuVar10 = pppuVar9;
        func_0x00010c0f7700();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_c0 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1063d4d20;
        puStack_a8 = &UNK_110920718;
        pppuVar2 = &ppuStack_c0;
        pppuVar1 = &ppuStack_98;
        _objc_copyWeak(auStack_a0,pppuVar1);
        pppuVar20 = (undefined ***)0x1;
        func_0x00010c125bc0(pppuVar5);
        _objc_release(pppuVar10);
        _objc_release(pppuVar9);
        _objc_release(pppuVar5);
        _objc_release(pppuVar3);
        _objc_destroyWeak(auStack_a0);
        _objc_destroyWeak(&ppuStack_98);
      }
      func_0x00010c1391e0(param_1);
      func_0x00010c163ca0(param_1);
      func_0x00010c069d00(*(undefined8 *)((long)param_1 + (long)_DAT_112746f64));
      _objc_release(pppuVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(pppuVar2 + 4);
  _objc_destroyWeak(&ppuStack_98);
  __Unwind_Resume(param_3);
  _objc_retain(pppuVar20);
  _objc_retain(pppuVar1);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be0c380();
  _objc_release(pppuVar20);
  _objc_release(pppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d4d20; end: 1063d4d87;  */

void FUN_1063d4d20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c380();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063d4d88; end: 1063d4d8f;  */

void FUN_1063d4d88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1063d4d90; end: 1063d4f4f; -[SCAdPublicStoriesAdDataSource _expandStoryAd:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d4d90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112746f5c) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1063d4eac;
    puStack_58 = &UNK_110920768;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uVar2 = uVar1;
    uStack_48 = param_3;
    func_0x00010bd86420(uVar1,&puStack_70);
    _objc_release(uVar1);
    func_0x00010be89060(param_1);
    func_0x00010be3c2a0(param_1);
    _objc_release(uVar2);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d4f50; end: 1063d507b; -[SCAdPublicStoriesAdDataSource _registerAdSnaps:adResponse:] */

void FUN_1063d4f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1063d4fdc;
  puStack_48 = &UNK_110920798;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063d507c; end: 1063d5317; -[SCAdPublicStoriesAdDataSource _insertAdSnapsAfterCurrentItem:forAdResponse:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d507c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar8 = (long)_DAT_112746f5c;
  if (*(long *)(param_1 + lVar8) != 0) {
    uVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109207e8);
    uVar2 = param_1;
    func_0x00010bfceb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfce400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010be36bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfecde0();
    _objc_release(uVar7);
    if (uVar4 != 0x7fffffffffffffff) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x1063d53b8;
      puStack_78 = &UNK_110920808;
      _objc_retain(uVar2);
      uStack_70 = uVar2;
      uStack_68 = uVar4;
      func_0x00010bf97e80(uVar1);
      _objc_release(uStack_70);
    }
    _objc_initWeak(auStack_98,param_1);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c066c20(param_1);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063d5318; end: 1063d5487;  */

void FUN_1063d5318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b23d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c280580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0558c0(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063d5488; end: 1063d555f; -[SCAdPublicStoriesAdDataSource _adRuleTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d5488(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f480();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    if (*(long *)(param_1 + _DAT_112746f54) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112746f48);
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112746f44);
    _objc_retain(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1063d5560; end: 1063d565f; -[SCAdPublicStoriesAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d5560(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112746f64,0);
  _objc_storeStrong(param_1 + _DAT_112746f50,0);
  _objc_storeStrong(param_1 + _DAT_112746f44,0);
  _objc_storeStrong(param_1 + _DAT_112746f48,0);
  _objc_storeStrong(param_1 + _DAT_112746f60,0);
  _objc_storeStrong(param_1 + _DAT_112746f40,0);
  _objc_storeStrong(param_1 + _DAT_112746f3c,0);
  _objc_storeStrong(param_1 + _DAT_112746f34,0);
  _objc_storeStrong(param_1 + _DAT_112746f4c,0);
  _objc_storeStrong(param_1 + _DAT_112746f30,0);
  _objc_storeStrong(param_1 + _DAT_112746f38,0);
  _objc_storeStrong(param_1 + _DAT_112746f5c,0);
  _objc_storeStrong(param_1 + _DAT_112746f58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112746f54,0);
  return;
}



/* Entry: 1063d5660; end: 1063d5707;  */

void FUN_1063d5660(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1063d5708; end: 1063d59cb;  */

void FUN_1063d5708(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010c0f0420();
    if ((int)puVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cda60();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar8 = param_1;
        _objc_release(lVar2);
        goto LAB_1063d5864;
      }
      func_0x00010c067f60();
      func_0x00010c067f60();
      puVar1 = param_3;
      func_0x00010c067f60(param_3);
      dVar8 = param_1;
    }
    else {
      func_0x00010c11a900();
      func_0x00010c229d80();
      puVar1 = PTR_PTR_1126b8c98;
      func_0x00010c11a920(PTR_PTR_1126b8c98);
      dVar8 = param_1;
    }
    param_1 = (double)(long)puVar1;
  }
  else {
    dVar8 = param_1;
    param_1 = 0.0;
  }
LAB_1063d5864:
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar3 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar4 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar5 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar6 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(0,param_1,0,dVar8,0,puVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063d59cc; end: 1063d5a4b; -[SCAdPublicStoriesAdRuleTracker initWithViewedSnapsCount:accumulatedDurationSeconds:] */

undefined8
FUN_1063d59cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x00010c155420(PTR_PTR_1126afec0);
  puVar1 = PTR_PTR_1126ca510;
  _objc_alloc(PTR_PTR_1126ca510);
  func_0x00010c0293e0(0x7fefffffffffffff,param_1);
  func_0x00010c0622a0(param_2,param_3,param_4,puVar1);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 1063d5a4c; end: 1063d5adb; -[SCAdPublicStoriesAdRuleTracker initWithViewedSnapsCount:timer:] */

undefined1 *
FUN_1063d5a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f11d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0x7fffffff;
    *(undefined8 *)((long)puVar1 + 8) = 0x7fffffff;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1063d5adc; end: 1063d5aef; -[SCAdPublicStoriesAdRuleTracker enoughSnapsViewed] */

bool FUN_1063d5adc(long param_1)

{
  return *(long *)(param_1 + 8) <= *(long *)(param_1 + 0x20);
}



/* Entry: 1063d5af0; end: 1063d5b3b; -[SCAdPublicStoriesAdRuleTracker enoughTimeViewed] */

bool FUN_1063d5af0(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bfc1ec0(*(undefined8 *)(param_2 + 0x28));
  dVar1 = (double)*(long *)(param_2 + 0x10);
  func_0x00010c155420(PTR_PTR_1126afec0);
  return dVar1 <= param_1;
}



/* Entry: 1063d5b3c; end: 1063d5b4b; -[SCAdPublicStoriesAdRuleTracker incrementSnapsViewed] */

void FUN_1063d5b3c(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 1063d5b4c; end: 1063d5b53; -[SCAdPublicStoriesAdRuleTracker resetSnapsViewed] */

void FUN_1063d5b4c(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1063d5b54; end: 1063d5b8b; -[SCAdPublicStoriesAdRuleTracker setAdRulesForFirstSessionAd] */

void FUN_1063d5b54(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c0cdaa0();
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x00010c0cdca0(*(undefined8 *)(param_2 + 0x18));
  *(long *)(param_2 + 0x10) = (long)param_1;
  return;
}



/* Entry: 1063d5b8c; end: 1063d5bc3; -[SCAdPublicStoriesAdRuleTracker setAdRulesForNonFirstSessionAd] */

void FUN_1063d5b8c(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c0cdaa0();
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x00010c0cdca0(*(undefined8 *)(param_2 + 0x18));
  *(long *)(param_2 + 0x10) = (long)param_1;
  return;
}



/* Entry: 1063d5bc4; end: 1063d5bcb; -[SCAdPublicStoriesAdRuleTracker resetSessionAdTimer] */

void FUN_1063d5bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1063d5bcc; end: 1063d5bd3; -[SCAdPublicStoriesAdRuleTracker startSessionAdTimer] */

void FUN_1063d5bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_start_112671080);
  return;
}



/* Entry: 1063d5bd4; end: 1063d5bdb; -[SCAdPublicStoriesAdRuleTracker stopSessionAdTimer] */

void FUN_1063d5bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_stop_112673008);
  return;
}



/* Entry: 1063d5bdc; end: 1063d5c2b; -[SCAdPublicStoriesAdRuleTracker timeGapFromNextAdInSec] */

void FUN_1063d5bdc(long param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126afec0;
  dVar2 = (double)*(long *)(param_1 + 0x10);
  func_0x00010c155420(dVar2,PTR_PTR_1126afec0);
  dVar3 = dVar2;
  func_0x00010bfc1ec0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar2 - dVar3,puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063d5c2c; end: 1063d5c5b; -[SCAdPublicStoriesAdRuleTracker updateInsertionRuleConfiguration:] */

void FUN_1063d5c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063d5c5c; end: 1063d5c63; -[SCAdPublicStoriesAdRuleTracker snapsViewed] */

undefined8 FUN_1063d5c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1063d5c64; end: 1063d5c6b; -[SCAdPublicStoriesAdRuleTracker storiesViewed] */

undefined8 FUN_1063d5c64(void)

{
  return 0x8000000000000000;
}



/* Entry: 1063d5c6c; end: 1063d5c97; -[SCAdPublicStoriesAdRuleTracker timeViewedSeconds] */

void FUN_1063d5c6c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bfc1ec0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063d5c98; end: 1063d5cc7; -[SCAdPublicStoriesAdRuleTracker .cxx_destruct] */

void FUN_1063d5c98(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1063d5cc8; end: 1063d5efb; -[SCLongformShowAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:] */

undefined8
FUN_1063d5cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ca520;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bef2520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bef2fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf5ca20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1160(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ca528;
  _objc_alloc(PTR_PTR_1126ca528);
  uVar2 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c4e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c5940(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bef2520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029980(puVar5,param_2,uVar2,uVar4,uVar7,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c00b6c0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1063d5efc; end: 1063d615b; -[SCLongformShowAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:insertionRuleTracker:progressiveMediaDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1063d5efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f11d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithDependencies_pendingDisp_1125e0770,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f7c);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f7c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f80);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f80) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f84);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f84) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f88);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f88) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f8c);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f8c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f90);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f90) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f94);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f94) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f98);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f98) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746f9c);
    *(undefined **)((long)puVar1 + (long)_DAT_112746f9c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fa0);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fa0) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112746fa4;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112746fa8;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746fac);
    *(undefined **)((long)puVar1 + (long)_DAT_112746fac) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1063d615c; end: 1063d616b; -[SCLongformShowAdDataSource updateEntryInteractionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d615c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112746fb0) = param_3;
  return;
}



/* Entry: 1063d616c; end: 1063d637b; -[SCLongformShowAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d616c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar7 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75ea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  lVar8 = (long)_DAT_112746fb4;
  uVar7 = *(ulong *)(param_1 + lVar8);
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((uVar7 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar4;
    _objc_release(uVar6);
    uVar7 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126bdd30;
    _objc_retain(uVar1);
    _objc_opt_class(puVar3);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar7 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
    lVar8 = (long)_DAT_112746fb8;
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = uVar7;
    _objc_release(uVar4);
    uVar2 = uVar7;
    func_0x00010c071420();
    lVar8 = (long)_DAT_112746fbc;
    *(char *)(param_1 + lVar8) = (char)uVar2;
    func_0x00010c137fe0(*(undefined8 *)(param_1 + (long)_DAT_112746fa4));
    if (uVar7 != 0) {
      if (*(char *)(param_1 + lVar8) == '\x01') {
        func_0x00010bec2180(param_1);
      }
      else {
        uVar2 = param_1;
        func_0x00010bfceb40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        if (uVar5 == 0) {
          func_0x00010be77d80(param_1);
        }
      }
    }
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d637c; end: 1063d689b; -[SCLongformShowAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d637c(undefined *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  uVar13 = param_3;
  if ((uVar3 & 1) == 0) {
    _objc_release(puVar2);
    _objc_release(uVar1);
LAB_1063d651c:
    lVar17 = (long)_DAT_112746fc0;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar17);
    *(ulong *)(param_1 + lVar17) = param_3;
    _objc_release(uVar5);
    lVar17 = (long)_DAT_112746fc4;
    func_0x00010c069d00(*(undefined8 *)(param_1 + lVar17));
    uVar5 = *(undefined8 *)(param_1 + lVar17);
    *(undefined8 *)(param_1 + lVar17) = 0;
    _objc_release(uVar5);
    func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112746fac));
    puVar2 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    param_2 = PTR_PTR_1126c9a80;
    _objc_retain(puVar6);
    _objc_opt_class();
    puVar7 = puVar6;
    _objc_opt_isKindOfClass();
    puVar2 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar6);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112746fc8);
    *(undefined **)(param_1 + _DAT_112746fc8) = puVar2;
    _objc_release(uVar5);
LAB_1063d65e0:
    _objc_release(puVar6);
  }
  else {
    uVar15 = *(ulong *)(param_1 + _DAT_112746f7c);
    uVar3 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((uVar15 & 1) == 0) goto LAB_1063d651c;
    lVar17 = (long)_DAT_112746fc0;
    uVar4 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b2340;
    if ((int)uVar5 == 0) {
      lVar16 = (long)_DAT_112746fac;
      func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar16));
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      *(ulong *)(param_1 + lVar17) = param_3;
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126b2340;
      uVar1 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c076c60();
      _objc_release(uVar1);
      if ((int)puVar2 == 0) {
        func_0x00010c24d960(*(undefined8 *)(param_1 + lVar16));
      }
      else {
        lVar17 = (long)_DAT_112746fc4;
        func_0x00010c069d00(*(undefined8 *)(param_1 + lVar17));
        puVar2 = PTR_PTR_1126bc890;
        uVar1 = param_3;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1503c0(0x4000000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar17);
        *(undefined **)(param_1 + lVar17) = puVar2;
        _objc_release(uVar5);
        _objc_release(puVar6);
        _objc_release(uVar1);
      }
      puVar2 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ca218;
      _objc_opt_class(PTR_PTR_1126ca218);
      puVar7 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar2);
      puVar2 = puVar6;
      if (((ulong)puVar7 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar6);
      puVar6 = param_1;
      func_0x00010bef4ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010bef3da0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      param_2 = puVar6;
      FUN_1063d689c(puVar2,puVar6,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = param_1;
      func_0x00010bdc55e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010bfe5ec0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c071ae0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      if ((int)puVar11 != 0) {
        func_0x00010be3c280(param_1);
      }
      func_0x00010c251900(*(undefined8 *)(param_1 + _DAT_112746fa8));
      _objc_release(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar7);
      goto LAB_1063d65e0;
    }
    uVar1 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010c076c60();
    _objc_release(uVar1);
    if (((ulong)puVar2 & 1) == 0) {
      lVar17 = (long)_DAT_112746fc4;
      func_0x00010c069d00(*(undefined8 *)(param_1 + lVar17));
      uVar5 = *(undefined8 *)(param_1 + lVar17);
      *(undefined8 *)(param_1 + lVar17) = 0;
      _objc_release(uVar5);
      func_0x00010c24d960(*(undefined8 *)(param_1 + _DAT_112746fac));
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(uVar13);
  uVar1 = param_3;
  if (uVar13 != 0) {
    puVar2 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c071ae0();
      if (((ulong)puVar7 & 1) == 0) {
        _objc_release(puVar6);
        _objc_release(puVar2);
      }
      else {
        uVar3 = uVar13;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010c071ae0();
        _objc_release(uVar15);
        _objc_release(uVar3);
        _objc_release(puVar6);
        _objc_release(puVar2);
        if ((int)uVar12 != 0) goto LAB_1063d6978;
      }
      func_0x00010c280580(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063d69ac;
    }
  }
LAB_1063d6978:
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1063d69ac:
  _objc_release(uVar13);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063d689c; end: 1063d69e3;  */

void FUN_1063d689c(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar7 = param_1;
  if (param_3 != 0) {
    uVar1 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_2;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c071ae0();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        lVar4 = param_3;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c071ae0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)lVar6 != 0) goto LAB_1063d6978;
      }
      func_0x00010c280580(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063d69ac;
    }
  }
LAB_1063d6978:
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1063d69ac:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1063d69e4; end: 1063d6a47; -[SCLongformShowAdDataSource _removeAdItem:] */

void FUN_1063d69e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d6a48; end: 1063d6ad3; -[SCLongformShowAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d6a48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112746fc4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_112746fac));
  if (*(char *)(param_1 + _DAT_112746fbc) == '\x01') {
    func_0x00010be30e80(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d6ad4; end: 1063d6b63; -[SCLongformShowAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d6ad4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746fb4);
  *(undefined8 *)(param_1 + _DAT_112746fb4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746fb8);
  *(undefined8 *)(param_1 + _DAT_112746fb8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746fc8);
  *(undefined8 *)(param_1 + _DAT_112746fc8) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112746fbc) = 0;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112746fa4));
  lVar2 = (long)_DAT_112746fc4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112746fac),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1063d6b64; end: 1063d6b67; -[SCLongformShowAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063d6b64(void)

{
  return;
}



/* Entry: 1063d6b68; end: 1063d6b6b; -[SCLongformShowAdDataSource startViewingPlaylistChapterId:currentItem:] */

void FUN_1063d6b68(void)

{
  return;
}



/* Entry: 1063d6b6c; end: 1063d6b73; -[SCLongformShowAdDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1063d6b6c(void)

{
  return 1;
}



/* Entry: 1063d6b74; end: 1063d6d2b; -[SCLongformShowAdDataSource dataModelFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d6b74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  _objc_release(lVar4);
  if ((int)lVar2 == 0) {
LAB_1063d6d08:
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c067280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      iVar5 = (int)*(undefined8 *)(param_1 + _DAT_112746f7c);
      lVar4 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(lVar4);
      if (iVar5 == 0) goto LAB_1063d6d08;
      lVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      lVar4 = lVar2;
      FUN_10640b154(lVar2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c067280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_1;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1063d6d2c; end: 1063d7337; -[SCLongformShowAdDataSource extraPagePropertiesForDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d6d2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126ca218;
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) goto LAB_1063d7304;
  uVar5 = param_1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
LAB_1063d6e54:
    uVar20 = 0;
    bVar2 = false;
  }
  else {
    uVar6 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258fe0(param_1);
    uVar7 = uVar6;
    func_0x00010c09c2e0();
    _objc_release(uVar6);
    if (uVar7 != 7) goto LAB_1063d6e54;
    uVar6 = param_3;
    func_0x00010c242040(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0c6c20();
    bVar2 = uVar8 == 1;
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar20 = 1;
  }
  uVar7 = param_1;
  func_0x00010bef3da0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  FUN_1063d689c(param_3,uVar5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bfce400(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar8 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar4);
  uVar6 = uVar10;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar10);
  uVar8 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010bef3720(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar12;
  func_0x00010bef51a0(uVar12);
  uVar13 = uVar11;
  func_0x000106449df8(uVar11,uVar20,bVar2,uVar6 == 2,2);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  puVar4 = PTR_PTR_1126b9250;
  if ((int)uVar13 != 0) {
    func_0x00010bef60a0();
    func_0x00010bef4240();
    uVar6 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    uVar15 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf89440();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44a40();
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c282860();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf4e6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c29d360();
    func_0x00010beed820(*(undefined8 *)(param_1 + (long)_DAT_112746fac));
    uVar20 = 1;
    FUN_106449e40(1,uVar5,uVar10,uVar13,uVar15,uVar17,0,0,uVar19,(int)puVar4 == 4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar3);
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar6);
  }
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
LAB_1063d7304:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063d7338; end: 1063d7667; -[SCLongformShowAdDataSource pageDataForDataModel:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d7338(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bef3da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_1063d689c(uVar1,lVar6,lVar5);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_112746fbc) == '\x01') {
    func_0x00010be6f060(param_1);
  }
  else {
    lVar7 = param_1;
    func_0x00010bdc55e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      bVar2 = true;
    }
    else {
      lVar8 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c258fe0(param_1);
      lVar9 = lVar8;
      func_0x00010c09c2e0();
      _objc_release(lVar8);
      bVar2 = lVar9 != 7;
    }
    lVar8 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if (bVar2) {
      func_0x00010bef4240(param_1);
      uVar10 = uVar4;
      func_0x00010640abd4(uVar4,param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0d3c80();
      _objc_release(uVar10);
      func_0x00010c1d0640(uVar11);
      if (lVar7 != 0) {
        func_0x00010c1d0640(uVar11);
      }
      if (param_4 != 0) {
        puVar3 = PTR_PTR_1126b23e0;
        _objc_alloc(PTR_PTR_1126b23e0);
        func_0x00010c033240();
        (**(code **)(param_4 + 0x10))(param_4,puVar3);
        _objc_release(puVar3);
      }
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1063d7668;
      puStack_80 = &UNK_110920878;
      _objc_retain(param_4);
      uStack_68 = param_4;
      _objc_retain(lVar7);
      puStack_a0 = PTR_PTR_1126f11d8;
      lStack_a8 = param_1;
      lStack_78 = lVar7;
      uStack_70 = uVar4;
      _objc_msgSendSuper2(&lStack_a8,PTR_s_pageDataForDataModel_completion__112619db8,lVar9,
                          &puStack_98);
      _objc_release(lStack_78);
      uVar11 = uStack_68;
    }
    _objc_release(uVar11);
    _objc_release(lVar9);
    _objc_release(lVar7);
  }
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063d7668; end: 1063d79bb;  */

undefined1 * FUN_1063d7668(long param_1,undefined1 *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x30) != 0) {
    unaff_x20 = PTR_PTR_1126b2368;
    _objc_opt_new();
    unaff_x21 = PTR_PTR_1126b2368;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_1 + 0x20) != 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0bef8;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110f0bf18;
      lStack_68 = *(long *)(param_1 + 0x20);
      func_0x00010c27c480();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(unaff_x20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f0e6b8;
    puStack_80 = PTR____kCFBooleanTrue_11034ab68;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(unaff_x20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = param_2;
    func_0x00010c0f1980();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    if (puVar4 != (undefined1 *)0x0) {
      puVar3 = param_2;
      func_0x00010c0f1980(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(unaff_x20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_90 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53a0(unaff_x20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    puVar3 = param_2;
    func_0x00010bf0d180();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    if (puVar4 != (undefined1 *)0x0) {
      puVar3 = param_2;
      func_0x00010bf0d180(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(unaff_x21);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_90 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53a0(unaff_x21);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    unaff_x23 = unaff_x21;
    func_0x00010c1531a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + 0x30);
    unaff_x24 = PTR_PTR_1126b23e0;
    _objc_alloc();
    puVar1 = unaff_x20;
    func_0x00010c1531a0(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    param_3 = puVar1;
    func_0x00010c033240();
    (**(code **)(param_1 + 0x10))(param_1,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(puVar1);
    _objc_release(unaff_x23);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_e0;
  pcStack_98 = FUN_1063d79bc;
  puStack_d0 = unaff_x24;
  puStack_c8 = unaff_x23;
  lStack_c0 = param_1;
  puStack_b8 = unaff_x21;
  puStack_b0 = unaff_x20;
  puStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar4 = puVar3;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  _objc_release(puVar4);
  if (puVar5 == (undefined1 *)0x0) {
    puStack_d8 = PTR_PTR_1126f11d8;
    puStack_e0 = puVar3;
    _objc_msgSendSuper2(&puStack_e0,PTR_s_adSnapIndexForItem__11259ae98,param_3);
  }
  else {
    puVar4 = puVar3;
    func_0x00010c067280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0e00e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    func_0x00010bef4820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfe5ec0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010bef52c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined1 **)puVar3;
    func_0x00010bfecde0();
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar7;
}



/* Entry: 1063d79bc; end: 1063d7b5f; -[SCLongformShowAdDataSource adSnapIndexForItem:] */

undefined1 * FUN_1063d79bc(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126f11d8;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_adSnapIndexForItem__11259ae98,param_3);
  }
  else {
    puVar1 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010bef4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar1 = puVar4;
    func_0x00010bef52c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined1 **)puVar1;
    func_0x00010bfecde0();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar5;
}



/* Entry: 1063d7b60; end: 1063d8593; -[SCLongformShowAdDataSource didTriggerNoFillTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d7b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar21;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112746f80);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar20 = (long)_DAT_112746fb8;
  func_0x00010bf8c980(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11b1e0(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar9 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar21;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(lVar21);
  func_0x00010bfecde0();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010bf8c980(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c11b1e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c11b3a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar16 = uVar4;
  func_0x00010c084fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b92c8;
  func_0x00010c23fa00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(uVar16);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b92c8;
  func_0x00010bef2d00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar21 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar21;
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c0df740(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b92c8;
  func_0x00010bf0f6c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(lVar21);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar21 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar21;
  func_0x00010c29d360();
  lVar12 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar15,lVar14);
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar21);
  lVar21 = *(long *)(param_1 + _DAT_112746f98);
  uVar16 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar16);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar21 != 0) {
    func_0x00010be427e0(param_1);
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b92c8;
    func_0x00010c0794e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c0ecf40(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  lVar15 = *(long *)(param_1 + lVar20);
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar15;
  func_0x00010c08fa60();
  _objc_release(lVar15);
  if (lVar21 != 0) {
    uVar16 = *(undefined8 *)(param_1 + lVar20);
    func_0x00010bfe4640(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b92c8;
    func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar6);
    _objc_release(uVar16);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c077680(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b92c8;
  func_0x00010c260660(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar6);
  lVar21 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar21;
  func_0x00010bef6000();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_1 + lVar20);
  func_0x00010bef3720(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bef51a0();
  FUN_106449dc0(lVar14,lVar18 == 2,2);
  func_0x00010c278340(lVar15);
  _objc_release(lVar17);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(lVar21);
  uVar16 = uVar3;
  func_0x00010c0f3aa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126f11d8;
  plVar19 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar19,PTR_s_adSnapViewLogParametersForSkippe_11259aef8,uVar1,uVar16,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puVar6 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010bef52c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar21;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7980(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(lVar21);
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c11b3a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6500(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar16);
  func_0x00010c2acc80(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar21;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075a20(lVar12);
  func_0x00010c2b19e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(lVar21);
  lVar21 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x000107a59564();
  func_0x00010c2aa4e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar21);
  func_0x00010bf529e0(lVar10);
  func_0x00010c2a7880(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a78a0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad400(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0640(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bef2040();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0820(lVar21);
  _objc_release(puVar11);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(plVar19);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1063d8594; end: 1063d9247; -[SCLongformShowAdDataSource shouldTriggerDynamicAdTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063d8594(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  lVar23 = (long)_DAT_112746f90;
  uVar20 = *(ulong *)(param_2 + lVar23);
  uVar19 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar19);
  if ((uVar20 & 1) == 0) {
    uVar20 = param_2;
    func_0x00010c067280();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar19);
    _objc_release(uVar20);
    if (uVar1 != 0) {
LAB_1063d865c:
      uVar19 = 1;
      goto LAB_1063d919c;
    }
    uVar20 = param_2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bef4120(param_2);
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
    func_0x00010c258fe0(param_2);
    uVar5 = uVar20;
    func_0x00010c09c2e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar20);
    uVar20 = param_2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar20;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar20);
    if (uVar1 == 0) {
      uVar19 = *(undefined8 *)(param_2 + (long)_DAT_112746fb4);
      FUN_10641701c(uVar19,uVar5,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar19);
      uVar19 = *(undefined8 *)(param_2 + lVar23);
    }
    else {
      uVar20 = param_2;
      func_0x00010bef4240();
      uVar1 = param_2;
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
      lVar15 = (long)_DAT_112746fc8;
      uVar19 = *(undefined8 *)(param_2 + lVar15);
      uVar6 = param_2;
      func_0x00010bf6d940(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar6;
      func_0x00010bef2fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_2;
      func_0x00010bf6d940(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001063fcf48(uVar20,uVar4,uVar19,0,uVar7,0,uVar10);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar17);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar20 & 1) == 0) {
        uVar21 = *(undefined8 *)(param_2 + (long)_DAT_112746fb4);
        uVar14 = *(undefined8 *)(param_2 + lVar15);
        FUN_10640a74c(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = *(undefined8 *)(param_2 + (long)_DAT_112746fb8);
        FUN_10640b8b8(uVar19);
        uVar22 = *(undefined8 *)(param_2 + lVar15);
        FUN_1063fc8dc(uVar22);
        uVar13 = 1;
        FUN_106416d68(1,uVar14,uVar19,0xffffffffffffffff,uVar22,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_10641701c(uVar21,uVar5,uVar13,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c163ca0(param_2);
        _objc_release(uVar21);
        _objc_release(uVar13);
LAB_1063d90ac:
        _objc_release(uVar14);
        uVar19 = *(undefined8 *)(param_2 + lVar23);
      }
      else {
        puVar11 = PTR_PTR_1126b8c98;
        func_0x00010bf90d40();
        if (((ulong)puVar11 & 1) == 0) {
          uVar20 = param_2;
          func_0x00010bef4120();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar20;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bef4c60();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar20);
          if (uVar4 == 0) {
            uVar14 = *(undefined8 *)(param_2 + (long)_DAT_112746fb4);
            FUN_10641701c(uVar14,uVar5,0,2,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163ca0(param_2);
            goto LAB_1063d90ac;
          }
        }
        lVar16 = (long)_DAT_112746fa4;
        uVar17 = *(ulong *)(param_2 + lVar16);
        uVar19 = param_4;
        func_0x00010bfe5ec0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becfce0();
        func_0x00010be427e0(param_2);
        func_0x00010c27c480(param_4);
        uVar20 = param_2;
        func_0x00010bef4120(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar20;
        func_0x00010c0f7700();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bef4c60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010bfceb40(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_112746fb4;
        uVar6 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c27c0e0();
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar20);
        _objc_release(uVar19);
        if ((uVar17 & 1) == 0) {
          uVar19 = *(undefined8 *)(param_2 + lVar16);
          func_0x00010c26f240(uVar19);
          if (0.0 < param_1) {
            uVar22 = *(undefined8 *)(param_2 + lVar18);
            FUN_106416eb4();
            _objc_retainAutoreleasedReturnValue();
            FUN_10641701c(uVar22,uVar5,uVar19,0,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163ca0(param_2);
            _objc_release(uVar22);
            _objc_release(uVar19);
          }
          uVar19 = *(undefined8 *)(param_2 + lVar23);
        }
        else {
          uVar20 = param_2;
          func_0x00010c0f72e0();
          if ((uVar20 & 1) != 0) {
            uVar20 = param_2;
            func_0x00010c0f7040();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0xc2000000;
            pcStack_90 = FUN_1063d9248;
            puStack_88 = &UNK_1109208a8;
            uStack_80 = param_2;
            func_0x00010bf97e80();
            puStack_d8 = puVar11;
            uStack_d0 = 0xc2000000;
            pcStack_c8 = FUN_1063d928c;
            puStack_c0 = &UNK_1109208d8;
            uStack_b8 = param_2;
            uStack_b0 = uVar20;
            _objc_retain(param_4);
            uVar1 = uVar20;
            uStack_a8 = param_4;
            func_0x000100504554(uVar20,&puStack_d8);
            uVar2 = uVar1;
            func_0x00010bf529e0();
            if (uVar2 != 0) {
              uVar2 = param_2;
              func_0x00010bef4120();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c0f7700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar2);
              if (uVar3 != 0) {
                puVar12 = PTR_PTR_1126bdb78;
                _objc_alloc(PTR_PTR_1126bdb78);
                uVar2 = param_2;
                func_0x00010bef4120(param_2);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar2;
                func_0x00010c0f7700();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar3;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c01b480(puVar12);
                uVar5 = param_2;
                func_0x00010bef4120(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1da300();
                _objc_release(uVar5);
                _objc_release(puVar12);
                _objc_release(uVar4);
                _objc_release(uVar3);
                _objc_release(uVar2);
              }
            }
            puStack_100 = puVar11;
            uStack_f8 = 0xc2000000;
            pcStack_f0 = FUN_1063d9314;
            puStack_e8 = &UNK_1109208a8;
            uStack_e0 = param_2;
            func_0x00010bf97e80(uVar1);
            uVar19 = *(undefined8 *)(param_2 + lVar15);
            uVar2 = param_2;
            func_0x00010bf6d940(param_2);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bef2560();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            FUN_1063fd368(uVar19,0,uVar4);
            _objc_release(uVar4);
            _objc_release(uVar3);
            _objc_release(uVar2);
            puStack_130 = puVar11;
            uStack_128 = 0xc2000000;
            pcStack_120 = FUN_1063d93d0;
            puStack_118 = &UNK_110920908;
            uStack_110 = param_2;
            uStack_108 = uVar19;
            func_0x00010bf97e80(uVar1);
            _objc_initWeak(auStack_138,param_2);
            uVar2 = param_2;
            func_0x00010bef4120();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0f7700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            uVar2 = param_2;
            func_0x00010bf6d940(param_2);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010bf9be80();
            _objc_retainAutoreleasedReturnValue();
            puStack_160 = puVar11;
            uStack_158 = 0xc2000000;
            uStack_150 = 0x1063d9478;
            puStack_148 = &UNK_110920718;
            _objc_copyWeak(auStack_140,auStack_138);
            puStack_1a0 = puVar11;
            uStack_198 = 0xc2000000;
            pcStack_190 = FUN_1063d94f8;
            puStack_188 = &UNK_110920938;
            _objc_copyWeak(auStack_168,auStack_138);
            uStack_180 = uVar1;
            _objc_retain(param_4);
            uStack_178 = param_4;
            uStack_170 = uVar3;
            func_0x00010c125bc0(uVar4);
            _objc_release(uVar4);
            _objc_release(uVar2);
            uVar2 = param_2;
            func_0x00010bf6d940(param_2);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010bef3de0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_2;
            func_0x00010bef3e00(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c125be0(uVar5);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar2);
            func_0x00010c1391e0(param_2);
            func_0x00010c163ca0(param_2);
            puStack_1c8 = puVar11;
            uStack_1c0 = 0xc2000000;
            pcStack_1b8 = FUN_1063d9624;
            puStack_1b0 = &UNK_110920968;
            uVar2 = uVar1;
            uStack_1a8 = param_2;
            func_0x00010bd86870(uVar1,PTR____kCFBooleanTrue_11034ab68,&puStack_1c8);
            uVar4 = uVar2;
            func_0x00010bf1f3c0();
            if ((int)uVar4 != 0) {
              func_0x00010c286aa0(param_4);
              func_0x00010bf77480(*(undefined8 *)(param_2 + lVar16));
              uVar22 = *(undefined8 *)(param_2 + (long)_DAT_112746f88);
              uVar19 = param_4;
              func_0x00010bfe5ec0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar22);
              _objc_release(uVar19);
              func_0x00010be5b960(param_2);
            }
            uVar4 = param_2;
            func_0x00010bf6d940(param_2);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bef2fc0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar1;
            func_0x00010bfb1920(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_2;
            func_0x00010bef4120(param_2);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bf21040();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef4120(param_2);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_2;
            func_0x00010c0f7700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a04c0(uVar6);
            _objc_release(uVar9);
            _objc_release(param_2);
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar17);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar2);
            _objc_release(uStack_178);
            _objc_destroyWeak(auStack_168);
            _objc_destroyWeak(auStack_140);
            _objc_release(uVar3);
            _objc_destroyWeak(auStack_138);
            _objc_release(uVar1);
            _objc_release(uStack_a8);
            _objc_release(uVar20);
            goto LAB_1063d865c;
          }
          uVar19 = *(undefined8 *)(param_2 + lVar18);
          FUN_10641701c(uVar19,uVar5,0,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163ca0(param_2);
          _objc_release(uVar19);
          uVar19 = *(undefined8 *)(param_2 + lVar23);
        }
      }
    }
    uVar22 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar19);
    _objc_release(uVar22);
  }
  uVar19 = 0;
LAB_1063d919c:
  _objc_release(param_4);
  return uVar19;
}



/* Entry: 1063d9248; end: 1063d928b;  */

void FUN_1063d9248(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0560(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063d928c; end: 1063d9313;  */

void FUN_1063d928c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(param_2);
  func_0x00010be89460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063d9314; end: 1063d93cf;  */

void FUN_1063d9314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef4120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef4b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1063d93d0; end: 1063d94f7;  */

void FUN_1063d93d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef4840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063d94f8; end: 1063d9623;  */

void FUN_1063d94f8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bef52c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c071ae0();
  if ((uVar6 & 1) == 0) {
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)uVar5 != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010bfe5ec0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1063d95f4;
    }
  }
  uVar6 = param_2;
  FUN_1063d689c(param_2,lVar2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
LAB_1063d95f4:
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1063d9624; end: 1063d96cb;  */

void FUN_1063d9624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar5;
  func_0x00010c09c2e0();
  _objc_release(param_2);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  uVar4 = 0;
  if (lVar2 == 3) {
    uVar4 = (undefined4)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar4);
  return;
}



/* Entry: 1063d96cc; end: 1063d9b33; -[SCLongformShowAdDataSource isInsertedAdItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063d96cc(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar14 = (long)_DAT_112746f7c;
  uVar2 = *(ulong *)(param_1 + lVar14);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar2);
    if ((int)uVar5 != 0) {
      uVar2 = uVar3;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf63e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar4 = PTR_PTR_1126bdd30;
      _objc_retain(uVar6);
      _objc_opt_class(puVar4);
      uVar5 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar4);
      _objc_release(uVar6);
      if (((uVar5 & 1) != 0) && (uVar6 != 0)) {
        uVar7 = uVar2;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010bf52a60();
        lVar10 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar15 = 0;
          do {
            if (lRam0000000000000000 != lVar10) {
              _objc_enumerationMutation(uVar7);
            }
            lVar11 = *(long *)(uVar15 * 8);
            func_0x00010c25e580();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar11;
            func_0x00010bf52a60();
            lVar12 = lRam0000000000000000;
            while (lVar8 != 0) {
              lVar16 = 0;
              do {
                if (lRam0000000000000000 != lVar12) {
                  _objc_enumerationMutation(lVar11);
                }
                lVar21 = *(long *)(lVar16 * 8);
                _objc_retain(lVar21);
                lVar9 = lVar21;
                func_0x00010bf52a60();
                lVar1 = lRam0000000000000000;
                while (lVar9 != 0) {
                  lVar20 = 0;
                  do {
                    if (lRam0000000000000000 != lVar1) {
                      _objc_enumerationMutation(lVar21);
                    }
                    uVar19 = *(undefined8 *)(lVar20 * 8);
                    uVar18 = uVar19;
                    func_0x00010c27dd80();
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = PTR_PTR_1126c9a78;
                    func_0x00010c1015e0(PTR_PTR_1126c9a78);
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar18;
                    func_0x00010c0720c0();
                    _objc_release(puVar4);
                    _objc_release(uVar18);
                    if ((int)uVar17 != 0) {
                      uVar17 = *(undefined8 *)(param_1 + lVar14);
                      uVar18 = uVar19;
                      func_0x00010be36bc0(uVar19);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(uVar17);
                      _objc_release(uVar18);
                      uVar18 = *(undefined8 *)(param_1 + (long)_DAT_112746f80);
                      func_0x00010be36bc0(uVar19);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(uVar18);
                      _objc_release(uVar19);
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar9 != lVar20);
                  lVar9 = lVar21;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar21);
                lVar16 = lVar16 + 1;
              } while (lVar16 != lVar8);
              lVar8 = lVar11;
              func_0x00010bf52a60();
            }
            _objc_release(lVar11);
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar5);
          uVar5 = uVar7;
          func_0x00010bf52a60();
        }
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    lVar14 = *(long *)(param_1 + lVar14);
    func_0x00010bf4b900();
    _objc_release(uVar3);
  }
  else {
    lVar14 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return lVar14;
  }
  ___stack_chk_fail();
  lVar13 = param_3;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_3 + _DAT_112746fb8);
  func_0x00010bef3720(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010bef51a0();
  lVar12 = lVar10;
  FUN_106449dc0(lVar10,lVar8 == 2,2);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar13);
  return lVar12;
}



/* Entry: 1063d9b34; end: 1063d9beb; -[SCLongformShowAdDataSource isNofillUnskippableAdItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063d9b34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + _DAT_112746fb8);
  func_0x00010bef3720(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef51a0();
  lVar6 = lVar3;
  FUN_106449dc0(lVar3,lVar5 == 2,2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 1063d9bec; end: 1063d9df3; -[SCLongformShowAdDataSource snapIndexPosForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063d9bec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bdd30;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    lVar8 = (long)_DAT_112746f9c;
    lVar7 = *(long *)(param_1 + lVar8);
    uVar5 = uVar3;
    func_0x00010c280580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    if (lVar7 != 0) {
      lVar8 = *(long *)(param_1 + lVar8);
      uVar5 = uVar3;
      func_0x00010c280580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (lVar7 == 0) {
        lVar7 = -1;
      }
      else {
        uVar2 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar8;
        func_0x00010c0e00e0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c067fc0();
        _objc_release(lVar6);
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      }
      _objc_release(lVar8);
      goto LAB_1063d9dc0;
    }
  }
  lVar7 = -1;
LAB_1063d9dc0:
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return lVar7;
}



/* Entry: 1063d9df4; end: 1063d9f23; -[SCLongformShowAdDataSource hideAdWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d9df4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112746f84);
    lVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112746f90);
    uVar2 = uVar4;
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f3aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ddd40(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063d9f24; end: 1063d9f2b; -[SCLongformShowAdDataSource isAdContentLoopingForDataModel:] */

undefined8 FUN_1063d9f24(void)

{
  return 0;
}



/* Entry: 1063d9f2c; end: 1063d9f33; -[SCLongformShowAdDataSource adProductType] */

undefined8 FUN_1063d9f2c(void)

{
  return 0xd;
}



/* Entry: 1063d9f34; end: 1063d9f3b; -[SCLongformShowAdDataSource isLongformShowAd] */

undefined8 FUN_1063d9f34(void)

{
  return 1;
}



/* Entry: 1063d9f3c; end: 1063da047; -[SCLongformShowAdDataSource adOrganicSignals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063d9f3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112746fb8;
  puVar1 = *(undefined **)(param_1 + lVar7);
  func_0x00010bef3720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + lVar7);
    func_0x00010bef3720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bef3aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    FUN_10640d6b8(puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1063da048; end: 1063da0f3; -[SCLongformShowAdDataSource upcomingStoriesContext] */

void FUN_1063da048(undefined8 param_1)

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
  FUN_10640d6b8(uVar1,uVar3);
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



/* Entry: 1063da0f4; end: 1063da193; -[SCLongformShowAdDataSource brandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063da0f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112746fc8);
  if (uVar4 == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112746fb8);
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_1063fc8dc();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    FUN_1063fc8dc();
  }
  if (uVar4 < 3) {
    uVar3 = *(undefined8 *)(&UNK_10dddbdf0 + uVar4 * 8);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1063da194; end: 1063da24f; -[SCLongformShowAdDataSource mediaLoadContexts] */

undefined * FUN_1063da194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1063da250; end: 1063da257; -[SCLongformShowAdDataSource storyAdMediaLoadStatusSnapCount] */

undefined8 FUN_1063da250(void)

{
  return 1;
}



/* Entry: 1063da258; end: 1063da2db; -[SCLongformShowAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063da258(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f11d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_resetInsertionData_11262bd80);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f7c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f80));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112746f84));
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112746fc4));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112746fac));
  return;
}



/* Entry: 1063da2dc; end: 1063da2e3; -[SCLongformShowAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063da2dc(void)

{
  return 1;
}



/* Entry: 1063da2e4; end: 1063da2eb; -[SCLongformShowAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063da2e4(void)

{
  return 0;
}



/* Entry: 1063da2ec; end: 1063da3cf; -[SCLongformShowAdDataSource isDynamicInsertionEligibleForItem:] */

ulong FUN_1063da2ec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126bdd30;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = uVar1;
  func_0x00010c071420(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar5;
}



/* Entry: 1063da3d0; end: 1063da49f; -[SCLongformShowAdDataSource unviewedAds] */

void FUN_1063da3d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bef4c60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1391e0(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063da4a0; end: 1063da71b; -[SCLongformShowAdDataSource adViewContextForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063da4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f11d8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_adViewContextForItem__11259b238,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)plVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(plVar1);
  lVar9 = (long)_DAT_112746f98;
  lVar7 = *(long *)(param_1 + lVar9);
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    uVar4 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079500();
    _objc_release(uVar8);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c0794e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bef4b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bef4840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bfe5ec0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063da71c; end: 1063da85f; -[SCLongformShowAdDataSource adViewContextForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063da71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_adViewContextForGroupId__11259b230;
  plVar2 = &lStack_60;
  puStack_58 = PTR_PTR_1126f11d8;
  lStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)plVar2;
  func_0x00010c0d3c80();
  _objc_release(plVar2);
  lVar8 = *(long *)(param_1 + _DAT_112746fb8);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c075a20();
  _objc_release(param_3);
  FUN_10643e708(lVar8,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  lVar4 = lVar8;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010bef7f60(puVar3);
  }
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(lVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1063da860; end: 1063da8a7; -[SCLongformShowAdDataSource _logUnskippableTypeForShow:] */

void FUN_1063da860(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d360();
  func_0x000108534a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063da8a8; end: 1063db257; -[SCLongformShowAdDataSource _prepareAdForLongformShow:playlistItemGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063da8a8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_310;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lVar19 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar24 = *plStack_1f0;
    do {
      lVar26 = 0;
      do {
        if (*plStack_1f0 != lVar24) {
          _objc_enumerationMutation(lVar19);
        }
        uVar22 = *(undefined8 *)(lStack_1f8 + lVar26 * 8);
        puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_228 = 0xc2000000;
        pcStack_220 = FUN_1063db258;
        puStack_218 = &UNK_110920998;
        _objc_retain(puVar1);
        puStack_210 = puVar1;
        _objc_retain(puVar23);
        puStack_208 = puVar23;
        func_0x00010c0bebc0(uVar22);
        _objc_release(puStack_208);
        _objc_release(puStack_210);
        lVar26 = lVar26 + 1;
      } while (lVar20 != lVar26);
      lVar20 = lVar19;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(lVar19);
  func_0x00010befa160(*(undefined8 *)(param_1 + (long)_DAT_112746f7c));
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  uVar3 = param_1;
  func_0x00010bfceb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar22);
  _objc_release(uVar3);
  _objc_release(puVar2);
  lVar19 = param_3;
  func_0x00010bef31a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + (long)_DAT_112746f94);
  lVar20 = param_3;
  func_0x00010c280580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar22);
  _objc_release(lVar20);
  _objc_release(lVar19);
  uVar3 = param_1;
  func_0x00010bdc5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + (long)_DAT_112746f9c);
  lVar19 = param_3;
  func_0x00010c280580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar22);
  _objc_release(lVar19);
  _objc_release(uVar3);
  func_0x00010be5a1a0(param_1);
  uVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_3;
  func_0x00010bef3720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bef51a0();
  uVar6 = uVar5;
  FUN_106449dc0(uVar5,lVar20 == 2,2);
  _objc_release(lVar19);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29d360();
  uVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(uVar4,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  _objc_retain(puVar1);
  puStack_310 = puVar1;
  func_0x00010bf52a60();
  if (puStack_310 != (undefined *)0x0) {
    lVar19 = *plStack_260;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar19) {
          _objc_enumerationMutation(puVar1);
        }
        lVar20 = param_3;
        func_0x00010c11b1e0(param_3);
        lVar24 = param_3;
        func_0x00010bfe4640();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar23;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240();
        uVar10 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c263080();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar6 & 0xffffffff;
        FUN_1063f8270(uVar14,0,0,0,2,lVar20,lVar24,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(puVar9);
        _objc_release(lVar24);
        func_0x00010befa120(puVar2);
        _objc_release(uVar14);
        puVar21 = puVar21 + 1;
      } while (puStack_310 != puVar21);
      puStack_310 = puVar1;
      func_0x00010bf52a60();
    } while (puStack_310 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_initWeak(auStack_278,param_1);
  puVar21 = PTR_PTR_1126ca530;
  _objc_alloc();
  puVar9 = puVar1;
  func_0x00010bf51e00(puVar1);
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_1063db45c;
  puStack_288 = &UNK_110842c58;
  _objc_copyWeak(auStack_280,auStack_278);
  _objc_copyWeak(auStack_2a8,auStack_278);
  func_0x00010c037fa0();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126bdc50;
  func_0x00010bef4c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010befe100();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bef4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6c60();
  func_0x00010bf21060();
  puVar16 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf17be0();
  _objc_release(puVar16);
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_1063dfa80;
  puStack_1a8 = &UNK_1108951c0;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e49cb8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e4d7b8;
  ppuVar18 = &puStack_1c0;
  puStack_190 = puVar17;
  func_0x00010bf51e00();
  _objc_release(ppuStack_198);
  _objc_release(ppuStack_1a0);
  puVar16 = puVar15;
  func_0x00010bef66c0(uVar5);
  _objc_release(ppuVar18);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar15);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(puVar21);
  _objc_destroyWeak(auStack_2a8);
  _objc_destroyWeak(auStack_280);
  _objc_destroyWeak(auStack_278);
  _objc_release(puVar2);
  _objc_release(puVar23);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_2a8);
  _objc_destroyWeak(auStack_280);
  _objc_destroyWeak(auStack_278);
  __Unwind_Resume();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bef3160();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar16;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(puVar16);
      }
      lVar25 = *(long *)((long)puVar23 * 8);
      lVar24 = lVar25;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar24;
      func_0x00010c08fa60();
      if (lVar26 != 0) {
        func_0x00010befa120(*(undefined8 *)(param_3 + 0x20));
        func_0x00010bef3ba0();
        _objc_retainAutoreleasedReturnValue();
        lVar26 = lVar25;
        func_0x00010c08fa60();
        if (lVar26 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar2 != (undefined *)0x0) {
            puVar21 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar21;
            func_0x00010bf529e0();
            if (puVar9 != (undefined *)0x0) {
              func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x28));
            }
            _objc_release(puVar21);
          }
          _objc_release(puVar2);
          _objc_release(0);
        }
        _objc_release(lVar25);
      }
      _objc_release(lVar24);
      puVar23 = puVar23 + 1;
    } while (puVar1 != puVar23);
    puVar1 = puVar16;
    func_0x00010bf52a60();
  }
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 1063db258; end: 1063db457;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1063db258(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long alStack_138 [3];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_138[2] = 0;
  alStack_138[1] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bef3160();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        lVar8 = *(long *)(alStack_138[2] + lVar7 * 8);
        lVar2 = lVar8;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        if (lVar3 != 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,lVar2);
          func_0x00010bef3ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar8;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            alStack_138[0] = 0;
            puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar8,0,
                                alStack_138);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = alStack_138[0];
            _objc_retain(alStack_138[0]);
            if ((lVar3 == 0) && (puVar4 != (undefined *)0x0)) {
              puVar5 = puVar4;
              func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd20d8);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010bf529e0();
              if (puVar6 != (undefined *)0x0) {
                func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar5,lVar2);
              }
              _objc_release(puVar5);
            }
            _objc_release(puVar4);
            _objc_release(lVar3);
          }
          _objc_release(lVar8);
        }
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,alStack_138 + 1,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1063db458; end: 1063db45b;  */

void FUN_1063db458(void)

{
  return;
}



/* Entry: 1063db45c; end: 1063db517;  */

void FUN_1063db45c(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_1063db518;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1063db518; end: 1063db54b;  */

void FUN_1063db518(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be315c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063db54c; end: 1063db607;  */

void FUN_1063db54c(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_1063db608;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1063db608; end: 1063db63b;  */

void FUN_1063db608(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063db63c; end: 1063db913; -[SCLongformShowAdDataSource targetingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063db63c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112746fb8;
  lVar4 = *(long *)(param_1 + lVar22);
  func_0x00010bef3720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef51a0();
  lVar6 = lVar3;
  FUN_106449dc0(lVar3,lVar5 == 2,2);
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c11b1e0();
  uVar8 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdc5620();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar22;
  func_0x00010c29d360();
  lVar10 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar9,lVar12);
  lVar13 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bef4240();
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c263080();
  _objc_retainAutoreleasedReturnValue();
  FUN_1063f8270(lVar6,0,0,0,2,uVar7,uVar8,lVar5,lVar9,lVar15,lVar17,lVar18,0x101);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar22);
  _objc_release(lVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1063db914; end: 1063dba8b; -[SCLongformShowAdDataSource _handleSuccessAdResponseList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063db914(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar13 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_3);
      }
      uVar15 = *(undefined8 *)(lVar16 * 8);
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be315a0(param_1);
      _objc_release(uVar15);
      lVar16 = lVar16 + 1;
    } while (lVar1 != lVar16);
    puVar13 = auStack_d8;
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bef6420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c107da0();
  _objc_release(uVar2);
  _objc_release(uVar15);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  _objc_retain(puVar13);
  puVar3 = puVar13;
  func_0x00010c08fa60();
  if (puVar3 == (undefined1 *)0x0) goto LAB_1063dbb9c;
  if ((lVar1 == 0) || (lVar4 = lVar1, func_0x00010c082b20(), (int)lVar4 == 0)) {
LAB_1063dbb78:
    func_0x00010c1013e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12db80();
  }
  else {
    lVar4 = lVar1;
    func_0x00010bef60a0();
    if (lVar4 != 7) {
      lVar4 = lVar1;
      func_0x00010bef60a0();
      if ((lVar4 == 5) || (lVar4 = lVar1, func_0x00010bef60a0(), lVar4 == 0x16)) {
        puVar12 = PTR_PTR_1126b8ca0;
        func_0x00010bef60a0(lVar1);
        func_0x00010c25d240(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
      }
      else {
        lVar4 = param_3;
        func_0x00010bef4240();
        lVar16 = param_3;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar16;
        func_0x00010c29d360();
        lVar6 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_3;
        func_0x00010bf6d940(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar14;
        func_0x00010bf89440();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar1;
        FUN_10640aa70(lVar1,lVar4,lVar5,lVar7,lVar9,lVar10);
        _objc_release(lVar10);
        _objc_release(lVar14);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar16);
        if ((int)lVar11 != 0) {
          lVar4 = param_3;
          func_0x00010bef4240();
          lVar14 = (long)_DAT_112746fc8;
          uVar15 = *(undefined8 *)(param_3 + lVar14);
          lVar16 = param_3;
          func_0x00010bf6d940(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar16;
          func_0x00010bef2fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_3;
          func_0x00010bf6d940(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bef2560();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001063fcf48(lVar4,lVar1,uVar15,0,lVar6,0,lVar9);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar16);
          if ((int)lVar4 != 0) {
            uVar15 = *(undefined8 *)(param_3 + lVar14);
            lVar4 = param_3;
            func_0x00010bf6d940(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar4;
            func_0x00010bef2560();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar16;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            FUN_1063fd368(uVar15,0,lVar5);
            _objc_release(lVar5);
            _objc_release(lVar16);
            _objc_release(lVar4);
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_3;
            func_0x00010bef4840(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar1;
            func_0x00010bfe5ec0(lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(lVar4);
            _objc_release(lVar16);
            _objc_release(lVar4);
            _objc_release(puVar12);
            lVar4 = param_3;
            func_0x00010bf6d940(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar4;
            func_0x00010bef2fc0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar16;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a04c0();
            _objc_release(lVar5);
            _objc_release(lVar16);
            _objc_release(lVar4);
            func_0x00010be89040(param_3);
            _objc_initWeak(auStack_188,param_3);
            lVar4 = param_3;
            func_0x00010bef4120(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar16 = param_3;
            func_0x00010c0c5660(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6d940(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_3;
            func_0x00010bef3c60();
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_190,auStack_188);
            _objc_retain(puVar13);
            func_0x00010bfa8580(lVar4);
            _objc_release(lVar5);
            _objc_release(param_3);
            _objc_release(lVar16);
            _objc_release(lVar4);
            _objc_release(puVar13);
            _objc_destroyWeak(auStack_190);
            _objc_destroyWeak(auStack_188);
            goto LAB_1063dbb9c;
          }
        }
      }
      goto LAB_1063dbb78;
    }
    func_0x00010be89040(param_3);
    param_3 = *(long *)(param_3 + _DAT_112746f84);
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286aa0();
  }
  _objc_release(param_3);
LAB_1063dbb9c:
  _objc_release(puVar13);
  _objc_release(lVar1);
  return;
}



/* Entry: 1063dba8c; end: 1063dbfef; -[SCLongformShowAdDataSource _handleSuccessAdResponse:playlistItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dba8c(long param_1,undefined8 param_2,long param_3,long param_4)

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
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_1063dbb9c;
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c082b20(), (int)lVar1 == 0)) {
LAB_1063dbb78:
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12db80();
  }
  else {
    lVar1 = param_3;
    func_0x00010bef60a0();
    if (lVar1 != 7) {
      lVar1 = param_3;
      func_0x00010bef60a0();
      if ((lVar1 == 5) || (lVar1 = param_3, func_0x00010bef60a0(), lVar1 == 0x16)) {
        puVar10 = PTR_PTR_1126b8ca0;
        func_0x00010bef60a0(param_3);
        func_0x00010c25d240(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
      }
      else {
        lVar1 = param_1;
        func_0x00010bef4240();
        lVar2 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c29d360();
        lVar4 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bef2520();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar11;
        func_0x00010bf89440();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_3;
        FUN_10640aa70(param_3,lVar1,lVar3,lVar5,lVar7,lVar8);
        _objc_release(lVar8);
        _objc_release(lVar11);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        if ((int)lVar9 != 0) {
          lVar1 = param_1;
          func_0x00010bef4240();
          lVar11 = (long)_DAT_112746fc8;
          uVar12 = *(undefined8 *)(param_1 + lVar11);
          lVar2 = param_1;
          func_0x00010bf6d940(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bef2fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c269d40();
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
          func_0x0001063fcf48(lVar1,param_3,uVar12,0,lVar4,0,lVar7);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar1 != 0) {
            uVar12 = *(undefined8 *)(param_1 + lVar11);
            lVar1 = param_1;
            func_0x00010bf6d940(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010bef2560();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            FUN_1063fd368(uVar12,0,lVar3);
            _objc_release(lVar3);
            _objc_release(lVar2);
            _objc_release(lVar1);
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = param_1;
            func_0x00010bef4840(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010bfe5ec0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(lVar1);
            _objc_release(lVar2);
            _objc_release(lVar1);
            _objc_release(puVar10);
            lVar1 = param_1;
            func_0x00010bf6d940(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010bef2fc0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a04c0();
            _objc_release(lVar3);
            _objc_release(lVar2);
            _objc_release(lVar1);
            func_0x00010be89040(param_1);
            _objc_initWeak(auStack_68,param_1);
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
            _objc_copyWeak(auStack_70,auStack_68);
            _objc_retain(param_4);
            func_0x00010bfa8580(lVar1);
            _objc_release(lVar3);
            _objc_release(param_1);
            _objc_release(lVar2);
            _objc_release(lVar1);
            _objc_release(param_4);
            _objc_destroyWeak(auStack_70);
            _objc_destroyWeak(auStack_68);
            goto LAB_1063dbb9c;
          }
        }
      }
      goto LAB_1063dbb78;
    }
    func_0x00010be89040(param_1);
    param_1 = *(long *)(param_1 + _DAT_112746f84);
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286aa0();
  }
  _objc_release(param_1);
LAB_1063dbb9c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063dbff0; end: 1063dc033;  */

void FUN_1063dbff0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063dc034; end: 1063dc137; -[SCLongformShowAdDataSource _registerAdResponse:playlistItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dc034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar1);
  uVar2 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c067280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112746f7c);
  uVar2 = uVar3;
  func_0x00010c280580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1063dc138; end: 1063dc25b; -[SCLongformShowAdDataSource _handleErrorAdResponseList:] */

void FUN_1063dc138(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar3,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010bfe5ec0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be28f40(param_1,param_2,uVar4,uVar2);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar3 = auStack_d8;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar3,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010c1013e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063dc25c; end: 1063dc2ab; -[SCLongformShowAdDataSource _handleErrorAdResponse:playlistItemId:] */

void FUN_1063dc25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063dc2ac; end: 1063dc313; -[SCLongformShowAdDataSource _handleMediaFetchResult:playlistItemId:] */

void FUN_1063dc2ac(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c12db80();
  }
  else {
    func_0x00010c101400();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063dc314; end: 1063dc4ff; -[SCLongformShowAdDataSource _adMidrollTriggerPointForAdItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dc314(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112746f84;
  lVar1 = *(long *)(param_1 + lVar10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c0f3aa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar3);
      uVar9 = 0;
      goto LAB_1063dc4d8;
    }
    _objc_retain(uVar5);
    uVar4 = uVar5;
    func_0x00010bfd9c20();
    if ((int)uVar4 == 0) {
      func_0x00010bdf5140(param_1);
    }
    else {
      uVar4 = param_1;
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bfce400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf63e80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar4);
      func_0x00010be77d40(param_1);
      _objc_release(uVar8);
    }
    _objc_release(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0e00e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
LAB_1063dc4d8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 1063dc500; end: 1063dc55f; -[SCLongformShowAdDataSource _createTriggerPointsForFixedAdsSlotWithShowSnap:] */

void FUN_1063dc500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1063dc560;
  puStack_20 = &UNK_1109209e8;
  uStack_18 = param_1;
  func_0x00010c0bebc0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110920a18);
  return;
}



/* Entry: 1063dc560; end: 1063dc81b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dc560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = param_5;
  func_0x00010bef3160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      uVar2 = param_5;
      func_0x00010bef3160(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126ca538;
      _objc_alloc(PTR_PTR_1126ca538);
      func_0x00010c250f20(uVar3);
      uVar2 = uVar3;
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf6d940(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055760(param_1,0x3ff0000000000000,puVar4,param_3,uVar2,uVar7,0,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      func_0x00010befa120(puVar1,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      uVar7 = uVar7 + 1;
      uVar2 = param_5;
      func_0x00010bef3160();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
    } while (uVar7 < uVar3);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar1);
  puVar4 = puVar1;
  func_0x00010bf52a60(puVar1,param_3,&uStack_140,auStack_100,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar9 = *plStack_130;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        uVar5 = *(undefined8 *)(lStack_138 + (long)puVar10 * 8);
        func_0x00010c28b580(uVar5,param_3,puVar1);
        uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112746f84);
        uVar6 = uVar5;
        func_0x00010bfe5ec0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8,param_3,uVar5,uVar6);
        _objc_release(uVar6);
        func_0x00010c18b5e0(uVar5,param_3,*(undefined8 *)(param_2 + 0x20));
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar1;
      func_0x00010bf52a60(puVar1,param_3,&uStack_140,auStack_100,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1063dc81c; end: 1063dc81f;  */

void FUN_1063dc81c(void)

{
  return;
}



/* Entry: 1063dc820; end: 1063dc933; -[SCLongformShowAdDataSource _startViewingLongformShowWithDynamicAdSlots:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dc820(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_112746fa4);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c280580(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b2a0(param_4);
  uVar2 = param_4;
  func_0x00010c2417c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  lVar4 = param_2;
  func_0x00010bdf7100(param_2);
  func_0x00010bf7bfe0(param_1,uVar6,param_3,uVar1,uVar3,lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29d360();
  func_0x000108534a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010be77d40(param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c1391e0(param_2);
  func_0x00010be5b960(param_2,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1063dc934; end: 1063dcaff; -[SCLongformShowAdDataSource _adSlotIndexForLongformShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dc934(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(ulong *)(param_2 + _DAT_112746f94);
  uVar3 = param_4;
  func_0x00010c280580(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar8,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c2417c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf529e0();
  if (uVar9 != 0) {
    uVar9 = 0;
    uVar10 = 0;
    do {
      uVar4 = uVar8;
      func_0x00010bf529e0();
      if (uVar4 <= uVar9) break;
      uVar4 = uVar3;
      func_0x00010c0dfd40(uVar3,param_3,uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c0dfd40(uVar8,param_3,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c250f20();
      dVar11 = param_1;
      func_0x00010c250f20(uVar4);
      bVar1 = param_1 <= dVar11;
      param_1 = dVar11;
      if (bVar1) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c241220(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_3,puVar6,uVar7);
        _objc_release(uVar7);
        _objc_release(puVar6);
        uVar9 = uVar9 + 1;
        param_1 = dVar11;
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar10 = uVar10 + 1;
      uVar4 = uVar3;
      func_0x00010bf529e0();
    } while (uVar10 < uVar4);
  }
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1063dcb00; end: 1063dcc3f; -[SCLongformShowAdDataSource _handleStopViewingPlaylistItemForDynamicInsertion:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dcb00(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    uVar1 = param_1;
    func_0x00010c075a00(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c0a0740(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112746fa4);
      uVar1 = param_1;
      func_0x00010bdc55e0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010becfce0(param_1,param_2,uVar1);
      func_0x00010bf75ce0(uVar3,param_2,uVar2);
      _objc_release(uVar1);
      lVar4 = (long)_DAT_112746f88;
      uVar1 = *(ulong *)(param_1 + lVar4);
      func_0x00010bf4b900(uVar1,param_2,param_3);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = param_1, func_0x00010bf76fc0(param_1,param_2,param_3,param_4), (int)uVar1 != 0)) {
        func_0x00010befa120(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
        uVar1 = param_1;
        func_0x00010c070c20(param_1,param_2,param_3,param_4);
        if ((uVar1 & 1) == 0) {
          func_0x00010be5b960(param_1,param_2,2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063dcc40; end: 1063dd2a7; -[SCLongformShowAdDataSource _pageDataForDynamicAd:completion:] */

void FUN_1063dcc40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef3da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1063d689c(param_3,lVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = param_1;
  func_0x00010bdc55e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar5 = lVar4;
    func_0x00010640abd4(lVar4,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0d3c80();
    _objc_release(lVar5);
    func_0x00010c1d0640(lVar7);
    if (lVar6 != 0) {
      func_0x00010c1d0640(lVar7);
    }
    if (param_4 != 0) {
      puVar8 = PTR_PTR_1126b23e0;
      _objc_alloc(PTR_PTR_1126b23e0);
      func_0x00010c033240();
      (**(code **)(param_4 + 0x10))(param_4,puVar8);
      _objc_release(puVar8);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    if (lVar6 == 0) {
      lVar5 = param_1;
      func_0x00010bdc55e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar6);
      lVar5 = lVar6;
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x1063dcf54;
    puStack_70 = &UNK_110920878;
    _objc_retain(param_4);
    puVar8 = PTR_s_pageDataForDataModel_completion__112619db8;
    puStack_90 = PTR_PTR_1126f11d8;
    lStack_98 = param_1;
    lStack_68 = lVar5;
    lStack_60 = lVar2;
    lStack_58 = param_4;
    _objc_retain(lVar5);
    _objc_msgSendSuper2(&lStack_98,puVar8,lVar6,&puStack_88);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lStack_68);
    _objc_release(lStack_58);
    lVar4 = lVar5;
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1063dd2a8; end: 1063dd507; -[SCLongformShowAdDataSource _adPlacementMetadataForLongformShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063dd2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lStack_58;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112746f94);
  uVar2 = param_3;
  func_0x00010c280580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uVar2 = uVar3;
  func_0x00010bef3ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  func_0x00010bdc1900(puVar4,param_2,uVar2,0,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  _objc_release(uVar2);
  puVar8 = (undefined *)0x0;
  if ((lVar1 == 0) && (puVar4 != (undefined *)0x0)) {
    lVar10 = (long)_DAT_112746f8c;
    lVar9 = *(long *)(param_1 + lVar10);
    uVar2 = param_3;
    func_0x00010c280580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar9,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (lVar9 == 0) {
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      uVar2 = param_3;
      func_0x00010c280580(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5bd8,uVar2);
      _objc_release(uVar2);
    }
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    uVar2 = param_3;
    func_0x00010c280580(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c067fc0();
    _objc_release(uVar7);
    _objc_release(uVar2);
    puVar8 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd20d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar8,&PTR____CFConstantStringClassReference_110daf598);
    _objc_release(puVar8);
    puVar8 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}


