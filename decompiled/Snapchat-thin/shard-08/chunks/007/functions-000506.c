/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10657c8c8; end: 10657c90b; -[SCChatInputTextView _canPasteFromPasteboard] */

ulong FUN_10657c8c8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bdd9cc0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010bdd9c80(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd9cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__canPasteVideo_1125540d8);
    return param_1;
  }
  return 1;
}



/* Entry: 10657c90c; end: 10657c97f; -[SCChatInputTextView toggleItalics:] */

void FUN_10657c90c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bfe2300(param_1);
  func_0x00010c159e80(param_1);
  if (param_2 != 0) {
    puStack_28 = PTR_PTR_1126f1c20;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_toggleItalics__1125311d0,param_3);
  }
  func_0x00010beb9d60(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10657c980; end: 10657c9bb; -[SCChatInputTextView toggleBoldface:] */

void FUN_10657c980(undefined8 param_1)

{
  func_0x00010bfe2300();
  func_0x00010c159e80(param_1);
  func_0x00010becca20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showMenu_11258c100);
  return;
}



/* Entry: 10657c9bc; end: 10657ca2f; -[SCChatInputTextView toggleUnderline:] */

void FUN_10657c9bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bfe2300(param_1);
  func_0x00010c159e80(param_1);
  if (param_2 != 0) {
    puStack_28 = PTR_PTR_1126f1c20;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_toggleUnderline__1125311d8,param_3);
  }
  func_0x00010beb9d60(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10657ca30; end: 10657cb3b; -[SCChatInputTextView _toggleBoldfaceForRange:] */

void FUN_10657ca30(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c159e80();
  if (param_2 != 0) {
    uVar1 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    _objc_retain(uVar2);
    func_0x00010bf97b00(uVar2);
    uVar1 = uVar2;
    func_0x00010bf51e00(uVar2);
    func_0x00010c16b720(param_1);
    _objc_release(uVar1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10657cb3c; end: 10657cba7;  */

void FUN_10657cb3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010becd020(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bef6f20(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10657cba8; end: 10657cc27; -[SCChatInputTextView _toggledBoldFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657cba8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c06d720();
  if ((int)lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11274a9ec);
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bf1ee00(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10657cbf8;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_11274a9e0);
  }
  _objc_retain(lVar1);
LAB_10657cbf8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10657cc28; end: 10657cc67; -[SCChatInputTextView hideMenu] */

void FUN_10657cc28(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIMenuController_1126cb8e8;
  func_0x00010c22bc60(PTR__OBJC_CLASS___UIMenuController_1126cb8e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10657cc68; end: 10657ccb3; -[SCChatInputTextView _showMenu] */

void FUN_10657cc68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIMenuController_1126cb8e8;
  func_0x00010c22bc60(PTR__OBJC_CLASS___UIMenuController_1126cb8e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5f5a0(param_1);
  func_0x00010c238680(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10657ccb4; end: 10657cd83; -[SCChatInputTextView _menuFrame] */

undefined8 FUN_10657ccb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf323a0(param_2,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c15a1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf323a0(param_2,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10657cd84; end: 10657ce03; -[SCChatInputTextView setFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657cd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a9e0);
  *(undefined8 *)(param_1 + _DAT_11274a9e0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f1c20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setFont__112645340,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10657ce04; end: 10657ce83; -[SCChatInputTextView setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ce04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a9e4);
  *(undefined8 *)(param_1 + _DAT_11274a9e4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f1c20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setTextColor__112662688,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10657ce84; end: 10657cfb7; -[SCChatInputTextView canPerformAction:withSender:] */

undefined1 * FUN_10657ce84(undefined1 *param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_40;
  _objc_retain(param_4);
  func_0x00010c159e80(param_1);
  if ((param_2 == 0) && (param_3 == PTR_s_selectAll__112633bd0)) {
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c08fa60();
    _objc_release(param_1);
    puVar1 = (undefined1 *)(ulong)(puVar1 != (undefined1 *)0x0);
  }
  else if ((param_3 == PTR_s_toggleItalics__1125311d0 || param_3 == PTR_s_toggleBoldface__1125311e0)
           || param_3 == PTR_s_toggleUnderline__1125311d8) {
    func_0x00010c159e80(param_1);
    puVar1 = (undefined1 *)(ulong)(param_2 != 0);
  }
  else if (param_3 == PTR_s_paste__11252ff78) {
    func_0x00010bdd9c60(param_1);
    puVar1 = param_1;
  }
  else {
    puVar1 = (undefined1 *)0x0;
    if ((param_3 != PTR_s_makeTextWritingDirectionLeftToRi_1125311e8) &&
       (param_3 != PTR_s_makeTextWritingDirectionRightToL_1125311f0)) {
      puStack_38 = PTR_PTR_1126f1c20;
      puStack_40 = param_1;
      _objc_msgSendSuper2(&puStack_40,PTR_s_canPerformAction_withSender__1125311f8,param_3,param_4);
      puVar1 = (undefined1 *)ppuVar2;
    }
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10657cfb8; end: 10657d133; -[SCChatInputTextView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10657cfb8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  plVar7 = &lStack_60;
  if ((*(byte *)(param_1 + _DAT_11274a9f0) & 1) == 0) {
    iVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar5 != 0) {
      lVar6 = (long)_DAT_11274a9dc;
      uVar1 = *(ulong *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf8f900();
      _objc_release(uVar1);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf8f920();
      _objc_release(uVar3);
      iVar5 = (int)uVar4;
      if (((uVar2 & 1) != 0) || (iVar5 != 0)) {
        if (iVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = param_1;
          func_0x00010c0f5640(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d97a0(param_1);
        }
        if ((int)uVar2 != 0) {
          func_0x00010c2633a0(param_1);
          func_0x00010c20ffc0(param_1);
        }
        puStack_48 = PTR_PTR_1126f1c20;
        plVar7 = &lStack_50;
        lStack_50 = param_1;
        _objc_msgSendSuper2(plVar7,PTR_s_becomeFirstResponder_1125a3810);
        if ((int)uVar2 != 0) {
          func_0x00010c20ffc0(param_1);
        }
        if (iVar5 != 0) {
          func_0x00010c1d97a0(param_1);
        }
        _objc_release(lVar6);
        return plVar7;
      }
    }
    puStack_58 = PTR_PTR_1126f1c20;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_becomeFirstResponder_1125a3810);
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}



/* Entry: 10657d134; end: 10657d167; -[SCChatInputTextView resignFirstResponder] */

void FUN_10657d134(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1c20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 10657d168; end: 10657d32b; -[SCChatInputTextView restoreDefaultAttributesInRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d168(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  lVar3 = param_3;
  if (param_4 != 0) {
    lVar3 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0d3c80();
    _objc_release(lVar3);
    func_0x00010c08fa60(lVar1);
    lVar5 = lVar1;
    func_0x00010c08fa60(lVar1);
    lVar3 = 0;
    _NSIntersectionRange(param_3,param_4,0,lVar5);
    if (param_4 != 0) {
      lVar5 = *(long *)(param_1 + _DAT_11274a9e0);
      if (lVar5 == 0) {
        lVar5 = param_1;
        func_0x00010bfb3a80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar5);
      }
      puVar7 = *(undefined **)(param_1 + _DAT_11274a9e4);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar7);
      }
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f40(lVar1);
      _objc_release(puVar2);
      lVar6 = lVar1;
      func_0x00010bf51e00();
      lVar3 = lVar6;
      func_0x00010c16b720(param_1);
      _objc_release(lVar6);
      _objc_release(puVar7);
      _objc_release(lVar5);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c102de0(*(undefined8 *)(lVar1 + _DAT_11274a9e0));
  lVar4 = lVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d3c80();
  _objc_release(lVar4);
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_10657d57c;
  uStack_e0 = 0x10657d58c;
  uStack_d8 = 0;
  func_0x00010c08fa60(lVar5);
  _objc_retain(lVar5);
  func_0x00010bf97b00(lVar5);
  lVar4 = lVar5;
  func_0x00010bf51e00(lVar5);
  func_0x00010c16b720(lVar1);
  _objc_release(lVar4);
  if ((int)lVar3 != 0) {
    lVar6 = puStack_f8[5];
    lVar4 = lVar6;
    if (lVar6 == 0) {
      lVar3 = lVar1;
      func_0x00010c279540(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010657d94c();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c19e480(lVar1);
    if (lVar6 == 0) {
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar5);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  _objc_release(lVar5);
  return;
}



/* Entry: 10657d32c; end: 10657d57b; -[SCChatInputTextView scaleFont:isEdit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d32c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c102de0(*(undefined8 *)(param_1 + _DAT_11274a9e0));
  lVar1 = param_1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10657d57c;
  uStack_60 = 0x10657d58c;
  uStack_58 = 0;
  func_0x00010c08fa60(lVar2);
  _objc_retain(lVar2);
  func_0x00010bf97b00(lVar2);
  lVar1 = lVar2;
  func_0x00010bf51e00(lVar2);
  func_0x00010c16b720(param_1);
  _objc_release(lVar1);
  if ((int)param_3 != 0) {
    lVar3 = puStack_78[5];
    lVar1 = lVar3;
    if (lVar3 == 0) {
      param_3 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010657d94c();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c19e480(param_1);
    if (lVar3 == 0) {
      _objc_release(lVar1);
      _objc_release(param_3);
    }
  }
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(lVar2);
  return;
}



/* Entry: 10657d57c; end: 10657d593;  */

void FUN_10657d57c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10657d594; end: 10657d63b;  */

void FUN_10657d594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb3f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb41a0(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bef6f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addAttribute_value_range__11259b570,
             *(undefined8 *)PTR__NSFontAttributeName_1103457f0,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_3,param_4);
  return;
}



/* Entry: 10657d63c; end: 10657d64b; -[SCChatInputTextView boldFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657d63c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a9ec);
}



/* Entry: 10657d64c; end: 10657d68b; -[SCChatInputTextView setBoldFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a9ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657d68c; end: 10657d69b; -[SCChatInputTextView demiBoldFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657d68c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a9f4);
}



/* Entry: 10657d69c; end: 10657d6db; -[SCChatInputTextView setDemiBoldFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a9f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657d6dc; end: 10657d6fb; -[SCChatInputTextView textViewPasteDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d6dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a9e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10657d6fc; end: 10657d70f; -[SCChatInputTextView setTextViewPasteDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a9e8,param_3);
  return;
}



/* Entry: 10657d710; end: 10657d71f; -[SCChatInputTextView shouldBlockFirstResponderChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10657d710(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a9f0);
}



/* Entry: 10657d720; end: 10657d72f; -[SCChatInputTextView setShouldBlockFirstResponderChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d720(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a9f0) = param_3;
  return;
}



/* Entry: 10657d730; end: 10657d80f; -[SCChatInputTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657d730(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274a9e8);
  _objc_storeStrong(param_1 + _DAT_11274a9f4,0);
  _objc_storeStrong(param_1 + _DAT_11274a9ec,0);
  _objc_storeStrong(param_1 + _DAT_11274a9dc,0);
  _objc_storeStrong(param_1 + _DAT_11274a9e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a9e0,0);
  return;
}



/* Entry: 10657d810; end: 10657d8e7;  */

void FUN_10657d810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c279600(puVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279660(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_10657d810();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d6c0(0x4031000000000000,0,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                        *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10657d8e8; end: 10657d9af;  */

void FUN_10657d8e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_10657d810();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d6c0(0x4031000000000000,0,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10657d9b0; end: 10657d9ff;  */

undefined8 FUN_10657d9b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _UIContentSizeCategoryIsAccessibilityCategory();
  uVar2 = 0x4032000000000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0x402e000000000000;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10657da00; end: 10657dacf; -[SCChatInputTextViewContainer initWithCircumstanceEngine:displaySnapchatPlusBorder:messagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10657da00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1c28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274aa04;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274aa08) = param_4;
    lVar3 = (long)_DAT_11274aa0c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10657dad0; end: 10657db2f; -[SCChatInputTextViewContainer updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657dad0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1c28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_updateConstraints_11267ec30);
  if ((*(byte *)(param_1 + _DAT_11274a9f8) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274a9f8) = 1;
    func_0x00010bde69a0(param_1);
  }
  return;
}



/* Entry: 10657db30; end: 10657db6f; -[SCChatInputTextViewContainer _setupViews] */

void FUN_10657db30(undefined8 param_1)

{
  func_0x00010beb1160();
  func_0x00010beaee00(param_1);
  func_0x00010beb0700(param_1);
  func_0x00010beafe60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1ad9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setInsetsLayoutMarginsFromSafeAr_112649090,0)
  ;
  return;
}



/* Entry: 10657db70; end: 10657dc6b; -[SCChatInputTextViewContainer _setupView] */

void FUN_10657db70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_2,param_3,puVar1);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10657d9b0();
  func_0x00010c18e200(0x4020000000000000,param_1,0x4020000000000000,0x402e000000000000,param_2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xe2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10657dc6c; end: 10657debb; -[SCChatInputTextViewContainer _setupTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657dc6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cb8f0;
  _objc_alloc();
  func_0x00010c02b980();
  lVar5 = (long)_DAT_11274aa10;
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1f7b20(*(undefined8 *)(param_2 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar5));
  lVar2 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010657d94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_2 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c165e00(*(undefined8 *)(param_2 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar5));
  _objc_release(puVar1);
  lVar2 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010657d7ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172de0(*(undefined8 *)(param_2 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010657d8e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18bc00(*(undefined8 *)(param_2 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10657d9b0();
  lVar3 = param_2;
  func_0x00010b8166c0();
  uVar7 = param_1;
  uVar4 = 0x402e000000000000;
  if ((int)lVar3 == 0) {
    uVar7 = 0x402e000000000000;
    uVar4 = param_1;
  }
  dVar6 = 8.0;
  func_0x00010c2131e0(0x4020000000000000,uVar4,0x4020000000000000,uVar7,
                      *(undefined8 *)(param_2 + lVar5));
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c26ba00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  _objc_release(uVar4);
  func_0x00010c2025c0(*(undefined8 *)(param_2 + lVar5));
  func_0x00010c2026e0(*(undefined8 *)(param_2 + lVar5));
  func_0x00010befbb60(param_2);
  func_0x00010bdd8aa0(param_2);
  *(double *)(param_2 + _DAT_11274aa14) = dVar6;
  lVar2 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar6 * 0.5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beb0730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupTextViewBorderLayer_112589b70);
  return;
}



/* Entry: 10657debc; end: 10657dfbf; -[SCChatInputTextViewContainer _setupPlaceholderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657debc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar5 = (long)_DAT_11274aa18;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010657d94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 10657dfc0; end: 10657e01f; -[SCChatInputTextViewContainer _setupStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657dfc0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb890;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274aa1c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10657e020; end: 10657e04b; -[SCChatInputTextViewContainer _constructConstraints] */

void FUN_10657e020(undefined8 param_1)

{
  func_0x00010bde7080();
  func_0x00010bde6c40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constructStackViewConstraints_1125575a0);
  return;
}



/* Entry: 10657e04c; end: 10657e277; -[SCChatInputTextViewContainer _constructTextViewConstraints] */

/* WARNING: Possible PIC construction at 0x00010657e0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010657e1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010657e23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010657e1e0) */
/* WARNING: Removing unreachable block (ram,0x00010657e0bc) */
/* WARNING: Removing unreachable block (ram,0x00010657e240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e04c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa10);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10657e278; end: 10657e36b; -[SCChatInputTextViewContainer _constructStackViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274aa1c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf348e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0xbff0000000000000,uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657e36c; end: 10657e4e3; -[SCChatInputTextViewContainer _constructLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e36c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274aa18;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08de00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1ff80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274aa1c);
  func_0x00010c08de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf49500(uVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10657e4e4; end: 10657e583; -[SCChatInputTextViewContainer layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e4e4(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1c28;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11274aa10;
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar1));
  if (param_2 < *(double *)(param_3 + _DAT_11274aa28)) {
    func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)(param_3 + lVar1));
  }
  uVar2 = *(undefined8 *)(param_3 + _DAT_11274aa2c);
  func_0x00010bf20c00(param_3);
  func_0x00010c122080(uVar2);
  return;
}



/* Entry: 10657e584; end: 10657e707; -[SCChatInputTextViewContainer setStyle:] */

/* WARNING: Possible PIC construction at 0x00010657e5e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010657e5e4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e584(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + _DAT_11274aa30) = param_3;
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa10);
    uVar2 = 2;
  }
  else if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa10);
    uVar2 = 1;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa10);
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b6db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setKeyboardAppearance__11264b590,uVar2);
  return;
}



/* Entry: 10657e708; end: 10657e773; -[SCChatInputTextViewContainer setCollapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e708(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + _DAT_11274a9fc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11274a9fc) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010be0c3a0();
  }
  else {
    func_0x00010bde1be0();
  }
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10657e774; end: 10657e7bb; -[SCChatInputTextViewContainer setCollapsesStackViewOnTextChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e774(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274aa00) = param_3;
  func_0x00010bee1ec0();
  func_0x00010bee1e80(param_1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10657e7bc; end: 10657e7cb; -[SCChatInputTextViewContainer inputItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e7bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa1c),PTR_s_inputItems_1125f7108);
  return;
}



/* Entry: 10657e7cc; end: 10657e7db; -[SCChatInputTextViewContainer setInputItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ad490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa1c),PTR_s_setInputItems__112648f48);
  return;
}



/* Entry: 10657e7dc; end: 10657e7eb; -[SCChatInputTextViewContainer delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa10),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 10657e7ec; end: 10657e7fb; -[SCChatInputTextViewContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa10),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 10657e7fc; end: 10657e80b; -[SCChatInputTextViewContainer addInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa1c),PTR_s_addInputItem_animationStyle__11259be98)
  ;
  return;
}



/* Entry: 10657e80c; end: 10657e81b; -[SCChatInputTextViewContainer font] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa10),PTR_s_font_1125ca848);
  return;
}



/* Entry: 10657e81c; end: 10657e86b; -[SCChatInputTextViewContainer setFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e81c(undefined8 param_1,long param_2)

{
  func_0x00010c19e480(*(undefined8 *)(param_2 + _DAT_11274aa10));
  func_0x00010bdd8aa0(param_2);
  *(undefined8 *)(param_2 + _DAT_11274aa14) = param_1;
  func_0x00010bdd8a80(param_2);
  *(undefined8 *)(param_2 + _DAT_11274aa28) = param_1;
  return;
}



/* Entry: 10657e86c; end: 10657e87b; -[SCChatInputTextViewContainer setPlaceholderFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa18),PTR_s_setFont__112645340);
  return;
}



/* Entry: 10657e87c; end: 10657e88b; -[SCChatInputTextViewContainer placeholderFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa18),PTR_s_font_1125ca848);
  return;
}



/* Entry: 10657e88c; end: 10657e89b; -[SCChatInputTextViewContainer setPlaceholderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa18),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 10657e89c; end: 10657e8ab; -[SCChatInputTextViewContainer placeholderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa18),PTR_s_textColor_112678870);
  return;
}



/* Entry: 10657e8ac; end: 10657e9fb; -[SCChatInputTextViewContainer setPlaceholderText:] */

/* WARNING: Possible PIC construction at 0x00010657e9b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010657e9b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e8ac(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11274aa34;
  uVar1 = *(ulong *)(param_2 + lVar7);
  lVar2 = param_4;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d660(param_4);
      *(long *)(param_2 + _DAT_11274aa38) = (long)param_1;
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    *(long *)(param_2 + lVar7) = param_4;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + _DAT_11274aa18);
code_r0x00010c212f20:
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setText__1126625f0,param_4);
    return;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  lVar7 = (long)_DAT_11274aa3c;
  uVar1 = *(ulong *)(param_4 + lVar7);
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    lVar5 = param_4;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      lVar5 = param_4;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d660(lVar2);
      param_1 = (double)(long)param_1;
      *(double *)(param_4 + _DAT_11274aa40) = param_1;
      _objc_release(puVar3);
      _objc_release(lVar5);
    }
    _objc_retain(lVar2);
    uVar4 = *(undefined8 *)(param_4 + lVar7);
    *(long *)(param_4 + lVar7) = lVar2;
    _objc_release(uVar4);
    func_0x00010bedd1e0(param_4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = (long)_DAT_11274aa3c;
  if (*(long *)(lVar2 + lVar6) != 0) {
    lVar7 = lVar2;
    func_0x00010c0fda00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar7);
    lVar7 = lVar2;
    func_0x00010c0fda00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar7);
    if ((0.0 < (double)(long)param_1) &&
       ((double)(long)param_1 < *(double *)(lVar2 + _DAT_11274aa38))) {
      param_4 = *(long *)(lVar2 + lVar6);
      uVar4 = *(undefined8 *)(lVar2 + _DAT_11274aa18);
      goto code_r0x00010c212f20;
    }
  }
  return;
}



/* Entry: 10657e9fc; end: 10657eb37; -[SCChatInputTextViewContainer setShortPlaceholderText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657e9fc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11274aa3c;
  uVar1 = *(ulong *)(param_2 + lVar6);
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d660(param_4);
      param_1 = (double)(long)param_1;
      *(double *)(param_2 + _DAT_11274aa40) = param_1;
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    *(long *)(param_2 + lVar6) = param_4;
    _objc_release(uVar4);
    func_0x00010bedd1e0(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11274aa3c;
  if (*(long *)(param_4 + lVar5) != 0) {
    lVar6 = param_4;
    func_0x00010c0fda00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar6);
    lVar6 = param_4;
    func_0x00010c0fda00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar6);
    if ((0.0 < (double)(long)param_1) &&
       ((double)(long)param_1 < *(double *)(param_4 + _DAT_11274aa38))) {
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_4 + _DAT_11274aa18),PTR_s_setText__1126625f0,
                 *(undefined8 *)(param_4 + lVar5));
      return;
    }
  }
  return;
}



/* Entry: 10657eb38; end: 10657ebf7; -[SCChatInputTextViewContainer _updatePlaceholderShortReplacement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657eb38(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274aa3c;
  if (*(long *)(param_2 + lVar2) != 0) {
    lVar1 = param_2;
    func_0x00010c0fda00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0fda00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar1);
    if ((0.0 < (double)(long)param_1) &&
       ((double)(long)param_1 < *(double *)(param_2 + _DAT_11274aa38))) {
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + _DAT_11274aa18),PTR_s_setText__1126625f0,
                 *(undefined8 *)(param_2 + lVar2));
      return;
    }
  }
  return;
}



/* Entry: 10657ebf8; end: 10657ecff; -[SCChatInputTextViewContainer setPlaceholderText:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ebf8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa18);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CATransition_1126b3c00;
    func_0x00010bf039a0(PTR__OBJC_CLASS___CATransition_1126b3c00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fc3333333333333);
    puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c21acc0(puVar2,param_2,*(undefined8 *)PTR__kCATransitionFade_110346da8);
    func_0x00010c1ea580(puVar2,param_2,1);
    func_0x00010bef6c20(uVar1,param_2,puVar2,0);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  func_0x00010c1dcb60(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10657ed00; end: 10657ed0f; -[SCChatInputTextViewContainer setCursorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ed00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1881f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa10),PTR_s_setCursorColor__11263fa98);
  return;
}



/* Entry: 10657ed10; end: 10657ed1f; -[SCChatInputTextViewContainer cursorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ed10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf610f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa10),PTR_s_cursorColor_1125b5de0);
  return;
}



/* Entry: 10657ed20; end: 10657ede7; -[SCChatInputTextViewContainer textViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10657ed20(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_5 + _DAT_11274aa10);
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_5 + _DAT_11274aa18);
    func_0x00010bfb3a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    _objc_release(uVar1);
    dVar4 = (double)(float)(int)(param_1 + 8.0 + 8.0);
  }
  else {
    func_0x00010bfb68e0(lVar2);
    func_0x00010c23d5a0(param_3,lVar2);
    dVar3 = (double)(float)(int)param_4;
    if ((double)(float)(int)param_4 <= *(double *)(param_5 + _DAT_11274aa14)) {
      dVar3 = *(double *)(param_5 + _DAT_11274aa14);
    }
    dVar4 = *(double *)(param_5 + _DAT_11274aa28);
    if (dVar3 <= *(double *)(param_5 + _DAT_11274aa28)) {
      dVar4 = dVar3;
    }
  }
  return dVar4;
}



/* Entry: 10657ede8; end: 10657edf7; -[SCChatInputTextViewContainer minimumHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657ede8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa14);
}



/* Entry: 10657edf8; end: 10657ee2f; -[SCChatInputTextViewContainer setMaximumNumberOfLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657edf8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274aa44) = param_1;
  func_0x00010bdd8a80();
  *(undefined8 *)(param_2 + _DAT_11274aa28) = param_1;
  return;
}



/* Entry: 10657ee30; end: 10657ee8b; -[SCChatInputTextViewContainer inputViewController:textViewDidChange:] */

void FUN_10657ee30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bedd1c0();
  func_0x00010bee1e20(param_1);
  func_0x00010be9c040(param_1);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139ac0();
  _objc_release(uVar1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10657ee8c; end: 10657ee9b; -[SCChatInputTextViewContainer inputViewController:textViewDidReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ee8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aa10),PTR_s_hideMenu_1125d6280);
  return;
}



/* Entry: 10657ee9c; end: 10657eecb; -[SCChatInputTextViewContainer _updatePlaceholderLabelVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ee9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aa18);
  func_0x00010beb3420();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,(uint)param_1 ^ 1);
  return;
}



/* Entry: 10657eecc; end: 10657ef2b; -[SCChatInputTextViewContainer _updateTextViewBounce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657eecc(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274aa10;
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar1));
  if (*(double *)(param_3 + _DAT_11274aa28) < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010c1738d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + lVar1),PTR_s_setBounces__11263a850,1);
    return;
  }
  return;
}



/* Entry: 10657ef2c; end: 10657efe3; -[SCChatInputTextViewContainer _scrollToCursor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ef2c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_11274aa10;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  uVar1 = uVar3;
  func_0x00010c15a1e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf323a0(uVar3);
  dVar5 = param_3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c26ba40(*(undefined8 *)(param_5 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c1521d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4 + dVar5,*(undefined8 *)(param_5 + lVar4),
             PTR_s_scrollRectToVisible_animated__112632290,0);
  return;
}



/* Entry: 10657efe4; end: 10657f14f; -[SCChatInputTextViewContainer _updateTextViewTrailingAnchor:] */

void FUN_10657efe4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar1 = param_1;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bd86870();
  _objc_release(lVar1);
  if ((param_3 == 0) || (lVar1 = lVar2, func_0x00010bf1f3c0(), (int)lVar1 != 0)) {
    piVar3 = (int *)&DAT_11274aa24;
    piVar4 = (int *)&DAT_11274aa20;
  }
  else {
    piVar4 = (int *)&DAT_11274aa24;
    piVar3 = (int *)&DAT_11274aa20;
  }
  func_0x00010c162480(*(undefined8 *)(param_1 + *piVar3));
  func_0x00010c162480(*(undefined8 *)(param_1 + *piVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10657f150; end: 10657f1db; -[SCChatInputTextViewContainer _updateTextViewInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f150(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_2;
  func_0x00010b8166c0();
  lVar3 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10657d9b0();
  _objc_release(lVar3);
  uVar4 = 0x402e000000000000;
  if (param_4 == 0) {
    uVar4 = 0x3ff0000000000000;
  }
  bVar1 = (int)lVar2 == 0;
  uVar5 = uVar4;
  if (bVar1) {
    uVar5 = param_1;
  }
  if (bVar1) {
    param_1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2131f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4020000000000000,uVar5,0x4020000000000000,param_1,
             *(undefined8 *)(param_2 + _DAT_11274aa10),PTR_s_setTextContainerInset__1126626a0);
  return;
}



/* Entry: 10657f1dc; end: 10657f247; -[SCChatInputTextViewContainer _shouldDisplayPlaceholderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10657f1dc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11274aa10);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_11274aa34);
    func_0x00010c08fa60(lVar3);
    bVar1 = lVar3 != 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10657f248; end: 10657f2df; -[SCChatInputTextViewContainer _collapseTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f248(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274aa10;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c26ba00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c26ba00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  _objc_release(uVar1);
  func_0x00010bee1ec0(param_1);
  func_0x00010bee1e80(param_1);
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10657f2e0; end: 10657f37f; -[SCChatInputTextViewContainer _expandTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f2e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274aa10;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c26ba00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c26ba00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  _objc_release(uVar1);
  func_0x00010bee1ec0(param_1);
  func_0x00010bee1e80(param_1);
  func_0x00010bee1e20(param_1);
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10657f380; end: 10657f40b; -[SCChatInputTextViewContainer _calculatedMinimumHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10657f380(double param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  
  if (*(long *)(param_4 + _DAT_11274aa10) == 0) {
    param_4 = *(long *)(param_4 + _DAT_11274aa18);
    dVar1 = 8.0;
    param_3 = 8.0;
  }
  else {
    func_0x00010c26ba40();
    dVar1 = param_1;
  }
  func_0x00010bfb3a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(param_4);
  return (double)(float)(int)(param_3 + dVar1 + param_1);
}



/* Entry: 10657f40c; end: 10657f4bf; -[SCChatInputTextViewContainer _calculatedMaximumHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10657f40c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  if (*(long *)(param_4 + _DAT_11274aa10) == 0) {
    lVar1 = *(long *)(param_4 + _DAT_11274aa18);
    func_0x00010bfb3a80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    param_3 = param_1 + 8.0 + 8.0;
  }
  else {
    func_0x00010c26ba40();
    lVar1 = param_4;
    dVar2 = param_1;
    func_0x00010bfb3a80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    param_3 = param_3 + param_1 + dVar2 * *(double *)(param_4 + _DAT_11274aa44);
  }
  _objc_release(lVar1);
  return (double)(float)(int)param_3;
}



/* Entry: 10657f4c0; end: 10657f563; -[SCChatInputTextViewContainer _setupTextViewBorderLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f4c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_11274aa08) == '\x01') {
    puVar1 = PTR_PTR_1126cb8f8;
    _objc_alloc();
    func_0x00010bff9300(0x4000000000000000,*(double *)(param_1 + _DAT_11274aa14) * 0.5);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274aa2c);
    *(undefined **)(param_1 + _DAT_11274aa2c) = puVar1;
    _objc_release(uVar2);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10657f564; end: 10657f573; -[SCChatInputTextViewContainer style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f564(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa30);
}



/* Entry: 10657f574; end: 10657f583; -[SCChatInputTextViewContainer isCollapsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10657f574(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a9fc);
}



/* Entry: 10657f584; end: 10657f593; -[SCChatInputTextViewContainer textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f584(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa10);
}



/* Entry: 10657f594; end: 10657f5a3; -[SCChatInputTextViewContainer stackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f594(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa1c);
}



/* Entry: 10657f5a4; end: 10657f5c3; -[SCChatInputTextViewContainer inputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f5a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274aa48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10657f5c4; end: 10657f5d7; -[SCChatInputTextViewContainer setInputBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274aa48,param_3);
  return;
}



/* Entry: 10657f5d8; end: 10657f5e7; -[SCChatInputTextViewContainer placeholderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f5d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa18);
}



/* Entry: 10657f5e8; end: 10657f627; -[SCChatInputTextViewContainer setPlaceholderLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274aa18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657f628; end: 10657f637; -[SCChatInputTextViewContainer placeholderText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f628(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa34);
}



/* Entry: 10657f638; end: 10657f647; -[SCChatInputTextViewContainer shortPlaceholderText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f638(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa3c);
}



/* Entry: 10657f648; end: 10657f657; -[SCChatInputTextViewContainer maximumNumberOfLines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657f648(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa44);
}



/* Entry: 10657f658; end: 10657f667; -[SCChatInputTextViewContainer collapsesStackViewOnTextChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10657f658(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274aa00);
}



/* Entry: 10657f668; end: 10657f733; -[SCChatInputTextViewContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f668(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274aa3c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa34,0);
  _objc_storeStrong(param_1 + _DAT_11274aa18,0);
  _objc_destroyWeak(param_1 + _DAT_11274aa48);
  _objc_storeStrong(param_1 + _DAT_11274aa1c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa10,0);
  _objc_storeStrong(param_1 + _DAT_11274aa0c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa2c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa04,0);
  _objc_storeStrong(param_1 + _DAT_11274aa24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274aa20,0);
  return;
}



/* Entry: 10657f734; end: 10657f84b; -[SCChatInputView initWithSizeEventPublisher:interactiveDrawerEventPublisher:circumstanceEngine:displaySnapchatPlusBorder:messagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10657f734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f1c30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274aa50;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274aa54) = param_6;
    lVar3 = (long)_DAT_11274aa58;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010beb1580(puVar1);
    func_0x00010bde69a0(puVar1);
    func_0x00010beaa560(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10657f84c; end: 10657f8ef; -[SCChatInputView _setupViewsWithSizeEventPublisher:interactiveDrawerEventPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f84c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beb0180(param_1);
  func_0x00010bead360(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010beabc00(param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aa5c);
  *(undefined **)(param_1 + _DAT_11274aa5c) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdea310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createAccessoryStackView_112558260);
  return;
}



/* Entry: 10657f8f0; end: 10657f90b;  */

void FUN_10657f8f0(void)

{
  _objc_opt_new(PTR_PTR_1126cb900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10657f90c; end: 10657f9c7; -[SCChatInputView _setupInputBarWithSizeEventPublisher:interactiveDrawerEventPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f90c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb908;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c046b40();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = (long)_DAT_11274aa64;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10657f9c8; end: 10657fa1b; -[SCChatInputView _setupSubmenuView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657f9c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb910;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274aa60;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10657fa1c; end: 10657fa6f; -[SCChatInputView _setupContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657fa1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274aa68;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10657fa70; end: 10657fbc3; -[SCChatInputView _setupAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657fa70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar5 = (long)_DAT_11274aa6c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_1);
  iVar4 = 0;
  do {
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0b8440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_80);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 10657fbc4; end: 10657fc03;  */

void FUN_10657fbc4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


