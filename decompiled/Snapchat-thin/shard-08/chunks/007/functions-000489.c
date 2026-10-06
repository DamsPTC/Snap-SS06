/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065341a4; end: 106534277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065341a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126cb628;
    _objc_alloc(PTR_PTR_1126cb628);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c069180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf03ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_11274a1ec);
    func_0x00010bf50280(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0160(puVar5,param_2,uVar2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106534278; end: 106534397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106534278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126cb630;
    _objc_alloc(PTR_PTR_1126cb630);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beee460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + _DAT_11274a1f0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf03ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar2 + _DAT_11274a1a8);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    func_0x00010c02b540(puVar6,param_2,uVar3,lVar2,uVar1,uVar7,uVar4,uVar8,uVar9,puVar5,
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106534398; end: 106534583;  */

void FUN_106534398(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b4128;
    _objc_alloc(PTR_PTR_1126b4128);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244ae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049d60(puVar3,param_2,uVar4,puVar2,0);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126cb638;
    _objc_alloc(PTR_PTR_1126cb638);
    lVar5 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016680(puVar6,param_2,puVar3,puVar2,lVar5,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106534584; end: 106534827;  */

void FUN_106534584(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cb650;
    _objc_alloc(PTR_PTR_1126cb650);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010c268a80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056440(puVar4,param_2,uVar3,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106534828; end: 106534ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106534828(long param_1,long param_2)

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
  long lVar19;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c10ac60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    func_0x00010befbb60(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = lVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010c274200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010bf1ff80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
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
    uVar17 = *(undefined8 *)(param_1 + _DAT_11274a218);
    *(long *)(param_1 + _DAT_11274a218) = lVar3;
    _objc_release(uVar17);
    func_0x00010c08cdc0(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar18);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar19 = (long)_DAT_11274a218;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar19));
    uVar17 = *(undefined8 *)(param_2 + lVar19);
    *(undefined8 *)(param_2 + lVar19) = 0;
    _objc_release(uVar17);
  }
  if (lVar18 != 0) {
    (**(code **)(lVar18 + 0x10))(lVar18);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar18);
  return;
}



/* Entry: 106534ae8; end: 106534b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106534ae8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11274a218;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106534b60; end: 106534d5f;  */

void FUN_106534b60(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bddd160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106534d60; end: 106534eef; -[SCChatViewControllerV3 loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106534d60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ac8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9b40();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4022000000000000);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010be3a740(param_1);
  func_0x00010bdc7420(param_1);
  func_0x00010be39d20(param_1);
  func_0x00010be39780(param_1);
  func_0x00010be39e60(param_1);
  func_0x00010c229180(param_1);
  func_0x00010be39760(param_1);
  func_0x00010be39ca0(param_1);
  func_0x00010be39fa0(param_1);
  func_0x00010bec7e20(param_1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_11274a144));
  return;
}



/* Entry: 106534ef0; end: 106534fd3; -[SCChatViewControllerV3 _chatThreatsWorkflowWithChatThreatsScanner:] */

void FUN_106534ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cb668;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcdfa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0345a0(puVar1,param_2,param_3,param_1,uVar2,uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106534fd4; end: 106535113; -[SCChatViewControllerV3 _startObservingQuotedMessageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106534fd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1c0);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106535114; end: 106535177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106535114(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + _DAT_11274a1bc) == '\x01')) {
    func_0x00010bed5320(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106535178; end: 10653518b; -[SCChatViewControllerV3 _activateQuotedMessageUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106535178(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a1bc) = 1;
  return;
}



/* Entry: 10653518c; end: 1065351ab; -[SCChatViewControllerV3 _deactivateQuotedMessageUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653518c(long param_1)

{
  if (*(char *)(param_1 + _DAT_11274a1bc) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274a1bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bde0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearChatReplyUI_1125559c0);
    return;
  }
  return;
}



/* Entry: 1065351ac; end: 10653521f; -[SCChatViewControllerV3 _clearChatReplyUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065351ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a2dc);
  *(undefined8 *)(param_1 + _DAT_11274a2dc) = 0;
  _objc_release(uVar1);
  func_0x00010bedd200(param_1);
  lVar3 = (long)_DAT_11274a230;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106535220; end: 10653526b; -[SCChatViewControllerV3 dismissChatReplyScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106535220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a1c0);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10653526c; end: 10653547b; -[SCChatViewControllerV3 _updateChatReplyUIWithQuotedMessageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653526c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11274a2dc;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = param_3;
  _objc_release(uVar7);
  func_0x00010bedd200(param_1);
  if (*(long *)(param_1 + lVar8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearChatReplyUI_1125559c0);
    return;
  }
  lVar9 = (long)_DAT_11274a230;
  lVar8 = *(long *)(param_1 + lVar9);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1c0);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010bf50a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c2894c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274a234);
  lVar8 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c274160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c293740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf233c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9));
  func_0x00010be08c80(param_1);
  _objc_release(uVar7);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10653547c; end: 1065354ef; -[SCChatViewControllerV3 dismissReactionsDetailScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653547c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a22c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be60df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__modalDidDismiss__112575d18,
               &PTR____CFConstantStringClassReference_110e53898);
    return;
  }
  return;
}



/* Entry: 1065354f0; end: 1065355d7; -[SCChatViewControllerV3 additionalS2RDebugOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065354f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11274a1ec) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    ppuStack_38 = &PTR____CFConstantStringClassReference_110e538b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_30 = *(long *)(param_1 + _DAT_11274a1ec);
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_30,&ppuStack_38,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bef9880();
                    /* WARNING: Could not recover jumptable at 0x00010bdc66b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s__addConversationUpdateListener__11254f348,
             *(undefined8 *)(puVar1 + _DAT_11274a20c));
  return;
}



/* Entry: 1065355d8; end: 106535613; -[SCChatViewControllerV3 _addListeners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065355d8(long param_1,undefined8 param_2)

{
  func_0x00010bef9880(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11274a26c));
                    /* WARNING: Could not recover jumptable at 0x00010bdc66b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__addConversationUpdateListener__11254f348,
             *(undefined8 *)(param_1 + _DAT_11274a20c));
  return;
}



/* Entry: 106535614; end: 1065357af; -[SCChatViewControllerV3 _initHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106535614(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a220);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11092a110);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0b0);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11092a130);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb670;
  _objc_alloc(PTR_PTR_1126cb670);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274a194);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274a198);
  lVar5 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a7e0(puVar3,param_2,param_1,param_1,param_1,3,lVar4,uVar6,uVar7,lVar5,uVar1,
                      *(undefined8 *)(param_1 + _DAT_11274a268),uVar2);
  func_0x00010c1a7600(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9880(param_1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc66a0(param_1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010be44040();
  if ((int)lVar4 != 0) {
    func_0x00010bdd0660(param_1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065357b0; end: 1065357b7;  */

void FUN_1065357b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_runtime_11262e5a0);
  return;
}



/* Entry: 1065357b8; end: 1065357e7;  */

void FUN_1065357b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c28ffc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1065357e8; end: 106535837; -[SCChatViewControllerV3 _isSpotlightChatHeaderButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065357e8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a098;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x0001005929c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e53818,0,0);
    return;
  }
  return;
}



/* Entry: 106535838; end: 10653591b; -[SCChatViewControllerV3 _attachSpotlightChatHeaderButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106535838(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a2e0;
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar1 = param_1;
    func_0x00010c24b420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274a108);
      lVar1 = param_1;
      func_0x00010c24b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf231c0(uVar3,param_2,lVar1,*(undefined8 *)(param_1 + _DAT_11274a25c),param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar3;
      _objc_release(uVar2);
      _objc_release(lVar1);
      func_0x00010c24b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10653591c; end: 106535b73; -[SCChatViewControllerV3 spotlightInChatContextParamsForCurrentConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653591c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11274a1ec;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_106535b4c;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c074920();
  puVar4 = *(undefined **)(param_1 + lVar10);
  if (iVar1 == 0) {
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c08fa60();
    if (puVar9 != (undefined *)0x0) {
      puVar6 = *(undefined **)(param_1 + lVar10);
      func_0x00010c122da0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        puVar5 = *(undefined **)(param_1 + lVar10);
        func_0x00010c122e80(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar9);
        puVar5 = puVar9;
      }
      _objc_release(puVar9);
      puVar9 = puVar6;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + lVar10);
        func_0x00010bf85d80(puVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar9);
        puVar7 = puVar9;
      }
      _objc_release(puVar9);
      puVar8 = PTR_PTR_1126be710;
      func_0x00010c291340(PTR_PTR_1126be710,param_2,puVar4,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b6068;
      _objc_alloc(PTR_PTR_1126b6068);
      func_0x00010c05c080();
      _objc_release(puVar8);
      goto LAB_106535b2c;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126be710;
    func_0x00010bfce5a0(PTR_PTR_1126be710,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b6068;
    _objc_alloc(PTR_PTR_1126b6068);
    puVar5 = *(undefined **)(param_1 + lVar10);
    func_0x00010bf85d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0ecc20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf529e0();
    func_0x00010c05c080(puVar9,param_2,0,0,puVar5,lVar2,puVar6,puVar8,1);
LAB_106535b2c:
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
LAB_106535b4c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106535b74; end: 1065361ff; -[SCChatViewControllerV3 _initChatTable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106535b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126cb678;
  _objc_alloc();
  lVar2 = param_4;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + _DAT_11274a0e8);
  func_0x00010c069180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042860();
  uVar6 = *(undefined8 *)(param_4 + _DAT_11274a2e4);
  *(undefined **)(param_4 + _DAT_11274a2e4) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126cb680;
  _objc_alloc();
  lVar2 = param_4;
  func_0x00010c293740(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0074e0();
  lVar8 = (long)_DAT_11274a2e8;
  uVar4 = *(undefined8 *)(param_4 + lVar8);
  *(undefined **)(param_4 + lVar8) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_4);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106536200;
  puStack_90 = &UNK_110866320;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + _DAT_11274a2ec);
  *(undefined **)(param_4 + _DAT_11274a2ec) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + _DAT_11274a2f0);
  *(undefined **)(param_4 + _DAT_11274a2f0) = puVar1;
  _objc_release(uVar4);
  lVar5 = param_4;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c065ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf368c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beed280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be39e80(param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_4 + lVar8);
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274a2f4;
  uVar6 = *(undefined8 *)(param_4 + lVar7);
  *(undefined8 *)(param_4 + lVar7) = uVar4;
  _objc_release(uVar6);
  func_0x00010c189840(*(undefined8 *)(param_4 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar7));
  func_0x00010c17d4c0(*(undefined8 *)(param_4 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_4 + lVar7));
  _objc_release(puVar1);
  func_0x00010c1b6de0(*(undefined8 *)(param_4 + lVar7));
  lVar2 = param_4;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf520();
  _CGRectGetHeight();
  _objc_release(lVar2);
  func_0x00010c217440(param_1,*(undefined8 *)(param_4 + lVar8));
  func_0x00010c1520e0(*(undefined8 *)(param_4 + lVar7));
  func_0x00010c1f7ba0(param_1,0,param_3,0,*(undefined8 *)(param_4 + lVar7));
  lVar2 = param_4;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + lVar7);
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d20(lVar2);
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x00010bdc66a0(param_4);
  func_0x00010bdc66a0(param_4);
  func_0x00010bdc66a0(param_4);
  puVar1 = PTR_PTR_1126cb688;
  _objc_alloc();
  func_0x00010c050380();
  func_0x00010c211640(param_4);
  _objc_release(puVar1);
  lVar3 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar2 = param_4;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211640(*(undefined8 *)(param_4 + lVar8));
  _objc_release(lVar2);
  func_0x00010c28aac0(param_4);
  func_0x00010c0bbfc0(*(undefined8 *)(param_4 + lVar7));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bef9880(param_4);
  func_0x00010bef9880(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106536200; end: 10653627f;  */

void FUN_106536200(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106536280; end: 106536307;  */

void FUN_106536280(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267cc0(uVar2);
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



/* Entry: 106536308; end: 1065364a7; -[SCChatViewControllerV3 _initMixins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536308(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126cb690;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010c069180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0520();
  lVar5 = (long)_DAT_11274a2f8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bdc66a0(param_1);
  func_0x00010bef9880(param_1);
  lVar3 = param_1;
  func_0x00010c268880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9880(param_1);
  _objc_release(lVar3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a2e8);
  func_0x00010bfe3020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1065364a8; end: 1065364ef;  */

void FUN_1065364a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0bb880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065364f0; end: 10653669b; -[SCChatViewControllerV3 _initGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065364f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11274a2fc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8340(0x3fd3333340000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  lVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126cb698;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_11274a300;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c1d0120(*(undefined8 *)(param_1 + lVar4),param_2,2);
  func_0x00010c2116c0(*(undefined8 *)(param_1 + lVar4),param_2,
                      *(undefined8 *)(param_1 + _DAT_11274a2f4));
  func_0x00010c1374a0(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
  lVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_11274a304;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c18b5a0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c18b5c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653669c; end: 1065366b7; -[SCChatViewControllerV3 gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10653669c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 == *(long *)(param_1 + _DAT_11274a304) ||
         param_4 == *(long *)(param_1 + _DAT_11274a304);
}



/* Entry: 1065366b8; end: 1065366c7; -[SCChatViewControllerV3 handleDismissSubmenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065366b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe29b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a308),PTR_s_hideSubmenu_1125d6428);
  return;
}



/* Entry: 1065366c8; end: 10653686f; -[SCChatViewControllerV3 _setPluginDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065366c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11274a0a4;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a258);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a25c);
  lVar5 = param_1;
  func_0x00010be5fee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ae80(uVar1,param_2,uVar3,uVar4,param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17bd60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd7a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ad2a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161ba0();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11274a210;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17bd80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106536870; end: 1065368eb; -[SCChatViewControllerV3 viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536870(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1ac8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be95c20(param_1);
  func_0x00010bed8880(param_1);
  lVar1 = param_1;
  func_0x00010bf36960();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0f8);
    func_0x00010c0f2220(param_1);
    func_0x00010c24fc40(uVar2);
  }
  return;
}



/* Entry: 1065368ec; end: 106536943; -[SCChatViewControllerV3 viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065368ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1ac8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  *(undefined8 *)(param_1 + _DAT_11274a080) = 1;
  func_0x00010bec0c40(param_1);
  return;
}



/* Entry: 106536944; end: 1065369eb; -[SCChatViewControllerV3 viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536944(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ac8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = (long)_DAT_11274a30c;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar1 = param_1;
    func_0x00010c14c8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
    _objc_release(lVar1);
  }
  lVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285f40();
  _objc_release(lVar2);
  func_0x00010bed8660(param_1);
  return;
}



/* Entry: 1065369ec; end: 106536b87; -[SCChatViewControllerV3 _updateFrameBasedInsetIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065369ec(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_11274a190;
  if (*(long *)(param_2 + lVar6) == 0) {
    return;
  }
  lVar5 = (long)_DAT_11274a310;
  uVar1 = *(ulong *)(param_2 + lVar5);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
    _CGRectGetHeight();
    if (0.0 < param_1) {
      lVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar8 = param_1;
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
      _CGRectGetMinY();
      _objc_release(lVar2);
      dVar8 = (param_1 - dVar8) + 12.0;
      goto LAB_106536b28;
    }
  }
  lVar5 = param_2;
  func_0x00010bf36920();
  _objc_retainAutoreleasedReturnValue();
  dVar8 = 0.0;
  if (lVar5 != 0) {
    lVar2 = param_2;
    func_0x00010bf36920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    dVar7 = param_1;
    _objc_release(lVar2);
    _objc_release(lVar5);
    if (0.0 < param_1) {
      lVar5 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      lVar2 = param_2;
      dVar8 = dVar7;
      func_0x00010bf36920(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      dVar8 = dVar7 - dVar8;
      _objc_release(lVar2);
      _objc_release(lVar5);
    }
  }
LAB_106536b28:
  dVar7 = 0.0;
  if (0.0 <= dVar8) {
    dVar7 = dVar8;
  }
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106536b88; end: 106536b8b; -[SCChatViewControllerV3 preferredStatusBarStyle] */

undefined8 FUN_106536b88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 106536b8c; end: 106536b9b; -[SCChatViewControllerV3 _setPreferredScreenEdgesDeferringSystemGesturesToAll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536b8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a084) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 106536b9c; end: 106536bb7; -[SCChatViewControllerV3 preferredScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106536b9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xf;
  if (*(char *)(param_1 + _DAT_11274a084) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106536bb8; end: 106536c4b; -[SCChatViewControllerV3 shortDescription] */

void FUN_106536bb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e538d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106536c4c; end: 106536c73; -[SCChatViewControllerV3 isRTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106536c4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274a0a8);
  func_0x00010c292ae0(lVar1);
  return lVar1 == 1;
}



/* Entry: 106536c74; end: 106536ce7; -[SCChatViewControllerV3 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536c74(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_11274a2e0) != 0) {
    lVar1 = param_1;
    func_0x00010c24b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar1);
  }
  puStack_28 = PTR_PTR_1126f1ac8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106536ce8; end: 106536d53; -[SCChatViewControllerV3 prepareToBeVisible] */

void FUN_106536ce8(long param_1)

{
  long lVar1;
  
  func_0x00010bfe1aa0();
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162b60(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be27ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDeepLinkBeforeVisible_112567950);
  return;
}



/* Entry: 106536d54; end: 106536f03; -[SCChatViewControllerV3 viewDidAppearAtOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536d54(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  param_3 = (param_1 + param_3) / param_3;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  dVar4 = 1.0;
  if (param_3 <= 1.0) {
    dVar4 = param_3;
  }
  uVar2 = param_4;
  func_0x00010c098b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29c700(dVar4);
  _objc_release(uVar2);
  if (param_1 == 0.0) {
    if ((*(byte *)(param_4 + (long)_DAT_11274a314) & 1) == 0) {
      *(undefined1 *)(param_4 + (long)_DAT_11274a314) = 1;
      func_0x00010c139a60(param_4);
      uVar2 = param_4;
      func_0x00010bfd1660();
      if ((int)uVar2 == 0) {
        uVar2 = param_4;
        func_0x00010c234d40();
        if (((uVar2 & 1) == 0) && (uVar2 = param_4, func_0x00010beb3080(), (uVar2 & 1) == 0)) {
          func_0x00010be08d60(param_4);
        }
      }
      else {
        func_0x00010c29c9a0(param_4,param_5,0,0);
        func_0x00010c29cbe0(param_4);
        func_0x00010c1a5220(param_4,param_5,0);
      }
    }
    uVar3 = *(undefined8 *)(param_4 + (long)_DAT_11274a0f8);
    uVar2 = param_4;
    func_0x00010c0f2220(param_4);
    func_0x00010c24fc40(uVar3,param_5,uVar2);
  }
  else if ((param_1 < 0.0) && (*(char *)(param_4 + (long)_DAT_11274a314) == '\x01')) {
    *(undefined1 *)(param_4 + (long)_DAT_11274a314) = 0;
    uVar2 = param_4;
    func_0x00010bf368c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf801e0();
    _objc_release(uVar2);
  }
  if (*(long *)(param_4 + (long)_DAT_11274a318) == 1) {
    func_0x00010bfdef60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a76c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 106536f04; end: 106536f5b; -[SCChatViewControllerV3 _initTableContentInsetUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536f04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a31c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126cb6a8;
  _objc_alloc();
  func_0x00010c050320();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106536f5c; end: 1065370df; -[SCChatViewControllerV3 _handleDeepLinkAfterViewDidSwipeIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106536f5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a320;
  lVar2 = *(long *)(param_1 + lVar3);
  lVar1 = param_1;
  if (lVar2 < 6) {
    if (lVar2 == 3) {
      lVar2 = param_1;
      func_0x00010bf50ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        return;
      }
      *(undefined8 *)(param_1 + lVar3) = 0;
      func_0x00010bf50280(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar2 != 4) {
        return;
      }
      lVar2 = param_1;
      func_0x00010bf50ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        return;
      }
      *(undefined8 *)(param_1 + lVar3) = 0;
      func_0x00010bf50280(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c162b60(param_1);
LAB_106537078:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (lVar2 == 6) {
    func_0x00010bf50ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + lVar3) = 0;
      *(undefined1 *)(param_1 + _DAT_11274a324) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be7db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentProfileForChat_11257d078);
      return;
    }
  }
  else if (lVar2 == 10) {
    lVar2 = param_1;
    func_0x00010bf50ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      return;
    }
    *(undefined8 *)(param_1 + lVar3) = 0;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162b80(param_1);
    goto LAB_106537078;
  }
  return;
}



/* Entry: 1065370e0; end: 10653714f; -[SCChatViewControllerV3 _handleDeepLinkWithActiveConversationSet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065370e0(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_11274a320) == 5) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106537150;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 106537150; end: 1065371a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106537150(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a320) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf368c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065371a4; end: 10653726b; -[SCChatViewControllerV3 _handleDeepLinkBeforeVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065371a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_11274a320;
  lVar2 = *(long *)(param_1 + lVar1);
  if (lVar2 == 9) {
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x00010bf368c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 8) {
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x00010bf368c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar2 != 7) {
      return;
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x00010bf368c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c158ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653726c; end: 1065373f7; -[SCChatViewControllerV3 setActiveConversationById:deeplinkType:conversationSource:configuration:metricsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653726c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274a328;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b6110;
  _objc_alloc(PTR_PTR_1126b6110);
  func_0x00010bffdd40();
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a1b4);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  *(undefined8 *)(param_1 + (long)_DAT_11274a320) = param_4;
  func_0x00010c17ba40(*(undefined8 *)(param_1 + (long)_DAT_11274a2f8),param_2,param_5);
  func_0x00010c180a40(param_1,param_2,param_6);
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a0e8);
  func_0x00010c069240(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1625c0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar4);
  uVar3 = param_1;
  func_0x00010c234d40();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf368c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27a900();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065373f8; end: 10653743f; -[SCChatViewControllerV3 setChatPageSource:] */

/* WARNING: Possible PIC construction at 0x000106537420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106537424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065373f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a26c),PTR_s_setChatPageSource__11263c8b0);
  return;
}



/* Entry: 106537440; end: 10653744f; -[SCChatViewControllerV3 setDeepLinkType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106537440(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274a320) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be27ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDeepLinkBeforeVisible_112567950);
  return;
}



/* Entry: 106537450; end: 1065376cf; -[SCChatViewControllerV3 unsetActiveConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106537450(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11274a328;
  lVar7 = *(long *)(param_1 + lVar8);
  if (lVar7 != 0) {
    _objc_retain(lVar7);
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1b4);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    lVar8 = (long)_DAT_11274a32c;
    if (*(char *)(param_1 + lVar8) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274a268);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
      func_0x00010bf50280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec540(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      *(undefined1 *)(param_1 + lVar8) = 0;
    }
    lVar8 = (long)_DAT_11274a330;
    if (*(char *)(param_1 + lVar8) == '\x01') {
      func_0x00010be89300(param_1);
      *(undefined8 *)(param_1 + _DAT_11274a334) = 0;
      *(undefined1 *)(param_1 + lVar8) = 0;
    }
    *(undefined1 *)(param_1 + _DAT_11274a338) = 0;
    lVar8 = (long)_DAT_11274a33c;
    if (*(char *)(param_1 + lVar8) == '\x01') {
      func_0x00010be892c0(param_1);
      *(undefined8 *)(param_1 + _DAT_11274a340) = 0;
      *(undefined1 *)(param_1 + lVar8) = 0;
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274a1c4));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274a188));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274a18c));
    func_0x00010bf74300(param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c069240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2826a0();
    _objc_release(uVar1);
    func_0x00010c180a40(param_1);
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(lVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bef0710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1065376d0; end: 1065376d3; -[SCChatViewControllerV3 conversationId] */

void FUN_1065376d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef0710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activeConversationId_112599b68);
  return;
}



/* Entry: 1065376d4; end: 106537703; -[SCChatViewControllerV3 conversationViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065376d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106537704; end: 106537843; -[SCChatViewControllerV3 isChatOpenForNotification:] */

byte FUN_106537704(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  func_0x00010bef05e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010c0c11e0(param_1);
    bVar1 = *(byte *)(puStack_68 + 3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 106537844; end: 106537a4b;  */

void FUN_106537844(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar3;
    _objc_release(uVar2);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106537a4c; end: 106538243; -[SCChatViewControllerV3 didConversationViewModelChange:metricsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106537a4c(ulong param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  uint uVar15;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar13 = *(long *)(param_1 + (long)_DAT_11274a328);
  _objc_retain(lVar13);
  _objc_retain(param_3);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == (undefined **)0x0 && lVar13 == 0) {
    _objc_release(0);
    _objc_release(0);
LAB_106537b94:
    ppuVar3 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11274a1ec;
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf50280(uVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126ae750;
    if (((ulong)ppuVar5 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a1b0);
      ppuVar3 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec800(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar6);
      _objc_release(ppuVar3);
    }
    ppuVar14 = *(undefined ***)(param_1 + lVar13);
    _objc_retain(ppuVar14);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    *(undefined ***)(param_1 + lVar13) = param_3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a1b8);
    puVar6 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar6);
    if (param_3 != (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010bf37a40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar3;
      func_0x00010c260ce0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010c260d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
      if (ppuVar7 != (undefined **)0x0) {
        uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a188);
        ppuVar3 = param_3;
        func_0x00010bf37a40(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar3;
        func_0x00010c260ce0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
        func_0x00010c260d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar4);
        _objc_release(ppuVar7);
        _objc_release(ppuVar5);
        _objc_release(ppuVar3);
      }
      ppuVar3 = param_3;
      func_0x00010bf37a40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar3;
      func_0x00010bf03860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010c260d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
      if (ppuVar7 != (undefined **)0x0) {
        uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274a188);
        ppuVar3 = param_3;
        func_0x00010bf37a40(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar3;
        func_0x00010bf03860();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
        func_0x00010c260d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar4);
        _objc_release(ppuVar7);
        _objc_release(ppuVar5);
        _objc_release(ppuVar3);
      }
    }
    lVar8 = *(long *)(param_1 + lVar13);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR_PTR_1126cb6b0;
    if (lVar8 == 0) {
      puVar6 = PTR_PTR_1126b19f8;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b7f68;
      func_0x00010c22b6a0(PTR_PTR_1126b7f68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1835e0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf50280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135120(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b7f68;
      func_0x00010c22b6a0(PTR_PTR_1126b7f68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1835e0();
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(uVar4);
    }
    ppuVar3 = param_3;
    func_0x00010c074920();
    if (((ulong)ppuVar3 & 1) == 0) {
      func_0x00010c122e00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    if (*(char *)(param_1 + (long)_DAT_11274a344) == '\x01') {
      *(undefined1 *)(param_1 + (long)_DAT_11274a344) = 0;
      func_0x00010be7db60(param_1);
    }
    if (param_3 != (undefined **)0x0) {
      uVar11 = param_1;
      func_0x00010c0799c0();
      if ((int)uVar11 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010bf50280(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162b60(param_1);
        _objc_release(uVar4);
      }
      func_0x00010be27e80(param_1);
      ppuVar3 = param_3;
      func_0x00010c075860();
      if ((int)ppuVar3 == 0) {
        func_0x00010be91160(param_1);
        func_0x00010be7c7c0(param_1);
      }
      else {
        func_0x00010bed8880(param_1);
        uVar11 = param_1;
        func_0x00010bf368c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3c380();
        _objc_release(uVar11);
      }
      ppuVar3 = param_3;
      func_0x00010c075860();
      if ((((ulong)ppuVar3 & 1) == 0) &&
         (ppuVar3 = ppuVar14, func_0x00010c075860(), (int)ppuVar3 != 0)) {
        func_0x00010bee4840(param_1);
        func_0x00010be7c7a0(param_1);
        func_0x00010be7c800(param_1);
        func_0x00010be08d00(param_1);
      }
      ppuVar3 = ppuVar14;
      func_0x00010bf610e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_3;
      func_0x00010bf610e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x00010c071ae0();
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
      if (((ulong)ppuVar7 & 1) == 0) {
        ppuVar3 = param_3;
        func_0x00010bf610e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_1;
        func_0x00010bf368c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1881e0();
        _objc_release(uVar11);
        _objc_release(ppuVar3);
      }
      func_0x00010bedd200(param_1);
      func_0x00010be848a0(param_1);
      func_0x00010be28020(param_1);
    }
    func_0x00010bed6ee0(param_1);
    func_0x00010be7c460(param_1);
    func_0x00010beddb20(param_1);
    func_0x00010be64600(param_1);
    ppuVar5 = ppuVar14;
    func_0x00010be9c0a0(param_1);
    lVar13 = *(long *)(param_1 + lVar13);
    func_0x00010bf50920();
    uVar12 = *(undefined8 *)(param_1 + (long)_DAT_11274a0b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010c0e9060();
    _objc_release(uVar12);
    uVar11 = param_1;
    func_0x00010c234d40();
    if ((uVar11 & 1) == 0) {
      uVar11 = param_1;
      func_0x00010beb3080();
      uVar15 = (uint)uVar11;
    }
    else {
      uVar15 = 1;
    }
    if ((((((uint)(8 < lVar13 - 1U) | 0x1e7U >> (ulong)((uint)(lVar13 - 1U) & 0x1f) ^ 1) &
           (uint)uVar4 & 1) != 0) &&
        (ppuVar3 = param_3, func_0x00010c075860(), ((ulong)ppuVar3 & 1) == 0)) &&
       (ppuVar3 = ppuVar14, func_0x00010c075860(), ((uint)ppuVar3 & uVar15) == 1)) {
      func_0x00010bf37a00(*(undefined8 *)(param_1 + (long)_DAT_11274a2e8));
    }
    ppuVar7 = param_3;
    func_0x00010bf50940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar7;
    func_0x00010bed9c20(param_1);
    _objc_release(ppuVar7);
    _objc_release(ppuVar14);
  }
  else {
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x106537944;
    puStack_c0 = &UNK_11084a578;
    puStack_b0 = &uStack_a8;
    puStack_a0 = &uStack_a8;
    _objc_retain(param_3);
    puStack_108 = puVar6;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x1065379c8;
    puStack_f0 = &UNK_11084a578;
    puStack_e0 = &uStack_a8;
    ppuStack_b8 = param_3;
    _objc_retain(param_3);
    ppuVar3 = &puStack_d8;
    ppuVar5 = &puStack_108;
    ppuStack_e8 = param_3;
    func_0x00010c0c11e0(lVar13);
    bVar1 = *(byte *)(puStack_a0 + 3);
    _objc_release(ppuStack_e8);
    _objc_release(ppuStack_b8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(param_3);
    _objc_release(lVar13);
    if ((bVar1 & 1) != 0) goto LAB_106537b94;
    func_0x00010c074920(param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_a8,8);
  __Unwind_Resume();
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar5);
  if (((ppuVar3 != (undefined **)0x0) &&
      (ppuVar14 = ppuVar3, func_0x00010c075860(), ((ulong)ppuVar14 & 1) == 0)) &&
     (ppuVar14 = ppuVar5, func_0x00010c075860(), (int)ppuVar14 != 0)) {
    ppuVar14 = param_3;
    func_0x00010beb4a80();
    if (((ulong)ppuVar14 & 1) == 0) {
      iVar2 = (int)*(undefined8 *)((long)param_3 + (long)_DAT_11274a1ec);
      func_0x00010c071380();
      if (iVar2 == 0) goto LAB_1065382bc;
    }
    func_0x00010c152460(*(undefined8 *)((long)param_3 + (long)_DAT_11274a2e8));
  }
LAB_1065382bc:
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 106538244; end: 1065382d7; -[SCChatViewControllerV3 _scrollToFirstUnreadIfNecessary:existingConversationViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538244(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (uVar2 = param_3, func_0x00010c075860(), (uVar2 & 1) == 0)) &&
     (uVar3 = param_4, func_0x00010c075860(), (int)uVar3 != 0)) {
    uVar2 = param_1;
    func_0x00010beb4a80();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11274a1ec);
      func_0x00010c071380();
      if (iVar1 == 0) goto LAB_1065382bc;
    }
    func_0x00010c152460(*(undefined8 *)(param_1 + (long)_DAT_11274a2e8));
  }
LAB_1065382bc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065382d8; end: 10653845f; -[SCChatViewControllerV3 _updateInputBarWithConversationSubtypeMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065382d8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010be41ea0();
  if ((int)lVar7 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a2c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    uVar1 = (uint)uVar3;
    _objc_release(uVar2);
  }
  lVar7 = (long)_DAT_11274a1ec;
  uVar4 = *(ulong *)(param_1 + lVar7);
  func_0x00010c074920();
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c122da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c122e00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100bec1f0(uVar2,uVar5);
    if ((int)uVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11274a0b0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c080e80();
      uVar8 = (uint)uVar3;
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  else {
    uVar8 = 0;
  }
  if (((uVar1 | uVar8) & 1) != 0) {
    lVar7 = param_3;
    func_0x00010bf1fce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      lVar7 = param_3;
      func_0x00010bf1fce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06ff80();
      _objc_release(lVar7);
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7100();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106538460; end: 106538527; -[SCChatViewControllerV3 _updatePresenceBarVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538460(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274a1ec;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06ecc0();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + lVar5);
  func_0x00010c076ee0();
  if (((uVar3 & 1) == 0) && ((int)uVar2 != 0)) {
    uVar4 = *(ulong *)(param_1 + _DAT_11274a0b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf8fac0();
    _objc_release(uVar4);
  }
  if ((uVar3 & 1) == 0) {
    func_0x00010c075860(*(undefined8 *)(param_1 + lVar5));
  }
  func_0x00010c10ac60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106538528; end: 106538723; -[SCChatViewControllerV3 _updateDisabledInputFooter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538528(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11274a1ec;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf363e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11274a264);
    func_0x00010bfe6360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1065386c0;
  }
  uVar2 = param_3;
  func_0x00010c075860();
  if ((uVar2 & 1) != 0) goto LAB_106538580;
  uVar3 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf363e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf363e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  if (uVar3 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_106538654:
    _objc_release(uVar3);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar3);
LAB_106538580:
      uVar3 = param_1;
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf801c0();
      goto LAB_106538654;
    }
    uVar4 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) goto LAB_106538580;
  }
  lVar1 = (long)_DAT_11274a264;
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf363e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
LAB_1065386c0:
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  func_0x00010bf36920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106538724; end: 1065387ef; -[SCChatViewControllerV3 _presentLockedConversationAlertIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538724(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11274a1ec;
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010bf363e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c074920();
    uVar4 = param_3;
    func_0x00010c075860();
    if ((uVar4 & 1) == 0) {
      uVar5 = (uint)*(undefined8 *)(param_1 + lVar6);
      func_0x00010c076ee0();
      uVar4 = param_3;
      func_0x00010c076ee0();
      uVar5 = uVar5 ^ (uint)uVar4;
    }
    else {
      uVar5 = 1;
    }
    if (iVar1 != 0) {
      uVar4 = *(ulong *)(param_1 + lVar6);
      func_0x00010c075860();
      if ((uVar4 & 1) == 0) {
        uVar2 = (uint)*(undefined8 *)(param_1 + lVar6);
        func_0x00010c06b500();
        if (((uVar2 ^ 1) & uVar5) == 1) {
          func_0x00010be7c440(param_1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065387f0; end: 1065388cf; -[SCChatViewControllerV3 setSourceNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065387f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf36f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274a20c);
    lVar1 = param_3;
    func_0x00010bf36f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfce860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf5a700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0752e0(param_3);
    func_0x00010c0b2980(uVar5,param_2,lVar1,lVar2 != 0,lVar3,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065388d0; end: 1065388d3; -[SCChatViewControllerV3 _updateWithFirstRenderConversationViewModel:] */

void FUN_1065388d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enqueueStopThrottleForCATM_112560230);
  return;
}



/* Entry: 1065388d4; end: 106538933; -[SCChatViewControllerV3 _enqueueStopThrottleForCATM] */

void FUN_1065388d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6b18;
  func_0x00010c22b6a0(PTR_PTR_1126b6b18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2c70;
  _objc_alloc(PTR_PTR_1126c2c70);
  func_0x00010c050c20();
  func_0x00010bf96440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106538934; end: 106538a4b; -[SCChatViewControllerV3 didInitialConversationFetchFailForChatIdentifier:] */

void FUN_106538934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1065389bc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 106538a4c; end: 106538a4f;  */

void FUN_106538a4c(void)

{
  return;
}



/* Entry: 106538a50; end: 106538ab3; -[SCChatViewControllerV3 _addConversationUpdateListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11274a1fc),param_2,param_3);
  if (*(long *)(param_1 + _DAT_11274a1ec) != 0) {
    func_0x00010bf74300(param_3,param_2,*(long *)(param_1 + _DAT_11274a1ec),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106538ab4; end: 106538e0f; -[SCChatViewControllerV3 _updatePlaceholderText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538ab4(undefined **param_1)

{
  bool bVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x22;
  undefined8 unaff_x23;
  long lVar9;
  
  lVar9 = (long)_DAT_11274a1ec;
  ppuVar3 = *(undefined ***)((long)param_1 + lVar9);
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = *(long *)((long)param_1 + lVar9);
  func_0x00010bf50920();
  if (lVar5 == 3) {
    uVar6 = *(ulong *)((long)param_1 + lVar9);
    func_0x00010c074920();
    if ((uVar6 & 1) != 0) goto LAB_106538b1c;
    unaff_x22 = *(undefined ***)((long)param_1 + lVar9);
    func_0x00010c122da0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)((long)param_1 + lVar9);
    func_0x00010c122e00(unaff_x23);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = unaff_x22;
    func_0x000100bec1f0(unaff_x22,unaff_x23);
    bVar1 = true;
    bVar2 = true;
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_106538b20;
LAB_106538b84:
    ppuVar7 = unaff_x22;
    _objc_release(unaff_x23);
    _objc_release(ppuVar7);
  }
  else {
LAB_106538b1c:
    bVar1 = false;
LAB_106538b20:
    ppuVar7 = ppuVar3;
    func_0x00010bf1fce0();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = ppuVar7 != (undefined **)0x0;
    _objc_release();
    if (bVar1) goto LAB_106538b84;
  }
  lVar5 = (long)_DAT_11274a2dc;
  if ((*(long *)((long)param_1 + lVar5) == 0) &&
     (ppuVar7 = param_1, func_0x00010be41ea0(), (int)ppuVar7 != 0)) {
    ppuVar7 = *(undefined ***)((long)param_1 + (long)_DAT_11274a0b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0784a0();
    _objc_release(ppuVar7);
    if (ppuVar4 == (undefined **)0x0 || bVar2) {
      if ((int)ppuVar8 == 0) goto LAB_106538c4c;
      func_0x000106587b44();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dcb60();
      _objc_release(ppuVar4);
      _objc_release(ppuVar7);
      func_0x000106587b5c();
      _objc_retainAutoreleasedReturnValue();
LAB_106538dc4:
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ffbe0();
      _objc_release(param_1);
      param_1 = ppuVar7;
      goto LAB_106538dec;
    }
LAB_106538c9c:
    ppuVar7 = param_1;
    func_0x00010bf368c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcb60();
  }
  else {
    if (!(bool)(ppuVar4 == (undefined **)0x0 | bVar2)) goto LAB_106538c9c;
LAB_106538c4c:
    if (bVar2) {
      func_0x000106587b14();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dcb60();
      _objc_release(ppuVar4);
      _objc_release(ppuVar7);
      func_0x000106587b2c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106538dc4;
    }
    if (*(long *)((long)param_1 + lVar5) == 0) {
      ppuVar7 = *(undefined ***)((long)param_1 + lVar9);
      func_0x00010c074920();
      if (((ulong)ppuVar7 & 1) == 0) {
        ppuVar7 = *(undefined ***)((long)param_1 + lVar9);
        func_0x00010c122e00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar7;
        func_0x00010c0720c0();
        _objc_release(ppuVar7);
        if ((int)ppuVar4 != 0) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110e538f8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e538f8,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106538cd0;
        }
      }
      func_0x000106587acc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dcb60();
      _objc_release(ppuVar4);
      _objc_release(ppuVar7);
      func_0x000106587ae4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106538dc4;
    }
    func_0x000106587afc();
    _objc_retainAutoreleasedReturnValue();
LAB_106538cd0:
    ppuVar4 = param_1;
    func_0x00010bf368c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcb60();
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar7);
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffbe0();
LAB_106538dec:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 106538e10; end: 106538ec7; -[SCChatViewControllerV3 _notifyChildrenWithUpdatedViewModel:metricsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1fc);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106538ec8;
  puStack_48 = &UNK_11092a170;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106538ec8; end: 106538ed3;  */

void FUN_106538ec8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_didConversationViewModelChange_m_1125baa68,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106538ed4; end: 106538edb; -[SCChatViewControllerV3 shouldPopToRootViewController] */

undefined8 FUN_106538ed4(void)

{
  return 0;
}



/* Entry: 106538edc; end: 106538f2b; -[SCChatViewControllerV3 prefersStatusBarHidden] */

void FUN_106538edc(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c073fe0();
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_1126f1ac8;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_prefersStatusBarHidden_11261f658);
  }
  return;
}



/* Entry: 106538f2c; end: 1065390e3; -[SCChatViewControllerV3 traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106538f2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f1ac8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_traitCollectionDidChange__11267bf88,param_3);
  if (param_3 == 0) goto LAB_106539058;
  uVar1 = param_3;
  func_0x00010c292b20();
  uVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c292b20();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0720c0();
    if ((uVar7 & 1) != 0) {
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_106539038;
    }
    uVar8 = *(undefined8 *)(param_1 + (long)_DAT_11274a0b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c06e500();
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((int)uVar9 != 0) {
      func_0x00010c125980(*(undefined8 *)(param_1 + (long)_DAT_11274a144));
    }
  }
  else {
LAB_106539038:
    _objc_release(uVar2);
  }
  if (uVar1 != uVar3) {
    func_0x00010bf06860(*(undefined8 *)(param_1 + (long)_DAT_11274a17c));
  }
LAB_106539058:
  _objc_release(param_3);
  return;
}



/* Entry: 1065390e4; end: 10653919f; -[SCChatViewControllerV3 _publishConversationViewVisibilityChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065390e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010bf505a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb6b8;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50b00(puVar3,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065391a0; end: 106539237; -[SCChatViewControllerV3 viewWillResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065391a0(long param_1)

{
  long lVar1;
  
  func_0x00010c236300();
  func_0x00010bf82fc0(param_1);
  func_0x00010bf84360(param_1);
  lVar1 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066420();
  _objc_release(lVar1);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11274a258));
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11274a25c));
  func_0x00010bea8cc0(param_1);
  func_0x00010c29e980(*(undefined8 *)(param_1 + _DAT_11274a17c));
                    /* WARNING: Could not recover jumptable at 0x00010be83e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishConversationViewVisibili_11257e930,0)
  ;
  return;
}



/* Entry: 106539238; end: 1065393b3; -[SCChatViewControllerV3 viewDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539238(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_1[_DAT_11274a348] = 0;
  func_0x00010bfe1aa0();
  puVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010beeafe0(param_1,param_2,puVar1);
  func_0x00010be08d00(param_1);
  func_0x00010c29c7e0(*(undefined8 *)(param_1 + _DAT_11274a17c));
  func_0x00010c066400(*(undefined8 *)(param_1 + _DAT_11274a308));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010bf505a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb6b8;
  puVar5 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50aa0(puVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010be83e40(param_1,param_2,1);
  func_0x00010be38960(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065393b4; end: 1065394df; -[SCChatViewControllerV3 _pluginPresentationTrackingContainerWrapping:] */

void FUN_1065393b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126cb6c0;
  _objc_alloc(PTR_PTR_1126cb6c0);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065394e0;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0026c0(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065394e0; end: 106539537;  */

void FUN_1065394e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106539538; end: 10653956f; -[SCChatViewControllerV3 _willPresentFullScreenView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539538(long param_1)

{
  func_0x00010bea8cc0();
  func_0x00010c29e980(*(undefined8 *)(param_1 + _DAT_11274a17c));
                    /* WARNING: Could not recover jumptable at 0x00010be83e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishConversationViewVisibili_11257e930,0)
  ;
  return;
}



/* Entry: 106539570; end: 1065395bb; -[SCChatViewControllerV3 _pluginUIContainerDidAttachUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539570(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a348;
  if (((*(byte *)(param_1 + lVar2) & 1) == 0) &&
     (uVar1 = param_1, func_0x00010c0799c0(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(param_1 + lVar2) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010beeb130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willPresentFullScreenView_1125985f0);
    return;
  }
  return;
}



/* Entry: 1065395bc; end: 1065395c3; -[SCChatViewControllerV3 _pluginUIContainerDidDetachUI] */

void FUN_1065395bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be755d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pluginUIContainerDidDetachUIReq_11257af10,0)
  ;
  return;
}



/* Entry: 1065395c4; end: 106539673; -[SCChatViewControllerV3 _pluginUIContainerDidDetachUIRequiringChatRevealed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065395c4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11274a348) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274a348) = 0;
    lVar2 = (long)_DAT_11274a0a8;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf07b60();
    if (lVar1 == 0) {
      if ((param_3 == 0) || (lVar1 = param_1, func_0x00010be6eb60(), (int)lVar1 != 0)) {
        func_0x00010c29c7e0(*(undefined8 *)(param_1 + _DAT_11274a17c));
                    /* WARNING: Could not recover jumptable at 0x00010be83e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__publishConversationViewVisibili_11257e930,1);
        return;
      }
    }
    else {
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010bf07b60();
      if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c236310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showBlurOverlay_11266b2e8);
        return;
      }
    }
  }
  return;
}



/* Entry: 106539674; end: 10653982b; -[SCChatViewControllerV3 willEndDisplayingAllCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539674(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar9);
      }
      puVar3 = PTR_PTR_1126cb4a0;
      uVar10 = *(ulong *)(lVar11 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar3);
      uVar4 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar3);
      uVar1 = uVar10;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      func_0x00010bf947a0(uVar1);
      _objc_release(uVar1);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  lVar5 = *(long *)(param_1 + _DAT_11274a0a4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c223b40(lVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  puVar3 = puVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar7);
      }
      puVar6 = PTR_PTR_1126cb4a0;
      uVar10 = *(ulong *)((long)puVar12 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar6);
      uVar4 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar6);
      uVar1 = uVar10;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      func_0x00010c2a5fc0(uVar1);
      _objc_release(uVar1);
      puVar12 = puVar12 + 1;
    } while (puVar3 != puVar12);
    puVar3 = puVar7;
    func_0x00010bf52a60();
  }
  func_0x00010bf85c40(*(undefined8 *)(lVar5 + _DAT_11274a2e4));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c109b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar7 + _DAT_11274a2e4),PTR_s_prepareMediaForVisibleCells__1126200f8,
             *(undefined8 *)(puVar7 + _DAT_11274a2f4));
  return;
}



/* Entry: 10653982c; end: 106539993; -[SCChatViewControllerV3 _willDisplayCells:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653982c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126cb4a0;
      uVar7 = *(ulong *)(lVar8 * 8);
      _objc_retain(uVar7);
      _objc_opt_class(puVar4);
      uVar5 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      uVar1 = uVar7;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      func_0x00010c2a5fc0(uVar1);
      _objc_release(uVar1);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010bf85c40(*(undefined8 *)(param_1 + _DAT_11274a2e4));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c109b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11274a2e4),PTR_s_prepareMediaForVisibleCells__1126200f8,
             *(undefined8 *)(param_3 + _DAT_11274a2f4));
  return;
}



/* Entry: 106539994; end: 1065399b3; -[SCChatViewControllerV3 resetMediaCellsOnForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2e4),PTR_s_prepareMediaForVisibleCells__1126200f8,
             *(undefined8 *)(param_1 + _DAT_11274a2f4));
  return;
}



/* Entry: 1065399b4; end: 106539c33; -[SCChatViewControllerV3 viewWillEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065399b4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  func_0x00010bf83a20();
  lVar5 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar2 != 0) {
    func_0x00010c2a6320(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a290);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139e40();
  _objc_release(uVar3);
  func_0x00010c29e8c0(*(undefined8 *)(param_1 + _DAT_11274a17c));
  lVar11 = (long)_DAT_11274a1ec;
  lVar4 = *(long *)(param_1 + lVar11);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  lVar2 = lVar4;
  if (lVar5 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
    func_0x00010c074920();
    if (iVar1 != 0) {
      lVar5 = *(long *)(param_1 + lVar11);
      func_0x00010bfce400(lVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bf60a00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bf60a00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x000108ef3728(lVar5,uVar3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(lVar5);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274a124);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c122da0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c122da0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfce400(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50920(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c24daa0(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106539c34; end: 106539c8b; -[SCChatViewControllerV3 releaseMemory] */

void FUN_106539c34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c267ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b8c0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106539c8c; end: 106539d13; -[SCChatViewControllerV3 viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539c8c(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ac8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0a8);
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(uVar1);
  if (*(long *)(param_1 + _DAT_11274a1ec) != 0) {
    func_0x00010c13d3e0(param_1);
  }
  return;
}



/* Entry: 106539d14; end: 10653a273; -[SCChatViewControllerV3 viewDidFullyAppearFromStack:fromBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106539d14(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar11 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdc4ea0();
  func_0x00010be38960(param_1);
  puVar1 = param_1;
  func_0x00010c0793a0();
  if (((param_4 & 1) == 0) && (((ulong)puVar1 & 1) == 0)) {
    func_0x00010bf01280(param_1);
  }
  func_0x00010bea6680(param_1);
  param_1[_DAT_11274a34c] = 1;
  puVar1 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a76c0(0x3ff0000000000000);
  _objc_release(puVar1);
  func_0x00010b738094();
  func_0x00010be30a00(param_1);
  puVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010beeafe0(param_1);
  puVar7 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  puVar2 = PTR_s_removeFeedToChatTapDetectionView_112628b60;
  _objc_opt_respondsToSelector();
  _objc_release(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
    puVar7 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c500();
    _objc_release(puVar7);
  }
  puVar7 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162b60(param_1);
    _objc_release(puVar7);
    func_0x00010be7c7a0(param_1);
    func_0x00010be7c800(param_1);
  }
  puVar7 = param_1;
  func_0x00010c234d40();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = param_1;
    func_0x00010beb3080();
    uVar9 = (uint)puVar7;
  }
  else {
    uVar9 = 1;
  }
  func_0x00010be08d00(param_1);
  func_0x00010c29c980(*(undefined8 *)(param_1 + _DAT_11274a17c));
  func_0x00010be83e40(param_1);
  lVar4 = *(long *)(param_1 + _DAT_11274a1ec);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x00010c075860();
    uVar9 = ((uint)lVar4 ^ 1) & uVar9;
  }
  puVar7 = param_1;
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c073040();
  if ((int)puVar3 == 0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010bf368c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c252440();
    puVar10 = (undefined1 *)(ulong)(puVar5 == (undefined *)0x1);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  if ((uVar9 & 1) != 0 || (int)puVar10 != 0) {
    func_0x00010bf37a00(*(undefined8 *)(param_1 + _DAT_11274a2e8));
  }
  func_0x00010c066400(*(undefined8 *)(param_1 + _DAT_11274a308));
  puVar3 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126cb6b0;
  if (puVar3 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar7);
  }
  else {
    puVar3 = param_1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135120(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  func_0x00010be91160(param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274a0f4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bc40();
  _objc_release(uVar6);
  puVar7 = *(undefined **)(param_1 + _DAT_11274a120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123540();
  _objc_release(puVar7);
  lVar4 = (long)_DAT_11274a350;
  if (*(long *)(param_1 + lVar4) == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar7 = *(undefined **)(param_1 + _DAT_11274a294);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10653a274;
    puStack_68 = &UNK_110876508;
    puVar2 = auStack_58;
    _objc_copyWeak(auStack_60);
    puVar5 = puVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010beb9fc0(param_1);
    ppuVar11 = (undefined **)puVar10;
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)ppuVar11 + 0x20));
    _objc_destroyWeak(auStack_58);
    puVar8 = puVar5;
    __Unwind_Resume(puVar5);
    pcStack_88 = FUN_10653a274;
    puStack_b0 = puVar3;
    puStack_a8 = puVar7;
    puStack_a0 = puVar1;
    puStack_98 = puVar5;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10653a31c;
    puStack_c8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_b8,puVar8 + 0x20);
    _objc_retain(puVar2);
    puStack_c0 = puVar2;
    func_0x000100162d98("APPSTORE",&puStack_e0);
    _objc_release(puStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 10653a274; end: 10653a31b;  */

void FUN_10653a274(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_10653a31c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10653a31c; end: 10653a367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a31c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5e480();
    *(undefined8 *)(lVar1 + _DAT_11274a298) = uVar2;
    func_0x00010beb9fc0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10653a368; end: 10653a42b; -[SCChatViewControllerV3 _showNetworkConnectivityStatusIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11274a0a8);
  func_0x00010bf07b60();
  puVar2 = PTR_PTR_1126afde0;
  if ((lVar1 == 0) && (*(long *)(param_1 + _DAT_11274a298) == 0)) {
    func_0x00010655d19c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a148);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10653a42c; end: 10653a5db; -[SCChatViewControllerV3 viewDidFullyDisappearFromStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a42c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010befe680(*(undefined8 *)(param_1 + _DAT_11274a2e8));
  func_0x00010bdf8440(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a350);
  *(undefined8 *)(param_1 + _DAT_11274a350) = 0;
  _objc_release(uVar1);
  func_0x00010bfe1aa0(param_1);
  func_0x00010c139a60(param_1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274a354),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6340);
  lVar2 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066420();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801c0();
  _objc_release(lVar2);
  if (*(long *)(param_1 + _DAT_11274a1ec) != 0) {
    func_0x00010bed5360(param_1,param_2,&PTR____CFConstantStringClassReference_110dcdf78,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6358);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a19c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bcc0();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c2a6320(param_1);
  }
  func_0x00010c29ca00(*(undefined8 *)(param_1 + _DAT_11274a17c));
  func_0x00010be83e40(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a290);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139e40();
  _objc_release(uVar1);
  func_0x00010bf1d400(param_1);
  func_0x00010c264100(param_1);
  func_0x00010be0a240(param_1);
  *(undefined1 *)(param_1 + _DAT_11274a34c) = 0;
  *(undefined1 *)(param_1 + _DAT_11274a358) = 0;
  return;
}



/* Entry: 10653a5dc; end: 10653a643; -[SCChatViewControllerV3 viewDidSwipeIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a5dc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274a188));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274a18c));
  func_0x00010c29cbe0(*(undefined8 *)(param_1 + _DAT_11274a17c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0f8);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be27e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDeepLinkAfterViewDidSwipe_112567940);
  return;
}



/* Entry: 10653a644; end: 10653a6a3; -[SCChatViewControllerV3 _setUnreadViewedCounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a644(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a26c);
  lVar2 = (long)_DAT_11274a2e8;
  func_0x00010c281e60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c281f20(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1ccba0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c139b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_resetUnreadViewedSessionCounts_11262c0e8);
  return;
}



/* Entry: 10653a6a4; end: 10653a823; -[SCChatViewControllerV3 viewDidSwipeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a6a4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c24d120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297960();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c267ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b8c0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar5 = (long)_DAT_11274a26c;
  func_0x00010c17b580(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)(param_1 + (long)_DAT_11274a188));
  func_0x00010c17b5a0(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)(param_1 + (long)_DAT_11274a18c));
  func_0x00010bea8cc0(param_1);
  func_0x00010c29cc20(*(undefined8 *)(param_1 + (long)_DAT_11274a17c));
  uVar1 = param_1;
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a900();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11274a180);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b6a0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010bf3baa0(*(undefined8 *)(param_1 + (long)_DAT_11274a20c));
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11274a1c0);
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}


