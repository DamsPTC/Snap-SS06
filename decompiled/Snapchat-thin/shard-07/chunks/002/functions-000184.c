/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10535f36c; end: 10535f677; -[SCNGORegistrationDisplayNameViewController _initKoreanUserConsentViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535f36c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar1 = PTR_PTR_1126af798;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + _DAT_112721e94) == '\x01') {
    lVar13 = 0x14;
    if (*(char *)(param_1 + _DAT_112721e90) == '\0') {
      lVar13 = 0x1c;
    }
    uVar24 = *(undefined8 *)(param_1 + *(int *)(&DAT_112721e8c + lVar13));
    _objc_retain(uVar24);
    _objc_alloc();
    func_0x00010c00a2c0();
    lVar23 = (long)_DAT_112721eac;
    uVar21 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar1;
    _objc_release(uVar21);
    lVar13 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar13);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar25);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar21);
    _objc_release(uVar24);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar13);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + _DAT_112721e9c) = 0;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6de0();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + _DAT_112721e98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar13;
  func_0x00010c113f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar13);
  func_0x00010c219b60(lVar20);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = lVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar23;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf25ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  lVar13 = lVar20;
  func_0x00010bfd8be0();
  if ((int)lVar13 != 0) {
    func_0x00010c12c960(lVar20);
    lVar13 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar13);
    lVar13 = 0x14;
    if (*(char *)(param_1 + _DAT_112721e90) == '\0') {
      lVar13 = 0x1c;
    }
    lVar3 = 0x20;
    if (*(char *)(param_1 + _DAT_112721e94) == '\0') {
      lVar3 = lVar13;
    }
    uVar25 = *(undefined8 *)(param_1 + *(int *)(&DAT_112721e8c + lVar3));
    _objc_retain(uVar25);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar13 = lVar20;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar20;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar23;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar25;
    func_0x00010bf1ff80(uVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(lVar18);
    _objc_release(uVar21);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar23);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar25);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar13);
    *(undefined1 *)(param_1 + _DAT_112721e9c) = 0;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6de0();
    _objc_release(param_1);
  }
  _objc_release(lVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar20 + _DAT_112721eac,0);
  _objc_storeStrong(lVar20 + _DAT_112721e98,0);
  _objc_storeStrong(lVar20 + _DAT_112721ea0,0);
  _objc_storeStrong(lVar20 + _DAT_112721ea8,0);
  _objc_storeStrong(lVar20 + _DAT_112721ea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar20 + _DAT_112721e8c,0);
  return;
}



/* Entry: 10535f678; end: 10535fb97; -[SCNGORegistrationDisplayNameViewController _initPrivacyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535f678(long param_1)

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
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + _DAT_112721e98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c113f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf25ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
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
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bfd8be0();
  if ((int)lVar2 != 0) {
    func_0x00010c12c960(lVar3);
    lVar2 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    lVar2 = 0x14;
    if (*(char *)(param_1 + _DAT_112721e90) == '\0') {
      lVar2 = 0x1c;
    }
    lVar4 = 0x20;
    if (*(char *)(param_1 + _DAT_112721e94) == '\0') {
      lVar4 = lVar2;
    }
    uVar19 = *(undefined8 *)(param_1 + *(int *)(&DAT_112721e8c + lVar4));
    _objc_retain(uVar19);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar19;
    func_0x00010bf1ff80(uVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar16);
    _objc_release(lVar14);
    _objc_release(uVar17);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar19);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + _DAT_112721e9c) = 0;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6de0();
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + _DAT_112721eac,0);
  _objc_storeStrong(lVar3 + _DAT_112721e98,0);
  _objc_storeStrong(lVar3 + _DAT_112721ea0,0);
  _objc_storeStrong(lVar3 + _DAT_112721ea8,0);
  _objc_storeStrong(lVar3 + _DAT_112721ea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + _DAT_112721e8c,0);
  return;
}



/* Entry: 10535fb98; end: 10535fc17; -[SCNGORegistrationDisplayNameViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535fb98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721eac,0);
  _objc_storeStrong(param_1 + _DAT_112721e98,0);
  _objc_storeStrong(param_1 + _DAT_112721ea0,0);
  _objc_storeStrong(param_1 + _DAT_112721ea8,0);
  _objc_storeStrong(param_1 + _DAT_112721ea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721e8c,0);
  return;
}



/* Entry: 10535fc18; end: 10535fe2f; -[SCRegistrationDisplayNameBusinessLogic initWithFirstName:lastName:delegate:inputValidationEnabled:inputValidationServiceFactory:signupTransitionLogger:registrationFeatureLogger:userInitialInputLogger:usernameSuggestionFetcher:shouldShowCombinedDisplayNameLabel:shouldShowKoreanUserConsentChecklist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10535fc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e7a98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112721eb0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721eb4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112721eb8,param_5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721ebc) = param_6;
    uVar2 = param_7;
    func_0x00010c0b7880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112721ec0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112721ec0) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112721ec4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721ec8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721ecc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721ed0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721ed4) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721ed8) = param_12._1_1_;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10535fe30; end: 10535fec7; -[SCRegistrationDisplayNameBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535fe30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e7a98;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_begin_1125a3840);
  lVar2 = (long)_DAT_112721ec8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adc00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar1);
  return;
}



/* Entry: 10535fec8; end: 105360123; -[SCRegistrationDisplayNameBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535fec8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = (long)_DAT_112721ed4;
  cVar2 = *(char *)(param_1 + lVar10);
  lVar11 = (long)_DAT_112721eb0;
  lVar5 = param_1;
  func_0x00010be23800(param_1,param_2,*(undefined8 *)(param_1 + lVar11));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  if (cVar2 == '\x01') {
    _objc_release(lVar5);
  }
  else {
    lVar3 = param_1;
    func_0x00010be23800(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112721eb4));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar5);
    lVar6 = lVar6 + lVar4;
  }
  if (lVar6 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else if (*(char *)(param_1 + _DAT_112721ebc) == '\x01') {
    ppuVar9 = *(undefined ***)(param_1 + lVar11);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar1 = ppuVar9;
    }
    _objc_retain(ppuVar1);
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    if (*(undefined ***)(param_1 + _DAT_112721eb4) != (undefined **)0x0) {
      ppuVar9 = *(undefined ***)(param_1 + _DAT_112721eb4);
    }
    _objc_retain(ppuVar9);
    cVar2 = *(char *)(param_1 + lVar10);
    lVar10 = (long)_DAT_112721ec0;
    lVar5 = *(long *)(param_1 + lVar10);
    func_0x00010c296b60(lVar5,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    if (cVar2 == '\x01') {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + lVar10);
      func_0x00010c296b60(lVar6,param_2,ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0 && lVar6 == 0) {
        lVar5 = *(long *)(param_1 + lVar10);
        ppuVar7 = ppuVar1;
        func_0x00010c25ce40(ppuVar1,param_2,ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296b60(lVar5,param_2,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_retain(lVar5);
        lVar6 = lVar5;
      }
    }
    _objc_release(ppuVar9);
    _objc_release(ppuVar1);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
  }
  puVar8 = PTR_PTR_1126b7b60;
  _objc_alloc(PTR_PTR_1126b7b60);
  func_0x00010c013520();
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105360124; end: 1053601f7; -[SCRegistrationDisplayNameBusinessLogic handleAction:] */

void FUN_105360124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
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
  pcStack_28 = FUN_1053601f8;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105360200;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105360208;
  puStack_70 = &UNK_110850398;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105360218;
  puStack_98 = &UNK_110841f20;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105360224;
  puStack_c0 = &UNK_1108480f8;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0680(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}



/* Entry: 1053601f8; end: 105360223;  */

void FUN_1053601f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__submitDisplayName_11258f190);
  return;
}



/* Entry: 105360224; end: 10536027b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360224(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_112721eb8;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf85fe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10536027c; end: 105360347; -[SCRegistrationDisplayNameBusinessLogic _checkDisplayNameValidityWithFirstNameText:lastNameText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536027c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be5a4c0(param_1,param_2,param_3,param_4);
  bVar1 = *(byte *)(param_1 + _DAT_112721ed4);
  lVar3 = (long)_DAT_112721eb0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
  if ((bVar1 & 1) == 0) {
    lVar3 = (long)_DAT_112721eb4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105360348; end: 10536054b; -[SCRegistrationDisplayNameBusinessLogic _submitDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360348(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112721eb0;
  lVar1 = param_1;
  func_0x00010be23800(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be23800(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112721eb4));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721ec8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adc20();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721ec4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar3);
  if (*(char *)(param_1 + _DAT_112721ed4) == '\x01') {
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010c11f420(lVar4,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    lVar6 = *(long *)(param_1 + lVar7);
    if (lVar4 == 0x7fffffffffffffff) {
      _objc_retain(lVar6);
      uVar3 = 0;
    }
    else {
      func_0x00010c260c20(lVar6,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c260c00(uVar3,param_2,lVar4 + 1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)(param_1 + _DAT_112721ed0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab420();
    _objc_release(uVar5);
    param_1 = param_1 + _DAT_112721eb8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf85e60();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721ed0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab420();
    _objc_release(uVar3);
    lVar6 = param_1 + _DAT_112721eb8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf85e60();
  }
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10536054c; end: 1053605bf; -[SCRegistrationDisplayNameBusinessLogic _getTrimmedNameWithNameText:] */

void FUN_10536054c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053605c0; end: 1053605ff; -[SCRegistrationDisplayNameBusinessLogic _koreanUserConsentDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053605c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112721edc) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105360600; end: 105360633; -[SCRegistrationDisplayNameBusinessLogic _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360600(long param_1)

{
  param_1 = param_1 + _DAT_112721eb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105360634; end: 105360813; -[SCRegistrationDisplayNameBusinessLogic _logUserInitialInputIfNeededWithNewFirstName:newLastName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112721eb0));
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar1 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
LAB_10536070c:
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        *(undefined8 *)(param_1 + _DAT_112721eb4));
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    if (puVar1 == puVar2) {
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_1053607fc;
    }
    if (puVar2 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar1);
    }
    else {
      puVar3 = puVar1;
      func_0x00010c071ae0(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1053607fc;
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112721ecc);
    uVar5 = 1;
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar1);
    }
    else {
      puVar3 = puVar1;
      func_0x00010c071ae0(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (((ulong)puVar3 & 1) != 0) goto LAB_10536070c;
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112721ecc);
    uVar5 = 0;
  }
  func_0x00010c0b2ac0(uVar4,param_2,uVar5);
LAB_1053607fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105360814; end: 1053608bf; -[SCRegistrationDisplayNameBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360814(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721eb4,0);
  _objc_storeStrong(param_1 + _DAT_112721eb0,0);
  _objc_storeStrong(param_1 + _DAT_112721ed0,0);
  _objc_storeStrong(param_1 + _DAT_112721ecc,0);
  _objc_storeStrong(param_1 + _DAT_112721ec8,0);
  _objc_storeStrong(param_1 + _DAT_112721ec4,0);
  _objc_storeStrong(param_1 + _DAT_112721ec0,0);
  _objc_destroyWeak(param_1 + _DAT_112721eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721ee0,0);
  return;
}



/* Entry: 1053608c0; end: 105360a2b; -[SCNGORegistrationPasswordViewController initWithScreen:viewConfig:asciiOnlyPassword:disablePredictiveText:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1053608c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bf602a0(param_4);
  uVar4 = param_4;
  func_0x00010c276d00(param_4);
  uVar1 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_68 = PTR_PTR_1126e7aa0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar3,uVar4,uVar1,
                      param_7);
  _objc_release(param_7);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112721ee4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    uVar3 = param_5;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112721ee8);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112721ee8) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112721eec);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112721eec) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105360a2c; end: 105360a33; -[SCNGORegistrationPasswordViewController pageViewName] */

undefined8 FUN_105360a2c(void)

{
  return 0xbb;
}



/* Entry: 105360a34; end: 105360a8f; -[SCNGORegistrationPasswordViewController viewDidLoad] */

void FUN_105360a34(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7aa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 105360a90; end: 105360adf; -[SCNGORegistrationPasswordViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360a90(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7aa0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112721ef0));
  return;
}



/* Entry: 105360ae0; end: 105360b57; -[SCNGORegistrationPasswordViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105360ae0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721ef4);
  func_0x00010bf2c700();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721ee4);
    puVar2 = PTR_PTR_1126b7b68;
    func_0x00010c25ed20(PTR_PTR_1126b7b68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 105360b58; end: 105360bd7; -[SCNGORegistrationPasswordViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360b58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b7b68;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721ef0);
  func_0x00010c26bea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f52c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105360bd8; end: 105360d0f; -[SCNGORegistrationPasswordViewController textField:shouldChangeCharactersInRange:replacementString:] */

uint FUN_105360bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c07d600();
  if ((uint)uVar1 != 0) {
    lVar2 = param_6;
    func_0x00010c08fa60();
    uVar4 = param_3;
    if (lVar2 == 0) {
      uVar3 = param_3;
      func_0x00010bf193c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1042e0(param_3,param_2,uVar3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c1042e0(param_3,param_2,uVar4,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c26c600(param_3,param_2,uVar4,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1310a0(param_3,param_2,uVar5,param_6);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    else {
      func_0x00010c15a1e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1310a0(param_3,param_2,uVar4,param_6);
    }
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105360d10; end: 105360d5b; -[SCNGORegistrationPasswordViewController rightViewButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  puVar1 = PTR_PTR_1126b7b68;
  func_0x00010c272aa0(PTR_PTR_1126b7b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105360d5c; end: 105360da7; -[SCNGORegistrationPasswordViewController accessoryTextLinkPressedWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360d5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  puVar1 = PTR_PTR_1126b7b68;
  func_0x00010c158da0(PTR_PTR_1126b7b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105360da8; end: 105360df3; -[SCNGORegistrationPasswordViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360da8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  puVar1 = PTR_PTR_1126b7b68;
  func_0x00010c25ed20(PTR_PTR_1126b7b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105360df4; end: 105360e3f; -[SCNGORegistrationPasswordViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360df4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  puVar1 = PTR_PTR_1126b7b68;
  func_0x00010bf9b400(PTR_PTR_1126b7b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105360e40; end: 105360e8b; -[SCNGORegistrationPasswordViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360e40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  puVar1 = PTR_PTR_1126b7b68;
  func_0x00010c272ea0(PTR_PTR_1126b7b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105360e8c; end: 105360f3b; -[SCNGORegistrationPasswordViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360e8c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105360f3c; end: 105360f83;  */

void FUN_105360f3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105360f84; end: 10536128f; -[SCNGORegistrationPasswordViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105360f84(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112721ef4;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) != 0) goto LAB_105361274;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar2);
  lVar6 = (long)_DAT_112721ef0;
  uVar3 = *(ulong *)(param_1 + lVar6);
  func_0x00010c26bea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c0f5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    lVar5 = param_3;
    func_0x00010c0f5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010c07c140(param_3);
  func_0x00010c1b2440(param_1,param_2,lVar5);
  func_0x00010c07c140(param_3);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c07c140(param_3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6),param_2,(uint)lVar5 ^ 1);
  lVar5 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c177be0(param_1,param_2,lVar5);
  lVar5 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112721ef8),param_2,(uint)lVar5 ^ 1);
  lVar5 = param_3;
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd340();
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf98860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar5 = param_3;
    func_0x00010bf98840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar4 != 0) goto LAB_1053611ac;
  }
  else {
    _objc_release();
LAB_1053611ac:
    lVar5 = param_3;
    func_0x00010bf98860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf98840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be04540(param_1,param_2,lVar5,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  func_0x00010bf2cc80(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c140e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c140e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c079b00(param_3);
  func_0x00010c1fadc0(uVar2,param_2,(uint)lVar5 ^ 1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  lVar5 = param_3;
  func_0x00010c079b00(param_3);
  func_0x00010c1f9a00(uVar2,param_2,lVar5);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar6));
LAB_105361274:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105361290; end: 1053613af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105361290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112721ef0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  _objc_retain(param_2);
  func_0x00010c209fc0(uVar1);
  func_0x00010c161240(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053613b0; end: 105361b37; -[SCNGORegistrationPasswordViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053613b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af0a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010537c54c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010537c564();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051880();
  lVar16 = (long)_DAT_112721ef0;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar4 = *(long *)(param_1 + _DAT_112721ee8);
  (**(code **)(lVar4 + 0x10))();
  if ((int)lVar4 != 0) {
    func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar16));
  }
  lVar4 = *(long *)(param_1 + _DAT_112721eec);
  (**(code **)(lVar4 + 0x10))();
  if ((int)lVar4 != 0) {
    func_0x00010c207da0(*(undefined8 *)(param_1 + lVar16));
  }
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c213300(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  lVar4 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126af088;
  _objc_alloc();
  dVar17 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),dVar17);
  lVar15 = (long)_DAT_112721ef8;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c140e00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c140e00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar14);
  _objc_release(puVar1);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c140e00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar14);
  _objc_release(puVar1);
  _objc_release(uVar14);
  lVar4 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar4);
  puStack_140 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_d0 = uVar14;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_e8 = uVar14;
  uStack_c0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_f8 = uVar5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uStack_110 = uVar5;
  uStack_b8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_120 = uVar14;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar4;
  func_0x00010bf493c0(dVar17 / 6.0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_138 = uVar14;
  uStack_b0 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_150 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  uStack_160 = uVar5;
  uStack_a8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_170 = uVar14;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar4;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_188 = uVar14;
  uStack_a0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  uStack_198 = uVar6;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar4;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a0 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = lVar4;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf25ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  uStack_90 = uVar5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar15;
  func_0x00010bf493c0(0xc05b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010beef8c0(puStack_140);
  _objc_release(puVar2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar16);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lStack_1a8);
  _objc_release(lStack_1a0);
  _objc_release(lStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_188);
  _objc_release(lStack_180);
  _objc_release(lStack_178);
  _objc_release(lStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_160);
  _objc_release(lStack_158);
  _objc_release(lStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_138);
  _objc_release(lStack_130);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_c8);
  uVar14 = uStack_d0;
  _objc_release(uStack_d0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_105361b38;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_200 = lVar15;
  lStack_1f8 = lVar16;
  uStack_1f0 = uVar5;
  lStack_1e8 = lVar4;
  uStack_1e0 = uVar7;
  uStack_1d8 = uVar6;
  puStack_1d0 = puVar2;
  lStack_1c8 = param_1;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(uVar13);
  puVar10 = auStack_218;
  _objc_initWeak(puVar10,uVar14);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a8dc();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_218;
  _objc_copyWeak(auStack_220,puVar12);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_210 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar11);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_218);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_218);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar12);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be0ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105361b38; end: 105361d1b; -[SCNGORegistrationPasswordViewController _displayErrorAlertDialogWithTitle:message:] */

void FUN_105361b38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a8dc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(auStack_70,puVar5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be0ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105361d1c; end: 105361d5b;  */

void FUN_105361d1c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105361d5c; end: 105361da7; -[SCNGORegistrationPasswordViewController _errorAlertDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105361d5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721ee4);
  puVar1 = PTR_PTR_1126b7b68;
  func_0x00010bf98820(PTR_PTR_1126b7b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105361da8; end: 105361e27; -[SCNGORegistrationPasswordViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105361da8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721eec,0);
  _objc_storeStrong(param_1 + _DAT_112721ee8,0);
  _objc_storeStrong(param_1 + _DAT_112721ef4,0);
  _objc_storeStrong(param_1 + _DAT_112721ef8,0);
  _objc_storeStrong(param_1 + _DAT_112721ef0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721ee4,0);
  return;
}



/* Entry: 105361e28; end: 105361fb3; -[SCRegistrationPasswordBusinessLogic initWithDelegate:registrationUser:registrationService:signupTransitionLogger:registrationFeatureLogger:userInitialInputLogger:isComplexityV2Enabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105361e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e7aa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112721efc),param_3);
    lVar3 = (long)_DAT_112721f00;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721f04;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721f08;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721f0c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721f10;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721f14) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721f18) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105361fb4; end: 1053620ff; -[SCRegistrationPasswordBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105361fb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e7aa8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_begin_1125a3840);
  lVar6 = (long)_DAT_112721f0c;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0add60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_112721f00;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0f5180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c294420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_10536828c(uVar2,uVar1,*(undefined1 *)(param_1 + _DAT_112721f18));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721f1c);
  *(undefined8 *)(param_1 + _DAT_112721f1c) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 105362100; end: 1053621db; -[SCRegistrationPasswordBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105362100(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112721f00;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c0f5180(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b7b70;
  _objc_alloc(PTR_PTR_1126b7b70);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0f5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdd99c0(param_1);
  func_0x00010c034480(puVar3,param_2,uVar4,lVar1,*(undefined1 *)(param_1 + _DAT_112721f20),
                      lVar2 != 0,*(undefined1 *)(param_1 + _DAT_112721f24),
                      *(undefined8 *)(param_1 + _DAT_112721f1c),
                      *(undefined8 *)(param_1 + _DAT_112721f28),
                      *(undefined8 *)(param_1 + _DAT_112721f2c));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053621dc; end: 1053622eb; -[SCRegistrationPasswordBusinessLogic handleAction:] */

void FUN_1053621dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1053622ec;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105362324;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10536232c;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1053623b8;
  puStack_a8 = &UNK_1108450c8;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105362440;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105362504;
  puStack_f8 = &UNK_110841f20;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_105362518;
  puStack_120 = &UNK_1108480f8;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c05e0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138);
  return;
}



/* Entry: 1053622ec; end: 105362323;  */

void FUN_1053622ec(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd99c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__submitPassword_11258f288);
    return;
  }
  return;
}



/* Entry: 105362324; end: 10536232b;  */

void FUN_105362324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__exit_112560968);
  return;
}



/* Entry: 10536232c; end: 1053623b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536232c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f24) =
       *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f24) ^ 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f0c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053623b8; end: 10536243f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053623b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1d96e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f00),param_2,
                      param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f30) = 0;
  _objc_release(uVar1);
  func_0x00010c0b2ac0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f10));
  func_0x00010bdddfe0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105362440; end: 105362503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105362440(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be0adc0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112721efc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = (long)_DAT_112721f30;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c27dd80(uVar1);
  func_0x00010c0f52e0(lVar2,param_2,uVar1);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f2c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f2c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105362504; end: 105362517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105362504(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721f14) = param_2;
  return;
}



/* Entry: 105362518; end: 10536256f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105362518(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_112721efc;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f5440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105362570; end: 1053626b7; -[SCRegistrationPasswordBusinessLogic _canContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105362570(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((*(byte *)(param_1 + (long)_DAT_112721f20) & 1) == 0) {
    lVar1 = *(long *)(param_1 + (long)_DAT_112721f00);
    func_0x00010c0f5180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (((lVar2 != 0) && (*(long *)(param_1 + (long)_DAT_112721f28) == 0)) &&
       (*(long *)(param_1 + (long)_DAT_112721f2c) == 0)) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      func_0x00010c0bd340(*(undefined8 *)(param_1 + (long)_DAT_112721f1c));
      if ((*(char *)(puStack_48 + 3) == '\x01') && (func_0x00010be43500(), (param_1 & 1) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      __Block_object_dispose(&uStack_50,8);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 1053626b8; end: 1053626cb;  */

void FUN_1053626b8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1053626cc; end: 10536277f; -[SCRegistrationPasswordBusinessLogic _checkPasswordValidityRealTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053626cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112721f00;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0f5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_10536828c(uVar1,uVar3,*(undefined1 *)(param_1 + _DAT_112721f18));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721f1c);
  *(undefined8 *)(param_1 + _DAT_112721f1c) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105362780; end: 10536288b; -[SCRegistrationPasswordBusinessLogic _errorAlertDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105362780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = (long)_DAT_112721f34;
  lVar5 = *(long *)(param_1 + lVar3);
  lVar1 = param_1 + _DAT_112721efc;
  _objc_loadWeakRetained(lVar1);
  if (lVar5 == 0) {
    lVar3 = (long)_DAT_112721f30;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c27dd80(uVar2);
    func_0x00010c0f52e0(lVar1,param_2,uVar2);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f28);
    *(undefined8 *)(param_1 + _DAT_112721f28) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f2c);
    *(undefined8 *)(param_1 + _DAT_112721f2c) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f00);
    func_0x00010c0f5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5300(lVar1,param_2,uVar4,uVar2,*(undefined1 *)(param_1 + _DAT_112721f14));
    _objc_release(uVar2);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10536288c; end: 105362b53; -[SCRegistrationPasswordBusinessLogic _submitPassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536288c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar8 = (long)_DAT_112721f20;
  if ((*(byte *)(param_1 + lVar8) & 1) == 0) {
    lVar7 = (long)_DAT_112721f00;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0f5180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c294420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c2947c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_10536828c(uVar2,uVar6,*(undefined1 *)(param_1 + _DAT_112721f18));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112721f1c);
    *(undefined8 *)(param_1 + _DAT_112721f1c) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c125d80(uVar6);
    func_0x00010c1e96e0(uVar6);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112721f08);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0920();
    _objc_release(uVar6);
    *(undefined1 *)(param_1 + lVar8) = 1;
    lVar8 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))();
    _objc_release(lVar8);
    _objc_initWeak(auStack_68,param_1);
    lVar8 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112721f04);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105362b54;
    puStack_80 = &UNK_11087d798;
    _objc_retain(lVar8);
    lStack_78 = lVar8;
    _objc_copyWeak(auStack_70,auStack_68);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105362c48;
    puStack_a8 = &UNK_11087d7c8;
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(lVar8);
    _objc_copyWeak(auStack_c8,auStack_68);
    func_0x00010c127740(uVar6);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_c8);
    _objc_release(lVar8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_78);
    _objc_release(lVar8);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 105362b54; end: 105362c13;  */

void FUN_105362b54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105362c14;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105362c14; end: 105362c47;  */

void FUN_105362c14(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ece0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105362c48; end: 105362cc7;  */

void FUN_105362c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2eca0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105362cc8; end: 105362d87;  */

void FUN_105362cc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105362d88;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105362d88; end: 105362dbb;  */

void FUN_105362d88(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ecc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105362dbc; end: 105363093; -[SCRegistrationPasswordBusinessLogic _handleRegisterSuccessWithRegistrationResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105362dbc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112721f20) = 0;
  uVar1 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721f08);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e80();
  _objc_release(uVar4);
  uVar1 = param_3;
  func_0x00010bf1faa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293a60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c298400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c127de0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar9 = param_1;
  func_0x00010be421c0();
  if (((int)lVar9 == 0) || ((uVar6 & 1) != 0)) {
LAB_105363018:
    lVar9 = param_1 + _DAT_112721efc;
    _objc_loadWeakRetained(lVar9);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112721f00);
    func_0x00010c0f5180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5300(lVar9,param_2,param_3,uVar4,*(undefined1 *)(param_1 + _DAT_112721f14));
    _objc_release(uVar4);
  }
  else {
    lVar9 = (long)_DAT_112721f34;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = param_3;
    _objc_release(uVar4);
    lVar9 = param_1;
    func_0x00010be34ac0();
    lVar7 = param_1;
    func_0x00010be34840();
    if (((int)lVar9 == 0) || ((int)lVar7 == 0)) {
      lVar8 = param_1;
      if ((int)lVar9 == 0) {
        if ((int)lVar7 == 0) goto LAB_105363018;
        uVar4 = *(undefined8 *)(param_1 + _DAT_112721f0c);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad9e0();
        _objc_release(uVar4);
        func_0x00010be22060();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + _DAT_112721f0c);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad9e0();
        _objc_release(uVar4);
        func_0x00010be220a0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar4 = *(undefined8 *)(param_1 + _DAT_112721f2c);
      *(long *)(param_1 + _DAT_112721f2c) = lVar8;
    }
    else {
      lVar9 = param_1;
      func_0x00010be22040();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112721f2c);
      *(long *)(param_1 + _DAT_112721f2c) = lVar9;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112721f0c);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad9e0();
    }
    _objc_release(uVar4);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    lVar9 = param_1;
  }
  _objc_release(lVar9);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105363094; end: 105363193; -[SCRegistrationPasswordBusinessLogic _handleRegisterChallenge:authSessionPayload:clientRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f08);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e80();
  _objc_release(uVar2);
  lVar1 = param_1 + _DAT_112721efc;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f00);
  func_0x00010c0f5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5220(lVar1,param_2,param_3,param_4,param_5,uVar2,
                      *(undefined1 *)(param_1 + _DAT_112721f14));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105363194; end: 10536334b; -[SCRegistrationPasswordBusinessLogic _handleRegisterFailureWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363194(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112721f20) = 0;
  lVar6 = (long)_DAT_112721f30;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = param_3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010be57920(param_1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c27dd80();
  uVar4 = param_3;
  func_0x00010c27dd80();
  puVar5 = PTR_PTR_1126b7b78;
  if ((uVar4 < 9) && ((1L << (uVar4 & 0x3f) & 399U) != 0)) {
    if ((uVar3 & 0xfffffffffffffffc) == 4) {
      bVar1 = true;
      goto LAB_105363230;
    }
LAB_105363284:
    uVar3 = param_3;
    func_0x00010bf99060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f28);
    *(ulong *)(param_1 + _DAT_112721f28) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f2c);
    *(ulong *)(param_1 + _DAT_112721f2c) = uVar3;
    _objc_release(uVar2);
  }
  else {
    if ((uVar3 & 0xfffffffffffffffc) != 4) {
      param_1 = param_1 + _DAT_112721efc;
      _objc_loadWeakRetained(param_1);
      uVar3 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0f52e0(param_1,param_2,uVar3);
      goto LAB_1053632f0;
    }
    bVar1 = false;
LAB_105363230:
    uVar3 = param_3;
    func_0x00010c0cb140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99300(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112721f1c);
    *(undefined **)(param_1 + _DAT_112721f1c) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (bVar1) goto LAB_105363284;
  }
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
LAB_1053632f0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10536334c; end: 105363373; -[SCRegistrationPasswordBusinessLogic _isRetryableError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10536334c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112721f30);
  func_0x00010c27dd80(lVar1);
  return lVar1 == 5;
}



/* Entry: 105363374; end: 1053633a7; -[SCRegistrationPasswordBusinessLogic _exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363374(long param_1)

{
  param_1 = param_1 + _DAT_112721efc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053633a8; end: 10536345f; -[SCRegistrationPasswordBusinessLogic _logRegistraterError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053633a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112721f0c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f00);
  func_0x00010c125d80(uVar2);
  func_0x00010c0add00(uVar1,param_2,0xffffffffffffffff,uVar2,1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105363460; end: 10536352f; -[SCRegistrationPasswordBusinessLogic _hasSubmittedEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105363460(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112721f00;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + lVar6);
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    if (lVar5 == 1) {
      bVar1 = true;
    }
    else {
      lVar5 = *(long *)(param_1 + lVar6);
      func_0x00010bf8d6c0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c252440();
      bVar1 = lVar6 == 2;
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105363530; end: 1053635c7; -[SCRegistrationPasswordBusinessLogic _hasVerifiedPhone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105363530(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112721f00;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x00010c0faf60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    bVar1 = lVar5 == 2;
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1053635c8; end: 10536363f; -[SCRegistrationPasswordBusinessLogic _isNGOFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1053635c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f00);
  func_0x00010c127c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af848;
  func_0x00010c0da0e0(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105363640; end: 1053637bb; -[SCRegistrationPasswordBusinessLogic _getRegistrationEmailAndPhoneNumberErrorMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112721f00;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126aed98;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0faf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0faf60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5d40(puVar8,param_2,uVar4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010537c5f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar9,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1053637bc; end: 10536385f; -[SCRegistrationPasswordBusinessLogic _getRegistrationEmailErrorMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053637bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f00);
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010537c5c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105363860; end: 1053639a7; -[SCRegistrationPasswordBusinessLogic _getRegistrationPhoneNumberErrorMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar7 = PTR_PTR_1126aed98;
  lVar9 = (long)_DAT_112721f00;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0faf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0faf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5d40(puVar7,param_2,uVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010537c5dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053639a8; end: 105363a83; -[SCRegistrationPasswordBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053639a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721f34,0);
  _objc_storeStrong(param_1 + _DAT_112721f2c,0);
  _objc_storeStrong(param_1 + _DAT_112721f28,0);
  _objc_storeStrong(param_1 + _DAT_112721f1c,0);
  _objc_storeStrong(param_1 + _DAT_112721f30,0);
  _objc_storeStrong(param_1 + _DAT_112721f00,0);
  _objc_storeStrong(param_1 + _DAT_112721f10,0);
  _objc_storeStrong(param_1 + _DAT_112721f0c,0);
  _objc_storeStrong(param_1 + _DAT_112721f04,0);
  _objc_storeStrong(param_1 + _DAT_112721f08,0);
  _objc_destroyWeak(param_1 + _DAT_112721efc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721f38,0);
  return;
}



/* Entry: 105363a84; end: 105363b97; -[SCNGORegistrationSuggestedUsernameViewController initWithScreen:viewConfig:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105363a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010bf602a0(param_4);
  uVar1 = param_4;
  func_0x00010c276d00(param_4);
  uVar2 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126e7ab0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112721f3c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_3;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c235860();
    *(char *)((long)puVar3 + (long)_DAT_112721f40) = (char)uVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 105363b98; end: 105363b9f; -[SCNGORegistrationSuggestedUsernameViewController pageViewName] */

undefined8 FUN_105363b98(void)

{
  return 0x143;
}



/* Entry: 105363ba0; end: 105363bfb; -[SCNGORegistrationSuggestedUsernameViewController viewDidLoad] */

void FUN_105363ba0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7ab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 105363bfc; end: 105363c07; -[SCNGORegistrationSuggestedUsernameViewController bottomConstant] */

undefined8 FUN_105363bfc(void)

{
  return 0x4040000000000000;
}



/* Entry: 105363c08; end: 105363c53; -[SCNGORegistrationSuggestedUsernameViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363c08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f3c);
  puVar1 = PTR_PTR_1126b7b80;
  func_0x00010c25f8a0(PTR_PTR_1126b7b80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105363c54; end: 105363c9f; -[SCNGORegistrationSuggestedUsernameViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363c54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f3c);
  puVar1 = PTR_PTR_1126b7b80;
  func_0x00010bf9bba0(PTR_PTR_1126b7b80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105363ca0; end: 105363d4f; -[SCNGORegistrationSuggestedUsernameViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363ca0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f3c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105363d50; end: 105363d97;  */

void FUN_105363d50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105363d98; end: 105363e6b; -[SCNGORegistrationSuggestedUsernameViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112721f44;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c262360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112721f48),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c07c140(param_3);
    func_0x00010c1b2440(param_1,param_2,uVar2);
    func_0x00010c07c140(param_3);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105363e6c; end: 1053647df; -[SCNGORegistrationSuggestedUsernameViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105363e6c(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  double in_d3;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar43 = (long)_DAT_112721f4c;
  uVar40 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar1;
  _objc_release(uVar40);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar43),param_2,6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar43),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010537c69c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar43),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar43),param_2,
                      &PTR____CFConstantStringClassReference_110dd3af8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar43),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar44 = (long)_DAT_112721f48;
  uVar40 = *(undefined8 *)(param_1 + lVar44);
  *(undefined **)(param_1 + lVar44) = puVar1;
  _objc_release(uVar40);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar44),param_2,2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar44),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar44),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_112721f50;
  uVar40 = *(undefined8 *)(param_1 + lVar45);
  *(undefined **)(param_1 + lVar45) = puVar1;
  _objc_release(uVar40);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar45),param_2,6);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar45),param_2,
                      &PTR____CFConstantStringClassReference_110dd3b18);
  uVar40 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c216380(uVar40,param_2,0xc1,0);
  uVar41 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010537c684();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar41,param_2,uVar40,0);
  _objc_release(uVar40);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar45),param_2,param_1,
                      PTR_s__changeUsernameButtonTapped_112528fb8,0x40);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar45),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar42 = (long)_DAT_112721f54;
  uVar40 = *(undefined8 *)(param_1 + lVar42);
  *(undefined **)(param_1 + lVar42) = puVar1;
  _objc_release(uVar40);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar42),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar42),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010537c6b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar42),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar42),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126af088;
  _objc_opt_new();
  lVar46 = (long)_DAT_112721f58;
  uVar40 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar1;
  _objc_release(uVar40);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar46),param_2,param_1);
  func_0x00010c1749e0(*(undefined8 *)(param_1 + lVar46),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar46),param_2,
                      &PTR____CFConstantStringClassReference_110dae578);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar46),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar46),param_2,
                      (*(byte *)(param_1 + _DAT_112721f40) ^ 0xff) & 1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar43);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar43);
  lStack_e0 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493c0(in_d3 / 3.0,uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar44);
  uStack_d8 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar44);
  uStack_d0 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493c0(0x4010000000000000,uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar45);
  uStack_c8 = uVar17;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar45);
  uStack_c0 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar42);
  uStack_b8 = uVar23;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar42);
  uStack_b0 = uVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar28;
  func_0x00010bf493a0(uVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar46);
  uStack_a8 = uVar30;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar31;
  func_0x00010bf493a0(uVar31,param_2,lVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar46);
  uStack_a0 = uVar41;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x00010bf49460(uVar34,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar46);
  uStack_98 = uVar35;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar36;
  func_0x00010bf49500(uVar36,param_2,lVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar46);
  uStack_90 = uVar37;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar38;
  func_0x00010bf493c0(0xc030000000000000,uVar38,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar40;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_e0,0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar39);
  _objc_release(puVar39);
  _objc_release(uVar40);
  _objc_release(param_1);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(uVar34);
  _objc_release(uVar41);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar40 = *(undefined8 *)(lVar3 + _DAT_112721f3c);
  puVar1 = PTR_PTR_1126b7b80;
  func_0x00010c2658c0(PTR_PTR_1126b7b80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar40,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053647e0; end: 10536482b; -[SCNGORegistrationSuggestedUsernameViewController _changeUsernameButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053647e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f3c);
  puVar1 = PTR_PTR_1126b7b80;
  func_0x00010c2658c0(PTR_PTR_1126b7b80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10536482c; end: 105364877; -[SCNGORegistrationSuggestedUsernameViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10536482c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f3c);
  puVar1 = PTR_PTR_1126b7b80;
  func_0x00010c272ea0(PTR_PTR_1126b7b80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105364878; end: 105364907; -[SCNGORegistrationSuggestedUsernameViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364878(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721f44,0);
  _objc_storeStrong(param_1 + _DAT_112721f58,0);
  _objc_storeStrong(param_1 + _DAT_112721f54,0);
  _objc_storeStrong(param_1 + _DAT_112721f50,0);
  _objc_storeStrong(param_1 + _DAT_112721f48,0);
  _objc_storeStrong(param_1 + _DAT_112721f4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721f3c,0);
  return;
}



/* Entry: 105364908; end: 105364a53; -[SCRegistrationSuggestedUsernameBusinessLogic initWithDelegate:usernameSuggestions:registrationFeatureLogger:registrationRequestObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105364908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e7ab8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112721f5c),param_3);
    lVar4 = (long)_DAT_112721f60;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112721f64);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112721f64) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112721f68;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721f6c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721f70) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721f74) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105364a54; end: 105364bf7; -[SCRegistrationSuggestedUsernameBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364a54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e7ab8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_begin_1125a3840);
  lVar3 = (long)_DAT_112721f68;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adee0();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  _objc_initWeak(auStack_48,param_1);
  lVar3 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f6c);
  _objc_retain();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f78);
  *(undefined8 *)(param_1 + _DAT_112721f78) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105364bf8; end: 105364cb7;  */

void FUN_105364bf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105364cb8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105364cb8; end: 105364cf7;  */

void FUN_105364cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010be8a120(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105364cf8; end: 105364da3; -[SCRegistrationSuggestedUsernameBusinessLogic handleAction:] */

void FUN_105364cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
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
  pcStack_28 = FUN_105364da4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105364dac;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105364db4;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105364dbc;
  puStack_98 = &UNK_110841f20;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c06c0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 105364da4; end: 105364dcf;  */

void FUN_105364da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__submitUsername_11258f3a0);
  return;
}



/* Entry: 105364dd0; end: 105364e47; -[SCRegistrationSuggestedUsernameBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364dd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b88;
  _objc_alloc(PTR_PTR_1126b7b88);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721f64);
  func_0x00010c2947c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f6e0(puVar1,param_2,uVar2,*(undefined1 *)(param_1 + _DAT_112721f74));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105364e48; end: 105364ec3; -[SCRegistrationSuggestedUsernameBusinessLogic _submitUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364e48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adf20();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112721f5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c262380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105364ec4; end: 105364ef7; -[SCRegistrationSuggestedUsernameBusinessLogic _exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364ec4(long param_1)

{
  param_1 = param_1 + _DAT_112721f5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105364ef8; end: 105364f6f; -[SCRegistrationSuggestedUsernameBusinessLogic _switchToUserInput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364ef8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721f68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adae0();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112721f5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2623a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105364f70; end: 105364faf; -[SCRegistrationSuggestedUsernameBusinessLogic _registrationStatusChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364f70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112721f74) = param_3;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105364fb0; end: 10536502b; -[SCRegistrationSuggestedUsernameBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105364fb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721f78,0);
  _objc_storeStrong(param_1 + _DAT_112721f6c,0);
  _objc_storeStrong(param_1 + _DAT_112721f64,0);
  _objc_storeStrong(param_1 + _DAT_112721f68,0);
  _objc_storeStrong(param_1 + _DAT_112721f60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721f5c);
  return;
}



/* Entry: 10536502c; end: 10536513f; -[SCNGORegistrationUsernameViewController initWithScreen:viewConfig:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10536502c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010bf602a0(param_4);
  uVar1 = param_4;
  func_0x00010c276d00(param_4);
  uVar2 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126e7ac0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112721f7c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_3;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c235860();
    *(char *)((long)puVar3 + (long)_DAT_112721f80) = (char)uVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 105365140; end: 105365147; -[SCNGORegistrationUsernameViewController pageViewName] */

undefined8 FUN_105365140(void)

{
  return 0x14e;
}



/* Entry: 105365148; end: 1053651a3; -[SCNGORegistrationUsernameViewController viewDidLoad] */

void FUN_105365148(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 1053651a4; end: 1053651f3; -[SCNGORegistrationUsernameViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053651a4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7ac0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112721f84));
  return;
}


