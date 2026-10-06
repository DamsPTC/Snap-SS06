/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10657fc04; end: 10657fcd3; -[SCChatInputView _createAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657fc04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b0870;
  _objc_alloc(PTR_PTR_1126b0870);
  lVar2 = param_1 + _DAT_11274aa70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c033f60(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar3 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1e3380(0x437a0000,puVar4);
  func_0x00010c162480(puVar4,param_2,1);
  func_0x00010befbb60(param_1,param_2,puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10657fcd4; end: 10657fd07; -[SCChatInputView _constructConstraints] */

void FUN_10657fcd4(undefined8 param_1)

{
  func_0x00010bde6c20();
  func_0x00010bde7060(param_1);
  func_0x00010bde69c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde6850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constructAccessoryStackViewCons_1125573b0);
  return;
}



/* Entry: 10657fd08; end: 10657fd73; -[SCChatInputView _createAccessoryStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657fd08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb918;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274aa74;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c15cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sendSubviewToBack__112634d88,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10657fd74; end: 10657fff3; -[SCChatInputView _constructAccessoryStackViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657fd74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11274aa74;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c1e3380(0x437a0000,lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11274aa64);
  func_0x00010c274200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(lVar15);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(lVar16);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_11274aa64;
  uVar13 = *(undefined8 *)(lVar3 + lVar16);
  func_0x00010c08de00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08de00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf493a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar3 + lVar16);
  func_0x00010c2793a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c2793a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf493a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010c1b6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setKeyboardActive__11264b588,1);
  return;
}



/* Entry: 10657fff4; end: 1065800ef; -[SCChatInputView _constructInputBarConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657fff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274aa64;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setKeyboardActive__11264b588,1);
  return;
}



/* Entry: 1065800f0; end: 1065802a7; -[SCChatInputView setKeyboardActive:] */

/* WARNING: Possible PIC construction at 0x000106580128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106580240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010658012c) */
/* WARNING: Removing unreachable block (ram,0x000106580144) */
/* WARNING: Removing unreachable block (ram,0x0001065801cc) */
/* WARNING: Removing unreachable block (ram,0x00010658015c) */
/* WARNING: Removing unreachable block (ram,0x000106580244) */
/* WARNING: Removing unreachable block (ram,0x000106580278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065800f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa78),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 1065802a8; end: 10658041f; -[SCChatInputView _constructSubmenuViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065802a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11274aa60;
  lVar2 = *(long *)(param_1 + lVar9);
  if (lVar2 != 0) {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf493c0(0xc018000000000000,lVar2,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    lStack_68 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274aa64);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0xc028000000000000,uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_11274aa68;
  uVar4 = *(undefined8 *)(lVar2 + lVar10);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf1ff80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + lVar10);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c08de00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + lVar10);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c2793a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_11274aa64);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar10);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + _DAT_11274aa84);
  *(undefined8 *)(lVar2 + _DAT_11274aa84) = uVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106580420; end: 1065805d7; -[SCChatInputView _constructContentViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11274aa68;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa64);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c274200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274aa84);
  *(undefined8 *)(param_1 + _DAT_11274aa84) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065805d8; end: 10658083b; -[SCChatInputView topAccessoryViewWithIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065805d8(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11274aa6c;
  uVar10 = *(ulong *)(param_1 + lVar14);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c06f880();
  _objc_release(uVar10);
  _objc_release(puVar2);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf57500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release();
  if ((uVar3 & 1) == 0) {
    lVar15 = (long)_DAT_11274aa74;
    lVar5 = *(long *)(param_1 + lVar15);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c12b280(*(undefined8 *)(param_1 + lVar15));
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    iVar9 = 5;
    do {
      puVar12 = *(undefined **)(param_1 + lVar14);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar12;
      func_0x00010c06f880();
      if ((int)puVar2 != 0) {
        uVar11 = *(undefined8 *)(param_1 + lVar15);
        puVar2 = puVar12;
        func_0x00010c269d40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bef6d60(uVar11);
        _objc_release(puVar2);
      }
      _objc_release(puVar12);
      iVar9 = iVar9 + -1;
    } while (iVar9 != -1);
    func_0x00010c1cbf40(param_1);
    func_0x00010c1cbe20();
    puVar2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  lVar8 = (long)_DAT_11274aa70;
  _objc_retain(puVar7);
  _objc_storeWeak(puVar2 + lVar8,puVar7);
  func_0x00010c1ad2a0(*(undefined8 *)(puVar2 + _DAT_11274aa64));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10658083c; end: 106580897; -[SCChatInputView setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658083c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274aa70;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c1ad2a0(*(undefined8 *)(param_1 + _DAT_11274aa64));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106580898; end: 1065808db; -[SCChatInputView setContentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580898(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274aa80) = param_1;
  func_0x00010c181140(*(undefined8 *)(param_2 + _DAT_11274aa7c));
  func_0x00010c1cbf40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1065808dc; end: 10658097f; -[SCChatInputView setGradientHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065808dc(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar1 = _DAT_11274aa5c;
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + _DAT_11274aa88) == 2) goto LAB_10658092c;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11274aa5c);
    func_0x00010c06f880();
    if (iVar2 != 0) {
LAB_10658092c:
      uVar3 = *(ulong *)(param_1 + iVar1);
      func_0x00010c06f880();
      if ((uVar3 & 1) == 0) {
        func_0x00010be3c420(param_1);
      }
      uVar4 = *(undefined8 *)(param_1 + iVar1);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 106580980; end: 106580c07; -[SCChatInputView _insertGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274aa5c;
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0(param_1,param_2,uVar1,0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106580c08; end: 106580d1b; -[SCChatInputView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580c08(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  *(ulong *)(param_1 + _DAT_11274aa88) = param_3;
  lVar1 = param_1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(lVar1);
  uVar2 = param_3;
  FUN_10656e70c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274aa68));
  _objc_release(uVar2);
  if (param_3 < 2) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a4130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setGradientHidden__112646a68,1);
    return;
  }
  if (param_3 == 2) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106580d1c; end: 106580d6b; -[SCChatInputView presentInputBar] */

/* WARNING: Possible PIC construction at 0x000106580d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106580d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580d1c(long param_1)

{
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11274aa64));
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa84),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 106580d6c; end: 106580dbb; -[SCChatInputView dismissInputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580d6c(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_11274aa78),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_11274aa84));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_11274aa64),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106580dbc; end: 106580f03; -[SCChatInputView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106580dbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  
  uVar1 = 0;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f1c30;
  lStack_60 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_60,PTR_s_pointInside_withEvent__11261e4e8,param_5);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_3 + _DAT_11274aa64) != 0) {
      lVar4 = (long)_DAT_11274aa60;
      uVar1 = *(ulong *)(param_3 + lVar4);
      if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
        lVar2 = param_3;
        func_0x00010c262ca0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf512a0(param_1,param_2,param_3);
        _objc_release(lVar2);
        uVar3 = *(undefined8 *)(param_3 + lVar4);
        lVar2 = param_3;
        func_0x00010c262ca0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51200(param_1,param_2,uVar3);
        _objc_release(lVar2);
        uVar1 = *(ulong *)(param_3 + lVar4);
        func_0x00010c102b20(param_1,param_2);
        if ((uVar1 & 1) != 0) goto LAB_106580e1c;
      }
    }
    uVar3 = 0;
  }
  else {
LAB_106580e1c:
    uVar3 = 1;
  }
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 106580f04; end: 106580f13; -[SCChatInputView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106580f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa88);
}



/* Entry: 106580f14; end: 106580f33; -[SCChatInputView inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580f14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274aa70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106580f34; end: 106580f43; -[SCChatInputView inputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106580f34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa64);
}



/* Entry: 106580f44; end: 106580f53; -[SCChatInputView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106580f44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa68);
}



/* Entry: 106580f54; end: 106580f63; -[SCChatInputView accessoryStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106580f54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa74);
}



/* Entry: 106580f64; end: 106580f73; -[SCChatInputView backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106580f64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa5c);
}



/* Entry: 106580f74; end: 106580f83; -[SCChatInputView contentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106580f74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa80);
}



/* Entry: 106580f84; end: 106580f93; -[SCChatInputView isGradientHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106580f84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274aa4c);
}



/* Entry: 106580f94; end: 10658106f; -[SCChatInputView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106580f94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274aa5c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa74,0);
  _objc_storeStrong(param_1 + _DAT_11274aa68,0);
  _objc_storeStrong(param_1 + _DAT_11274aa64,0);
  _objc_destroyWeak(param_1 + _DAT_11274aa70);
  _objc_storeStrong(param_1 + _DAT_11274aa58,0);
  _objc_storeStrong(param_1 + _DAT_11274aa50,0);
  _objc_storeStrong(param_1 + _DAT_11274aa60,0);
  _objc_storeStrong(param_1 + _DAT_11274aa6c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa78,0);
  _objc_storeStrong(param_1 + _DAT_11274aa84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274aa7c,0);
  return;
}



/* Entry: 106581070; end: 10658155b; -[SCChatInputViewController initWithPageName:enforceKeyWindowCheck:circumstanceEngine:messagingExperimentService:chatDisplayReadyLogger:displaySnapchatPlusBorder:nglStudySettings:featureSettingsService:activeConversationInformation:preferences:backgroundPerformer:messageActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106581070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puStack_68 = PTR_PTR_1126f1c38;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    func_0x00010c1931e0(puVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aa94);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aa94) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aa98);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aa98) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aa9c);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aa9c) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaa0);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaa0) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaa4);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaa4) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaa8);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaa8) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaac);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaac) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aab0);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aab0) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aab4);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aab4) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aab8);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aab8) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aabc);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aabc) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126cb920;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aac0);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aac0) = puVar3;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_11274aac4;
    _objc_retain(in_stack_00000008);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000008;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_11274aac8;
    _objc_retain(in_stack_00000010);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000010;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_11274aacc;
    _objc_retain(in_stack_00000018);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000018;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_11274aad0;
    _objc_retain(in_stack_00000020);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000020;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_11274aad4;
    _objc_retain(in_stack_00000028);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000028;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_11274aad8;
    _objc_retain(param_6);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_6;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126cb928;
    _objc_alloc();
    func_0x00010c046b20();
    lVar8 = (long)_DAT_11274aadc;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar3;
    _objc_release(uVar7);
    func_0x00010c1ad2a0(*(undefined8 *)((long)puVar2 + lVar8));
    *(undefined8 *)((long)puVar2 + (long)_DAT_11274aae0) = param_3;
    *(undefined1 *)((long)puVar2 + (long)_DAT_11274aae4) = param_4;
    lVar8 = (long)_DAT_11274aae8;
    _objc_retain(param_5);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_11274aaec;
    _objc_retain(param_7);
    uVar7 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_7;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaf0);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaf0) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaf4);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaf4) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274aaf8);
    *(undefined **)((long)puVar2 + (long)_DAT_11274aaf8) = puVar3;
    _objc_release(uVar7);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c067f00();
    *(long *)((long)puVar2 + (long)_DAT_11274aafc) = (long)iVar1;
    puVar4 = puVar2;
    func_0x00010bf36920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dfa0();
    func_0x00010c20eaa0(puVar4);
    _objc_release(puVar4);
    func_0x00010bdec860(puVar2);
    func_0x00010be89aa0(puVar2);
    func_0x00010be659c0(puVar2);
    puVar4 = puVar2;
    func_0x00010c065720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274ab00);
    *(undefined8 **)((long)puVar2 + (long)_DAT_11274ab00) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 10658155c; end: 106581643; -[SCChatInputViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658155c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f1c38;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88,param_3);
  if (*(long *)(param_1 + _DAT_11274ab04) != 2) {
    lVar1 = param_3;
    func_0x00010c292b20();
    lVar2 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c292b20();
    _objc_release(lVar2);
    if (lVar1 != lVar3) {
      lVar1 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292b20();
      _objc_release(lVar1);
      func_0x00010c20eaa0(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106581644; end: 10658171b; -[SCChatInputViewController _registerNotifications] */

void FUN_106581644(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10658171c; end: 1065818ab; -[SCChatInputViewController _createCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658171c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126cb930;
  _objc_alloc(PTR_PTR_1126cb930);
  lVar7 = (long)_DAT_11274aaa4;
  lVar10 = (long)_DAT_11274aae8;
  func_0x00010c01e220();
  puVar2 = PTR_PTR_1126cb938;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274aadc);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274aaa8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274aaf8);
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e040(puVar2,param_2,param_1,uVar3,puVar1,uVar8,uVar9,uVar4,
                      *(undefined8 *)(param_1 + lVar10));
  uVar8 = *(undefined8 *)(param_1 + _DAT_11274ab08);
  *(undefined **)(param_1 + _DAT_11274ab08) = puVar2;
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126cb940;
  _objc_alloc(PTR_PTR_1126cb940);
  func_0x00010c00a2c0();
  func_0x00010bef8320(param_1,param_2,puVar2,0);
  puVar5 = PTR_PTR_1126cb948;
  _objc_alloc();
  func_0x00010c00a2c0();
  puVar6 = puVar5;
  func_0x00010c065bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274ab0c);
  *(undefined **)(param_1 + _DAT_11274ab0c) = puVar6;
  _objc_release(uVar3);
  func_0x00010bef8320(param_1,param_2,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065818ac; end: 1065818bb; -[SCChatInputViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065818ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11274aadc));
  return;
}



/* Entry: 1065818bc; end: 1065819b3; -[SCChatInputViewController viewDidLoad] */

void FUN_1065818bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1c38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213960();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbea0(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbea0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1065819b4; end: 106581abb; -[SCChatInputViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065819b4(undefined8 param_1,double param_2,double param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1c38;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  if ((*(byte *)(param_4 + (long)_DAT_11274ab10) & 1) == 0) {
    *(undefined1 *)(param_4 + (long)_DAT_11274ab10) = 1;
    uVar1 = param_4;
    func_0x00010c073040();
    if ((uVar1 & 1) == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      uVar1 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      uVar2 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar4 = *(undefined8 *)(param_4 + (long)_DAT_11274aaa4);
      puVar3 = PTR_PTR_1126cb8b0;
      _objc_alloc(PTR_PTR_1126cb8b0);
      func_0x00010c02f920(param_1,param_3 + param_2);
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 106581abc; end: 106581beb; -[SCChatInputViewController inputViewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581abc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c066420(*(undefined8 *)(param_1 + _DAT_11274ab08));
  lVar6 = *(long *)(param_1 + _DAT_11274ab14);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_inputViewDidDisappear_1125f7318;
  while (PTR_s_inputViewDidDisappear_1125f7318 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c066420(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_inputViewDidDisappear_1125f7318;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c066400(*(undefined8 *)(lVar6 + _DAT_11274ab08));
  lVar6 = *(long *)(lVar6 + _DAT_11274ab14);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_inputViewDidAppear_1125f7310;
  while (PTR_s_inputViewDidAppear_1125f7310 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c066400(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_inputViewDidAppear_1125f7310;
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar6;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e1e0(0x3ff0000000000000);
  _objc_release(lVar3);
  lVar3 = lVar6;
  func_0x00010c26ca80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97180(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106581bec; end: 106581d1b; -[SCChatInputViewController inputViewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581bec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c066400(*(undefined8 *)(param_1 + _DAT_11274ab08));
  lVar6 = *(long *)(param_1 + _DAT_11274ab14);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_inputViewDidAppear_1125f7310;
  while (PTR_s_inputViewDidAppear_1125f7310 = puVar1, lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar4 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c066400(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_inputViewDidAppear_1125f7310;
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar6;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e1e0(0x3ff0000000000000);
  _objc_release(lVar3);
  lVar3 = lVar6;
  func_0x00010c26ca80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97180(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106581d1c; end: 106581d7f; -[SCChatInputViewController pluginWantsToSendCurrentText] */

void FUN_106581d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e1e0(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97180(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106581d80; end: 106581dcf; -[SCChatInputViewController showInputBarHintWithText:] */

void FUN_106581d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237ea0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106581dd0; end: 106581dff; -[SCChatInputViewController hideInputBarHint] */

void FUN_106581dd0(undefined8 param_1)

{
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106581e00; end: 106581e0f; -[SCChatInputViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106581e00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aae0);
}



/* Entry: 106581e10; end: 106581e5b; -[SCChatInputViewController persistentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581e10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11274ab18;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106581e5c; end: 106581e6b; -[SCChatInputViewController topAccessoryContainerWithIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_topAccessoryViewWithIndex__11267aa88);
  return;
}



/* Entry: 106581e6c; end: 106581eaf; -[SCChatInputViewController drawerSessionId] */

void FUN_106581e6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf89e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106581eb0; end: 106581edf; -[SCChatInputViewController chatInputView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581eb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aadc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106581ee0; end: 106581f23; -[SCChatInputViewController inputBar] */

void FUN_106581ee0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106581f24; end: 106581f67; -[SCChatInputViewController textView] */

void FUN_106581f24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106581f68; end: 106581f77; -[SCChatInputViewController accessoryStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_accessoryStackView_112598e58);
  return;
}



/* Entry: 106581f78; end: 106581f87; -[SCChatInputViewController accessoryContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_accessoryStackView_112598e58);
  return;
}



/* Entry: 106581f88; end: 106581f97; -[SCChatInputViewController backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106581f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf14810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_backgroundView_1125a2ba8);
  return;
}



/* Entry: 106581f98; end: 106581ffb; -[SCChatInputViewController text] */

void FUN_106581f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106581ffc; end: 1065820b7; -[SCChatInputViewController replaceText:] */

void FUN_106581ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26caa0(param_1,param_2,uVar1,0,0,param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cb00(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065820b8; end: 106582127; -[SCChatInputViewController setText:] */

void FUN_1065820b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106582128; end: 10658218b; -[SCChatInputViewController attributedText] */

void FUN_106582128(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10658218c; end: 1065821fb; -[SCChatInputViewController setAttributedText:] */

void FUN_10658218c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065821fc; end: 106582203; -[SCChatInputViewController setScale:] */

void FUN_1065821fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setScale_isEdit__112587578,0);
  return;
}



/* Entry: 106582204; end: 106582213; -[SCChatInputViewController state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_state_112672338);
  return;
}



/* Entry: 106582214; end: 106582253; -[SCChatInputViewController setDrawerHeight:] */

void FUN_106582214(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106582254; end: 106582297; -[SCChatInputViewController drawerHeight] */

undefined8 FUN_106582254(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c660();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106582298; end: 1065822a7; -[SCChatInputViewController setInputViewKeyboardLayoutActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_setKeyboardActive__11264b588);
  return;
}



/* Entry: 1065822a8; end: 10658231b; -[SCChatInputViewController setStyle:] */

/* WARNING: Possible PIC construction at 0x0001065822f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001065822f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065822a8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11274ab04) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11274ab04) = param_3;
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10658231c; end: 10658232b; -[SCChatInputViewController currentDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658231c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_currentDrawer_1125b5388);
  return;
}



/* Entry: 10658232c; end: 10658238f; -[SCChatInputViewController placeholderText] */

void FUN_10658232c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fda20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106582390; end: 1065823ff; -[SCChatInputViewController setPlaceholderText:] */

void FUN_106582390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcb60();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106582400; end: 106582463; -[SCChatInputViewController shortPlaceholderText] */

void FUN_106582400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106582464; end: 1065824d3; -[SCChatInputViewController setShortPlaceholderText:] */

void FUN_106582464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffbe0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065824d4; end: 10658254b; -[SCChatInputViewController setPlaceholderText:animated:] */

void FUN_1065824d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcb80();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10658254c; end: 1065826b7; -[SCChatInputViewController setEditText:messageId:scale:mentions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658254c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bf3c380(param_2);
    lVar1 = param_2;
    func_0x00010c065720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c260();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c26ca80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c25cd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddcbe0(param_2,param_3,lVar1,0,0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126cb950;
    _objc_alloc(PTR_PTR_1126cb950);
    func_0x00010c02b560(param_1);
    uVar5 = *(undefined8 *)(param_2 + _DAT_11274aab8);
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065826b8; end: 1065826f3; -[SCChatInputViewController ignoresSafeAreaLayoutGuides] */

undefined8 FUN_1065826b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe6980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1065826f4; end: 10658272b; -[SCChatInputViewController setIgnoresSafeAreaLayoutGuides:] */

void FUN_1065826f4(undefined8 param_1)

{
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10658272c; end: 106582763; -[SCChatInputViewController setInputViewTransparent:] */

void FUN_10658272c(undefined8 param_1)

{
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106582764; end: 10658279f; -[SCChatInputViewController inputViewTransparent] */

undefined8 FUN_106582764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0747a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1065827a0; end: 1065827e3; -[SCChatInputViewController leadingStackView] */

void FUN_1065827a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08df60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065827e4; end: 106582827; -[SCChatInputViewController inputTextViewContainer] */

void FUN_1065827e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0660c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106582828; end: 10658286b; -[SCChatInputViewController cursorColor] */

void FUN_106582828(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf610e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10658286c; end: 1065828bb; -[SCChatInputViewController setCursorColor:] */

void FUN_10658286c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1881e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065828bc; end: 1065829c3; -[SCChatInputViewController demiBoldFont] */

void FUN_1065828bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6d700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1ed40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1ee00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(param_1);
    }
    else {
      _objc_retain(lVar4);
      lVar6 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar6 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1065829c4; end: 106582a0f; -[SCChatInputViewController selectedRange] */

undefined1  [16] FUN_1065829c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c159e80();
  _objc_release(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 106582a10; end: 106582a57; -[SCChatInputViewController setSelectedRange:] */

void FUN_106582a10(undefined8 param_1)

{
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106582a58; end: 106582aa7; -[SCChatInputViewController setInputBarHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582a58(undefined8 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + _DAT_11274ab1c) = param_1;
  func_0x00010c162480(*(undefined8 *)(param_2 + _DAT_11274ab00),param_3,1);
  func_0x00010bec76a0(param_2);
  func_0x00010bf89dc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be28b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__handleDrawerHeight__112567c80);
  return;
}



/* Entry: 106582aa8; end: 106582b9b; -[SCChatInputViewController _subscribeToDrawerEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c068ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010c25ff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106582b9c; end: 106582c4b;  */

void FUN_106582b9c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0f80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106582c4c; end: 106582c87;  */

void FUN_106582c4c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be28b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106582c88; end: 106582cfb; -[SCChatInputViewController _handleDrawerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582c88(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  
  if (param_1 == 0.0) {
    lVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    _objc_release(lVar1);
  }
  else {
    param_3 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3 + *(double *)(param_4 + _DAT_11274ab1c),
             *(undefined8 *)(param_4 + _DAT_11274ab00),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 106582cfc; end: 106582d53; -[SCChatInputViewController resetInputBarHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582cfc(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + _DAT_11274ab1c) = 0;
  lVar1 = (long)_DAT_11274ab00;
  func_0x00010c181140(0,*(undefined8 *)(param_1 + lVar1));
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aaf4),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 106582d54; end: 106582d5b; -[SCChatInputViewController setScaleForMessageEdit:] */

void FUN_106582d54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setScale_isEdit__112587578,1);
  return;
}



/* Entry: 106582d5c; end: 106582dc3; -[SCChatInputViewController _setScale:isEdit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582d5c(double param_1,long param_2)

{
  if (param_1 < 0.0) {
    return;
  }
  *(double *)(param_2 + _DAT_11274aa8c) = param_1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0.0) {
    param_1 = 1.0;
  }
  func_0x00010c14e1e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106582dc4; end: 106582e03; -[SCChatInputViewController setMessageStreamingState:] */

void FUN_106582dc4(undefined8 param_1)

{
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106582e04; end: 106582e33; -[SCChatInputViewController textWillChangeEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582e04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa94);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106582e34; end: 106582e63; -[SCChatInputViewController textDidChangeEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582e34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106582e64; end: 106582e73; -[SCChatInputViewController inputStateEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_inputStateEvents_1125f71d0);
  return;
}



/* Entry: 106582e74; end: 106582e83; -[SCChatInputViewController keyboardDidHideEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_keyboardDidHideEvents_1125ff508);
  return;
}



/* Entry: 106582e84; end: 106582eb3; -[SCChatInputViewController inputSizeEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582e84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aaa4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106582eb4; end: 106582f2b; -[SCChatInputViewController accessorySizeEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aadc);
  func_0x00010beed2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e04a0();
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



/* Entry: 106582f2c; end: 106582f93;  */

void FUN_106582f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb8b0;
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010bdc1080(param_6);
  _objc_release(param_6);
  func_0x00010c02f920(param_3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106582f94; end: 106582fc3; -[SCChatInputViewController interactiveDrawerEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582f94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aaa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106582fc4; end: 106582ff3; -[SCChatInputViewController inputTextViewEditingEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582fc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106582ff4; end: 106583023; -[SCChatInputViewController inputTypingEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106582ff4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aaa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106583024; end: 106583053; -[SCChatInputViewController pasteEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583024(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aaac);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106583054; end: 106583083; -[SCChatInputViewController inputText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583054(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aab0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106583084; end: 1065830b3; -[SCChatInputViewController restoreDraft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583084(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aab4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065830b4; end: 1065830e3; -[SCChatInputViewController messageEditingEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065830b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aab8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


