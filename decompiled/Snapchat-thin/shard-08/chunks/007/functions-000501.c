/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106568308; end: 10656830f; -[SCChatViewHeader didDismissBackgroundTintView:] */

void FUN_106568308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 106568310; end: 1065683d7; -[SCChatViewHeader _setAddButtonStatus:] */

void FUN_106568310(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c252d60();
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((int)uVar2 == param_3) {
    return;
  }
  puVar3 = PTR_PTR_1126cb838;
  _objc_alloc(PTR_PTR_1126cb838);
  func_0x00010c04c1a0();
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1065683d8; end: 106568497; -[SCChatViewHeader _didTapAddFriendButton] */

void FUN_1065683d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bea1aa0(param_1,param_2,1);
  _objc_initWeak(auStack_28,param_1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfd0200(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106568498; end: 1065684ef;  */

void FUN_106568498(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065684f0; end: 1065685a7; -[SCChatViewHeader _handleAddFriendCompletionForUserId:success:] */

void FUN_1065684f0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x98);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar3);
      goto LAB_106568590;
    }
    lVar1 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_106568590;
  }
  uVar2 = 2;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  func_0x00010bea1aa0(param_1,param_2,uVar2);
LAB_106568590:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065685a8; end: 1065685ab; -[SCChatViewHeader _didTapHeaderText:] */

void FUN_1065685a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleHeaderTextPressed__112568368);
  return;
}



/* Entry: 1065685ac; end: 1065685bb; -[SCChatViewHeader _tappableSubtextEnabled] */

bool FUN_1065685ac(long param_1)

{
  return *(long *)(param_1 + 0xd0) != 0;
}



/* Entry: 1065685bc; end: 106568617; -[SCChatViewHeader _didTapHeaderSubtext:] */

void FUN_1065685bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beca9a0();
  if ((int)uVar1 == 0) {
    func_0x00010be2a720(param_1,param_2,param_3);
  }
  else {
    func_0x00010bde2e00(param_1);
    func_0x00010be2a700(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106568618; end: 1065688f7; -[SCChatViewHeader _showLocationContextTooltipIfNeeded] */

void FUN_106568618(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    puStack_a0 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1065688f8;
    puStack_a8 = &UNK_110850558;
    puStack_90 = puStack_a0;
    func_0x00010c0be840(param_1[0x1a],param_2,0,0,&puStack_c0,0,0,0,0);
    if ((*(byte *)(puStack_90 + 3) & 1) != 0) {
      uVar1 = param_1[0x2b];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010c22f480();
      _objc_release(uVar1);
      if ((((int)uVar8 != 0) && (param_1[0x16] != 0)) && (param_1[0x2c] == 0)) {
        puVar2 = PTR_PTR_1126b09c0;
        _objc_alloc();
        puVar3 = puVar2;
        FUN_10656aad4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c051640();
        uVar8 = param_1[0x2c];
        param_1[0x2c] = puVar2;
        _objc_release(uVar8);
        _objc_release(puVar3);
        func_0x00010c18b5e0(param_1[0x2c]);
        *(undefined1 *)((long)param_1 + 0x169) = 1;
        func_0x00010c10c740(0x4018000000000000,param_1[0x2c]);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar4 = param_1[0x2c];
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1[0x16];
        func_0x00010bf34860(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1[0x2c];
        uStack_78 = uVar8;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1[0x2e];
        func_0x00010bf1ff80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010bf493c0(0x4008000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_70 = uVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2);
        _objc_release(puVar3);
        _objc_release(uVar1);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar8 = param_1[0x2b];
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec460();
        _objc_release(uVar8);
      }
    }
    param_1 = &uStack_98;
    __Block_object_dispose(param_1,8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(param_1[4] + 8) + 0x18) = 1;
  return;
}



/* Entry: 1065688f8; end: 10656890b;  */

void FUN_1065688f8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10656890c; end: 10656894f; -[SCChatViewHeader _completeLocationContextTooltipIfNeeded] */

void FUN_10656890c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x169) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106568950; end: 10656897b; -[SCChatViewHeader _cleanUpLocationContextTooltipIfNeeded] */

void FUN_106568950(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x160));
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10656897c; end: 1065689bf; -[SCChatViewHeader _titleTrailingIconsReservedWidth] */

void FUN_10656897c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c279260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c137fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c31a0,PTR_s_reservedWidthForTitleTrailingAcc_11262ba08,uVar1);
  return;
}



/* Entry: 1065689c0; end: 106568b77; -[SCChatViewHeader _handleHeaderTextPressed:] */

void FUN_1065689c0(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf80240();
  if ((uVar2 & 1) != 0) goto LAB_1065689f0;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + 0x170));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x170);
  func_0x00010bf20c00();
  _CGRectContainsPoint();
  lVar3 = param_3;
  func_0x00010c252440();
  if (lVar3 == 3) {
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010bfe00a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar4);
    uVar2 = param_1;
    func_0x00010beca9a0();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010bfe6360(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar4);
    }
    if (iVar1 != 0) {
      func_0x00010be2b260(param_1);
    }
    goto LAB_1065689f0;
  }
  if (lVar3 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010bfe00a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 != 0) {
      func_0x00010c1677c0(0x3fe0000000000000,uVar4);
      goto LAB_106568aa0;
    }
    func_0x00010c1677c0(0x3ff0000000000000,uVar4);
    _objc_release(uVar4);
    uVar2 = param_1;
    func_0x00010beca9a0();
    if ((uVar2 & 1) != 0) goto LAB_1065689f0;
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bfe6360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3ff0000000000000;
  }
  else {
    if (lVar3 != 1) goto LAB_1065689f0;
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010bfe00a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3fe0000000000000);
LAB_106568aa0:
    _objc_release(uVar4);
    uVar2 = param_1;
    func_0x00010beca9a0();
    if ((uVar2 & 1) != 0) goto LAB_1065689f0;
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bfe6360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3fe0000000000000;
  }
  func_0x00010c1677c0(uVar5);
  _objc_release(uVar4);
LAB_1065689f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106568b78; end: 106568c9f; -[SCChatViewHeader _handleHeaderSubtextPressed:] */

void FUN_106568b78(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010beca9a0();
  if ((int)lVar2 != 0) {
    func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + 0x170));
    iVar1 = (int)*(undefined8 *)(param_1 + 0x170);
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 == 3) {
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010bfe6360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar3);
      func_0x00010c24dc40(*(undefined8 *)(param_1 + 0xd8));
      if (iVar1 != 0) {
        func_0x00010be31540(param_1);
      }
    }
    else {
      if (lVar2 == 2) {
        uVar3 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010bfe6360(uVar3);
        _objc_retainAutoreleasedReturnValue();
        if (iVar1 == 0) {
          uVar4 = 0x3ff0000000000000;
        }
        else {
          uVar4 = 0x3fe0000000000000;
        }
      }
      else {
        if (lVar2 != 1) goto LAB_106568c88;
        func_0x00010c0f5bc0(*(undefined8 *)(param_1 + 0xd8));
        uVar3 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010bfe6360(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 0x3fe0000000000000;
      }
      func_0x00010c1677c0(uVar4);
      _objc_release(uVar3);
    }
  }
LAB_106568c88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106568ca0; end: 106568d43; -[SCChatViewHeader _handleLeftButtonPressed] */

void FUN_106568ca0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf80240();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126cb858;
    if (*(long *)(param_1 + 0xa0) == 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        func_0x00010c08b8a0(PTR_PTR_1126cb858,param_2,*(long *)(param_1 + 0x98),0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c08b900(PTR_PTR_1126cb858,param_2,*(long *)(param_1 + 0xa0),0);
      _objc_retainAutoreleasedReturnValue();
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd2d60();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106568d44; end: 106568d97; -[SCChatViewHeader _handleSubtextPressed] */

void FUN_106568d44(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf80240();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0xd0) != 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd2d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106568d98; end: 106568d9f; -[SCChatViewHeader _shouldShowEditableHeader] */

void FUN_106568d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf01090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_allowDisplayNameEdit_11259ddc8);
  return;
}



/* Entry: 106568da0; end: 106568e7f; -[SCChatViewHeader attachCallButtonsPane:] */

void FUN_106568da0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010beed0c0(lVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + 0xe8),param_3,lVar1 != 1);
  func_0x00010c2a5040(param_4);
  *(undefined8 *)(param_2 + 0x80) = param_1;
  func_0x00010befbb60(*(undefined8 *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0xe8));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106568e80;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_2;
  func_0x00010c0bbfe0(*(undefined8 *)(param_2 + 0xe8),param_3,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bee07e0(param_2);
  func_0x00010c128d20(param_2);
  func_0x00010c08cdc0(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106568e80; end: 10656909f;  */

void FUN_106568e80(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be43140();
  lVar2 = param_2;
  if (iVar1 == 0) {
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0xc020000000000000;
    lVar6 = 0x28;
  }
  else {
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4024000000000000;
    lVar6 = 0x50;
  }
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c0bc000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  FUN_106567430();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1065690a0; end: 1065690ef; -[SCChatViewHeader detachCallButtonsPane] */

void FUN_1065690a0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    func_0x00010bee07e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c128d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadHeader_112627d68);
    return;
  }
  return;
}



/* Entry: 1065690f0; end: 106569133; -[SCChatViewHeader _shouldShowSpotlightHeaderButtonPane] */

uint FUN_1065690f0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010beed0c0();
  if (lVar2 == 1) {
    lVar2 = *(long *)(param_1 + 0xe8);
    uVar1 = 0;
    if (lVar2 != 0) {
      func_0x00010c074c20();
      uVar1 = (uint)lVar2 ^ 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106569134; end: 106569147; -[SCChatViewHeader _spotlightHeaderButtonCallPaneVisualInset] */

double FUN_106569134(long param_1)

{
  double dVar1;
  
  dVar1 = 24.0;
  if (*(double *)(param_1 + 0x88) <= 24.0) {
    dVar1 = *(double *)(param_1 + 0x88);
  }
  return dVar1;
}



/* Entry: 106569148; end: 1065691eb; -[SCChatViewHeader _remakeSpotlightHeaderButtonPaneConstraints] */

void FUN_106569148(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  byte bStack_28;
  
  if (*(long *)(param_2 + 0xf0) != 0) {
    lVar1 = *(long *)(param_2 + 0xe8);
    if (lVar1 == 0) {
      bStack_28 = 0;
    }
    else {
      func_0x00010c074c20();
      bStack_28 = (byte)lVar1 ^ 1;
    }
    func_0x00010bebed80(param_2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1065691ec;
    puStack_40 = &UNK_11086b030;
    lStack_38 = param_2;
    uStack_30 = param_1;
    func_0x00010c0bbfe0(*(undefined8 *)(param_2 + 0xf0),param_3,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf21300(*(undefined8 *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0xf0));
  }
  return;
}



/* Entry: 1065691ec; end: 1065694ef;  */

void FUN_1065691ec(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  double dVar9;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be43140();
  cVar1 = *(char *)(param_1 + 0x30);
  lVar3 = param_2;
  if (iVar2 == 0) {
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (cVar1 == '\0') {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      func_0x00010c0bc000(uVar7);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = *(code **)(lVar6 + 0x10);
      dVar9 = -8.0;
      goto LAB_106569428;
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
    func_0x00010c0bbfa0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    dVar9 = *(double *)(param_1 + 0x28);
  }
  else {
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (cVar1 == '\0') {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      func_0x00010c0bc000(uVar7);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = *(code **)(lVar6 + 0x10);
      dVar9 = 10.0;
      goto LAB_106569428;
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
    func_0x00010c0bc000(uVar7);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    dVar9 = -*(double *)(param_1 + 0x28);
  }
  pcVar8 = *(code **)(lVar6 + 0x10);
LAB_106569428:
  (*pcVar8)(dVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_106567430();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1065694f0; end: 10656952f; -[SCChatViewHeader _updateSpotlightHeaderButtonPaneVisibilityAndConstraints] */

void FUN_1065694f0(long param_1)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    func_0x00010beb6640();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010be8af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__remakeSpotlightHeaderButtonPane_112580580)
    ;
    return;
  }
  return;
}



/* Entry: 106569530; end: 1065695ab; -[SCChatViewHeader attachSpotlightHeaderButtonPane:] */

void FUN_106569530(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xf0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c2a5040(param_4);
  *(undefined8 *)(param_2 + 0x88) = param_1;
  func_0x00010befbb60(*(undefined8 *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0xf0));
  func_0x00010bee07e0(param_2);
  func_0x00010c128b60(*(undefined8 *)(param_2 + 0x170));
  func_0x00010c08cdc0(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065695ac; end: 1065695f3; -[SCChatViewHeader detachSpotlightHeaderButtonPane] */

void FUN_1065695ac(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x170),PTR_s_reloadData_112627cf8);
    return;
  }
  return;
}



/* Entry: 1065695f4; end: 106569887; -[SCChatViewHeader _initBlurEffect] */

void FUN_1065695f4(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,9);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  uVar18 = *(undefined8 *)(param_1 + 0x150);
  *(undefined **)(param_1 + 0x150) = puVar14;
  _objc_release(uVar18);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x150));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x150));
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1ff80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010beef8c0(puVar14);
  uVar15 = (uint)puVar16;
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  if ((byte)puVar1[0x148] == uVar15) {
    return;
  }
  puVar1[0x148] = (char)uVar15;
  if (uVar15 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + 0x150));
    puVar14 = puVar1 + 0x18;
    _objc_loadWeakRetained(puVar14);
    puVar13 = puVar14;
    func_0x00010bf1fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280(*(undefined8 *)(puVar1 + 0x170));
    _objc_release(puVar13);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010be23360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar1 + 0xb0));
    _objc_release(puVar13);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar1 + 0xc0));
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar1 + 200));
    _objc_release(puVar14);
    puVar14 = *(undefined **)(puVar1 + 0xe0);
    func_0x00010bf62800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(puVar1 + 0xb8));
      _objc_release(puVar14);
      puVar14 = (undefined *)0x0;
    }
    else {
      func_0x00010c216160(*(undefined8 *)(puVar1 + 0xb8));
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(puVar1 + 0x150));
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010be23360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar1 + 0xb0));
    _objc_release(puVar13);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar1 + 0xc0));
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar1 + 200));
    _objc_release(puVar14);
    lVar17 = *(long *)(puVar1 + 0xe0);
    func_0x00010bf62800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar17 == 0) {
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(puVar1 + 0xb8));
      _objc_release(puVar14);
    }
    else {
      func_0x00010c216160(*(undefined8 *)(puVar1 + 0xb8));
    }
    _objc_release(lVar17);
    puVar14 = puVar1;
    func_0x00010bf13da0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280(*(undefined8 *)(puVar1 + 0x170));
  }
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x170),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 106569888; end: 106569b43; -[SCChatViewHeader updateBlurViewVisibility:] */

void FUN_106569888(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (*(byte *)(param_1 + 0x148) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x148) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x150),param_2,1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf1fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280(*(undefined8 *)(param_1 + 0x170));
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be23360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xb0));
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xc0));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 200));
    _objc_release(puVar3);
    lVar1 = *(long *)(param_1 + 0xe0);
    func_0x00010bf62800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + 0xb8));
      _objc_release(puVar3);
      lVar1 = 0;
    }
    else {
      func_0x00010c216160(*(undefined8 *)(param_1 + 0xb8));
    }
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x150),param_2,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be23360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xb0));
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0xc0));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 200));
    _objc_release(puVar3);
    lVar1 = *(long *)(param_1 + 0xe0);
    func_0x00010bf62800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_1 + 0xb8));
      _objc_release(puVar3);
    }
    else {
      func_0x00010c216160(*(undefined8 *)(param_1 + 0xb8));
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf13da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280(*(undefined8 *)(param_1 + 0x170));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x170),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 106569b44; end: 106569b4f; -[SCChatViewHeader _backButtonWidth] */

undefined8 FUN_106569b44(void)

{
  return 0x404a000000000000;
}



/* Entry: 106569b50; end: 106569b63; -[SCChatViewHeader tooltipDidDismiss:] */

void FUN_106569b50(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x160)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpLocationContextTooltipIf_1125555f0);
  return;
}



/* Entry: 106569b64; end: 106569b77; -[SCChatViewHeader tooltipTapped:] */

void FUN_106569b64(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x160)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x160),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 106569b78; end: 106569be7; -[SCChatViewHeader _showBanner] */

void FUN_106569b78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + 0x100));
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be34f80(param_1);
  func_0x00010bfdf480(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106569be8; end: 106569c67; -[SCChatViewHeader _hideBanner] */

void FUN_106569be8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x100) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be34f80(param_1);
    func_0x00010bfdf480(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106569c68; end: 106569d3b; -[SCChatViewHeader updateForWidthChangeIfNeeded] */

void FUN_106569c68(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetWidth();
  if (param_1 != *(double *)(param_2 + 0x30)) {
    *(double *)(param_2 + 0x30) = param_1;
    iVar1 = (int)*(undefined8 *)(param_2 + 0xf8);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0xf8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287860();
      _objc_release(uVar2);
      func_0x00010be34f80(param_2);
      dVar3 = param_1;
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x28));
      _CGRectGetHeight();
      if (param_1 != dVar3) {
        func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x28));
        func_0x00010bc850d8();
        func_0x00010c19f0e0(*(undefined8 *)(param_2 + 0x28));
        param_2 = param_2 + 0x20;
        _objc_loadWeakRetained(param_2);
        func_0x00010bfdf480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_2);
        return;
      }
    }
  }
  return;
}



/* Entry: 106569d3c; end: 106569d4b; -[SCChatViewHeader _isNotificationPermissionBannerType:] */

bool FUN_106569d3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 2 || param_3 == 4;
}



/* Entry: 106569d4c; end: 106569da3; -[SCChatViewHeader showNotificationPermissionBannerIfAvailable] */

void FUN_106569d4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf15ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf15a80(lVar1);
    lVar3 = param_1;
    func_0x00010be424e0(param_1,param_2,lVar2);
    if ((int)lVar3 != 0) {
      func_0x00010beb7ea0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106569da4; end: 106569dfb; -[SCChatViewHeader hideNotificationPermissionBannerIfShown] */

void FUN_106569da4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf15ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf15a80(lVar1);
    lVar3 = param_1;
    func_0x00010be424e0(param_1,param_2,lVar2);
    if ((int)lVar3 != 0) {
      func_0x00010be353c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106569dfc; end: 106569e4b; -[SCChatViewHeader hideLocationUpsellBannerIfShown] */

void FUN_106569dfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf15ac0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf15a80(), lVar2 == 3)) {
    func_0x00010be353c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106569e4c; end: 106569e53; -[SCChatViewHeader header] */

undefined8 FUN_106569e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 106569e54; end: 106569e5b; -[SCChatViewHeader backButton] */

undefined8 FUN_106569e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 106569e5c; end: 10656a053; -[SCChatViewHeader .cxx_destruct] */

void FUN_106569e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10656a054; end: 10656a1c7; -[SCChatViewHeaderBanner initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10656a054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1ba8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274a7c8,param_3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a7cc);
    *(undefined **)((long)puVar1 + (long)_DAT_11274a7cc) = puVar2;
    _objc_release(uVar3);
    func_0x00010bead500(puVar1);
    func_0x00010beb0600(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10656a1c8; end: 10656a207;  */

void FUN_10656a1c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10656a208; end: 10656a35f; -[SCChatViewHeaderBanner setViewModel:maxWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656a208(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11274a7d0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  *(ulong *)(param_2 + lVar3) = param_4;
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11274a7d4),param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c233640();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_2 + _DAT_11274a7cc);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_10656a2e0;
  }
  func_0x00010c233640(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274a7cc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
LAB_10656a2e0:
  func_0x00010be46b60(param_2);
  func_0x00010c181140(*(undefined8 *)(param_2 + _DAT_11274a7d8));
  func_0x00010c181140(-dVar4,*(undefined8 *)(param_2 + _DAT_11274a7dc));
  func_0x00010c287860(param_1,param_2);
  param_2 = param_2 + _DAT_11274a7c8;
  _objc_loadWeakRetained(param_2);
  uVar2 = param_4;
  func_0x00010bf15a80(param_4);
  func_0x00010c2a5fa0(param_2,param_3,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10656a360; end: 10656a3a7; -[SCChatViewHeaderBanner updateMaxWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656a360(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010be46b60();
  param_1 = param_1 + dVar1 * -2.0;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1e0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + _DAT_11274a7d4),
             PTR_s_setPreferredMaxLayoutWidth__112655a88);
  return;
}



/* Entry: 10656a3a8; end: 10656a3db; -[SCChatViewHeaderBanner _labelInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10656a3a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274a7d0);
  func_0x00010c233640();
  uVar2 = 0x4046000000000000;
  if (iVar1 == 0) {
    uVar2 = 0x402e000000000000;
  }
  return uVar2;
}



/* Entry: 10656a3dc; end: 10656a403; -[SCChatViewHeaderBanner height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10656a3dc(undefined8 param_1,double param_2,long param_3)

{
  func_0x00010c0699c0(*(undefined8 *)(param_3 + _DAT_11274a7d4));
  return param_2 + 14.0;
}



/* Entry: 10656a404; end: 10656a6ab; -[SCChatViewHeaderBanner _setupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656a404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar8 = (long)_DAT_11274a7d4;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar8),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar8),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8),param_2,
                      &PTR____CFConstantStringClassReference_110e54018);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493c0(0x402e000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11274a7d8;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = uVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493c0(0xc02e000000000000,uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11274a7dc;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = uVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x401c000000000000,uVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  uStack_88 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0xc01c000000000000,uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_1 + lVar9);
  uStack_70 = *(undefined8 *)(param_1 + lVar10);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010bef9040(uVar4,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10656a6ac; end: 10656a6ff; -[SCChatViewHeaderBanner _setupTapGesture] */

void FUN_10656a6ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
  func_0x00010bef9040(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10656a700; end: 10656a9a7; -[SCChatViewHeaderBanner _createDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656a700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__didTapDismiss_112531120,0x40);
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_88 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_80 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_78 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c26e6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar12,0);
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar12 = puVar1;
  func_0x00010c1aab40(puVar1,param_2,0xce,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar12 + _DAT_11274a7c8;
  _objc_loadWeakRetained(puVar1);
  uVar13 = *(undefined8 *)(puVar12 + _DAT_11274a7d0);
  func_0x00010bf15a80(uVar13);
  func_0x00010bf7c9e0(puVar1,param_2,uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10656a9a8; end: 10656a9ff; -[SCChatViewHeaderBanner _didTapDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656a9a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11274a7c8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a7d0);
  func_0x00010bf15a80(uVar2);
  func_0x00010bf7c9e0(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10656aa00; end: 10656aa57; -[SCChatViewHeaderBanner _didTapBanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656aa00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11274a7c8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a7d0);
  func_0x00010bf15a80(uVar2);
  func_0x00010bf7c6a0(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10656aa58; end: 10656aad3; -[SCChatViewHeaderBanner .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656aa58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a7dc,0);
  _objc_storeStrong(param_1 + _DAT_11274a7d8,0);
  _objc_destroyWeak(param_1 + _DAT_11274a7c8);
  _objc_storeStrong(param_1 + _DAT_11274a7d0,0);
  _objc_storeStrong(param_1 + _DAT_11274a7cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a7d4,0);
  return;
}



/* Entry: 10656aad4; end: 10656ab03;  */

void FUN_10656aad4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e54038;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e54038,
                      &PTR____CFConstantStringClassReference_110e54058,0);
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



/* Entry: 10656ab04; end: 10656abaf; -[SCPolaroidOnboardingTooltip initWithParentView:mediaSize:] */

undefined1 *
FUN_10656ab04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010becd1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f1bb0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithView_appearance__11252f058,param_5,uVar1);
  _objc_release(param_5);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c1c5240(param_1,param_2,puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10656abb0; end: 10656abf7; -[SCPolaroidOnboardingTooltip willShow] */

void FUN_10656abb0(undefined8 param_1,double param_2,undefined8 param_3)

{
  func_0x00010c0c6700();
  func_0x00010c0c6700(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c104290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2 * 0.5,param_3,PTR_s_positionAtPoint_trianglePosition_11261eac0,7);
  return;
}



/* Entry: 10656abf8; end: 10656ad07; -[SCPolaroidOnboardingTooltip _tooltipAppearance] */

void FUN_10656abf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c8098;
  _objc_alloc(PTR_PTR_1126c8098);
  puVar2 = puVar1;
  func_0x0001070b05a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051700(0,puVar1,param_2,puVar2,puVar3,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1e0380(0x4067c00000000000,puVar1);
  func_0x00010c213040(puVar1,param_2,0);
  func_0x00010c1ece80(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10656ad08; end: 10656ad1b; -[SCPolaroidOnboardingTooltip mediaSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10656ad08(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a7e0);
}



/* Entry: 10656ad1c; end: 10656ad2f; -[SCPolaroidOnboardingTooltip setMediaSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656ad1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a7e0;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10656ad30; end: 10656ae17; +[SCPolaroidOnboardingTooltipManager lazyManagerWithFeatureSettingsService:] */

void FUN_10656ad30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_38 = 0x10656adc8;
  puStack_30 = &UNK_11092ade0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0b8440(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10656ae18; end: 10656aed3; -[SCPolaroidOnboardingTooltipManager initWithFeatureSettingsService:tooltipImpressions:] */

undefined1 *
FUN_10656ae18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1bb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10656aed4; end: 10656afa7; -[SCPolaroidOnboardingTooltipManager addTooltipWithParentView:mediaSize:] */

void FUN_10656aed4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  if ((param_5 != 0) && ((*(byte *)(param_3 + 0x29) & 1) == 0)) {
    uVar1 = *(ulong *)(param_3 + 8);
    func_0x00010bf4b900(uVar1,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_3 + 8);
      func_0x00010c174bc0(uVar2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = uVar2;
      _objc_release(uVar4);
      uVar2 = *(undefined8 *)(param_3 + 0x10);
      puVar3 = PTR_PTR_1126cb860;
      _objc_alloc(PTR_PTR_1126cb860);
      func_0x00010c033ea0(param_1,param_2);
      func_0x00010bf09f60(uVar2,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = uVar2;
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10656afa8; end: 10656b0cf; -[SCPolaroidOnboardingTooltipManager showTooltips] */

void FUN_10656afa8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
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
  lVar4 = param_1;
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010c235840(*(undefined8 *)(lStack_108 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release();
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010bf529e0();
      lVar4 = 0;
      if (lVar1 != 0) {
        lVar4 = *(long *)(param_1 + 0x18);
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        *(undefined1 *)(param_1 + 0x28) = 1;
        func_0x00010c1df2e0();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar1 = *(long *)(lVar4 + 0x10);
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_220,auStack_1d8,0x10);
  if (lVar4 != 0) {
    lVar5 = *plStack_210;
    do {
      lVar6 = 0;
      do {
        if (*plStack_210 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bfe1560(*(undefined8 *)(lStack_218 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfe2c40();
  *(bool *)(lVar1 + 0x29) = 2 < *(long *)(lVar1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(undefined **)(lVar1 + 8) = puVar3;
  _objc_release(uVar2);
  *(undefined1 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 10656b0d0; end: 10656b1bf; -[SCPolaroidOnboardingTooltipManager hideTooltips] */

void FUN_10656b0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010bfe1560(*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfe2c40();
  *(bool *)(lVar4 + 0x29) = 2 < *(long *)(lVar4 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined **)(lVar4 + 0x10) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar4 + 8);
  *(undefined **)(lVar4 + 8) = puVar3;
  _objc_release(uVar2);
  *(undefined1 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 10656b1c0; end: 10656b22b; -[SCPolaroidOnboardingTooltipManager reset] */

void FUN_10656b1c0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bfe2c40();
  *(bool *)(param_1 + 0x29) = 2 < *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10656b22c; end: 10656b2bf; -[SCPolaroidOnboardingTooltipManager .cxx_destruct] */

void FUN_10656b22c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10656b2c0; end: 10656b78b; -[SCMessageTypeRenderingPluginManager initWithPlugins:activeConversationIdObservable:polaroidViewTransitionResolver:circumstanceEngine:messagingExperimentService:bitmojiAvatarProvider:userId:adConfigProviderV2:] */

undefined8 *
FUN_10656b2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_80 = PTR_PTR_1126f1bc0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    uVar4 = puVar1[8];
    func_0x00010bf870a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_initWeak(auStack_90,puVar1);
    func_0x00010be81d80(puVar1);
    puVar5 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10656b790;
    puStack_a0 = &UNK_11084cac0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10656b7e4;
    puStack_c8 = &UNK_1108429c8;
    _objc_retain(param_7);
    uStack_c0 = param_7;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x10656b840;
    puStack_f0 = &UNK_1108429c8;
    _objc_retain(param_7);
    uStack_e8 = param_7;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_110);
    _objc_release(uStack_e8);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10656b78c; end: 10656b78f;  */

void FUN_10656b78c(void)

{
  return;
}



/* Entry: 10656b790; end: 10656b9a7;  */

void FUN_10656b790(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1fc60();
  func_0x00010c0df6e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10656b9a8; end: 10656bad3; -[SCMessageTypeRenderingPluginManager _processPlugins:activeConversationIdObservable:] */

void FUN_10656b9a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10656badc;
  puStack_68 = &UNK_11092ae70;
  lStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11092ae50,&puStack_80);
  func_0x00010c1ddfe0(param_1);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10656bbb8;
  puStack_98 = &UNK_11092ae70;
  uVar2 = param_3;
  uStack_90 = uVar3;
  lStack_88 = param_1;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11092aea0,&puStack_b0);
  _objc_release(param_3);
  func_0x00010c1c71e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10656bad4; end: 10656badb;  */

void FUN_10656bad4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10656badc; end: 10656bbaf;  */

void FUN_10656badc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5280);
  lVar1 = param_2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c18b5e0(param_2);
  }
  puVar2 = PTR_DAT_1126a5480;
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010010fab4(param_2,puVar2);
  lVar3 = param_2;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(param_2);
  if (lVar3 != 0) {
    func_0x00010c19ee00(param_2);
  }
  func_0x00010c162640(param_2);
  _objc_retain(param_2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10656bbb0; end: 10656bbb7;  */

void FUN_10656bbb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10656bbb8; end: 10656bcdf;  */

void FUN_10656bbb8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5488);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
    func_0x00010c1c7200(param_2);
    uVar2 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_visibleMessageIds_11252e370);
    if ((uVar2 & 1) != 0) {
      func_0x00010c223b40(param_2);
    }
    uVar2 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_messageListScrollObservable_11252e378);
    if ((uVar2 & 1) != 0) {
      func_0x00010c1c6f80(param_2);
    }
    uVar2 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_setMessageVisibilityFractionProv_11264f6b0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x28) + 0x50;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = *(long *)(param_1 + 0x28) + 0x50;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c1c7220(param_2);
        _objc_release(lVar3);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10656bce0; end: 10656bf97; -[SCMessageTypeRenderingPluginManager setUIContainer:multiDirectionUIContainer:presentingViewController:activeConversationInformationObservable:] */

void FUN_10656bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x10656be00;
  puStack_70 = &UNK_11092aec0;
  uStack_68 = param_6;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf97ce0(uVar1,param_2,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10656bf98; end: 10656c033; -[SCMessageTypeRenderingPluginManager setChatScrollHandler:] */

void FUN_10656bf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10656c034;
  puStack_30 = &UNK_11092aef0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c034; end: 10656c09f;  */

void FUN_10656c034(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5498);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c17bd60(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c0a0; end: 10656c21f; -[SCMessageTypeRenderingPluginManager setPlaybackPresenter:operaPresenterDelegate:] */

void FUN_10656c0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10656c168;
  puStack_48 = &UNK_11092af20;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1,param_2,&puStack_60);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c220; end: 10656c2bb; -[SCMessageTypeRenderingPluginManager setInputController:] */

void FUN_10656c220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10656c2bc;
  puStack_30 = &UNK_11092aef0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c2bc; end: 10656c327;  */

void FUN_10656c2bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a54b0);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c1ad2a0(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c328; end: 10656c3c3; -[SCMessageTypeRenderingPluginManager setActionMenuPresenter:] */

void FUN_10656c328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10656c3c4;
  puStack_30 = &UNK_11092aef0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c3c4; end: 10656c42f;  */

void FUN_10656c3c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a54b8);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c161ba0(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c430; end: 10656c4cb; -[SCMessageTypeRenderingPluginManager setChatPresenter:] */

void FUN_10656c430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10656c4cc;
  puStack_30 = &UNK_11092aef0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c4cc; end: 10656c537;  */

void FUN_10656c4cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a54c0);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c17ba60(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656c538; end: 10656c5a3; -[SCMessageTypeRenderingPluginManager pluginForIdentifier:] */

void FUN_10656c538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c101e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10656c5a4; end: 10656cecb; -[SCMessageTypeRenderingPluginManager pluginForMessage:] */

void FUN_10656c5a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4ce20();
  ppuVar10 = &PTR_PTR_110ab5ae0;
  uVar5 = 0;
  uVar6 = uVar3;
  switch((int)uVar4) {
  case 2:
    uVar4 = param_1;
    func_0x00010be44920(param_1,param_2,param_3);
    if ((uVar4 & 1) == 0) {
      uVar4 = param_3;
      func_0x00010bfcbc80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      if (uVar5 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf1f3c0();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          uVar4 = uVar3;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf0e720();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if (uVar6 == 0) goto code_r0x00010656c83c;
        }
        goto code_r0x00010656ce9c;
      }
      ppuVar10 = &PTR_PTR_110ab59e0;
    }
    else {
code_r0x00010656c83c:
      ppuVar10 = &PTR_PTR_110ab5a08;
    }
    break;
  case 3:
    goto code_r0x00010656c980;
  case 4:
    uVar4 = param_3;
    func_0x00010c06d4a0();
    if ((int)uVar4 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfd46e0();
      _objc_release(uVar7);
      if ((int)uVar8 == 0) {
        ppuVar10 = &PTR_PTR_110ab5a00;
        break;
      }
    }
    uVar4 = uVar3;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2544c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 2) {
code_r0x00010656c8ac:
      ppuVar10 = &PTR_PTR_110ab5b40;
      break;
    }
    goto code_r0x00010656ce9c;
  case 5:
    uVar4 = uVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c22ac80();
    _objc_release(uVar4);
    uVar5 = 0;
    ppuVar10 = &PTR_PTR_110ab59f0;
    switch((int)uVar6) {
    case 1:
      ppuVar10 = &PTR_PTR_110ab5b00;
      break;
    case 2:
    case 3:
    case 6:
    case 9:
    case 10:
    case 0xc:
    case 0x11:
    case 0x13:
      break;
    default:
      goto LAB_10656cea0;
    case 5:
      ppuVar10 = &PTR_PTR_110ab5a80;
      break;
    case 7:
      uVar4 = param_3;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bfdc580();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      ppuVar10 = &PTR_PTR_110ab5b10;
      if ((int)uVar9 == 0) {
        ppuVar10 = &PTR_PTR_110ab59c0;
      }
      break;
    case 8:
    case 0x1b:
      ppuVar10 = &PTR_PTR_110ab5ae8;
      break;
    case 0xb:
      ppuVar10 = &PTR_PTR_110ab5b30;
      break;
    case 0xd:
      ppuVar10 = &PTR_PTR_110ab5b60;
      break;
    case 0xe:
      ppuVar10 = &PTR_PTR_110ab5a40;
      break;
    case 0xf:
      ppuVar10 = &PTR_PTR_110ab5b38;
      break;
    case 0x10:
      ppuVar10 = &PTR_PTR_110ab59d8;
      break;
    case 0x12:
      ppuVar10 = &PTR_PTR_110ab5a30;
      break;
    case 0x14:
      ppuVar10 = &PTR_PTR_110ab5a70;
      break;
    case 0x15:
      ppuVar10 = &PTR_PTR_110ab5a68;
      break;
    case 0x16:
      ppuVar10 = &PTR_PTR_110ab5a50;
      break;
    case 0x17:
      ppuVar10 = &PTR_PTR_110ab5a88;
      break;
    case 0x18:
      ppuVar10 = &PTR_PTR_110ab5a90;
      break;
    case 0x19:
      ppuVar10 = &PTR_PTR_110ab5ac0;
      break;
    case 0x1a:
      uVar4 = uVar3;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bef4f80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bef4fc0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar5 = 0;
      uVar2 = (int)uVar6 - 1;
      if ((4 < uVar2) || ((0x1bU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto LAB_10656cea0;
      ppuVar10 = (undefined **)(&PTR_PTR_11092afa8)[uVar2];
      break;
    case 0x1c:
      ppuVar10 = &PTR_PTR_110ab5b20;
      break;
    case 0x1d:
      ppuVar10 = &PTR_PTR_110ab5b48;
      break;
    case 0x1e:
      ppuVar10 = &PTR_PTR_110ab5b50;
      break;
    case 0x1f:
      ppuVar10 = &PTR_PTR_110ab5b90;
      break;
    case 0x20:
      ppuVar10 = &PTR_PTR_110ab5b98;
      break;
    case 0x21:
      ppuVar10 = &PTR_PTR_110ab5ba0;
      break;
    case 0x23:
      ppuVar10 = &PTR_PTR_110ab5bb8;
      break;
    case 0x24:
      ppuVar10 = &PTR_PTR_110ab5bc0;
      break;
    case 0x25:
      ppuVar10 = &PTR_PTR_110ab5be0;
      break;
    case 0x26:
      ppuVar10 = &PTR_PTR_110ab5bf0;
      break;
    case 0x27:
      uVar4 = uVar3;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d4e00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c27dd80();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar6 - 1U < 2) {
        ppuVar10 = &PTR_PTR_110ab5bf8;
      }
      else {
        if ((int)uVar6 == 0) goto code_r0x00010656ce9c;
        ppuVar10 = &PTR_PTR_110ab5b78;
      }
      break;
    case 0x28:
      ppuVar10 = &PTR_PTR_110ab5ba8;
    }
    break;
  case 6:
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0dbae0();
    uVar2 = (uint)uVar4;
code_r0x00010656c7f8:
    _objc_release(uVar6);
    if (2 < uVar2) goto code_r0x00010656ce9c;
    ppuVar10 = (undefined **)(&PTR_PTR_11092af90)[uVar2];
    break;
  case 7:
    uVar4 = uVar3;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c131be0();
    _objc_release(uVar4);
    uVar5 = 0;
    iVar11 = (int)uVar9;
    if (0xc < iVar11) {
      if (0x10 < iVar11) {
        if (iVar11 == 0x11) goto code_r0x00010656c9d0;
        if (iVar11 != 0x17) goto LAB_10656cea0;
        ppuVar10 = &PTR_PTR_110ab5b68;
        break;
      }
      if (iVar11 != 0xd) {
        if (iVar11 != 0xf) goto LAB_10656cea0;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0dbae0();
        uVar2 = (uint)uVar5;
        _objc_release(uVar4);
        goto code_r0x00010656c7f8;
      }
      uVar4 = uVar3;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c132140();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2544c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar6 != 2) goto code_r0x00010656ce9c;
      goto code_r0x00010656c8ac;
    }
    if (iVar11 == 0) goto code_r0x00010656c618;
    if (iVar11 == 0xb) goto code_r0x00010656c83c;
    if (iVar11 != 0xc) goto LAB_10656cea0;
code_r0x00010656c980:
    uVar4 = param_3;
    func_0x00010c0c72c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be41cc0(param_1,param_2,uVar4);
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) {
      ppuVar10 = &PTR_PTR_110ab5a20;
      break;
    }
    goto code_r0x00010656ce9c;
  case 8:
    uVar4 = uVar3;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c2533e0();
    _objc_release(uVar4);
    uVar5 = 0;
    ppuVar10 = &PTR_PTR_110ab5a28;
    switch((int)uVar6) {
    case 1:
      uVar4 = uVar3;
      func_0x00010c253320();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c150ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf31900();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar6 != 2) goto code_r0x00010656ce9c;
      ppuVar10 = &PTR_PTR_110ab5a60;
      break;
    case 2:
      uVar4 = param_3;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c253320();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf288c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf28320();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar9 == 4) {
        ppuVar10 = &PTR_PTR_110ab59c8;
      }
      else {
        if ((int)uVar9 != 1) goto code_r0x00010656ce9c;
        ppuVar10 = &PTR_PTR_110ab59d0;
      }
      break;
    case 3:
      uVar4 = param_1;
      func_0x00010be3f680(param_1,param_2,uVar3);
      if ((uVar4 & 1) == 0) goto code_r0x00010656ce9c;
    case 6:
      ppuVar10 = &PTR_PTR_110ab5a48;
      break;
    default:
      goto LAB_10656cea0;
    case 8:
      ppuVar10 = &PTR_PTR_110ab5a18;
      break;
    case 9:
    case 0xc:
    case 0xd:
    case 0x17:
    case 0x1e:
      goto code_r0x00010656c618;
    case 0x11:
      break;
    case 0x13:
      ppuVar10 = &PTR_PTR_110ab5a38;
      break;
    case 0x14:
      ppuVar10 = &PTR_PTR_110ab5a58;
      break;
    case 0x15:
      ppuVar10 = &PTR_PTR_110ab5a78;
      break;
    case 0x16:
      ppuVar10 = &PTR_PTR_110ab5a98;
      break;
    case 0x18:
      uVar4 = uVar3;
      func_0x00010c253320();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c242600();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c253560();
      if ((int)uVar6 == 2) {
        uVar9 = *(ulong *)(param_1 + 0x78);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010bf1f3c0();
        _objc_release(uVar9);
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) == 0) goto code_r0x00010656ce9c;
      }
      else {
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      ppuVar10 = &PTR_PTR_110ab5ab8;
      break;
    case 0x19:
      ppuVar10 = &PTR_PTR_110ab5af0;
      break;
    case 0x1c:
      ppuVar10 = &PTR_PTR_110ab5b58;
      break;
    case 0x1d:
      ppuVar10 = &PTR_PTR_110ab5b70;
      break;
    case 0x1f:
      uVar5 = *(ulong *)(param_1 + 0x70);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) goto code_r0x00010656ce9c;
      ppuVar10 = &PTR_PTR_110ab5bd8;
      break;
    case 0x20:
      uVar4 = uVar3;
      func_0x00010c253320();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c09f740();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c253560();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (1 < (int)uVar6 - 1U) goto code_r0x00010656ce9c;
      ppuVar10 = &PTR_PTR_110ab5bc8;
      break;
    case 0x21:
      ppuVar10 = &PTR_PTR_110ab5be8;
      break;
    case 0x22:
      uVar5 = *(ulong *)(param_1 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) goto code_r0x00010656ce9c;
      ppuVar10 = &PTR_PTR_110ab5c08;
    }
    break;
  case 9:
    uVar4 = uVar3;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c09f160();
    _objc_release(uVar4);
    if ((int)uVar5 != 2) goto code_r0x00010656ce9c;
  case 0xc:
  case 0xd:
  case 0x17:
  case 0x19:
code_r0x00010656c618:
    ppuVar10 = &PTR_PTR_110ab59f0;
    break;
  default:
    goto LAB_10656cea0;
  case 0xb:
code_r0x00010656c9d0:
    uVar4 = param_1;
    func_0x00010be41ee0(param_1,param_2,param_3);
    if ((uVar4 & 1) == 0) goto code_r0x00010656ce9c;
    ppuVar10 = &PTR_PTR_110ab5aa8;
    break;
  case 0xe:
    uVar4 = uVar3;
    func_0x000107d5ee3c();
    if ((uVar4 & 1) == 0) goto code_r0x00010656ce9c;
    ppuVar10 = &PTR_PTR_110ab5b80;
    break;
  case 0xf:
    ppuVar10 = &PTR_PTR_110ab5a10;
    break;
  case 0x12:
    ppuVar10 = &PTR_PTR_110ab5ad8;
    break;
  case 0x13:
    break;
  case 0x14:
    ppuVar10 = &PTR_PTR_110ab5af8;
    break;
  case 0x15:
    ppuVar10 = &PTR_PTR_110ab5b18;
    break;
  case 0x16:
    ppuVar10 = &PTR_PTR_110ab5b28;
    break;
  case 0x18:
    uVar4 = param_3;
    func_0x00010bfd5120();
    lVar1 = 0x1f0;
    if ((int)uVar4 == 0) {
      lVar1 = 0x210;
    }
    ppuVar10 = (undefined **)((long)&PTR_PTR_110ab59c0 + lVar1);
    break;
  case 0x1a:
    uVar5 = *(ulong *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((uVar4 & 1) == 0) goto code_r0x00010656ce9c;
    ppuVar10 = &PTR_PTR_110ab5c00;
  }
  puVar12 = *ppuVar10;
  _objc_retain(puVar12);
  if (puVar12 == (undefined *)0x0) {
code_r0x00010656ce9c:
    uVar5 = 0;
  }
  else {
    func_0x00010c101ba0(param_1,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar5 = param_1;
  }
LAB_10656cea0:
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10656cecc; end: 10656d3f3; -[SCMessageTypeRenderingPluginManager pluginForQuotedMessage:isPreview:] */

/* WARNING: Removing unreachable block (ram,0x00010656cf20) */

void FUN_10656cecc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c07fd80();
  if (((param_4 & 1) == 0) && ((int)uVar3 != 0)) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110e34ef8;
    _objc_retain(&PTR____CFConstantStringClassReference_110e34ef8);
    goto LAB_10656d338;
  }
  uVar3 = param_3;
  func_0x00010c06e660();
  if (((param_4 & 1) == 0) && ((int)uVar3 == 0)) goto LAB_10656d394;
  if ((param_4 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar4;
  func_0x00010bf4ce20();
  ppuVar10 = (undefined **)0x0;
  switch((int)uVar3) {
  case 2:
code_r0x00010656cfc0:
    ppuVar10 = &PTR____CFConstantStringClassReference_110eeb978;
    break;
  case 3:
code_r0x00010656d2ac:
    ppuVar10 = &PTR____CFConstantStringClassReference_110eeb9d8;
    break;
  case 4:
    uVar3 = uVar4;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c2544c0();
    _objc_release(uVar3);
    uVar2 = (int)uVar6 - 1;
    if (uVar2 < 3) {
      ppuVar10 = *(undefined ***)(&PTR_PTR_11092afd0)[uVar2];
      _objc_retain(ppuVar10);
    }
    else {
      ppuVar10 = (undefined **)0x0;
    }
  case 5:
    uVar3 = uVar4;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c22ac80();
    _objc_release(uVar3);
    iVar9 = (int)uVar6;
    if (iVar9 < 0x10) {
      if (iVar9 < 8) {
        if (iVar9 != 5) {
          if (iVar9 == 7) {
            uVar3 = uVar4;
            func_0x00010c22a700();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c290fa0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010bfdc580();
            _objc_release(uVar6);
            _objc_release(uVar3);
            if ((int)uVar5 != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110eebd18;
              goto code_r0x00010656d318;
            }
          }
          goto LAB_10656d32c;
        }
        ppuVar11 = &PTR____CFConstantStringClassReference_110eebb38;
      }
      else if (iVar9 == 8) {
code_r0x00010656d258:
        ppuVar11 = &PTR____CFConstantStringClassReference_110eebc78;
      }
      else {
        if (iVar9 != 0xe) goto LAB_10656d32c;
        ppuVar11 = &PTR____CFConstantStringClassReference_110eeba38;
      }
    }
    else if (iVar9 < 0x1b) {
      if (iVar9 == 0x10) {
        ppuVar11 = &PTR____CFConstantStringClassReference_110eeb8b8;
      }
      else {
        if (iVar9 != 0x18) goto LAB_10656d32c;
        ppuVar11 = &PTR____CFConstantStringClassReference_110e34dd8;
      }
    }
    else {
      if (iVar9 == 0x1b) goto code_r0x00010656d258;
      if (iVar9 != 0x28) goto LAB_10656d32c;
      ppuVar11 = &PTR____CFConstantStringClassReference_110eebf58;
    }
code_r0x00010656d318:
    _objc_retain(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar11;
    goto LAB_10656d32c;
  case 6:
    uVar3 = uVar4;
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0dbae0();
    _objc_release(uVar3);
    iVar9 = (int)uVar6;
joined_r0x00010656d064:
    if (iVar9 == 1) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110eeb938;
      break;
    }
code_r0x00010656d2bc:
    ppuVar10 = (undefined **)0x0;
    goto LAB_10656d32c;
  case 7:
    uVar3 = uVar4;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c131be0();
    _objc_release(uVar3);
    ppuVar10 = (undefined **)0x0;
    iVar9 = (int)uVar6;
    if (iVar9 < 0xd) {
      if (iVar9 == 0) {
code_r0x00010656d3d4:
        ppuVar10 = &PTR____CFConstantStringClassReference_110eeb918;
        break;
      }
      if (iVar9 == 0xb) goto code_r0x00010656cfc0;
      if (iVar9 == 0xc) {
        uVar3 = param_3;
        func_0x00010c0c72c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_1;
        func_0x00010be41cc0();
        _objc_release(uVar3);
        if ((int)lVar8 == 0) goto code_r0x00010656d2bc;
        goto code_r0x00010656d2ac;
      }
    }
    else if (iVar9 < 0x11) {
      if (iVar9 == 0xd) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110eebcf8;
        break;
      }
      if (iVar9 == 0xf) {
        uVar3 = uVar4;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0dbae0();
        _objc_release(uVar6);
        _objc_release(uVar3);
        iVar9 = (int)uVar5;
        if ((iVar9 == 0) || (iVar9 == 2)) goto code_r0x00010656d3d4;
        goto joined_r0x00010656d064;
      }
    }
    else {
      if (iVar9 == 0x11) goto code_r0x00010656d2e4;
      if (iVar9 == 0x17) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110eebe78;
        break;
      }
    }
  default:
    goto LAB_10656d32c;
  case 0xb:
code_r0x00010656d2e4:
    ppuVar10 = &PTR____CFConstantStringClassReference_110eebb98;
    break;
  case 0xe:
    uVar3 = uVar4;
    func_0x000107d5ee3c();
    if ((int)uVar3 == 0) goto code_r0x00010656d2bc;
    ppuVar10 = &PTR____CFConstantStringClassReference_110eebed8;
    break;
  case 0x13:
    ppuVar10 = &PTR____CFConstantStringClassReference_110eebc58;
    break;
  case 0x1a:
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf1f3c0();
    _objc_release(uVar6);
    if ((int)uVar3 == 0) goto code_r0x00010656d2bc;
    ppuVar10 = &PTR____CFConstantStringClassReference_110eec0b8;
  }
  _objc_retain(ppuVar10);
LAB_10656d32c:
  _objc_release(uVar4);
  if (ppuVar10 == (undefined **)0x0) {
LAB_10656d394:
    lVar8 = 0;
  }
  else {
LAB_10656d338:
    lVar8 = param_1;
    func_0x00010c101ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010010fab4();
    lVar1 = lVar8;
    if ((int)lVar7 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar8);
    if ((lVar1 == 0) || (func_0x00010be43120(), (int)param_1 == 0)) {
      lVar8 = 0;
    }
    else {
      _objc_retain(lVar8);
    }
    _objc_release(lVar1);
    _objc_release(ppuVar10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10656d3f4; end: 10656d4c7; -[SCMessageTypeRenderingPluginManager contextualHeaderProvidingPluginForMessage:] */

void FUN_10656d3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c101c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    func_0x00010c101bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010010fab4();
    lVar2 = param_1;
    if ((int)lVar3 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10656d4c8; end: 10656d5e7; -[SCMessageTypeRenderingPluginManager forwardablePluginForMessage:] */

void FUN_10656d4c8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010010fab4();
  lVar3 = lVar1;
  if ((int)lVar6 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  lVar6 = lVar1;
  if (lVar3 != 0) goto LAB_10656d5c0;
  uVar2 = param_3;
  func_0x00010c07fa00();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c080dc0();
    if ((uVar2 & 1) != 0) {
      ppuVar4 = &PTR_PTR_110ab5a08;
      goto LAB_10656d568;
    }
    uVar2 = param_3;
    func_0x00010c07ea80();
    if ((int)uVar2 != 0) {
      ppuVar4 = &PTR_PTR_110ab5aa8;
      goto LAB_10656d568;
    }
  }
  else {
    ppuVar4 = &PTR_PTR_110ab5b08;
LAB_10656d568:
    puVar5 = *ppuVar4;
    _objc_retain(puVar5);
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c101ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010010fab4();
      lVar6 = param_1;
      if ((int)lVar3 == 0) {
        lVar6 = 0;
      }
      _objc_retain(lVar6);
      _objc_release(param_1);
      _objc_release(puVar5);
      goto LAB_10656d5c0;
    }
  }
  lVar6 = 0;
LAB_10656d5c0:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10656d5e8; end: 10656d71b; -[SCMessageTypeRenderingPluginManager remixablePluginForMessage:] */

void FUN_10656d5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010010fab4();
  lVar5 = lVar1;
  if ((int)lVar6 == 0) {
    lVar5 = 0;
  }
  _objc_retain(lVar5);
  lVar6 = lVar1;
  if (lVar5 == 0) {
    uVar2 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22ac80();
    _objc_release(uVar3);
    if ((int)uVar4 == 5) {
      _objc_retain(&PTR____CFConstantStringClassReference_110eebb38);
      func_0x00010c101ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010010fab4();
      lVar6 = param_1;
      if ((int)lVar5 == 0) {
        lVar6 = 0;
      }
      _objc_retain(lVar6);
      _objc_release(param_1);
      _objc_release(&PTR____CFConstantStringClassReference_110eebb38);
    }
    else {
      lVar6 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10656d71c; end: 10656d79b; -[SCMessageTypeRenderingPluginManager canMessageBeQuoted:] */

long FUN_10656d71c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be43120(param_1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10656d79c; end: 10656d7f3; -[SCMessageTypeRenderingPluginManager shouldWrapWithBubble:] */

undefined8 FUN_10656d79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c081260();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be3f320(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10656d7f4; end: 10656d833; -[SCMessageTypeRenderingPluginManager dataDidUpdateForPlugin:] */

void FUN_10656d7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656d834; end: 10656d8bb; -[SCMessageTypeRenderingPluginManager pluginForwardableStatusHasChanged:] */

void FUN_10656d834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a54e0);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0d9840(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656d8bc; end: 10656d94f; -[SCMessageTypeRenderingPluginManager dismissPresentedViews] */

void FUN_10656d8bc(undefined8 param_1)

{
  func_0x00010c101e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656d950; end: 10656d977; -[SCMessageTypeRenderingPluginManager updatesObservable] */

void FUN_10656d950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10656d978; end: 10656da73; -[SCMessageTypeRenderingPluginManager _isMessageEligibleForSnapPlugin:] */

undefined8 FUN_10656d978(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07ea80();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c0791c0(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
    if ((uVar1 & 1) != 0) {
LAB_10656d9b8:
      uVar5 = 1;
      goto LAB_10656d9fc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c06e5a0(uVar5,param_2,param_3);
    if ((int)uVar5 != 0) {
      uVar1 = param_3;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0c6c20();
      if (uVar2 == 0) {
        uVar3 = *(ulong *)(param_1 + 0x68);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf1f3c0();
        _objc_release(uVar3);
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) goto LAB_10656d9b8;
      }
      else {
        _objc_release(uVar1);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      goto LAB_10656d9fc;
    }
  }
  uVar5 = 0;
LAB_10656d9fc:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10656da74; end: 10656daef; -[SCMessageTypeRenderingPluginManager _isMediaEligibleForChatMediaPlugin:] */

bool FUN_10656da74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    uVar2 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c6c20();
    _objc_release(uVar2);
    bVar1 = uVar3 != 3;
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}


