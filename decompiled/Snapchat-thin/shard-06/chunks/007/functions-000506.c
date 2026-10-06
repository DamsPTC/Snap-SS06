/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104db097c; end: 104db09c3;  */

void FUN_104db097c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db09c4; end: 104db0ba3; -[SCPaymentsCardCreateUpdateViewController _failureCompletionHelper:] */

void FUN_104db09c4(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_3);
  ppuVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  _objc_opt_respondsToSelector();
  _objc_release(ppuVar2);
  if (((ulong)ppuVar3 & 1) != 0) {
    ppuVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6a40();
    _objc_release(ppuVar2);
  }
  func_0x00010be354a0(param_1);
  lVar4 = param_3;
  func_0x00010bf3ec40();
  puVar1 = PTR_PTR_1126b0698;
  if (lVar4 == 0x69dc2d93) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2374a0(puVar1);
    _objc_release(lVar4);
  }
  else {
    func_0x00010bf3ec40(param_3);
    ppuVar2 = param_1;
    func_0x00010becb580();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b0698;
    ppuVar3 = &PTR____CFConstantStringClassReference_110db2818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237540(puVar1);
    _objc_release(lVar4);
    _objc_release(ppuVar3);
    if (ppuVar2 != (undefined **)0x0) {
      func_0x00010bee1d60(param_1);
    }
  }
  _objc_release(ppuVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104db0ba4; end: 104db0bab;  */

void FUN_104db0ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didTapSaveButton_11255de28);
  return;
}



/* Entry: 104db0bac; end: 104db0d03; -[SCPaymentsCardCreateUpdateViewController _successCompletionHelper:card:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db0bac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010c1a99e0(param_4);
      puVar4 = PTR_PTR_1126b06a0;
      _objc_alloc(PTR_PTR_1126b06a0);
      func_0x00010c034800();
      func_0x00010c1a99e0();
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6a20();
      _objc_release(uVar1);
      _objc_release(puVar4);
    }
  }
  lVar5 = *(long *)(param_1 + (long)_DAT_112712dd8);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010c103a00(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1039c0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db0d04; end: 104db0ed3; -[SCPaymentsCardCreateUpdateViewController _deletePaymentMethodCompletionHandler:] */

void FUN_104db0d04(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  ppuVar2 = param_1;
  func_0x00010bf42540(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01760();
  func_0x00010c0a4260(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (param_3 == 0) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010be354a0(param_1);
    lVar6 = param_3;
    func_0x00010c09e6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR_PTR_1126b0698;
    param_1 = &PTR____CFConstantStringClassReference_110db2818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2818,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      func_0x00010c237540(puVar1);
    }
    else {
      func_0x00010c2374a0(puVar1);
    }
    _objc_release(lVar7);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104db0ed4; end: 104db0edb;  */

void FUN_104db0ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didTapDeleteCardButton_11255dce0);
  return;
}



/* Entry: 104db0edc; end: 104db1197; -[SCPaymentsCardCreateUpdateViewController _convertCardToPaymentCardDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db0edc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1d380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0388;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x00010bfb18a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010c089720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c25caa0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c25cac0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf39960(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c252440(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf53220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c2befe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013580(puVar2,param_2,lVar3,lVar13,lVar12,lVar4,lVar5,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126b0390;
  _objc_alloc(PTR_PTR_1126b0390);
  lVar3 = param_3;
  func_0x00010c0de940(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112712dfc;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf9c7c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf9c900(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010bf63100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar12 = *(long *)(param_1 + _DAT_112712e00);
    func_0x00010c26b700(lVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar12 = param_3;
    func_0x00010bf63100(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_3;
  if (*(long *)(param_1 + _DAT_112712dd4) != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112712dd4);
  }
  func_0x00010bf20f80(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x0001060e6b84();
  func_0x00010bff7740(puVar9,param_2,puVar2,lVar3,uVar10,uVar11,lVar12,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104db1198; end: 104db12ab; -[SCPaymentsCardCreateUpdateViewController _areAllFieldsValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104db1198(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar6 = *(undefined **)(param_1 + _DAT_112712e20);
  _objc_retain(puVar6);
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar8 = *plStack_100;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(puVar6);
        }
        puVar5 = *(undefined8 **)(lStack_108 + (long)puVar9 * 8);
        lVar1 = param_1;
        func_0x00010be406c0();
        if ((int)lVar1 == 0) {
          puVar7 = (undefined *)0x0;
          goto LAB_104db126c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar7 = puVar6;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  puVar7 = (undefined *)0x1;
LAB_104db126c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar2 = (undefined1 *)puVar5;
  func_0x00010c268120();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)puVar2 < 6) {
    if ((long)puVar2 < 3) {
      if (puVar2 == (undefined1 *)0x0) {
        puVar7 = puVar6;
        func_0x00010be41140();
        if (((ulong)puVar7 & 1) == 0) {
          lVar8 = *(long *)(puVar6 + _DAT_112712df8);
          func_0x00010c252d60(lVar8);
          puVar7 = (undefined *)(ulong)(lVar8 == 2);
          goto LAB_104db1530;
        }
LAB_104db14a0:
        puVar7 = (undefined *)0x1;
        goto LAB_104db1530;
      }
      if (puVar2 == (undefined1 *)0x1) {
        lVar8 = (long)_DAT_112712dfc;
        puVar2 = *(undefined1 **)(puVar6 + lVar8);
        func_0x00010c26b700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar7,param_2,puVar2);
        if ((int)puVar7 == 0) goto LAB_104db150c;
        puVar9 = *(undefined **)(puVar6 + lVar8);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010c08fa60();
        if (puVar7 != (undefined *)0x5) goto LAB_104db151c;
        func_0x00010be403e0(puVar6);
      }
      else {
        if (puVar2 != (undefined1 *)0x2) goto LAB_104db1514;
        lVar8 = (long)_DAT_112712e00;
        puVar2 = *(undefined1 **)(puVar6 + lVar8);
        func_0x00010c26b700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar7,param_2,puVar2);
        if ((int)puVar7 == 0) goto LAB_104db150c;
        puVar9 = *(undefined **)(puVar6 + lVar8);
        func_0x00010c26b700(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010c08fa60();
        func_0x00010bee7720(puVar6);
        puVar6 = (undefined *)(ulong)(puVar7 == puVar6);
      }
LAB_104db1520:
      _objc_release(puVar9);
      puVar7 = puVar6;
    }
    else {
LAB_104db1378:
      puVar2 = (undefined1 *)puVar5;
      func_0x00010c26b700(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar7,param_2,puVar2);
    }
  }
  else {
    if ((long)puVar2 < 8) {
      if (puVar2 == (undefined1 *)0x6) goto LAB_104db14a0;
      if (puVar2 == (undefined1 *)0x7) goto LAB_104db1378;
LAB_104db1514:
      puVar7 = (undefined *)0x0;
      goto LAB_104db1530;
    }
    if (puVar2 == (undefined1 *)0x8) {
      lVar8 = (long)_DAT_112712e40;
      puVar2 = *(undefined1 **)(puVar6 + lVar8);
      func_0x00010c26b700(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar7,param_2,puVar2);
      if ((int)puVar7 != 0) {
        puVar9 = *(undefined **)(puVar6 + lVar8);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010b76f134();
        if (puVar7 != (undefined *)0x0) {
LAB_104db1464:
          uVar3 = *(undefined8 *)(puVar6 + lVar8);
          func_0x00010c26b700(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf4bb00();
          puVar6 = (undefined *)(ulong)((uint)uVar4 ^ 1);
          _objc_release(uVar3);
          goto LAB_104db1520;
        }
LAB_104db151c:
        puVar6 = (undefined *)0x0;
        goto LAB_104db1520;
      }
    }
    else {
      if (puVar2 != (undefined1 *)0x9) goto LAB_104db1514;
      lVar8 = (long)_DAT_112712e04;
      puVar2 = *(undefined1 **)(puVar6 + lVar8);
      func_0x00010c26b700(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar7,param_2,puVar2);
      if ((int)puVar7 != 0) {
        puVar9 = *(undefined **)(puVar6 + lVar8);
        func_0x00010c26b700(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010be44e80(puVar6,param_2,puVar9);
        if ((int)puVar7 != 0) goto LAB_104db1464;
        goto LAB_104db151c;
      }
    }
LAB_104db150c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar2);
LAB_104db1530:
  _objc_release(puVar5);
  return puVar7;
}



/* Entry: 104db12ac; end: 104db156b; -[SCPaymentsCardCreateUpdateViewController _isFieldValid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104db12ac(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c268120();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 < 6) {
    if (lVar1 < 3) {
      if (lVar1 == 0) {
        puVar5 = param_1;
        func_0x00010be41140();
        if (((ulong)puVar5 & 1) == 0) {
          lVar1 = *(long *)(param_1 + _DAT_112712df8);
          func_0x00010c252d60(lVar1);
          puVar5 = (undefined *)(ulong)(lVar1 == 2);
          goto LAB_104db1530;
        }
LAB_104db14a0:
        puVar5 = (undefined *)0x1;
        goto LAB_104db1530;
      }
      if (lVar1 == 1) {
        lVar6 = (long)_DAT_112712dfc;
        lVar1 = *(long *)(param_1 + lVar6);
        func_0x00010c26b700(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar5,param_2,lVar1);
        if ((int)puVar5 == 0) goto LAB_104db150c;
        puVar2 = *(undefined **)(param_1 + lVar6);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c08fa60();
        if (puVar5 != (undefined *)0x5) goto LAB_104db151c;
        func_0x00010be403e0(param_1);
      }
      else {
        if (lVar1 != 2) goto LAB_104db1514;
        lVar6 = (long)_DAT_112712e00;
        lVar1 = *(long *)(param_1 + lVar6);
        func_0x00010c26b700(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar5,param_2,lVar1);
        if ((int)puVar5 == 0) goto LAB_104db150c;
        puVar2 = *(undefined **)(param_1 + lVar6);
        func_0x00010c26b700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c08fa60();
        func_0x00010bee7720(param_1);
        param_1 = (undefined *)(ulong)(puVar5 == param_1);
      }
LAB_104db1520:
      _objc_release(puVar2);
      puVar5 = param_1;
    }
    else {
LAB_104db1378:
      lVar1 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar5,param_2,lVar1);
    }
  }
  else {
    if (lVar1 < 8) {
      if (lVar1 == 6) goto LAB_104db14a0;
      if (lVar1 == 7) goto LAB_104db1378;
LAB_104db1514:
      puVar5 = (undefined *)0x0;
      goto LAB_104db1530;
    }
    if (lVar1 == 8) {
      lVar6 = (long)_DAT_112712e40;
      lVar1 = *(long *)(param_1 + lVar6);
      func_0x00010c26b700(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar5,param_2,lVar1);
      if ((int)puVar5 != 0) {
        puVar2 = *(undefined **)(param_1 + lVar6);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010b76f134();
        if (puVar5 != (undefined *)0x0) {
LAB_104db1464:
          uVar3 = *(undefined8 *)(param_1 + lVar6);
          func_0x00010c26b700(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf4bb00();
          param_1 = (undefined *)(ulong)((uint)uVar4 ^ 1);
          _objc_release(uVar3);
          goto LAB_104db1520;
        }
LAB_104db151c:
        param_1 = (undefined *)0x0;
        goto LAB_104db1520;
      }
    }
    else {
      if (lVar1 != 9) goto LAB_104db1514;
      lVar6 = (long)_DAT_112712e04;
      lVar1 = *(long *)(param_1 + lVar6);
      func_0x00010c26b700(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar5,param_2,lVar1);
      if ((int)puVar5 != 0) {
        puVar2 = *(undefined **)(param_1 + lVar6);
        func_0x00010c26b700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010be44e80(param_1,param_2,puVar2);
        if ((int)puVar5 != 0) goto LAB_104db1464;
        goto LAB_104db151c;
      }
    }
LAB_104db150c:
    puVar5 = (undefined *)0x0;
  }
  _objc_release(lVar1);
LAB_104db1530:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 104db156c; end: 104db1657; -[SCPaymentsCardCreateUpdateViewController _isFieldCompleteAndInvalid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104db156c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  func_0x00010c268120();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 1) {
    lVar5 = (long)_DAT_112712dfc;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar3,param_2,uVar2);
    if ((int)puVar3 == 0) {
      uVar6 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 == 5) {
        func_0x00010be403e0(param_1);
        uVar6 = (uint)param_1 ^ 1;
      }
      else {
        uVar6 = 0;
      }
      _objc_release(lVar4);
    }
    _objc_release(uVar2);
  }
  else if ((param_3 == 0) && (uVar1 = param_1, func_0x00010be41140(), (uVar1 & 1) == 0)) {
    lVar5 = *(long *)(param_1 + (long)_DAT_112712df8);
    func_0x00010c252d60(lVar5);
    uVar6 = (uint)(lVar5 == 3);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 104db1658; end: 104db177b; -[SCPaymentsCardCreateUpdateViewController _isUSZipCodeValid:] */

undefined1 FUN_104db1658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010c08fa60(param_3);
  func_0x00010bf97dc0(puVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(puVar2);
  _objc_release(0);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104db177c; end: 104db178f;  */

void FUN_104db177c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104db1790; end: 104db1847; -[SCPaymentsCardCreateUpdateViewController _isExpirationDateValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104db1790(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112712dfc;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf9c7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf9c900(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b06b0;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0e60(puVar5,param_2,uVar2,uVar1,puVar4);
  _objc_release(puVar4);
  return puVar5;
}



/* Entry: 104db1848; end: 104db1907; -[SCPaymentsCardCreateUpdateViewController _validCVVLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104db1848(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112712df8);
  func_0x00010bf32060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = lVar1;
  if (lVar3 != 0) {
    func_0x00010bf8c6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf21a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  lVar3 = lVar2;
  func_0x00010c296680();
  if (lVar3 == 0) {
    lVar3 = 3;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c296680(lVar2);
  }
  _objc_release(lVar2);
  return lVar3;
}



/* Entry: 104db1908; end: 104db1947; -[SCPaymentsCardCreateUpdateViewController applicationDidBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1908(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db1948; end: 104db1957; -[SCPaymentsCardCreateUpdateViewController applicationWillForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712dec),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 104db1958; end: 104db1b57; -[SCPaymentsCardCreateUpdateViewController _setupBillingFieldsFromShippingAddress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1958(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c22c980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e2c),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e30),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25caa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e34),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e38),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf39960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e3c),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e40),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2befe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e04),param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db1b58; end: 104db1d57; -[SCPaymentsCardCreateUpdateViewController _setupBillingFieldsFromCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1b58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e2c),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e30),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e34),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e38),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e3c),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c125a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e40),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c105600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712e04),param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db1d58; end: 104db1df7; -[SCPaymentsCardCreateUpdateViewController _clearBillingFields] */

/* WARNING: Possible PIC construction at 0x000104db1d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104db1da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104db1dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104db1dac) */
/* WARNING: Removing unreachable block (ram,0x000104db1d8c) */
/* WARNING: Removing unreachable block (ram,0x000104db1dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712e2c),PTR_s_setText__1126625f0,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104db1df8; end: 104db1f6b; -[SCPaymentsCardCreateUpdateViewController _getBillingAddressFromFields] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b06b8;
  _objc_alloc(PTR_PTR_1126b06b8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712e2c);
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712e30);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712e34);
  func_0x00010c26b700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112712e38);
  func_0x00010c26b700(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112712e3c);
  func_0x00010c26b700(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112712e40);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112712e04);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016980(puVar1,param_2,0,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,
                      &PTR____CFConstantStringClassReference_110daf278,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104db1f6c; end: 104db1fd3; -[SCPaymentsCardCreateUpdateViewController _toggleShippingAddress:] */

void FUN_104db1f6c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c079040();
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010be41140();
    if ((int)uVar1 == 0) {
      func_0x00010bddfe80(param_1);
    }
    else {
      func_0x00010beaae60(param_1);
    }
  }
  else {
    func_0x00010beaae80(param_1);
    func_0x00010be94040(param_1);
  }
  func_0x00010beb9000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showCVVReconfirmErrorIfNeeded_11258ba78);
  return;
}



/* Entry: 104db1fd4; end: 104db2103; -[SCPaymentsCardCreateUpdateViewController _resetTextFields] */

/* WARNING: Possible PIC construction at 0x000104db20cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104db20d0) */
/* WARNING: Removing unreachable block (ram,0x000104db2100) */
/* WARNING: Removing unreachable block (ram,0x000104db211c) */
/* WARNING: Removing unreachable block (ram,0x000104db2138) */
/* WARNING: Removing unreachable block (ram,0x000104db212c) */
/* WARNING: Removing unreachable block (ram,0x000104db20e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db1fd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + _DAT_112712e44);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010bee1d60(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712ddc);
  *(undefined **)(param_1 + _DAT_112712ddc) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bea3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setErrorLabelAndTextFieldColors_112586888);
  return;
}



/* Entry: 104db2104; end: 104db2167; -[SCPaymentsCardCreateUpdateViewController _showCVVReconfirmErrorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2104(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be41140();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + _DAT_112712e5c) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112712e5c) = 1;
    func_0x00010bdde3e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setErrorLabelAndTextFieldColors_112586888)
    ;
    return;
  }
  return;
}



/* Entry: 104db2168; end: 104db2313; -[SCPaymentsCardCreateUpdateViewController _checkTextFieldForValidationError:checkPreemptively:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2168(undefined *param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (((param_3 == *(undefined **)(param_1 + _DAT_112712e00)) &&
      (puVar2 = param_1, func_0x00010be41140(), (int)puVar2 != 0)) &&
     (param_1[_DAT_112712e5c] != '\x01')) goto LAB_104db22fc;
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar2 = param_1;
    func_0x00010be406c0(param_1,param_2,param_3);
    uVar1 = (uint)puVar2 ^ 1;
  }
  else {
    puVar2 = param_1;
    func_0x00010be406a0();
    uVar1 = (uint)puVar2;
  }
  lVar3 = *(long *)(param_1 + _DAT_112712de4);
  if (lVar3 == 0) {
    if (uVar1 == 0) goto LAB_104db2298;
LAB_104db2228:
    puVar2 = param_1;
    func_0x00010be1ede0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112712ddc);
    puVar4 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0df7a0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6,param_2,puVar2,puVar5);
    _objc_release(puVar5);
    uVar6 = 1;
  }
  else {
    func_0x00010bf3ec40();
    puVar2 = param_1;
    func_0x00010becb580(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == param_3 || (uVar1 & 1) != 0) goto LAB_104db2228;
LAB_104db2298:
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112712ddc);
    puVar5 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0df7a0(puVar2,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar6,param_2,puVar2);
    uVar6 = 0;
  }
  _objc_release(puVar2);
  func_0x00010bee1d60(param_1,param_2,param_3,uVar6);
  _objc_release(param_3);
LAB_104db22fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db2314; end: 104db243f; -[SCPaymentsCardCreateUpdateViewController _updateErrorLabelsWithPreemptiveChecking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2314(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + _DAT_112712e20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        iVar6 = (int)*(undefined8 *)(lStack_118 + lVar8 * 8);
        if ((param_3 == 0) || (func_0x00010c073040(), iVar6 != 0)) {
          func_0x00010bdde3e0(param_1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  func_0x00010bea3b80();
  iVar6 = (int)param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c268120();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((long)puVar2 < 4) {
    if ((long)puVar2 < 2) {
      if (puVar2 == (undefined8 *)0x0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db2df8;
      }
      else {
        if (puVar2 != (undefined8 *)0x1) goto LAB_104db2554;
        ppuVar4 = &PTR____CFConstantStringClassReference_110db2e18;
      }
    }
    else if (puVar2 == (undefined8 *)0x2) {
      func_0x00010be41140();
      ppuVar4 = &PTR____CFConstantStringClassReference_110db2e38;
      if (iVar6 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db2e58;
      }
    }
    else {
      if (puVar2 != (undefined8 *)0x3) goto LAB_104db2554;
      ppuVar4 = &PTR____CFConstantStringClassReference_110db2e78;
    }
  }
  else if ((long)puVar2 < 7) {
    if (puVar2 == (undefined8 *)0x4) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db2e98;
    }
    else {
      if (puVar2 != (undefined8 *)0x5) goto LAB_104db2554;
      ppuVar4 = &PTR____CFConstantStringClassReference_110db2eb8;
    }
  }
  else if (puVar2 == (undefined8 *)0x7) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2ed8;
  }
  else if (puVar2 == (undefined8 *)0x8) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2ef8;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (puVar2 != (undefined8 *)0x9) goto LAB_104db2554;
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2f18;
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
LAB_104db2554:
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104db2440; end: 104db2593; -[SCPaymentsCardCreateUpdateViewController _getErrorMessageForField:] */

void FUN_104db2440(int param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  func_0x00010c268120();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db2df8;
      }
      else {
        if (param_3 != 1) goto LAB_104db2554;
        ppuVar2 = &PTR____CFConstantStringClassReference_110db2e18;
      }
    }
    else if (param_3 == 2) {
      func_0x00010be41140();
      ppuVar2 = &PTR____CFConstantStringClassReference_110db2e38;
      if (param_1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db2e58;
      }
    }
    else {
      if (param_3 != 3) goto LAB_104db2554;
      ppuVar2 = &PTR____CFConstantStringClassReference_110db2e78;
    }
  }
  else if (param_3 < 7) {
    if (param_3 == 4) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db2e98;
    }
    else {
      if (param_3 != 5) goto LAB_104db2554;
      ppuVar2 = &PTR____CFConstantStringClassReference_110db2eb8;
    }
  }
  else if (param_3 == 7) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2ed8;
  }
  else if (param_3 == 8) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2ef8;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (param_3 != 9) goto LAB_104db2554;
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2f18;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
LAB_104db2554:
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104db2594; end: 104db27f7; -[SCPaymentsCardCreateUpdateViewController _setErrorLabelAndTextFieldColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc();
  func_0x00010c04e820();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc();
  func_0x00010c04e820();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = (long)_DAT_112712ddc;
  lVar3 = *(long *)(param_1 + lVar10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar9 = auStack_f0;
  lVar3 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,puVar9,0x10);
  iVar8 = (int)puVar9;
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar4);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar14 = uVar13;
        func_0x00010c067fc0(uVar13);
        lVar5 = param_1;
        func_0x00010be1edc0(param_1,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        if (lVar5 != *(long *)(param_1 + _DAT_112712e14)) {
          puVar6 = puVar2;
        }
        uVar14 = *(undefined8 *)(param_1 + lVar10);
        _objc_retain(puVar6);
        func_0x00010c0dff20(uVar14,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar6,param_2,uVar14);
        _objc_release(puVar6);
        _objc_release(uVar14);
        _objc_release(lVar5);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar9 = auStack_f0;
      lVar3 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,puVar9,0x10);
      iVar8 = (int)puVar9;
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  puVar6 = puVar1;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    func_0x00010bde0380(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112712e14));
  }
  else {
    puVar6 = puVar1;
    func_0x00010beb8f20(param_1);
    iVar8 = (int)puVar6;
  }
  puVar6 = puVar2;
  func_0x00010c08fa60();
  puVar7 = *(undefined **)(param_1 + _DAT_112712e18);
  if (puVar6 == (undefined *)0x0) {
    func_0x00010bde0380(param_1,param_2,puVar7);
  }
  else {
    puVar6 = puVar2;
    func_0x00010beb8f20(param_1);
    iVar8 = (int)puVar6;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  if (iVar8 == 0) {
    func_0x00010be1e820(puVar1,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar7,param_2,puVar1);
  }
  else {
    puVar2 = puVar7;
    func_0x00010c268120(puVar7);
    func_0x00010be1edc0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar7,param_2,puVar2);
    _objc_release(puVar7);
    puVar7 = puVar2;
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104db27f8; end: 104db28ab; -[SCPaymentsCardCreateUpdateViewController _updateTextFieldTextColor:hasError:] */

void FUN_104db27f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010be1e820(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(param_3,param_2,param_1);
  }
  else {
    uVar1 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010be1edc0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(param_3,param_2,uVar1);
    _objc_release(param_3);
    param_3 = uVar1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db28ac; end: 104db2923; -[SCPaymentsCardCreateUpdateViewController _getDefaultTextFieldColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db28ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be41140();
  if (((int)lVar1 == 0) || (lVar1 = param_3, func_0x00010c268120(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + _DAT_112712dc8);
    _objc_retain(lVar1);
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb2d60(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104db2924; end: 104db2967; -[SCPaymentsCardCreateUpdateViewController _getErrorLabelForTextFieldTag:] */

void FUN_104db2924(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 100;
  if (2 < param_3) {
    lVar1 = 0x68;
  }
  uVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_112712db0 + lVar1));
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104db2968; end: 104db29db; -[SCPaymentsCardCreateUpdateViewController _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2968(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bed79c0(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010bddbb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_112712e24));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdcf220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712e54),PTR_s_setEnabled__112642f38,lVar1);
  return;
}



/* Entry: 104db29dc; end: 104db2b63; -[SCPaymentsCardCreateUpdateViewController _switchFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db29dc(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + _DAT_112712e20);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        puVar7 = *(undefined1 **)(lStack_118 + lVar9 * 8);
        puVar1 = puVar7;
        func_0x00010c073040();
        if (((int)puVar1 != 0) &&
           (lVar2 = param_1, puVar3 = (undefined8 *)puVar7, func_0x00010be406c0(), (int)lVar2 != 0))
        {
          func_0x00010c268120();
          if ((long)puVar7 < 8) {
            if (puVar7 == (undefined1 *)0x0) {
              lVar4 = (long)_DAT_112712dfc;
            }
            else {
              if (puVar7 != (undefined1 *)0x1) goto LAB_104db2b24;
              lVar4 = (long)_DAT_112712e00;
            }
          }
          else {
            if (puVar7 != (undefined1 *)0x8) {
              if (puVar7 == (undefined1 *)0x9) {
                func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112712e04));
              }
              goto LAB_104db2b24;
            }
            lVar4 = (long)_DAT_112712e04;
          }
          func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar4));
          goto LAB_104db2b24;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
LAB_104db2b24:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    if (((*(byte *)(lVar5 + _DAT_112712e58) & 1) == 0) &&
       (puVar1 = (undefined1 *)puVar3, func_0x00010c268120(), puVar1 < (undefined1 *)0x9)) {
      uVar6 = *(undefined8 *)(lVar5 + _DAT_112712e20);
      puVar1 = (undefined1 *)puVar3;
      func_0x00010c268120(puVar3);
      func_0x00010c0dfd20(uVar6,param_2,puVar1 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf179a0();
      _objc_release(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 104db2b64; end: 104db2be7; -[SCPaymentsCardCreateUpdateViewController _nextResponder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2b64(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + _DAT_112712e58) & 1) == 0) &&
     (uVar1 = param_3, func_0x00010c268120(), uVar1 < 9)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112712e20);
    uVar1 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0dfd20(uVar2,param_2,uVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db2be8; end: 104db2c6f; -[SCPaymentsCardCreateUpdateViewController _previousResponder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2be8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + _DAT_112712e58) & 1) == 0) &&
     (lVar1 = param_3, func_0x00010c268120(), lVar1 - 1U < 9)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112712e20);
    lVar1 = param_3;
    func_0x00010c268120(param_3);
    func_0x00010c0dfd20(uVar2,param_2,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db2c70; end: 104db2df3; -[SCPaymentsCardCreateUpdateViewController _textFieldRelatedToErrorCode:] */

void FUN_104db2c70(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  piVar1 = (int *)&DAT_112712dfc;
  if (param_3 < -0xd6fb54b) {
    if (param_3 < -0x269e8d3b) {
      if (param_3 != -0x70190dde) {
        if (param_3 != -0x6ca12f69) {
          lVar2 = -0x2e35d978;
          goto LAB_104db2dac;
        }
LAB_104db2d88:
        piVar1 = (int *)&DAT_112712e04;
      }
    }
    else {
      if (param_3 == -0x269e8d3b) goto LAB_104db2d88;
      if (param_3 != -0x219abd99) {
        lVar2 = -0x1d5fdfb9;
        goto LAB_104db2d74;
      }
      piVar1 = (int *)&DAT_112712e3c;
    }
  }
  else if (param_3 < 0x371c6d50) {
    if (param_3 == -0xd6fb54b) goto LAB_104db2d88;
    if (param_3 != 0xcebb83b) {
      if (param_3 != 0x2210b525) goto LAB_104db2de4;
      piVar1 = (int *)&DAT_112712e40;
    }
  }
  else if (param_3 < 0x48870387) {
    if (param_3 == 0x371c6d50) goto LAB_104db2d88;
    lVar2 = 0x3a38d685;
LAB_104db2d74:
    if (param_3 != lVar2) goto LAB_104db2de4;
    piVar1 = (int *)&DAT_112712e00;
  }
  else if (param_3 == 0x48870387) {
    piVar1 = (int *)&DAT_112712e2c;
  }
  else {
    lVar2 = 0x62d193ff;
LAB_104db2dac:
    if (param_3 != lVar2) goto LAB_104db2de4;
    piVar1 = (int *)&DAT_112712e34;
  }
  uVar3 = *(undefined8 *)(param_1 + *piVar1);
  _objc_retain(uVar3);
LAB_104db2de4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104db2df4; end: 104db2ef7; -[SCPaymentsCardCreateUpdateViewController _showErrorLabel:withText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2df4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 auStack_90 [6];
  undefined8 auStack_60 [6];
  
  puVar2 = auStack_90;
  _objc_retain(param_3);
  func_0x00010c212f20(param_3,param_2,param_4);
  func_0x00010c1a7f60(param_3,param_2,0);
  if (param_3 == *(long *)(param_1 + _DAT_112712e14)) {
    pcVar1 = FUN_104db2ef8;
    puVar2 = auStack_60;
  }
  else {
    if (param_3 != *(long *)(param_1 + _DAT_112712e18)) goto LAB_104db2ec0;
    pcVar1 = (code *)0x104db2fdc;
  }
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar2[1] = 0xc2000000;
  puVar2[2] = pcVar1;
  puVar2[3] = &UNK_11084fc58;
  puVar2[4] = param_1;
  _objc_retain(param_3);
  puVar2[5] = param_3;
  func_0x00010c0bc060(param_3,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2[5]);
LAB_104db2ec0:
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db2ef8; end: 104db30bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db2ef8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712dfc);
  func_0x00010c0bbea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110db2f38);
  return;
}



/* Entry: 104db30c0; end: 104db31a3; -[SCPaymentsCardCreateUpdateViewController _clearErrorLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db30c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 auStack_70 [5];
  undefined8 auStack_48 [5];
  
  puVar1 = auStack_70;
  _objc_retain(param_3);
  func_0x00010c1a7f60(param_3,param_2,1);
  func_0x00010c212f20(param_3,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  if (param_3 == *(long *)(param_1 + _DAT_112712e14)) {
    pcVar2 = FUN_104db31a4;
    puVar1 = auStack_48;
  }
  else {
    if (param_3 != *(long *)(param_1 + _DAT_112712e18)) goto LAB_104db3170;
    pcVar2 = (code *)0x104db3238;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_1108471b0;
  puVar1[4] = param_1;
  func_0x00010c0bc060(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_104db3170:
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db31a4; end: 104db32cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db31a4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112712dfc);
  func_0x00010c0bbea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104db32cc; end: 104db3437; -[SCPaymentsCardCreateUpdateViewController _cardNumberImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db32cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010bf8c6c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112712df8);
    func_0x00010bf32060(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010bf8c6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf21a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112712db8);
  lVar1 = lVar3;
  func_0x0001060e6b48(lVar3);
  func_0x00010bfe8300(uVar7,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6b8;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112712e24);
  func_0x00010c29c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae790;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar5,param_2,0x19,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a320(puVar6,param_2,uVar7,uVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104db3438; end: 104db3473; -[SCPaymentsCardCreateUpdateViewController _setFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3438(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be41140();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + (long)_DAT_112712df8),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 104db3474; end: 104db357f; -[SCPaymentsCardCreateUpdateViewController _resignAnyFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104db3474(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
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
  uVar3 = *(ulong *)(param_1 + _DAT_112712e20);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010bf52a60(uVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (uVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      uVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(uVar3);
        }
        uVar4 = *(undefined8 *)(lStack_108 + uVar6 * 8);
        uVar2 = uVar4;
        func_0x00010c073040();
        if ((int)uVar2 != 0) {
          func_0x00010c13a0e0(uVar4);
          goto LAB_104db3544;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
      uVar1 = uVar3;
      func_0x00010bf52a60(uVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar1 != 0);
  }
LAB_104db3544:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    return (ulong)(*(long *)(uVar3 + (long)_DAT_112712dd4) != 0);
  }
  return uVar3;
}



/* Entry: 104db3580; end: 104db3597; -[SCPaymentsCardCreateUpdateViewController _isInCreditCardEditMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104db3580(long param_1)

{
  return *(long *)(param_1 + _DAT_112712dd4) != 0;
}



/* Entry: 104db3598; end: 104db374b; -[SCPaymentsCardCreateUpdateViewController _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112712e60;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  lVar4 = (long)_DAT_112712e64;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104db374c;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194e0();
  _objc_release(param_1);
  return;
}



/* Entry: 104db374c; end: 104db37d3;  */

void FUN_104db374c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104db37d4; end: 104db3857; -[SCPaymentsCardCreateUpdateViewController _hideBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db37d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112712e64;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
  lVar2 = (long)_DAT_112712e60;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104db3858; end: 104db391f; -[SCPaymentsCardCreateUpdateViewController _initPrivacyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3858(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0698;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2f78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2f78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113e80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c0bbfe0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104db3920; end: 104db3be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3920(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be41140();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c082e00();
    _objc_release(uVar2);
    if ((int)uVar5 == 0) {
      piVar10 = (int *)&DAT_112712e50;
      goto LAB_104db3990;
    }
  }
  piVar10 = (int *)&DAT_112712e18;
LAB_104db3990:
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)*piVar10);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4028000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0xc047000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c113d80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104db3be8; end: 104db3c17; -[SCPaymentsCardCreateUpdateViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3be8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712df4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104db3c18; end: 104db3c27; -[SCPaymentsCardCreateUpdateViewController editingCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db3c18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712dd4);
}



/* Entry: 104db3c28; end: 104db3c67; -[SCPaymentsCardCreateUpdateViewController setEditingCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712dd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104db3c68; end: 104db3c87; -[SCPaymentsCardCreateUpdateViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3c68(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712e68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104db3c88; end: 104db3c9b; -[SCPaymentsCardCreateUpdateViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3c88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712e68,param_3);
  return;
}



/* Entry: 104db3c9c; end: 104db3cab; -[SCPaymentsCardCreateUpdateViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db3c9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712db0);
}



/* Entry: 104db3cac; end: 104db3cbb; -[SCPaymentsCardCreateUpdateViewController logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db3cac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712e6c);
}



/* Entry: 104db3cbc; end: 104db3cfb; -[SCPaymentsCardCreateUpdateViewController setLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712e6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104db3cfc; end: 104db3d0b; -[SCPaymentsCardCreateUpdateViewController shippingAddress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db3cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712e70);
}



/* Entry: 104db3d0c; end: 104db3d4b; -[SCPaymentsCardCreateUpdateViewController setShippingAddress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712e70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104db3d4c; end: 104db3d5b; -[SCPaymentsCardCreateUpdateViewController theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db3d4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712e4c);
}



/* Entry: 104db3d5c; end: 104db3d6b; -[SCPaymentsCardCreateUpdateViewController setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112712e4c) = param_3;
  return;
}



/* Entry: 104db3d6c; end: 104db4073; -[SCPaymentsCardCreateUpdateViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db3d6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712e70,0);
  _objc_storeStrong(param_1 + _DAT_112712e6c,0);
  _objc_storeStrong(param_1 + _DAT_112712db0,0);
  _objc_destroyWeak(param_1 + _DAT_112712e68);
  _objc_storeStrong(param_1 + _DAT_112712dd4,0);
  _objc_storeStrong(param_1 + _DAT_112712de8,0);
  _objc_storeStrong(param_1 + _DAT_112712db4,0);
  _objc_storeStrong(param_1 + _DAT_112712db8,0);
  _objc_destroyWeak(param_1 + _DAT_112712de0);
  _objc_storeStrong(param_1 + _DAT_112712df4,0);
  _objc_storeStrong(param_1 + _DAT_112712de4,0);
  _objc_storeStrong(param_1 + _DAT_112712dec,0);
  _objc_storeStrong(param_1 + _DAT_112712dd8,0);
  _objc_storeStrong(param_1 + _DAT_112712e64,0);
  _objc_storeStrong(param_1 + _DAT_112712e60,0);
  _objc_storeStrong(param_1 + _DAT_112712e54,0);
  _objc_storeStrong(param_1 + _DAT_112712dd0,0);
  _objc_storeStrong(param_1 + _DAT_112712dcc,0);
  _objc_storeStrong(param_1 + _DAT_112712dc8,0);
  _objc_storeStrong(param_1 + _DAT_112712dc4,0);
  _objc_storeStrong(param_1 + _DAT_112712dc0,0);
  _objc_storeStrong(param_1 + _DAT_112712dbc,0);
  _objc_storeStrong(param_1 + _DAT_112712ddc,0);
  _objc_storeStrong(param_1 + _DAT_112712e44,0);
  _objc_storeStrong(param_1 + _DAT_112712e20,0);
  _objc_storeStrong(param_1 + _DAT_112712e74,0);
  _objc_storeStrong(param_1 + _DAT_112712e78,0);
  _objc_storeStrong(param_1 + _DAT_112712e50,0);
  _objc_storeStrong(param_1 + _DAT_112712e08,0);
  _objc_storeStrong(param_1 + _DAT_112712e18,0);
  _objc_storeStrong(param_1 + _DAT_112712e14,0);
  _objc_storeStrong(param_1 + _DAT_112712e28,0);
  _objc_storeStrong(param_1 + _DAT_112712e24,0);
  _objc_storeStrong(param_1 + _DAT_112712e48,0);
  _objc_storeStrong(param_1 + _DAT_112712e10,0);
  _objc_storeStrong(param_1 + _DAT_112712e0c,0);
  _objc_storeStrong(param_1 + _DAT_112712e1c,0);
  _objc_storeStrong(param_1 + _DAT_112712e04,0);
  _objc_storeStrong(param_1 + _DAT_112712e40,0);
  _objc_storeStrong(param_1 + _DAT_112712e3c,0);
  _objc_storeStrong(param_1 + _DAT_112712e38,0);
  _objc_storeStrong(param_1 + _DAT_112712e34,0);
  _objc_storeStrong(param_1 + _DAT_112712e30,0);
  _objc_storeStrong(param_1 + _DAT_112712e2c,0);
  _objc_storeStrong(param_1 + _DAT_112712e00,0);
  _objc_storeStrong(param_1 + _DAT_112712dfc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712df8,0);
  return;
}



/* Entry: 104db4074; end: 104db4103; -[SCPaymentsCardExpiryDateTextViewV2 initWithFrame:] */

undefined1 * FUN_104db4074(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e42d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010c18b5e0(puVar1);
    func_0x00010c1b6ec0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104db4104; end: 104db4143; -[SCPaymentsCardExpiryDateTextViewV2 isComplete] */

bool FUN_104db4104(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return 4 < uVar1;
}



/* Entry: 104db4144; end: 104db41cf; -[SCPaymentsCardExpiryDateTextViewV2 expirationMonth] */

void FUN_104db4144(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar1 < 2) {
    uVar2 = 0;
  }
  else {
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104db41d0; end: 104db425b; -[SCPaymentsCardExpiryDateTextViewV2 expirationYear] */

void FUN_104db41d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar1 < 5) {
    uVar2 = 0;
  }
  else {
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104db425c; end: 104db4307; -[SCPaymentsCardExpiryDateTextViewV2 isValidDate] */

undefined * FUN_104db425c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bf9c7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  func_0x00010bf9c900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067fc0();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b06b0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0e60(puVar4,param_2,uVar2,uVar1,puVar3);
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 104db4308; end: 104db4427; -[SCPaymentsCardExpiryDateTextViewV2 setExpiryWithMonth:Year:] */

bool FUN_104db4308(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b06b0;
  if (0xb < param_3 - 1U) {
    return false;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0e60(puVar3,param_2,param_3,param_4 % 100,puVar2);
  _objc_release(puVar2);
  bVar1 = (int)puVar3 != 0;
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db2fd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1,param_2,puVar3);
    func_0x00010c26bd20(param_1,param_2,param_1);
    _objc_release(puVar3);
  }
  return bVar1;
}



/* Entry: 104db4428; end: 104db4523; -[SCPaymentsCardExpiryDateTextViewV2 textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104db4428(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_6);
  uVar2 = param_6;
  func_0x00010c08fa60();
  *(bool *)(param_1 + (long)_DAT_112712e7c) = param_5 < uVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (((uVar3 == 0) ||
      (uVar3 = uVar2,
      func_0x00010bf87980(uVar2,param_2,&PTR____CFConstantStringClassReference_110db2f98),
      (int)uVar3 != 0)) &&
     ((uVar3 = uVar2, func_0x00010c08fa60(), uVar3 < 3 ||
      (uVar3 = uVar2,
      func_0x00010bf87980(uVar2,param_2,&PTR____CFConstantStringClassReference_110db2fb8),
      (int)uVar3 != 0)))) {
    uVar3 = uVar2;
    func_0x00010c08fa60(uVar2);
    bVar1 = uVar3 < 6;
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 104db4524; end: 104db45c3; -[SCPaymentsCardExpiryDateTextViewV2 textFieldDidEndEditing:] */

void FUN_104db4524(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c26bca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c26bca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010c26bca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 104db45c4; end: 104db4983; -[SCPaymentsCardExpiryDateTextViewV2 textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db45c4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  if (puVar4 < (undefined *)0x6) {
    puVar3 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    puVar7 = param_3;
    puVar8 = param_3;
    if (puVar4 == (undefined *)0x1) {
      puVar4 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0720c0();
      if ((int)puVar5 != 0) {
        _objc_release(puVar4);
        goto LAB_104db4698;
      }
      puVar5 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar6 & 1) != 0) goto LAB_104db46a0;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
LAB_104db48c4:
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104db48dc;
    }
LAB_104db4698:
    _objc_release(puVar3);
LAB_104db46a0:
    puVar3 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x2) {
      cVar1 = param_1[_DAT_112712e7c];
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (cVar1 == '\x01') {
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104db48c4;
      }
    }
    else {
      _objc_release(puVar3);
    }
    puVar3 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x3) {
      cVar1 = param_1[_DAT_112712e7c];
      _objc_release(puVar3);
      if (cVar1 != '\x01') goto LAB_104db47f8;
      puVar3 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(param_3);
      _objc_release(puVar4);
      goto LAB_104db48e4;
    }
    _objc_release(puVar3);
LAB_104db47f8:
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x3) {
      bVar2 = param_1[_DAT_112712e7c];
      _objc_release(puVar7);
      if ((bVar2 & 1) != 0) goto LAB_104db48f4;
      puVar7 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104db48dc;
    }
  }
  else {
    puVar7 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
LAB_104db48dc:
    func_0x00010c212f20(puVar8);
LAB_104db48e4:
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
LAB_104db48f4:
  puVar3 = param_1;
  func_0x00010c26bca0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c26bca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    _objc_opt_respondsToSelector();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010c26bca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31d20();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104db4984; end: 104db49a3; -[SCPaymentsCardExpiryDateTextViewV2 textFieldDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db4984(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104db49a4; end: 104db49b7; -[SCPaymentsCardExpiryDateTextViewV2 setTextFieldDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db49a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712e80,param_3);
  return;
}



/* Entry: 104db49b8; end: 104db49c7; -[SCPaymentsCardExpiryDateTextViewV2 shouldResignFirstResponderWhenComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104db49b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712e84);
}



/* Entry: 104db49c8; end: 104db49d7; -[SCPaymentsCardExpiryDateTextViewV2 setShouldResignFirstResponderWhenComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db49c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712e84) = param_3;
  return;
}



/* Entry: 104db49d8; end: 104db49e7; -[SCPaymentsCardExpiryDateTextViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db49d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712e80);
  return;
}



/* Entry: 104db49e8; end: 104db4aaf; -[SCPaymentsCardNumberTextViewV2 initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104db49e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e42e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 5;
    func_0x000104dced3c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712e8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712e8c) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712e90);
    *(undefined **)((long)puVar1 + (long)_DAT_112712e90) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112712e94) = 0;
    func_0x00010befbd60(puVar1);
    func_0x00010c1b6ec0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104db4ab0; end: 104db4abf; -[SCPaymentsCardNumberTextViewV2 setSecureTextEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db4ab0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712e98) = param_3;
  return;
}



/* Entry: 104db4ac0; end: 104db4b6f; -[SCPaymentsCardNumberTextViewV2 setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db4ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setText__1126625f0;
  puStack_38 = PTR_PTR_1126e42e0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712e90);
  *(undefined **)(param_1 + _DAT_112712e90) = puVar1;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112712e9c;
  uVar2 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
  return;
}



/* Entry: 104db4b70; end: 104db4bab; -[SCPaymentsCardNumberTextViewV2 cardNetwork] */

undefined8 FUN_104db4b70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf32060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_104dce9ec();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104db4bac; end: 104db4bbb; -[SCPaymentsCardNumberTextViewV2 status:] */

undefined8 FUN_104db4bac(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_status_112672580);
  return param_1;
}



/* Entry: 104db4bbc; end: 104db4c97; -[SCPaymentsCardNumberTextViewV2 status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104db4bbc(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010c073040();
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf32060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112712e90;
  uVar3 = uVar1;
  func_0x00010c296620();
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c08fa60();
    uVar1 = param_1;
    func_0x00010bf31ea0();
    if (uVar3 == uVar1) {
      uVar2 = 3;
    }
    else {
      func_0x00010c073040();
      uVar2 = 3;
      if ((int)param_1 != 0) {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 104db4c98; end: 104db4cab; -[SCPaymentsCardNumberTextViewV2 textFieldDidEndEditing:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db4c98(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112712e9c;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bfb5e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_formatTextField_1125cb140);
  return;
}



/* Entry: 104db4cac; end: 104db4deb; -[SCPaymentsCardNumberTextViewV2 textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104db4cac(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010bf87980(param_6,param_2,&PTR____CFConstantStringClassReference_110db2958);
  if ((int)lVar1 != 0) {
    lVar1 = param_6;
    func_0x00010c08fa60();
    lVar7 = (long)_DAT_112712e90;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c08fa60();
    uVar3 = param_1;
    func_0x00010bf31ea0();
    if ((ulong)((lVar1 - param_5) + lVar2) <= uVar3) {
      uVar6 = param_3;
      func_0x00010bf193c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_6;
      func_0x00010c08fa60(param_6);
      uVar4 = param_3;
      func_0x00010c1042e0(param_3,param_2,uVar6,lVar1 + param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112712ea0);
      *(undefined8 *)(param_1 + (long)_DAT_112712ea0) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar6);
      lVar2 = (long)_DAT_112712e9c;
      lVar1 = param_6;
      func_0x00010c08fa60();
      *(long *)(param_1 + lVar2) = param_4;
      ((long *)(param_1 + lVar2))[1] = lVar1;
      func_0x00010c130d20(*(undefined8 *)(param_1 + lVar7),param_2,param_4,param_5,param_6);
      uVar6 = 1;
      *(undefined1 *)(param_1 + (long)_DAT_112712e94) = 1;
      goto LAB_104db4dc0;
    }
  }
  uVar6 = 0;
LAB_104db4dc0:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 104db4dec; end: 104db4e93; -[SCPaymentsCardNumberTextViewV2 textFieldDidChange:] */

void FUN_104db4dec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bfb5e60();
  uVar1 = param_1;
  func_0x00010c26bca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c26bca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010c26bca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 104db4e94; end: 104db4ec3; -[SCPaymentsCardNumberTextViewV2 text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db4e94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712e90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104db4ec4; end: 104db4ed3; -[SCPaymentsCardNumberTextViewV2 isSecureTextEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104db4ec4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712e98);
}



/* Entry: 104db4ed4; end: 104db50b3; -[SCPaymentsCardNumberTextViewV2 formatTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db4ed4(undefined *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = param_1;
  func_0x00010bf32060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = *(undefined **)(param_1 + _DAT_112712e8c);
    _objc_retain(puVar6);
  }
  lVar9 = (long)_DAT_112712e90;
  puVar7 = puVar6;
  func_0x00010bfb5c60(puVar6,param_2,*(undefined8 *)(param_1 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  puVar7 = puVar2;
  func_0x00010c08fa60();
  puVar3 = puVar2;
  if (puVar7 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c04e820();
    _objc_release(puVar2);
  }
  lVar10 = (long)_DAT_112712e98;
  if ((param_1[lVar10] == '\x01') &&
     (puVar7 = puVar3, func_0x00010c08fa60(), puVar7 != (undefined *)0x0)) {
    puVar7 = (undefined *)0x0;
    do {
      func_0x00010c130d20(puVar3,param_2,puVar7,1,&PTR____CFConstantStringClassReference_110db2d58);
      puVar7 = puVar7 + 1;
      puVar2 = puVar3;
      func_0x00010c08fa60();
    } while (puVar7 < puVar2);
  }
  if (param_1[lVar10] == '\x01') {
    puVar1 = (ulong *)(param_1 + _DAT_112712e9c);
    uVar8 = *puVar1;
    uVar4 = *(ulong *)(param_1 + lVar9);
    func_0x00010c08fa60();
    if (uVar8 < uVar4) {
      lVar10 = *(long *)(param_1 + lVar9);
      func_0x00010c08fa60();
      uVar8 = *puVar1;
      uVar4 = lVar10 - uVar8;
      if (puVar1[1] <= lVar10 - uVar8) {
        uVar4 = puVar1[1];
      }
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c260c80(uVar5,param_2,uVar8,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130d20(puVar3,param_2,uVar8,uVar4,uVar5);
      _objc_release(uVar5);
    }
  }
  func_0x00010c16b720(param_1,param_2,puVar3);
  lVar9 = *(long *)(param_1 + _DAT_112712ea0);
  if (lVar9 != 0) {
    puVar7 = param_1;
    func_0x00010c26c600(param_1,param_2,lVar9,lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb600(param_1,param_2,puVar7);
    _objc_release(puVar7);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104db50b4; end: 104db5137; -[SCPaymentsCardNumberTextViewV2 cardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db50b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112712e94) & 1) == 0) {
    lVar3 = (long)_DAT_112712ea4;
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112712e94) = 0;
    puVar1 = PTR_PTR_1126b06c0;
    func_0x00010bf320a0(PTR_PTR_1126b06c0,param_2,*(undefined8 *)(param_1 + _DAT_112712e90));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_112712ea4;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104db5138; end: 104db51ab; -[SCPaymentsCardNumberTextViewV2 cardNumberMaxLength] */

/* WARNING: Possible PIC construction at 0x000104db5174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104db5178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db5138(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf32060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf32060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0c27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104db51ac; end: 104db51cb; -[SCPaymentsCardNumberTextViewV2 textFieldDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db51ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104db51cc; end: 104db51df; -[SCPaymentsCardNumberTextViewV2 setTextFieldDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db51cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712ea8,param_3);
  return;
}



/* Entry: 104db51e0; end: 104db51ef; -[SCPaymentsCardNumberTextViewV2 shouldResignFirstResponderWhenComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104db51e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712e88);
}



/* Entry: 104db51f0; end: 104db51ff; -[SCPaymentsCardNumberTextViewV2 setShouldResignFirstResponderWhenComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db51f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712e88) = param_3;
  return;
}



/* Entry: 104db5200; end: 104db526b; -[SCPaymentsCardNumberTextViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db5200(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712ea8);
  _objc_storeStrong(param_1 + _DAT_112712ea0,0);
  _objc_storeStrong(param_1 + _DAT_112712ea4,0);
  _objc_storeStrong(param_1 + _DAT_112712e90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712e8c,0);
  return;
}



/* Entry: 104db526c; end: 104db52f7; -[SCPaymentsCardTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104db526c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e42e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8c60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712eac);
    *(undefined **)((long)puVar1 + (long)_DAT_112712eac) = puVar2;
    _objc_release(uVar3);
    func_0x00010bfef700(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104db52f8; end: 104db55ef; -[SCPaymentsCardTableViewCell initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db52f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  *(undefined1 *)(param_1 + _DAT_112712eb0) = 0;
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar4 = (long)_DAT_112712eb4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar6 = (long)_DAT_112712eb8;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_112712ebc;
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar7),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b06c8;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar5 = (long)_DAT_112712ec0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104db55f0;
  puStack_80 = &UNK_1108471b0;
  lStack_78 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104db57f8;
  puStack_a8 = &UNK_1108471b0;
  lStack_a0 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6),param_2,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104db5954;
  puStack_d0 = &UNK_1108471b0;
  lStack_c8 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar7),param_2,&puStack_e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104db5ab0;
  puStack_f8 = &UNK_1108471b0;
  lStack_f0 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_110);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104db55f0; end: 104db5d57;  */

void FUN_104db55f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0bbf20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104db5d58; end: 104db6047; -[SCPaymentsCardTableViewCell setPaymentMethodWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db5d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_storeWeak(param_1 + _DAT_112712ec4,param_3);
  lVar1 = param_1;
  func_0x00010c0f68e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar8 == 1) {
    lVar1 = param_1;
    func_0x00010c0f68e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf31960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c088be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712eb8));
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0f68e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf31960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3c80(param_1);
    _objc_release(lVar8);
    _objc_release(lVar1);
    ppuVar4 = (undefined **)(param_1 + _DAT_112712ec8);
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c0f68e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010bf31960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf21a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001060e6b48();
    ppuVar5 = ppuVar4;
    func_0x00010bfe8300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(ppuVar4);
    puVar3 = PTR_PTR_1126ae6b8;
    if (ppuVar5 == (undefined **)0x0) goto LAB_104db6018;
    lVar8 = (long)_DAT_112712eb4;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c29c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae790;
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a320(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa620(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(lVar1);
    _objc_release(uVar6);
  }
  else {
    if (lVar8 != 2) goto LAB_104db6018;
    ppuVar5 = &PTR____CFConstantStringClassReference_110db3058;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3058,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112712eb8));
  }
  _objc_release(ppuVar5);
LAB_104db6018:
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112712eb4));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104db6048; end: 104db6057; -[SCPaymentsCardTableViewCell setCellSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6048(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712eb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 104db6058; end: 104db6283; -[SCPaymentsCardTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104db6058(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e42e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010bf98f40();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1, func_0x00010c06e2e0(), puVar3 = PTR_PTR_1126b0688, (int)uVar1 == 0)) {
    if (*(char *)(param_1 + (long)_DAT_112712eb0) != '\x01') {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + (long)_DAT_112712ec0));
      goto LAB_104db6154;
    }
    func_0x00010c26cfe0(param_1);
    func_0x00010c26d020(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112712ec0;
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000108e04dec();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
  }
  else {
    uVar1 = param_1;
    func_0x00010bfe5980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      lVar5 = (long)_DAT_112712ec0;
    }
    else {
      uVar1 = param_1;
      func_0x00010bfe5980(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112712ec0;
      func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar5));
      _objc_release(uVar1);
      func_0x00010c103dc0(*(undefined8 *)(param_1 + lVar5));
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
  }
  func_0x00010c0bbfc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_104db6154:
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + (long)_DAT_112712eb8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}


