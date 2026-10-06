/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080b9630; end: 1080b966f; -[SCValdiTextView valdi_setCharacterLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9630(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_1127745f0);
  _objc_release();
  func_0x0001080bcb10((long)_DAT_11277457c);
  func_0x00010c1cbe20();
  return 1;
}



/* Entry: 1080b9670; end: 1080b9703; -[SCValdiTextView valdi_setTextGravity:] */

undefined8 FUN_1080b9670(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((param_3 & 1) == 0) {
    func_0x0001080bcdc0();
    if ((param_3 & 1) == 0) {
      func_0x0001080bcb08();
      if ((param_3 != 0) && (func_0x0001080bcdc0(), (int)param_3 == 0)) {
        uVar1 = 0;
        goto LAB_1080b96ec;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 0;
  }
  func_0x00010bea4380(param_1,param_2,uVar1);
  uVar1 = 1;
LAB_1080b96ec:
  func_0x0001080bc950();
  return uVar1;
}



/* Entry: 1080b9704; end: 1080b9787; -[SCValdiTextView valdi_setReturnType:] */

undefined8 FUN_1080b9704(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (((param_3 & 1) == 0) && (func_0x0001080bcb08(), param_3 != 0)) {
    func_0x00010bea4740(param_1);
    func_0x0001080bcdf8();
    func_0x00010b96bf38();
  }
  else {
    func_0x0001080bcbf0();
    func_0x00010bea4740();
    func_0x0001080bcdf8();
    func_0x00010c1edbe0();
    param_1 = 1;
  }
  func_0x0001080bc950();
  return param_1;
}



/* Entry: 1080b9788; end: 1080b97ff; -[SCValdiTextView _updateTextViewInteractionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9788(long param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  int *unaff_x21;
  
  lVar2 = param_1;
  func_0x0001080bccc4();
  iVar1 = unaff_x21[9];
  lVar4 = (long)*unaff_x21;
  func_0x00010c193a00(*(undefined8 *)(lVar2 + lVar4));
  func_0x00010c1fada0(*(undefined8 *)(param_1 + lVar4));
  if (*(char *)(param_1 + iVar1) == '\x01') {
    bVar3 = *(byte *)(param_1 + _DAT_1127745e0) ^ 1;
  }
  else {
    bVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setScrollEnabled__11265b8f0,bVar3 & 1);
  return;
}



/* Entry: 1080b9800; end: 1080b9813; -[SCValdiTextView valdi_setAutocapitalization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9800(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b96c520(*(undefined8 *)(param_1 + _DAT_112774564),param_3);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (((((unaff_x20 & 1) == 0) && (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) &&
      (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) &&
     ((func_0x00010b96c540(), unaff_x20 != 0 && (func_0x00010b96c538(), (int)unaff_x20 == 0)))) {
    uVar1 = 0;
  }
  else {
    func_0x00010c16d0a0();
    uVar1 = 1;
  }
  func_0x00010b96c548();
  func_0x00010b96c550();
  return uVar1;
}



/* Entry: 1080b9814; end: 1080b9827; -[SCValdiTextView valdi_setAutocorrection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9814(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b96c520(*(undefined8 *)(param_1 + _DAT_112774564),param_3);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((((unaff_x20 & 1) == 0) && (func_0x00010b96c540(), unaff_x20 != 0)) &&
     (func_0x00010b96c538(), (int)unaff_x20 == 0)) {
    uVar1 = 0;
  }
  else {
    func_0x00010c16d0c0();
    func_0x00010c207da0();
    uVar1 = 1;
  }
  func_0x00010b96c548();
  func_0x00010b96c550();
  return uVar1;
}



/* Entry: 1080b9828; end: 1080b983b; -[SCValdiTextView valdi_setKeyboardAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9828(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b96c520(*(undefined8 *)(param_1 + _DAT_112774564),param_3);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (((((unaff_x20 & 1) == 0) && (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) &&
      (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) && (func_0x00010b96c540(), unaff_x20 != 0)) {
    uVar1 = 0;
  }
  else {
    func_0x00010c1b6da0();
    uVar1 = 1;
  }
  func_0x00010b96c548();
  func_0x00010b96c550();
  return uVar1;
}



/* Entry: 1080b983c; end: 1080b984f; -[SCValdiTextView valdi_setTextDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b983c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b96c520(*(undefined8 *)(param_1 + _DAT_112774564),param_3);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (((((unaff_x20 & 1) == 0) && (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) &&
      (func_0x00010b96c540(), unaff_x20 != 0)) && (func_0x00010b96c538(), (int)unaff_x20 == 0)) {
    uVar1 = 0;
  }
  else {
    func_0x00010c1fbe00();
    uVar1 = 1;
  }
  func_0x00010b96c548();
  func_0x00010b96c550();
  return uVar1;
}



/* Entry: 1080b9850; end: 1080b9887; -[SCValdiTextView valdi_setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9850(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112774588) = param_3;
  func_0x00010bee1ea0();
  func_0x0001080bcd00((long)_DAT_11277457c);
  return 1;
}



/* Entry: 1080b9888; end: 1080b98ab; -[SCValdiTextView valdi_setSelectable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9888(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277458c) = param_3;
  func_0x00010bee1ea0();
  return 1;
}



/* Entry: 1080b98ac; end: 1080b9977; -[SCValdiTextView valdi_setFocused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b98ac(ulong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcae4();
  if (unaff_x21 == 0) {
    *(char *)(param_1 + (long)_DAT_1127745b8) = (char)param_3;
  }
  else {
    lVar4 = (long)_DAT_1127745b8;
    *(undefined1 *)(param_1 + lVar4) = 0;
    lVar5 = (long)_DAT_112774564;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c073040();
    if (param_3 != iVar1) {
      if (param_3 == 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_resignFirstResponder_11262c258);
        return uVar3;
      }
      uVar2 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075e80();
      func_0x0001080bc940();
      if ((uVar2 & 1) != 0) {
        func_0x00010be61400(param_1);
        uVar2 = *(ulong *)(param_1 + lVar5);
        func_0x00010bf179a0();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_1 + lVar4) = 1;
    }
  }
  return 1;
}



/* Entry: 1080b9978; end: 1080b9983; -[SCValdiTextView valdi_setClosesWhenReturnKeyPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9978(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112774600) = param_3;
  return 1;
}



/* Entry: 1080b9984; end: 1080b99a7; -[SCValdiTextView valdi_setFontManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9984(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_1127745d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b99a8; end: 1080b99fb; -[SCValdiTextView valdi_setPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b99a8(long param_1)

{
  long unaff_x20;
  
  FUN_1080bc8a0();
  if ((*(long *)(unaff_x20 + _DAT_1127745a4) != 0) || (func_0x0001080bcb08(), param_1 != 0)) {
    func_0x00010be0a5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcce8();
    func_0x00010c212f20();
    func_0x0001080bc940();
  }
  func_0x0001080bc950();
  return 1;
}



/* Entry: 1080b99fc; end: 1080b9a4b; -[SCValdiTextView valdi_setPlaceholderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b99fc(long param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_1080bc8a0();
  func_0x0001080bca50();
  if (param_1 == 0) {
    lVar2 = (long)_DAT_1127745a8;
    func_0x0001080bc988();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = unaff_x19;
    _objc_release(uVar1);
  }
  else {
    func_0x00010c213180();
  }
  func_0x0001080bc950();
  return 1;
}



/* Entry: 1080b9a4c; end: 1080b9a6f; -[SCValdiTextView valdi_setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9a4c(long param_1)

{
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_112774564));
  return 1;
}



/* Entry: 1080b9a70; end: 1080b9a7b; -[SCValdiTextView valdi_setSelectTextOnFocus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9a70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112774604) = param_3;
  return 1;
}



/* Entry: 1080b9a7c; end: 1080b9a87; -[SCValdiTextView valdi_setScrollToEndBeforeFocus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9a7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127745bc) = param_3;
  return 1;
}



/* Entry: 1080b9a88; end: 1080b9aab; -[SCValdiTextView valdi_setOnWillChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9a88(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_112774608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9aac; end: 1080b9acf; -[SCValdiTextView valdi_setOnChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9aac(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_1127745e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9ad0; end: 1080b9af3; -[SCValdiTextView valdi_setOnEditBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9ad0(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_11277460c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9af4; end: 1080b9b17; -[SCValdiTextView valdi_setOnEditEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9af4(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_112774610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9b18; end: 1080b9b3b; -[SCValdiTextView valdi_setOnReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9b18(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_112774614);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9b3c; end: 1080b9b5f; -[SCValdiTextView valdi_setOnWillDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9b3c(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_112774618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9b60; end: 1080b9b83; -[SCValdiTextView valdi_setOnSelectionChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9b60(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_11277461c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9b84; end: 1080b9bb3; -[SCValdiTextView valdi_setOnTextSelectionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9b84(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_112774620);
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bee1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b9bb4; end: 1080b9bd7; -[SCValdiTextView valdi_setOnTextSelectionMenuAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9bb4(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_112774624);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b9bd8; end: 1080b9c77; -[SCValdiTextView _applySelectionStart:selectionEnd:] */

void FUN_1080b9bd8(long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x24;
  
  lVar2 = param_1;
  func_0x0001080bcfa8();
  uVar3 = *(ulong *)(lVar2 + unaff_x24);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x0001080bc960();
  uVar4 = uVar3;
  if ((long)param_3 <= (long)uVar3) {
    uVar4 = param_3;
  }
  uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
  if ((long)param_4 <= (long)uVar3) {
    uVar3 = param_4;
  }
  uVar1 = uVar4;
  if ((long)uVar4 <= (long)uVar3) {
    uVar1 = uVar3;
  }
  uVar3 = *(ulong *)(param_1 + unaff_x24);
  func_0x00010c159e80();
  if (uVar3 != uVar4 || param_2 != uVar1 - uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fb510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + unaff_x24),PTR_s_setSelectedRange__11265c768,uVar4,
               uVar1 - uVar4);
    return;
  }
  return;
}



/* Entry: 1080b9c78; end: 1080b9de3; -[SCValdiTextView valdi_setSelection:] */

undefined8 FUN_1080b9c78(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x0001080bc958();
  func_0x0001080bcf4c();
  if (uVar2 == 2) {
    func_0x0001080bcdb4();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
      func_0x0001080bc940();
LAB_1080b9d84:
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bcc24();
      goto joined_r0x0001080b9d68;
    }
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class();
    func_0x0001080bcb70();
    iVar1 = (int)puVar3;
    func_0x0001080bc960();
    func_0x0001080bc940();
    if (((ulong)puVar3 & 1) == 0) goto LAB_1080b9d84;
    func_0x0001080bcdb4();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    uVar4 = 1;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    func_0x00010bdce920(param_1);
  }
  else {
    func_0x00010b96bf1c();
    iVar1 = (int)uVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcc24();
joined_r0x0001080b9d68:
    if (iVar1 == 0) {
      uVar4 = 0;
      goto LAB_1080b9dd0;
    }
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcda8();
    func_0x0001080bcf3c();
    uVar4 = 0;
  }
  func_0x0001080bc960();
LAB_1080b9dd0:
  func_0x0001080bc940();
  func_0x0001080bc950();
  return uVar4;
}



/* Entry: 1080b9de4; end: 1080b9e67; -[SCValdiTextView valdi_setTextShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  func_0x0001080bc958();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774564);
  func_0x0001080bcf8c();
  if ((int)uVar1 != 0) {
    lVar3 = (long)_DAT_1127745a0;
    func_0x0001080bc988();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if (*(long *)(param_1 + _DAT_1127745a4) != 0) {
      func_0x0001080bcf8c();
    }
    func_0x0001080bd000();
    if (*(long *)(param_1 + extraout_x8) != 0) {
      func_0x0001080bcf8c();
    }
  }
  func_0x0001080bc950();
  return uVar1;
}



/* Entry: 1080b9e68; end: 1080b9ec7; -[SCValdiTextView valdi_resetTextShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9e68(long param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127745a0);
  *(undefined8 *)(param_1 + _DAT_1127745a0) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_1127745a4) != 0) {
    FUN_10809fee4();
  }
  func_0x0001080bd000();
  if (*(long *)(param_1 + extraout_x8) != 0) {
    FUN_10809fee4();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774564);
  _objc_retain();
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809ffbc();
  func_0x00010c1fe7a0(0,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b9ec8; end: 1080b9f0f; -[SCValdiTextView _createTextGradientHelperIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9ec8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127745c0;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    _objc_opt_new(PTR_PTR_1126d9310);
    func_0x0001080bc8e0();
    lVar1 = *(long *)(param_1 + lVar2);
  }
  func_0x0001080bc990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080b9f10; end: 1080ba01b; -[SCValdiTextView valdi_setTextGradient:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9f10(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  func_0x0001080bc958();
  func_0x0001080bc990();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  if (param_3 < 2) {
    if (*(long *)(param_1 + _DAT_1127745c0) != 0) {
      func_0x00010c1a4040(*(long *)(param_1 + _DAT_1127745c0),param_2,0);
    }
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d6c0();
    func_0x0001080bc998();
    func_0x0001080bcaec();
    func_0x0001080bced0();
  }
  else {
    func_0x00010bdf49c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4040();
    func_0x0001080bc998();
    func_0x0001080bcaec();
    func_0x0001080bced0();
    func_0x00010bee1da0(param_1,param_2,param_4);
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d6c0();
    func_0x0001080bc960();
  }
  func_0x0001080bc948();
  func_0x0001080bc940();
  func_0x0001080bc950();
  return 1;
}



/* Entry: 1080ba01c; end: 1080ba023;  */

void FUN_1080ba01c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateTextGradientLayerWithAnim_112596110);
  return;
}



/* Entry: 1080ba024; end: 1080ba03b; -[SCValdiTextView valdi_layoutTextGradientLayerWithAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ba024(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127745c0),PTR_s_layoutInView_animator__112600d90,
             param_1,param_3);
  return;
}



/* Entry: 1080ba03c; end: 1080ba067; -[SCValdiTextView _updateTextGradientColorIfNeeded] */

void FUN_1080ba03c(int param_1)

{
  long extraout_x8;
  undefined1 extraout_w9;
  long unaff_x19;
  
  func_0x0001080bcc30();
  func_0x00010c2846a0();
  if (param_1 != 0) {
    func_0x0001080bcde8();
    *(undefined1 *)(unaff_x19 + extraout_x8) = extraout_w9;
  }
  return;
}



/* Entry: 1080ba068; end: 1080ba0b3; -[SCValdiTextView _updateTextGradientLayerWithAnimator:] */

void FUN_1080ba068(int param_1)

{
  long unaff_x19;
  int *unaff_x20;
  
  func_0x0001080bcc30();
  func_0x00010c08cde0();
  if (param_1 != 0) {
    func_0x0001080bce34();
    func_0x0001080bcd00((long)unaff_x20[6]);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x19 + *unaff_x20),PTR_s_setNeedsDisplay_112650978);
    return;
  }
  return;
}



/* Entry: 1080ba0b4; end: 1080ba0ef; -[SCValdiTextView valdi_setEnableInlinePredictions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ba0b4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001080bcc7c();
  if ((int)lVar1 != 0) {
    func_0x00010c1ad0c0(*(undefined8 *)(param_1 + _DAT_112774564),param_2,param_3 ^ 1);
  }
  return 1;
}



/* Entry: 1080ba0f0; end: 1080ba147; -[SCValdiTextView valdi_setBackgroundEffectColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ba0f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  FUN_1080bc8a0();
  lVar3 = (long)_DAT_1127745d8;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  if (lVar1 == 0) {
    func_0x0001080bcb48();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x0001080bca48(uVar2);
    lVar1 = *(long *)(unaff_x20 + lVar3);
  }
  func_0x00010c17e800(lVar1);
  func_0x00010bed7500();
  func_0x0001080bc950();
  return 1;
}



/* Entry: 1080ba148; end: 1080ba183; -[SCValdiTextView valdi_setBackgroundEffectBorderRadius:] */

undefined8 FUN_1080ba148(long param_1)

{
  func_0x0001080bce58();
  if (param_1 == 0) {
    func_0x0001080bcb48();
    func_0x0001080bca08();
  }
  func_0x00010c173300();
  func_0x0001080bcf5c();
  return 1;
}



/* Entry: 1080ba184; end: 1080ba1bf; -[SCValdiTextView valdi_setBackgroundEffectPadding:] */

undefined8 FUN_1080ba184(long param_1)

{
  func_0x0001080bce58();
  if (param_1 == 0) {
    func_0x0001080bcb48();
    func_0x0001080bca08();
  }
  func_0x00010c1d7e40();
  func_0x0001080bcf5c();
  return 1;
}



/* Entry: 1080ba1c0; end: 1080ba2cf; +[SCValdiTextView measureSizeWithMaxSize:fontAttributes:fontManager:text:placeholder:backgroundEffectPadding:traitCollection:] */

undefined1  [16] FUN_1080ba1c0(undefined8 param_1,double param_2,double param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double unaff_d8;
  double unaff_d9;
  double dVar4;
  undefined1 auVar5 [16];
  
  func_0x0001080bcff4();
  puVar1 = PTR_PTR_1126d92f8;
  dVar2 = 0.0;
  dVar4 = 0.0;
  if (0.0 <= param_3) {
    dVar4 = param_3;
  }
  if (0.0 < param_3) {
    dVar3 = unaff_d9 - (dVar4 + dVar4);
    unaff_d9 = 0.0;
    if (0.0 <= dVar3) {
      unaff_d9 = dVar3;
    }
    param_2 = unaff_d8 - dVar4;
    unaff_d8 = 0.0;
    if (0.0 <= param_2) {
      unaff_d8 = param_2;
    }
  }
  func_0x0001080bcadc();
  func_0x0001080bca18();
  func_0x0001080bc990();
  func_0x0001080bc988();
  func_0x0001080bce40(puVar1);
  func_0x00010c0c3f00();
  func_0x0001080bce40(PTR_PTR_1126d92f8);
  func_0x00010c0c3f00();
  func_0x0001080bcc64();
  func_0x0001080bc960();
  func_0x0001080bc948();
  func_0x0001080bc940();
  func_0x0001080bc950();
  if (unaff_d8 <= dVar2) {
    unaff_d8 = dVar2;
  }
  auVar5._0_8_ = dVar4 + dVar4 + unaff_d8;
  if (unaff_d9 <= param_2) {
    unaff_d9 = param_2;
  }
  auVar5._8_8_ = dVar4 + unaff_d9;
  return auVar5;
}



/* Entry: 1080ba2d0; end: 1080ba42b; +[SCValdiTextView valdi_onMeasureWithAttributes:maxSize:fontManager:traitCollection:] */

void FUN_1080ba2d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x0001080bcff4();
  _objc_retain(param_5);
  func_0x0001080bc988();
  func_0x0001080bcadc();
  lVar1 = param_3;
  func_0x00010c296e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d91d0;
  _objc_opt_class();
  func_0x0001080bceb8();
  if (((ulong)puVar2 & 1) == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  func_0x0001080bc948();
  if (lVar1 == 0) {
    func_0x00010bfb3b60(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c296e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c296e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x0001080bcbe4();
  _objc_opt_isKindOfClass(lVar1,lVar3);
  func_0x0001080bcf20();
  func_0x0001080bc9a0();
  func_0x00010bf885c0(param_3);
  func_0x0001080bc960();
  func_0x0001080bce40(PTR_PTR_1126d93a0);
  func_0x00010c0c3ee0();
  func_0x0001080bcc64();
  func_0x0001080bc9dc();
  func_0x0001080bc940();
  func_0x0001080bc950();
  func_0x0001080bc998();
  func_0x0001080bc948();
  func_0x0001080bccf4();
  return;
}



/* Entry: 1080ba42c; end: 1080ba9f7; +[SCValdiTextView bindAttributes:] */

void FUN_1080ba42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001080bc958();
  uVar2 = param_3;
  func_0x00010bfb3f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c295380(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1080ba9f8;
  puStack_70 = &UNK_110a1cc00;
  func_0x0001080bc988();
  uStack_68 = uVar2;
  func_0x0001080bcda8();
  func_0x00010bf1a200();
  func_0x0001080bc948();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1080baa74;
  puStack_98 = &UNK_1109057d0;
  func_0x0001080bc988();
  uStack_90 = uVar2;
  func_0x0001080bccdc();
  func_0x00010c126e80();
  func_0x0001080bcda8();
  func_0x00010c126e80();
  func_0x0001080bc924();
  func_0x0001080bc924();
  func_0x0001080bc924();
  func_0x0001080bc924();
  func_0x0001080bc924();
  func_0x0001080bc8d4();
  func_0x0001080bc8d4();
  func_0x0001080bc8d4();
  func_0x0001080bccdc();
  func_0x00010bf1a100();
  func_0x0001080bc9ec();
  func_0x00010bf1a0c0();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1080bac00;
  puStack_c0 = &UNK_110a1cc00;
  func_0x0001080bc988();
  uStack_b8 = uVar2;
  func_0x0001080bccdc();
  func_0x00010bf1a160();
  func_0x0001080bcaa8();
  func_0x00010bf1a180();
  func_0x0001080bcaa8();
  func_0x00010c126e80();
  func_0x0001080bccdc();
  func_0x00010bf1a140();
  func_0x0001080bc8d4();
  func_0x0001080bc8d4();
  func_0x0001080bc8d4();
  func_0x0001080bc924();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bc9ec();
  func_0x00010bf1a0c0();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1080baf10;
  puStack_e8 = &UNK_110a1d350;
  func_0x0001080bc988();
  uStack_e0 = uVar2;
  func_0x0001080bccdc();
  func_0x00010bf1a140();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1080bafcc;
  puStack_110 = &UNK_110a1bdf0;
  uStack_108 = uVar2;
  func_0x0001080bc988();
  func_0x00010c1c3fa0(param_3,param_2,&puStack_128);
  func_0x0001080bc9ec();
  func_0x00010bf1a060();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bca70();
  func_0x0001080bc9ec();
  func_0x00010bf1a060();
  func_0x0001080bc9ec();
  func_0x00010bf1a060();
  func_0x0001080bc8d4();
  func_0x0001080bccdc();
  func_0x00010bf1a0c0();
  func_0x0001080bc9ec();
  func_0x00010bf1a0e0();
  func_0x0001080bccdc();
  func_0x00010bf1a0e0();
  func_0x0001080bc940();
  func_0x0001080bcb40();
  _objc_release(uStack_e0);
  _objc_release(uStack_b8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  func_0x0001080bc950();
  return;
}



/* Entry: 1080ba9f8; end: 1080baa67;  */

undefined8 FUN_1080ba9f8(void)

{
  func_0x0001080bce4c();
  func_0x0001080bc958();
  func_0x0001080bc990();
  func_0x0001080bcaa8();
  func_0x00010c295e00();
  func_0x0001080bc988();
  func_0x0001080bcf04();
  func_0x0001080bc8f0();
  func_0x0001080bca18();
  func_0x0001080bc950();
  func_0x0001080bcaa8();
  func_0x00010c295de0();
  func_0x0001080bc948();
  func_0x0001080bc940();
  func_0x0001080bc950();
  return 1;
}



/* Entry: 1080baa68; end: 1080baa73;  */

void FUN_1080baa68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setFontAttributes__1126831a0,0);
  return;
}



/* Entry: 1080baa74; end: 1080baad7;  */

void FUN_1080baa74(undefined8 param_1)

{
  func_0x0001080bcb38();
  func_0x0001080bcbe4();
  func_0x0001080bc8f0();
  func_0x0001080bcadc();
  func_0x0001080bccd0();
  func_0x00010bfb3ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc960();
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080baad8; end: 1080bab87;  */

void FUN_1080baad8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSAttributedString_1126af068,
             PTR_s_fontAttributesWithCompositeValue_1125ca880,param_2);
  return;
}



/* Entry: 1080bab88; end: 1080babdf;  */

undefined8 FUN_1080bab88(void)

{
  undefined8 unaff_x20;
  
  func_0x0001080bce4c();
  func_0x0001080bcb38();
  func_0x0001080bcfe8();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c295c00();
  func_0x0001080bc940();
  func_0x0001080bc950();
  return unaff_x20;
}



/* Entry: 1080babe0; end: 1080babff;  */

void FUN_1080babe0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setCharacterLimit__112683128,0);
  return;
}



/* Entry: 1080bac00; end: 1080bad13;  */

undefined8 FUN_1080bac00(void)

{
  func_0x0001080bcba0();
  func_0x0001080bc990();
  func_0x0001080bca18();
  func_0x0001080bccd0();
  func_0x00010c295e00();
  func_0x00010c296500();
  func_0x0001080bc940();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc948();
  func_0x0001080bcbfc();
  func_0x00010befc640();
  func_0x0001080bc950();
  func_0x0001080bc940();
  return 1;
}



/* Entry: 1080bad14; end: 1080bad1f;  */

void FUN_1080bad14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setCustomUnderlineStyle__112683148,0);
  return;
}



/* Entry: 1080bad20; end: 1080bae1f;  */

void FUN_1080bad20(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x0001080bcb38();
  func_0x0001080bcbe4();
  func_0x0001080bc8f0();
  if ((param_1 & 1) == 0) {
    param_2 = 0;
  }
  func_0x0001080bc990();
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed5678;
    func_0x00010b987f80(&PTR____CFConstantStringClassReference_110ed5678);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = (undefined **)PTR_PTR_1126d9318;
    func_0x00010c25e2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)0x0;
    func_0x0001080bca18();
    if (ppuVar1 == (undefined **)0x0) {
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110ed5698;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2;
      }
      func_0x00010b987f80(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bc9a0();
    }
    else {
      func_0x00010b988044(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0001080bc960();
    func_0x0001080bc948();
  }
  func_0x0001080bc940();
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1080bae20; end: 1080baf0f;  */

void FUN_1080bae20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2963f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setTextOverflow__112683320);
  return;
}



/* Entry: 1080baf10; end: 1080bafcb;  */

undefined8 FUN_1080baf10(void)

{
  func_0x0001080bcba0();
  func_0x0001080bc990();
  func_0x0001080bca18();
  func_0x0001080bccd0();
  func_0x00010c295e00();
  func_0x00010c2960e0();
  func_0x0001080bc940();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc948();
  func_0x0001080bcbfc();
  func_0x00010befc640();
  func_0x0001080bc950();
  func_0x0001080bc940();
  return 1;
}



/* Entry: 1080bafcc; end: 1080bb0b3;  */

void FUN_1080bafcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2957f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d93a0,PTR_s_valdi_onMeasureWithAttributes_ma_112683020,param_2,
             *(undefined8 *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1080bb0b4; end: 1080bb357; -[SCValdiTextView textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1080bb0b4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x0001080bc958();
  func_0x0001080bc990();
  lVar1 = param_6;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    if (param_6 == 0) {
      uVar4 = 0;
      goto LAB_1080bb330;
    }
  }
  else {
    if (((*(byte *)(param_1 + _DAT_112774600) & 1) != 0) ||
       (*(long *)(param_1 + _DAT_112774614) != 0)) {
      func_0x0001080bc988();
      func_0x0001080bcd20();
      func_0x0001080bcb40();
    }
    uVar4 = 0;
    if ((param_6 == 0) || ((*(byte *)(param_1 + _DAT_1127745f4) & 1) != 0)) goto LAB_1080bb330;
  }
  lVar1 = param_1;
  func_0x00010be625e0();
  if ((int)lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bc9dc();
    uVar3 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127745f0);
    func_0x00010c067fc0(uVar4);
    FUN_10809f824(uVar3,param_6,param_4,param_5,uVar4,*(undefined1 *)(param_1 + _DAT_1127745f4));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bc9dc();
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c212f20(param_3);
      goto LAB_1080bb31c;
    }
LAB_1080bb300:
    uVar4 = 1;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3c80();
    func_0x0001080bc9dc();
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010c130d00(uVar2);
    func_0x0001080bc9dc();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127745f0);
    func_0x00010c067fc0(uVar4);
    uVar3 = uVar2;
    func_0x00010809faa0(uVar2,uVar4,*(undefined1 *)(param_1 + _DAT_1127745f4));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x0001080bc9dc();
    func_0x0001080bc9a0();
    if ((uVar2 & 1) != 0) goto LAB_1080bb300;
    func_0x00010c16b720(param_3);
LAB_1080bb31c:
    func_0x0001080bcfe8();
    func_0x00010c26cb00();
    uVar4 = 0;
  }
  func_0x0001080bc998();
  func_0x0001080bc960();
LAB_1080bb330:
  func_0x0001080bc940();
  func_0x0001080bc950();
  return uVar4;
}



/* Entry: 1080bb358; end: 1080bb3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bb358(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + _DAT_112774600) == '\x01') {
    *(undefined8 *)(lVar1 + _DAT_112774570) = 1;
    func_0x00010c13a0e0(*(undefined8 *)(param_1 + 0x28));
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x0001080bcf84(*(undefined8 *)(lVar1 + _DAT_112774614));
  func_0x0001080bc990();
  if (unaff_x19 != 0) {
    func_0x00010b97f424();
    FUN_1080bb74c();
    func_0x0001080bcc70();
    func_0x00010c0f9540();
    func_0x0001080bc930();
  }
  func_0x0001080bc940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
  return;
}



/* Entry: 1080bb3c0; end: 1080bb74b; -[SCValdiTextView textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bb3c0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined1 extraout_w9;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  
  FUN_1080bc8a0();
  if ((*(byte *)(unaff_x20 + _DAT_1127745ec) & 1) == 0) {
    func_0x00010c0bbdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcae4();
    if (unaff_x21 == 0) {
      lVar6 = (long)_DAT_112774608;
      piVar2 = unaff_x19;
      piVar3 = (int *)0x0;
      if (*(long *)(unaff_x20 + lVar6) != 0) {
        func_0x00010b97f424();
        lVar7 = (long)_DAT_112774564;
        FUN_1080bb74c();
        piVar2 = *(int **)(unaff_x20 + lVar6);
        func_0x00010c0f9040();
        if (((int)piVar2 != 0) &&
           (piVar2 = unaff_x19, func_0x00010b97fd24(unaff_x19,0xffffffffffffffff), (int)piVar2 != 0)
           ) {
          func_0x0001080bc6c8();
          func_0x0001080bcbd8();
          piVar2 = unaff_x19;
          func_0x00010b97fc3c(unaff_x19,0xffffffffffffffff);
          _objc_retainAutoreleasedReturnValue();
          piVar3 = piVar2;
          func_0x0001080bcf18();
          func_0x0001080bc72c();
          func_0x0001080bcbd8();
          func_0x0001080bcf0c();
          func_0x0001080bcf18();
          func_0x0001080bc790();
          func_0x0001080bcbd8();
          func_0x0001080bcf0c();
          func_0x0001080bcf18();
          func_0x0001080bcf44();
          if (((ulong)piVar3 & 1) == 0) {
            lVar6 = (long)_DAT_112774584;
            func_0x0001080bcadc();
            uVar4 = *(undefined8 *)(unaff_x20 + lVar6);
            *(int **)(unaff_x20 + lVar6) = piVar2;
            _objc_release(uVar4);
            func_0x00010c212f20(*(undefined8 *)(unaff_x20 + lVar7));
            func_0x0001080bcde8();
            *(undefined1 *)(unaff_x20 + extraout_x8) = extraout_w9;
            func_0x00010bed3500();
          }
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          func_0x0001080bc9dc();
          func_0x00010bf193c0(*(undefined8 *)(unaff_x20 + lVar7));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1042e0(*(undefined8 *)(unaff_x20 + lVar7));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1042e0(*(undefined8 *)(unaff_x20 + lVar7));
          _objc_retainAutoreleasedReturnValue();
          piVar2 = *(int **)(unaff_x20 + lVar7);
          func_0x00010c26c600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fb600(*(undefined8 *)(unaff_x20 + lVar7));
          _objc_release();
          func_0x0001080bc9dc();
          func_0x0001080bc9a0();
          func_0x0001080bc998();
          func_0x0001080bc960();
        }
        func_0x0001080bc930();
        piVar3 = unaff_x19;
      }
      func_0x0001080bcf44();
      if (((ulong)piVar2 & 1) == 0) {
        func_0x0001080bccc4();
        uVar4 = *(undefined8 *)(unaff_x20 + *piVar3);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(unaff_x20 + piVar3[8]);
        *(undefined8 *)(unaff_x20 + piVar3[8]) = uVar4;
        func_0x0001080bca48(uVar5);
        func_0x0001080bcb10((long)piVar3[6]);
        func_0x00010bed3500();
      }
      func_0x00010c0dd600();
      iVar1 = (int)unaff_x20;
      func_0x0001080bcf44();
      if (iVar1 != 0) {
        func_0x00010c069fe0();
      }
    }
    else {
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bcf34();
      func_0x0001080bca50();
      func_0x00010c1a7f60();
      func_0x0001080bc948();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bb74c; end: 1080bb86f;  */

undefined ** FUN_1080bb74c(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x0001080bcb38();
  ppuVar1 = param_2;
  func_0x00010bf193c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcab4();
  func_0x00010b97f5e4();
  ppuVar2 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  func_0x00010b97f738(param_1,ppuVar3);
  func_0x0001080bc998();
  func_0x0001080bc6c8();
  func_0x0001080bc9f8();
  ppuVar3 = param_2;
  func_0x00010c15a1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcc90();
  func_0x00010b97f8e0(param_1,ppuVar3);
  func_0x0001080bc9a0();
  func_0x0001080bc998();
  func_0x0001080bc72c();
  func_0x0001080bc9f8();
  func_0x00010c15a1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcc90();
  func_0x0001080bc960();
  func_0x00010b97f8e0(param_1,param_2);
  func_0x0001080bc9a0();
  func_0x0001080bc998();
  func_0x0001080bc790();
  func_0x0001080bc9f8();
  func_0x0001080bc940();
  return ppuVar1;
}



/* Entry: 1080bb870; end: 1080bb987; -[SCValdiTextView textViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bb870(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x0001080bc958();
  if (param_3 != 0) {
    func_0x00010c2a71e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcf74();
    if (unaff_x20 != 0) {
      func_0x00010c2954e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c295200(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bc7f4();
      func_0x00010bf737c0(lVar1);
      *(undefined8 *)(param_1 + _DAT_112774570) = 0;
      FUN_1080b87f0(*(undefined8 *)(param_1 + _DAT_11277460c),param_3);
      if (*(char *)(param_1 + _DAT_112774604) == '\x01') {
        func_0x0001080bcb60();
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_1080bb988;
        puStack_50 = &UNK_110842e18;
        func_0x0001080bc988();
        lStack_48 = param_3;
        func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,auStack_68);
        func_0x0001080bcb40();
      }
      func_0x0001080bc948();
      func_0x0001080bc940();
    }
  }
  func_0x0001080bc950();
  return;
}



/* Entry: 1080bb988; end: 1080bb993;  */

void FUN_1080bb988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1586d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_selectAll__112633bd0,0);
  return;
}



/* Entry: 1080bb994; end: 1080bbafb; -[SCValdiTextView textViewDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bb994(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_1080bc8a0();
  if (unaff_x19 != 0) {
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcae4();
    if (unaff_x21 != 0) {
      func_0x00010c2954e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = unaff_x20;
      func_0x00010c295200();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bc7f4();
      func_0x00010bf737c0(lVar1);
      lVar3 = *(long *)(unaff_x20 + _DAT_112774610);
      lVar4 = (long)_DAT_112774570;
      lVar5 = *(long *)(unaff_x20 + lVar4);
      lVar1 = lVar3;
      _objc_retain(lVar3);
      func_0x0001080bc988();
      if (lVar3 != 0) {
        func_0x00010b97f424();
        lVar2 = lVar1;
        FUN_1080bb74c();
        func_0x00010b97f870((double)lVar5,lVar1);
        if (lRam00000001137292a8 != -1) {
          func_0x000107c27d9c(0x1137292a8,&PTR___NSConcreteGlobalBlock_110a1d730);
        }
        func_0x00010b97f5fc(lVar1,uRam00000001137292a0,lVar2);
        func_0x00010c0f9540(lVar3);
        func_0x0001080bcd78();
      }
      func_0x0001080bc950();
      func_0x0001080bc998();
      *(undefined8 *)(unaff_x20 + lVar4) = 0;
      func_0x0001080bc960();
      func_0x0001080bc948();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bbafc; end: 1080bbda7; -[SCValdiTextView _customEditMenuActionsForTextRange:] */

void FUN_1080bbafc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  int *unaff_x20;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  
  lVar9 = param_1;
  func_0x0001080bcb28();
  uStack_80 = extraout_x8;
  func_0x0001080bce34();
  uVar2 = *(undefined8 *)(lVar9 + *unaff_x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1080ac9fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc950();
  ppuVar3 = *(undefined ***)(param_1 + unaff_x20[0x2f]);
  FUN_1080acb7c(ppuVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x0001080bc990();
  ppuVar5 = ppuVar3;
  func_0x0001080bcb20();
  ppuVar8 = ppuVar3;
  if (ppuVar5 != (undefined **)0x0) {
    lVar9 = *plStack_130;
    ppuVar8 = &puStack_188;
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar7 = *(undefined8 *)(lStack_138 + (long)ppuVar10 * 8);
        uVar2 = uVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_148,param_1);
        puVar1 = PTR__OBJC_CLASS___UIAction_1126d0d40;
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_1080bbda8;
        puStack_170 = &UNK_110a1caf0;
        _objc_copyWeak(auStack_160,auStack_148);
        _objc_retain(uVar2);
        uStack_168 = uVar2;
        uStack_158 = param_3;
        uStack_150 = param_4;
        func_0x00010beef300(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        func_0x0001080bc9a0();
        _objc_release(uStack_168);
        _objc_destroyWeak(auStack_160);
        _objc_destroyWeak(auStack_148);
        func_0x0001080bc950();
        func_0x0001080bccac();
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
        in_ZR = ppuVar10 == ppuVar5;
      } while (ppuVar10 < ppuVar5);
      ppuVar5 = ppuVar3;
      func_0x0001080bcb20();
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  _objc_release();
  func_0x0001080bc9b4(uStack_80);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 5);
  puVar6 = auStack_148;
  _objc_destroyWeak();
  func_0x0001080bcc08();
  puVar6 = puVar6 + 0x28;
  _objc_loadWeakRetained(puVar6);
  func_0x00010be72b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1080bbda8; end: 1080bbddb;  */

void FUN_1080bbda8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080bbddc; end: 1080bbe5b; -[SCValdiTextView _performTextSelectionMenuActionWithID:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bbddc(long param_1)

{
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x0001080bcfc0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774564);
  func_0x0001080bc958();
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080ac9fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc998();
  FUN_1080ad088(*(undefined8 *)(unaff_x22 + _DAT_112774624));
  func_0x0001080bc948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080bbe5c; end: 1080bbf23; -[SCValdiTextView _editMenuForTextRange:suggestedActions:] */

void FUN_1080bbe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  
  func_0x0001080bcfc0();
  _objc_retain(param_5);
  func_0x00010bdf76c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x22;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(unaff_x22);
    lVar1 = unaff_x22;
    func_0x0001080bcf4c();
    func_0x00010bf0a0e0(puVar2,param_2,lVar1 + unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    func_0x00010befa160(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIMenu_1126d0d48;
    func_0x00010c0ca980(PTR__OBJC_CLASS___UIMenu_1126d0d48,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bc960();
  }
  func_0x0001080bc940();
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080bbf24; end: 1080bc073; -[SCValdiTextView textView:editMenuForTextInRanges:suggestedActions:] */

/* WARNING: Possible PIC construction at 0x0001080bc020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080bc024) */

void FUN_1080bbf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  
  uVar2 = param_4;
  func_0x0001080bcb28();
  _objc_retain();
  func_0x0001080bc990();
  func_0x0001080bcf4c();
  if (uVar2 == 0) {
    func_0x0001080bc940();
    func_0x0001080bc950();
    func_0x0001080bc9b4(extraout_x8);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f4c0();
    uVar3 = uVar2;
    uVar5 = param_2;
    func_0x0001080bc9a0();
    func_0x0001080bc988();
    func_0x0001080bc968();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(undefined8 *)(uVar6 * 8);
        func_0x00010c11f4c0(uVar4);
        _NSUnionRange(uVar2,param_2,uVar4,uVar5);
        uVar6 = uVar6 + 1;
        uVar5 = param_2;
      } while (uVar6 < uVar3);
      uVar3 = uVar2;
      func_0x0001080bc968();
    }
    func_0x0001080bc950();
    func_0x0001080bccd0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be06f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080bc074; end: 1080bc083; -[SCValdiTextView textView:editMenuForTextInRange:suggestedActions:] */

void FUN_1080bc074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__editMenuForTextRange_suggestedA_11255f580,param_4,param_5,param_6);
  return;
}



/* Entry: 1080bc084; end: 1080bc21f; -[SCValdiTextView textViewDidChangeSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc084(long param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080bc9a8();
  func_0x0001080bcb28();
  func_0x0001080bc958();
  if (unaff_x19 != 0) {
    param_1 = unaff_x19;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_1127745ec);
      _objc_release();
      if ((bVar1 & 1) == 0) {
        func_0x00010c0bbdc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080bcae4();
        param_1 = unaff_x19;
        if (bVar1 == 0) {
          func_0x00010c2954e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = unaff_x20;
          func_0x00010c295200();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080bcf64();
          func_0x0001080bcf64();
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          in_ZR = lRam00000001137292b8 == -1;
          if (!(bool)in_ZR) {
            func_0x000107c27d9c(0x1137292b8,&PTR___NSConcreteGlobalBlock_110a1d750);
          }
          func_0x00010bf737c0(lVar2);
          func_0x0001080bc9dc();
          func_0x0001080bc9a0();
          func_0x0001080bc998();
          param_1 = *(long *)(unaff_x20 + _DAT_11277461c);
          FUN_1080b87f0();
          func_0x0001080bc960();
          func_0x0001080bc948();
        }
      }
    }
  }
  func_0x0001080bc950();
  func_0x0001080bc9b4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + _DAT_11277456c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112774564),PTR_s_setNeedsDisplay_112650978);
    return;
  }
  return;
}



/* Entry: 1080bc220; end: 1080bc243; -[SCValdiTextView textStorage:didProcessEditing:range:changeInLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc220(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277456c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112774564),PTR_s_setNeedsDisplay_112650978);
    return;
  }
  return;
}



/* Entry: 1080bc244; end: 1080bc24b; -[SCValdiTextView isAccessibilityElement] */

undefined8 FUN_1080bc244(void)

{
  return 1;
}



/* Entry: 1080bc24c; end: 1080bc29f; -[SCValdiTextView accessibilityLabel] */

void FUN_1080bc24c(long param_1)

{
  long unaff_x19;
  
  func_0x0001080bcc10();
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcf7c();
  if (param_1 == 0) {
    func_0x0001080bca50();
    func_0x00010beecf00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001080bc988();
    param_1 = unaff_x19;
  }
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bc2a0; end: 1080bc2f3; -[SCValdiTextView accessibilityHint] */

void FUN_1080bc2a0(long param_1)

{
  long unaff_x19;
  
  func_0x0001080bcc10();
  func_0x00010beece60();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcf7c();
  if (param_1 == 0) {
    func_0x0001080bca50();
    func_0x00010beece60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001080bc988();
    param_1 = unaff_x19;
  }
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bc2f4; end: 1080bc347; -[SCValdiTextView accessibilityValue] */

void FUN_1080bc2f4(long param_1)

{
  long unaff_x19;
  
  func_0x0001080bcc10();
  func_0x00010beecfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcf7c();
  if (param_1 == 0) {
    func_0x0001080bca50();
    func_0x00010beecfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001080bc988();
    param_1 = unaff_x19;
  }
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bc348; end: 1080bc357; -[SCValdiTextView accessibilityTraits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774564),PTR_s_accessibilityTraits_112598d90);
  return;
}



/* Entry: 1080bc358; end: 1080bc363; -[SCValdiTextView textValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080bc358(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774584);
}



/* Entry: 1080bc364; end: 1080bc393; -[SCValdiTextView setTextValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc364(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x0001080bc9a8();
  lVar2 = (long)_DAT_112774584;
  func_0x0001080bc958();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080bc394; end: 1080bc3c3; -[SCValdiTextView setFontAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc394(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x0001080bc9a8();
  lVar2 = (long)_DAT_1127745fc;
  func_0x0001080bc958();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080bc3c4; end: 1080bc3cf; -[SCValdiTextView textMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080bc3c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774578);
}



/* Entry: 1080bc3d0; end: 1080bc3df; -[SCValdiTextView setTextMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112774578) = param_3;
  return;
}



/* Entry: 1080bc3e0; end: 1080bc3ef; -[SCValdiTextView needAttributedTextUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080bc3e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277457c);
}



/* Entry: 1080bc3f0; end: 1080bc3ff; -[SCValdiTextView setNeedAttributedTextUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bc3f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277457c) = param_3;
  return;
}



/* Entry: 1080bc400; end: 1080bc513; -[SCValdiTextView .cxx_destruct] */

void FUN_1080bc400(long param_1)

{
  int *unaff_x20;
  
  func_0x0001080bce34();
  func_0x0001080bcef8((long)unaff_x20[0x26]);
  func_0x0001080bc8b0((long)unaff_x20[8]);
  _objc_destroyWeak(param_1 + unaff_x20[0xd]);
  func_0x0001080bc8b0((long)unaff_x20[0xf]);
  func_0x0001080bc8b0((long)unaff_x20[0x11]);
  _objc_destroyWeak(param_1 + unaff_x20[0x12]);
  func_0x0001080bc8b0((long)unaff_x20[0x13]);
  func_0x0001080bc8b0((long)unaff_x20[0xb]);
  func_0x0001080bc8b0((long)unaff_x20[0x18]);
  func_0x0001080bc8b0((long)unaff_x20[1]);
  func_0x0001080bc8b0((long)unaff_x20[0x17]);
  func_0x0001080bc8b0((long)unaff_x20[0x1e]);
  func_0x0001080bc8b0((long)unaff_x20[0xc]);
  func_0x0001080bc8b0((long)unaff_x20[0x20]);
  func_0x0001080bc8b0((long)unaff_x20[2]);
  func_0x0001080bc8b0((long)*unaff_x20);
  func_0x0001080bc8b0((long)unaff_x20[0x10]);
  func_0x0001080bc8b0((long)unaff_x20[0x30]);
  func_0x0001080bc8b0((long)unaff_x20[0x2f]);
  func_0x0001080bc8b0((long)unaff_x20[0x2e]);
  func_0x0001080bc8b0((long)unaff_x20[0x2d]);
  func_0x0001080bc8b0((long)unaff_x20[0x2c]);
  func_0x0001080bc8b0((long)unaff_x20[0x2b]);
  func_0x0001080bc8b0((long)unaff_x20[0x2a]);
  func_0x0001080bc8b0((long)unaff_x20[0x21]);
  func_0x0001080bc8b0((long)unaff_x20[0x29]);
  func_0x0001080bc8b0((long)unaff_x20[0x1d]);
  func_0x0001080bc8b0((long)unaff_x20[0x1b]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + unaff_x20[0x23],0);
  return;
}



/* Entry: 1080bc514; end: 1080bc57f;  */

double FUN_1080bc514(double param_1,double param_2,double param_3)

{
  double unaff_d8;
  double unaff_d9;
  
  func_0x0001080bcff4();
  func_0x0001080bcf84();
  func_0x0001080bcf54();
  func_0x00010bf4d5e0();
  func_0x0001080bc950();
  param_3 = (param_2 - param_1) - param_3;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  return unaff_d8 + unaff_d9 + param_3;
}



/* Entry: 1080bc580; end: 1080bc6a3;  */

void FUN_1080bc580(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x0001080bcb38();
  if (param_5 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20);
    func_0x00010c08fa60();
    if (param_4 < uVar1) {
      lVar2 = *(long *)(param_2 + 0x20);
      func_0x00010bf0dde0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      _objc_opt_class();
      func_0x0001080bcb70();
      lVar4 = lVar2;
      if (((ulong)puVar3 & 1) == 0) {
        lVar4 = 0;
      }
      func_0x0001080bca18();
      func_0x0001080bc960();
      dVar8 = *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18);
      func_0x00010c27ae20(param_3);
      dVar5 = ABS(param_1);
      if (ABS(param_1) <= dVar8) {
        dVar5 = dVar8;
      }
      *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = dVar5;
      func_0x00010c14e120(param_3);
      dVar8 = 0.0;
      if (lVar4 != 0) {
        func_0x00010c099280(lVar2);
      }
      lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8);
      dVar6 = *(double *)(lVar4 + 0x18);
      dVar7 = 0.0;
      if (0.0 <= ABS(dVar5) + -1.0) {
        dVar7 = ABS(dVar5) + -1.0;
      }
      dVar5 = dVar7 * dVar8 * 0.5;
      if (dVar5 <= dVar6) {
        dVar5 = dVar6;
      }
      *(double *)(lVar4 + 0x18) = dVar5;
      func_0x0001080bc948();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080bc6a4; end: 1080bc89f;  */

void FUN_1080bc6a4(void)

{
  char *pcVar1;
  
  pcVar1 = "value";
  func_0x00010b9742d4();
  pcRam0000000113729250 = pcVar1;
  return;
}



/* Entry: 1080bc8a0; end: 1080bd00b;  */

void FUN_1080bc8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1080bd00c; end: 1080bd00f; -[SCValdiTextViewBackgroundEffects color] */

undefined8 FUN_1080bd00c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080bd010; end: 1080bd02b; -[SCValdiTextViewBackgroundEffects setColor:] */

void FUN_1080bd010(void)

{
  func_0x0001080c1bf8();
  func_0x0001080c2138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bd02c; end: 1080bd02f; -[SCValdiTextViewBackgroundEffects borderRadius] */

undefined8 FUN_1080bd02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080bd030; end: 1080bd033; -[SCValdiTextViewBackgroundEffects setBorderRadius:] */

void FUN_1080bd030(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1080bd034; end: 1080bd037; -[SCValdiTextViewBackgroundEffects padding] */

undefined8 FUN_1080bd034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080bd038; end: 1080bd03b; -[SCValdiTextViewBackgroundEffects setPadding:] */

void FUN_1080bd038(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1080bd03c; end: 1080bd03f; -[SCValdiTextViewBackgroundEffects .cxx_destruct] */

void FUN_1080bd03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080bd040; end: 1080bd047; -[SCValdiTextViewOutline range] */

undefined1  [16] FUN_1080bd040(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1080bd048; end: 1080bd04f; -[SCValdiTextViewOutline setRange:] */

void FUN_1080bd048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}



/* Entry: 1080bd050; end: 1080bd053; -[SCValdiTextViewOutline color] */

undefined8 FUN_1080bd050(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080bd054; end: 1080bd06f; -[SCValdiTextViewOutline setColor:] */

void FUN_1080bd054(void)

{
  func_0x0001080c1bf8();
  func_0x0001080c2138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bd070; end: 1080bd073; -[SCValdiTextViewOutline width] */

undefined8 FUN_1080bd070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


