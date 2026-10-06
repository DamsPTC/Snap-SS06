/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d08e98; end: 104d08f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d08e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271120c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271120c) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127111fc;
  _objc_loadWeakRetained(lVar1);
  _objc_release(param_2);
  func_0x00010c0fad40(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d08f38; end: 104d08f6b; -[SCNGOPhoneEntryBusinessLogic _exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d08f38(long param_1)

{
  param_1 = param_1 + _DAT_1127111fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d08f6c; end: 104d090c3; -[SCNGOPhoneEntryBusinessLogic _phoneNumberUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d08f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711204);
  func_0x00010bfc2ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0bf0a0(uVar1);
  lVar4 = (long)_DAT_1127111fc;
  uVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0faec0();
    _objc_release(lVar4);
  }
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d090c4; end: 104d090ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d090c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = (long)_DAT_112711208;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104d09100; end: 104d09227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09100(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fafc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  lVar7 = (long)_DAT_112711204;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  func_0x00010bfc5f80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  func_0x00010bfc5b60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea3100(*(undefined8 *)(param_1 + 0x20));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711208);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711208) = uVar3;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d09228; end: 104d09317; -[SCNGOPhoneEntryBusinessLogic _countryCodeUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112711204;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010bfc4220(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010bfc45a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar3);
    lVar1 = lVar3;
  }
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfc5f80(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea3100(param_1,param_2,uVar2,lVar1,param_3);
  _objc_release(param_3);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d09318; end: 104d0936f; -[SCNGOPhoneEntryBusinessLogic _selectLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127111fc;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fade0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d09370; end: 104d093ab; -[SCNGOPhoneEntryBusinessLogic _countryCodeButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09370(long param_1)

{
  param_1 = param_1 + _DAT_1127111fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf53460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d093ac; end: 104d093f7; -[SCNGOPhoneEntryBusinessLogic _dismissSuccessPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d093ac(long param_1)

{
  param_1 = param_1 + _DAT_1127111fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d093f8; end: 104d0946f; -[SCNGOPhoneEntryBusinessLogic _switchButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d093f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127111fc;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0fae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d09470; end: 104d094ff; -[SCNGOPhoneEntryBusinessLogic _formattedPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09470(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be45a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711204);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112711208));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb58a0(uVar3,param_2,puVar2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104d09500; end: 104d0956b; -[SCNGOPhoneEntryBusinessLogic _formattedNumericCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271121c);
  func_0x00010bf53380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711204);
  func_0x00010bfb5880(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d0956c; end: 104d095d7; -[SCNGOPhoneEntryBusinessLogic _formattedCountryCodeWithFlag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0956c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271121c);
  func_0x00010bf536a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711204);
  func_0x00010bfc5b80(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d095d8; end: 104d09687; -[SCNGOPhoneEntryBusinessLogic _formattedCountryName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d095d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be45a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010be18ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x000104d0ec08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000104d0ec20();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112711204);
    func_0x00010bfc5c60(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d09688; end: 104d09733; -[SCNGOPhoneEntryBusinessLogic _isoCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271121c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf536a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf53380(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112711204;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c082c80(uVar3,param_2,uVar1,uVar2);
  if ((int)uVar3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfc4220(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar3 = uVar1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104d09734; end: 104d0989b; -[SCNGOPhoneEntryBusinessLogic _canContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104d09734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((*(byte *)(param_1 + _DAT_112711214) & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11271120c);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010be45a80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112711204);
      func_0x00010bfb5d60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      func_0x00010c0c13a0();
      bVar3 = *(byte *)(puStack_48 + 3);
      __Block_object_dispose(&uStack_50,8);
      _objc_release(uVar2);
      _objc_release(lVar1);
      goto LAB_104d09774;
    }
  }
  bVar3 = 0;
LAB_104d09774:
  return bVar3 & 1;
}



/* Entry: 104d0989c; end: 104d098d7;  */

void FUN_104d0989c(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = *(long *)(param_1 + 0x20) != 0;
  return;
}



/* Entry: 104d098d8; end: 104d09933; -[SCNGOPhoneEntryBusinessLogic _initialCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d098d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711204);
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc42a0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d09934; end: 104d09b47; -[SCNGOPhoneEntryBusinessLogic _initialMobile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112711204;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar2 = param_3;
  func_0x00010c0cf3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5d60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_104d09b48;
  uStack_50 = 0x104d09b58;
  uStack_48 = 0;
  func_0x00010c0c13a0(uVar4);
  lVar1 = param_1;
  func_0x00010be3af60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfc4220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfc5f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea3100(param_1);
  uVar5 = puStack_68[5];
  _objc_retain(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104d09b48; end: 104d09b5f;  */

void FUN_104d09b48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d09b60; end: 104d09c07;  */

void FUN_104d09b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d09c08; end: 104d09ca7; -[SCNGOPhoneEntryBusinessLogic _setCountryCode:countryNameAbbreviation:countryCodeNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af250;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0063a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271121c);
  *(undefined **)(param_1 + _DAT_11271121c) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d09ca8; end: 104d09d2b; -[SCNGOPhoneEntryBusinessLogic _headerTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09ca8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711200;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfe0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d09d2c; end: 104d09daf; -[SCNGOPhoneEntryBusinessLogic _headerSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09d2c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711200;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfdffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d09db0; end: 104d09e33; -[SCNGOPhoneEntryBusinessLogic _accessoryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09db0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711200;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010beed300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d09e34; end: 104d09eaf; -[SCNGOPhoneEntryBusinessLogic _shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d09e34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711200;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c233300();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 104d09eb0; end: 104d09f2b; -[SCNGOPhoneEntryBusinessLogic _shouldShowSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d09eb0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711200;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c234520();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 104d09f2c; end: 104d09fe7; -[SCNGOPhoneEntryBusinessLogic _continueButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09f2c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711200;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010b75e3a4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf4fb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      func_0x00010b75e3a4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar1 = uVar2;
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d09fe8; end: 104d0a06b; -[SCNGOPhoneEntryBusinessLogic countryCodePickerCompletedWithCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d09fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271121c);
  *(undefined8 *)(param_1 + _DAT_11271121c) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_1127111fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf53420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d0a06c; end: 104d0a09f; -[SCNGOPhoneEntryBusinessLogic countryCodePickerExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a06c(long param_1)

{
  param_1 = param_1 + _DAT_1127111fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf53420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d0a0a0; end: 104d0a147; -[SCNGOPhoneEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a0a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711210,0);
  _objc_storeStrong(param_1 + _DAT_112711218,0);
  _objc_storeStrong(param_1 + _DAT_11271120c,0);
  _objc_storeStrong(param_1 + _DAT_11271121c,0);
  _objc_storeStrong(param_1 + _DAT_112711208,0);
  _objc_storeStrong(param_1 + _DAT_112711204,0);
  _objc_destroyWeak(param_1 + _DAT_112711200);
  _objc_destroyWeak(param_1 + _DAT_1127111fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127111f8,0);
  return;
}



/* Entry: 104d0a148; end: 104d0a21b; -[SCNGOPhoneEntryLoginViewController initWithScreen:privacyPolicyViewFactory:asciiKeypadEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d0a148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3d78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112711220;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112711224;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112711228) = param_5;
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0a21c; end: 104d0a223; -[SCNGOPhoneEntryLoginViewController pageViewName] */

undefined8 FUN_104d0a21c(void)

{
  return 0xc4;
}



/* Entry: 104d0a224; end: 104d0a22b; -[SCNGOPhoneEntryLoginViewController prefersStatusBarHidden] */

undefined8 FUN_104d0a224(void)

{
  return 1;
}



/* Entry: 104d0a22c; end: 104d0a2db; -[SCNGOPhoneEntryLoginViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a22c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711220);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d0a2dc; end: 104d0a323;  */

void FUN_104d0a2dc(long param_1,undefined8 param_2)

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



/* Entry: 104d0a324; end: 104d0a553; -[SCNGOPhoneEntryLoginViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a324(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271122c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(ulong *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uVar5 = param_3;
  func_0x00010bf2c700();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_3;
    func_0x00010c09cb40(param_3);
    uVar3 = (uint)uVar5 ^ 1;
  }
  else {
    uVar3 = 0;
    uVar5 = 1;
  }
  lVar4 = (long)_DAT_112711230;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112711234),param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c09cb40(param_3);
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar4),param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bfb60e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112711238;
  func_0x00010c1ee220(*(undefined8 *)(param_1 + lVar4),param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf53560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba1e0(*(undefined8 *)(param_1 + lVar4),param_2,uVar5);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  if ((int)puVar2 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271123c),param_2,1);
    lVar6 = (long)_DAT_112711240;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    uVar5 = param_3;
    func_0x00010bf98d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099980(uVar1,param_2,uVar5);
    _objc_release(uVar5);
    uVar1 = 0xc2;
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271123c),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112711240),param_2,1);
    uVar5 = param_3;
    func_0x00010bf2c700();
    if ((uVar5 & 1) == 0) {
      uVar5 = param_3;
      func_0x00010c09cb40();
      uVar1 = 0xe2;
      if ((int)uVar5 != 0) {
        uVar1 = 0xe3;
      }
    }
    else {
      uVar1 = 0xe3;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d0a554; end: 104d0a5a3; -[SCNGOPhoneEntryLoginViewController viewDidLoad] */

void FUN_104d0a554(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3d78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb0d80(param_1);
  func_0x00010beae7a0(param_1);
  return;
}



/* Entry: 104d0a5a4; end: 104d0a63f; -[SCNGOPhoneEntryLoginViewController _setupObserver] */

void FUN_104d0a5a4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0a640; end: 104d0a76b; -[SCNGOPhoneEntryLoginViewController _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11271122c);
  func_0x00010bf2c700();
  lVar8 = (long)_DAT_112711244;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0xd6;
  if (iVar2 == 0) {
    uVar6 = 0xd4;
  }
  uVar1 = 0xd4;
  if (iVar2 == 0) {
    uVar1 = 0xd5;
  }
  uVar4 = uVar7;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar7,param_2,puVar5);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar6,param_2,puVar5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104d0a76c; end: 104d0a85f; -[SCNGOPhoneEntryLoginViewController _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a76c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112711244;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar4,param_2,puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d0a860; end: 104d0a8b3; -[SCNGOPhoneEntryLoginViewController _setupUI] */

void FUN_104d0a860(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010beabca0(param_1);
  func_0x00010beb0460(param_1);
  func_0x00010beaec40(param_1);
  func_0x00010beaefa0(param_1);
  func_0x00010bdc7320(param_1);
  func_0x00010beac6a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104d0a8b4; end: 104d0ac9f; -[SCNGOPhoneEntryLoginViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0a8b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 **ppuStack_380;
  code *pcStack_378;
  undefined8 uStack_368;
  undefined *puStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c20eaa0(param_1,param_2,2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf14800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar29);
  _objc_release(puVar1);
  lVar29 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6de0();
  _objc_release(lVar29);
  lVar29 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar29);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar24 = (long)_DAT_112711248;
  uVar22 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar22);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24),param_2,0);
  lVar29 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  lStack_a0 = lVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar29;
  func_0x00010bf493a0(lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar24);
  lStack_b0 = lVar2;
  lStack_90 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  uStack_c0 = uVar22;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar29;
  func_0x00010bf493a0(uVar22,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  uStack_d0 = uVar22;
  uStack_88 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  uStack_e8 = uVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar29;
  func_0x00010bf493a0(uVar3,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar24);
  uStack_80 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  uStack_78 = uVar22;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_f0);
  _objc_release(lStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_b8);
  _objc_release(uStack_c0);
  _objc_release(lStack_b0);
  _objc_release(lStack_a8);
  _objc_release(lStack_98);
  lVar25 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104d0aca0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aec40;
  lStack_150 = lVar24;
  uStack_148 = uVar5;
  uStack_140 = uVar22;
  lStack_138 = lVar2;
  lStack_130 = lVar29;
  uStack_128 = uVar4;
  uStack_120 = uVar3;
  puStack_118 = puVar1;
  lStack_110 = param_1;
  uStack_108 = uVar23;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112711230;
  uVar22 = *(undefined8 *)(lVar25 + lVar24);
  *(undefined **)(lVar25 + lVar24) = puVar6;
  _objc_release(uVar22);
  func_0x00010c16e480(*(undefined8 *)(lVar25 + lVar24),param_2,0xd4,0);
  uVar22 = *(undefined8 *)(lVar25 + lVar24);
  func_0x00010c216380(uVar22,param_2,0xd5,0);
  uVar23 = *(undefined8 *)(lVar25 + lVar24);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar23,param_2,uVar22,0);
  _objc_release(uVar22);
  func_0x00010befbd60(*(undefined8 *)(lVar25 + lVar24),param_2,lVar25,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  lVar29 = lVar25;
  func_0x00010c29bf00(lVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar24),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(lVar25 + lVar24),param_2,1);
  puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar25 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar25;
  lStack_188 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar25 + lVar24);
  lStack_198 = lVar2;
  lStack_178 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar25;
  uStack_1a8 = uVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a0 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar29;
  func_0x00010bf493c0(0xc030000000000000,uVar22,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar25 + lVar24);
  uStack_1c0 = uVar22;
  uStack_170 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar25;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf49520(0xc030000000000000,uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + lVar24);
  uStack_168 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar4;
  func_0x00010bf49520(0xc030000000000000,uVar4,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_160 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_178,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1b8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(lVar28);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(uVar4);
  _objc_release(uVar22);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release(uVar3);
  _objc_release(uStack_1c0);
  _objc_release(lStack_1b0);
  _objc_release(lStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(lStack_198);
  _objc_release(lStack_190);
  _objc_release(lStack_180);
  lVar7 = lStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_104d0b020;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puStack_220 = puVar1;
  uStack_218 = uVar3;
  uStack_210 = uVar23;
  lStack_208 = lVar28;
  lStack_200 = lVar24;
  uStack_1f8 = uVar4;
  uStack_1f0 = uVar22;
  lStack_1e8 = lVar2;
  lStack_1e0 = lVar25;
  lStack_1d8 = lVar29;
  ppuStack_1d0 = &puStack_100;
  _objc_opt_new();
  lVar28 = (long)_DAT_112711244;
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  *(undefined **)(lVar7 + lVar28) = puVar6;
  _objc_release(uVar22);
  uVar3 = *(undefined8 *)(lVar7 + lVar28);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar3,param_2,uVar23);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar3);
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar22,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  func_0x000104d0ec50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar22,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar7 + lVar28),param_2,lVar7,
                      PTR_s__useEmailOrUsername_112525c70,0x40);
  lVar29 = lVar7;
  func_0x00010c29bf00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  func_0x00010c219b60(*(undefined8 *)(lVar7 + lVar28),param_2,0);
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar22);
  uVar23 = *(undefined8 *)(lVar7 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar7 + _DAT_112711230);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf49500(uVar23,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar7 + _DAT_112711234);
  *(undefined8 *)(lVar7 + _DAT_112711234) = uVar22;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar23);
  puStack_298 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar7 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar7;
  lStack_260 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar7 + lVar28);
  lStack_270 = lVar2;
  lStack_250 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar7;
  uStack_280 = uVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_278 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_288 = lVar29;
  func_0x00010bf493c0(0xc030000000000000,uVar22,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar7 + lVar28);
  uStack_290 = uVar22;
  uStack_248 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar7;
  uStack_2a8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a0 = lVar29;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49500(uVar3,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar7 + lVar28);
  uStack_240 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf49520(0xc030000000000000,uVar4,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar7 + lVar28);
  uStack_238 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_230 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_250,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_298,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar29);
  _objc_release(lStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_290);
  _objc_release(lStack_288);
  _objc_release(lStack_278);
  _objc_release(uStack_280);
  _objc_release(lStack_270);
  _objc_release(lStack_268);
  _objc_release(lStack_258);
  lVar28 = lStack_260;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_104d0b51c;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(lVar28 + _DAT_112711224);
  uStack_310 = uVar23;
  uStack_308 = uVar22;
  lStack_300 = lVar25;
  lStack_2f8 = lVar24;
  lStack_2f0 = lVar2;
  uStack_2e8 = uVar4;
  uStack_2e0 = uVar3;
  lStack_2d8 = lVar29;
  puStack_2d0 = puVar1;
  uStack_2c8 = uVar5;
  ppuStack_2c0 = &ppuStack_1d0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar8;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11271123c;
  uVar23 = *(undefined8 *)(lVar28 + lVar25);
  *(undefined8 *)(lVar28 + lVar25) = uVar22;
  _objc_release(uVar23);
  _objc_release(uVar8);
  lVar24 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar28 + lVar24),param_2,*(undefined8 *)(lVar28 + lVar25));
  func_0x00010c219b60(*(undefined8 *)(lVar28 + lVar25),param_2,0);
  puStack_360 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar28 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  lStack_348 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_340 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_350 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar28 + lVar25);
  lStack_358 = lVar2;
  lStack_338 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  uStack_368 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar28 + lVar25);
  uStack_330 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar28 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf493c0(0x4020000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar28 + lVar24);
  uStack_328 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar28 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  func_0x00010bf49460(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_320 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_338,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_360,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release(uStack_368);
  _objc_release(lStack_358);
  _objc_release(lStack_350);
  _objc_release(lStack_340);
  lVar24 = lStack_348;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_104d0b7f0;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126af058;
  uStack_3d0 = uVar3;
  lStack_3c8 = lVar2;
  uStack_3c0 = uVar4;
  lStack_3b8 = lVar29;
  puStack_3b0 = puVar1;
  uStack_3a8 = uVar9;
  uStack_3a0 = uVar23;
  uStack_398 = uVar8;
  uStack_390 = uVar22;
  uStack_388 = uVar5;
  ppuStack_380 = &ppuStack_2c0;
  _objc_opt_new();
  lVar26 = (long)_DAT_112711240;
  uVar22 = *(undefined8 *)(lVar24 + lVar26);
  *(undefined **)(lVar24 + lVar26) = puVar6;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar24 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar24 + lVar26),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar24 + lVar26),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(lVar24 + lVar26),param_2,lVar24);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lVar27),param_2,*(undefined8 *)(lVar24 + lVar26));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(lVar24 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar10;
  func_0x00010bf493c0(0x4030000000000000,lVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar24 + lVar26);
  lStack_3f8 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf493c0(0xc030000000000000,uVar4,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar24 + lVar26);
  uStack_3f0 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar24 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010bf493c0(0x4020000000000000,uVar5,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar24 + lVar27);
  uStack_3e8 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar24 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf49460(uVar9,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3e0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_3f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(lVar7);
  _objc_release(lVar28);
  _objc_release(uVar4);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  lStack_4b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  func_0x00010c051860();
  lVar29 = (long)_DAT_112711238;
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  *(undefined **)(lVar10 + lVar29) = puVar1;
  _objc_release(uVar22);
  func_0x00010c18b5e0(*(undefined8 *)(lVar10 + lVar29),param_2,lVar10);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba200(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee240(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1733a0(0,*(undefined8 *)(lVar10 + lVar29));
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar6 = puVar1;
  func_0x000104d0ec68();
  _objc_retainAutoreleasedReturnValue();
  uStack_4d0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar12 = puVar6;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_4c8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_4c0 = puVar13;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_4b8 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_4c0,&uStack_4d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,puVar6,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar6);
  func_0x00010c1ee200(*(undefined8 *)(lVar10 + lVar29),param_2,puVar1);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar6);
  _objc_release(puVar6);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar22);
  uVar22 = 0xb;
  if (*(char *)(lVar10 + _DAT_112711228) == '\0') {
    uVar22 = 5;
  }
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar29),param_2,uVar22);
  func_0x00010c219b60(*(undefined8 *)(lVar10 + lVar29),param_2,0);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar27),param_2,*(undefined8 *)(lVar10 + lVar29));
  uVar30 = 0x4071800000000000;
  func_0x00010bdc5bc0(lVar10);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar5;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar10 + lVar29);
  uStack_4f0 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar10 + lVar29);
  uStack_4e8 = uVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar10;
  func_0x00010c29bf00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar10 + lVar29);
  uStack_4e0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010c29bf00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf493c0(uVar30,uVar11,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_4d8 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_4f0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar4);
  _objc_release(lVar26);
  _objc_release(lVar7);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(lVar28);
  _objc_release(lVar25);
  _objc_release(uVar9);
  _objc_release(uVar23);
  _objc_release(lVar24);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(uVar22);
  _objc_release(uVar5);
  func_0x00010bf179a0(*(undefined8 *)(lVar10 + lVar29));
  puVar12 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar6 = puVar12;
  func_0x00010c219b60(puVar12,param_2,0);
  func_0x000104d0ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar12,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar27),param_2,puVar12);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0x4030000000000000,puVar13,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  puStack_500 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493c0(0xc020000000000000,puVar15,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_4f8 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_500,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar22);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar24);
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b0) {
    return;
  }
  ___stack_chk_fail();
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar6 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar6);
  func_0x00010c219b60(puVar13,param_2,0);
  uVar22 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar1);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  puStack_5d8 = puVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493c0(uVar22,puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5d0 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_5d8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar1);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  uVar22 = *(undefined8 *)(puVar12 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar22,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0aca0; end: 104d0b01f; -[SCNGOPhoneEntryLoginViewController _setupContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0aca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined *puStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112711230;
  uVar22 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar22);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar25),param_2,0xd4,0);
  uVar22 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c216380(uVar22,param_2,0xd5,0);
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar23,param_2,uVar22,0);
  _objc_release(uVar22);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar25),param_2,param_1,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar25),param_2,1);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  lStack_98 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar25);
  lStack_a8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  uStack_b8 = uVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar29;
  func_0x00010bf493c0(0xc030000000000000,uVar22,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar25);
  uStack_d0 = uVar22;
  uStack_80 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf49520(0xc030000000000000,uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  uStack_78 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar4;
  func_0x00010bf49520(0xc030000000000000,uVar4,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar22);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release(uVar3);
  _objc_release(uStack_d0);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar5 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_104d0b020;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puStack_130 = puVar1;
  uStack_128 = uVar3;
  uStack_120 = uVar23;
  lStack_118 = lVar24;
  lStack_110 = lVar25;
  uStack_108 = uVar4;
  uStack_100 = uVar22;
  lStack_f8 = lVar2;
  lStack_f0 = param_1;
  lStack_e8 = lVar29;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar28 = (long)_DAT_112711244;
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  *(undefined **)(lVar5 + lVar28) = puVar6;
  _objc_release(uVar22);
  uVar3 = *(undefined8 *)(lVar5 + lVar28);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar3,param_2,uVar23);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar3);
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar22,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  func_0x000104d0ec50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar22,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar5 + lVar28),param_2,lVar5,
                      PTR_s__useEmailOrUsername_112525c70,0x40);
  lVar29 = lVar5;
  func_0x00010c29bf00(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  func_0x00010c219b60(*(undefined8 *)(lVar5 + lVar28),param_2,0);
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar22);
  uVar23 = *(undefined8 *)(lVar5 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar5 + _DAT_112711230);
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf49500(uVar23,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112711234);
  *(undefined8 *)(lVar5 + _DAT_112711234) = uVar22;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar23);
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar5 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar5;
  lStack_170 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar5 + lVar28);
  lStack_180 = lVar2;
  lStack_160 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar5;
  uStack_190 = uVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar29;
  func_0x00010bf493c0(0xc030000000000000,uVar22,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar5 + lVar28);
  uStack_1a0 = uVar22;
  uStack_158 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar5;
  uStack_1b8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar29;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49500(uVar3,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar5 + lVar28);
  uStack_150 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf49520(0xc030000000000000,uVar4,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar5 + lVar28);
  uStack_148 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar7;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_160,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar29);
  _objc_release(lStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1a0);
  _objc_release(lStack_198);
  _objc_release(lStack_188);
  _objc_release(uStack_190);
  _objc_release(lStack_180);
  _objc_release(lStack_178);
  _objc_release(lStack_168);
  lVar5 = lStack_170;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_104d0b51c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(lVar5 + _DAT_112711224);
  uStack_220 = uVar23;
  uStack_218 = uVar22;
  lStack_210 = lVar24;
  lStack_208 = lVar25;
  lStack_200 = lVar2;
  uStack_1f8 = uVar4;
  uStack_1f0 = uVar3;
  lStack_1e8 = lVar29;
  puStack_1e0 = puVar1;
  uStack_1d8 = uVar7;
  ppuStack_1d0 = &puStack_e0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar8;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11271123c;
  uVar23 = *(undefined8 *)(lVar5 + lVar24);
  *(undefined8 *)(lVar5 + lVar24) = uVar22;
  _objc_release(uVar23);
  _objc_release(uVar8);
  lVar25 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar5 + lVar25),param_2,*(undefined8 *)(lVar5 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(lVar5 + lVar24),param_2,0);
  puStack_270 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar5 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar5;
  lStack_258 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_250 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_260 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar5 + lVar24);
  lStack_268 = lVar2;
  lStack_248 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar5;
  uStack_278 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar5 + lVar24);
  uStack_240 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf493c0(0x4020000000000000,uVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar5 + lVar25);
  uStack_238 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar5 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  func_0x00010bf49460(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_230 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_248,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_270,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar23);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar22);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release(uStack_278);
  _objc_release(lStack_268);
  _objc_release(lStack_260);
  _objc_release(lStack_250);
  lVar25 = lStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_104d0b7f0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126af058;
  uStack_2e0 = uVar3;
  lStack_2d8 = lVar2;
  uStack_2d0 = uVar4;
  lStack_2c8 = lVar29;
  puStack_2c0 = puVar1;
  uStack_2b8 = uVar9;
  uStack_2b0 = uVar23;
  uStack_2a8 = uVar8;
  uStack_2a0 = uVar22;
  uStack_298 = uVar7;
  ppuStack_290 = &ppuStack_1d0;
  _objc_opt_new();
  lVar26 = (long)_DAT_112711240;
  uVar22 = *(undefined8 *)(lVar25 + lVar26);
  *(undefined **)(lVar25 + lVar26) = puVar6;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar25 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar25 + lVar26),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar26),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(lVar25 + lVar26),param_2,lVar25);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar27),param_2,*(undefined8 *)(lVar25 + lVar26));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(lVar25 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar25;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar10;
  func_0x00010bf493c0(0x4030000000000000,lVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + lVar26);
  lStack_308 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar25;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf493c0(0xc030000000000000,uVar4,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar25 + lVar26);
  uStack_300 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar25 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar7;
  func_0x00010bf493c0(0x4020000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar25 + lVar27);
  uStack_2f8 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar25 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf49460(uVar9,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2f0 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_308,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(lVar28);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar24);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  func_0x00010c051860();
  lVar29 = (long)_DAT_112711238;
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  *(undefined **)(lVar10 + lVar29) = puVar1;
  _objc_release(uVar22);
  func_0x00010c18b5e0(*(undefined8 *)(lVar10 + lVar29),param_2,lVar10);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba200(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee240(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1733a0(0,*(undefined8 *)(lVar10 + lVar29));
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar6 = puVar1;
  func_0x000104d0ec68();
  _objc_retainAutoreleasedReturnValue();
  uStack_3e0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar12 = puVar6;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_3d8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_3d0 = puVar13;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3c8 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_3d0,&uStack_3e0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,puVar6,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar6);
  func_0x00010c1ee200(*(undefined8 *)(lVar10 + lVar29),param_2,puVar1);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar6);
  _objc_release(puVar6);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar22);
  uVar22 = 0xb;
  if (*(char *)(lVar10 + _DAT_112711228) == '\0') {
    uVar22 = 5;
  }
  func_0x00010c1b6ec0(*(undefined8 *)(lVar10 + lVar29),param_2,uVar22);
  func_0x00010c219b60(*(undefined8 *)(lVar10 + lVar29),param_2,0);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar27),param_2,*(undefined8 *)(lVar10 + lVar29));
  uVar30 = 0x4071800000000000;
  func_0x00010bdc5bc0(lVar10);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar7;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar10 + lVar29);
  uStack_400 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar10 + lVar29);
  uStack_3f8 = uVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar10;
  func_0x00010c29bf00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar10 + lVar29);
  uStack_3f0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar10;
  func_0x00010c29bf00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar28;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf493c0(uVar30,uVar11,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3e8 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_400,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar4);
  _objc_release(lVar26);
  _objc_release(lVar28);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar24);
  _objc_release(uVar9);
  _objc_release(uVar23);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(uVar22);
  _objc_release(uVar7);
  func_0x00010bf179a0(*(undefined8 *)(lVar10 + lVar29));
  puVar12 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar6 = puVar12;
  func_0x00010c219b60(puVar12,param_2,0);
  func_0x000104d0ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar12,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar27),param_2,puVar12);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0x4030000000000000,puVar13,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  puStack_410 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar10 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493c0(0xc020000000000000,puVar15,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_408 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_410,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar22);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c0) {
    return;
  }
  ___stack_chk_fail();
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar6 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar6);
  func_0x00010c219b60(puVar13,param_2,0);
  uVar22 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar1);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  puStack_4e8 = puVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493c0(uVar22,puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_4e0 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_4e8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar1);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  uVar22 = *(undefined8 *)(puVar12 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar22,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0b020; end: 104d0b51b; -[SCNGOPhoneEntryLoginViewController _setupSwitchToEmailButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0b020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puStack_418;
  undefined *puStack_410;
  long lStack_408;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_new();
  lVar28 = (long)_DAT_112711244;
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar22);
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c271420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar2;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar22;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar22);
  _objc_release(uVar2);
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar22,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  func_0x000104d0ec50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar22,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar28),param_2,param_1,
                      PTR_s__useEmailOrUsername_112525c70,0x40);
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28),param_2,0);
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403a000000000000);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar22);
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711230);
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf49500(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + _DAT_112711234);
  *(undefined8 *)(param_1 + _DAT_112711234) = uVar22;
  _objc_release(uVar23);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  lStack_a0 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar4,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar28);
  lStack_b0 = lVar4;
  lStack_90 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  uStack_c0 = uVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar29;
  func_0x00010bf493c0(0xc030000000000000,uVar22,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  uStack_d0 = uVar22;
  uStack_88 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  uStack_e8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar29;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49500(uVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar28);
  uStack_80 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar4;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf49520(0xc030000000000000,uVar23,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar28);
  uStack_78 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar4);
  _objc_release(uVar23);
  _objc_release(uVar2);
  _objc_release(lVar29);
  _objc_release(lStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_b8);
  _objc_release(uStack_c0);
  _objc_release(lStack_b0);
  _objc_release(lStack_a8);
  _objc_release(lStack_98);
  lVar28 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104d0b51c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(lVar28 + _DAT_112711224);
  uStack_150 = uVar3;
  uStack_148 = uVar22;
  lStack_140 = lVar25;
  lStack_138 = lVar24;
  lStack_130 = lVar4;
  uStack_128 = uVar23;
  uStack_120 = uVar2;
  lStack_118 = lVar29;
  puStack_110 = puVar1;
  uStack_108 = uVar5;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar6;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11271123c;
  uVar3 = *(undefined8 *)(lVar28 + lVar25);
  *(undefined8 *)(lVar28 + lVar25) = uVar22;
  _objc_release(uVar3);
  _objc_release(uVar6);
  lVar24 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar28 + lVar24),param_2,*(undefined8 *)(lVar28 + lVar25));
  func_0x00010c219b60(*(undefined8 *)(lVar28 + lVar25),param_2,0);
  puStack_1a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(lVar28 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  lStack_188 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar4,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar28 + lVar25);
  lStack_198 = lVar4;
  lStack_178 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  uStack_1a8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar2,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar28 + lVar25);
  uStack_170 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar28 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf493c0(0x4020000000000000,uVar23,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar28 + lVar24);
  uStack_168 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar28 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf49460(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_160 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_178,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar23);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar29);
  _objc_release(uStack_1a8);
  _objc_release(lStack_198);
  _objc_release(lStack_190);
  _objc_release(lStack_180);
  lVar24 = lStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_104d0b7f0;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126af058;
  uStack_210 = uVar2;
  lStack_208 = lVar4;
  uStack_200 = uVar23;
  lStack_1f8 = lVar29;
  puStack_1f0 = puVar1;
  uStack_1e8 = uVar7;
  uStack_1e0 = uVar3;
  uStack_1d8 = uVar6;
  uStack_1d0 = uVar22;
  uStack_1c8 = uVar5;
  ppuStack_1c0 = &puStack_100;
  _objc_opt_new();
  lVar26 = (long)_DAT_112711240;
  uVar22 = *(undefined8 *)(lVar24 + lVar26);
  *(undefined **)(lVar24 + lVar26) = puVar8;
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar24 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar24 + lVar26),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(lVar24 + lVar26),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(lVar24 + lVar26),param_2,lVar24);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lVar27),param_2,*(undefined8 *)(lVar24 + lVar26));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar24 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar9;
  func_0x00010bf493c0(0x4030000000000000,lVar9,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  lStack_238 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar24;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf493c0(0xc030000000000000,uVar23,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar24 + lVar26);
  uStack_230 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar24 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493c0(0x4020000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar24 + lVar27);
  uStack_228 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar24 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf49460(uVar7,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_220 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_238,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(lVar10);
  _objc_release(lVar28);
  _objc_release(uVar23);
  _objc_release(lVar25);
  _objc_release(lVar4);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  func_0x00010c051860();
  lVar29 = (long)_DAT_112711238;
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  *(undefined **)(lVar9 + lVar29) = puVar1;
  _objc_release(uVar22);
  func_0x00010c18b5e0(*(undefined8 *)(lVar9 + lVar29),param_2,lVar9);
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba200(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee240(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1733a0(0,*(undefined8 *)(lVar9 + lVar29));
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar8 = puVar1;
  func_0x000104d0ec68();
  _objc_retainAutoreleasedReturnValue();
  uStack_310 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar12 = puVar8;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_308 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_300 = puVar13;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2f8 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_300,&uStack_310,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,puVar8,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar8);
  func_0x00010c1ee200(*(undefined8 *)(lVar9 + lVar29),param_2,puVar1);
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar8);
  _objc_release(puVar8);
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c08c0e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar22);
  uVar22 = 0xb;
  if (*(char *)(lVar9 + _DAT_112711228) == '\0') {
    uVar22 = 5;
  }
  func_0x00010c1b6ec0(*(undefined8 *)(lVar9 + lVar29),param_2,uVar22);
  func_0x00010c219b60(*(undefined8 *)(lVar9 + lVar29),param_2,0);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar9 + lVar27),param_2,*(undefined8 *)(lVar9 + lVar29));
  uVar30 = 0x4071800000000000;
  func_0x00010bdc5bc0(lVar9);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar5;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + lVar29);
  uStack_330 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493c0(0x4030000000000000,uVar6,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + lVar29);
  uStack_328 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar9;
  func_0x00010c29bf00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0xc030000000000000,uVar7,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + lVar29);
  uStack_320 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c29bf00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar11;
  func_0x00010bf493c0(uVar30,uVar11,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_318 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_330,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar23);
  _objc_release(lVar26);
  _objc_release(lVar10);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(lVar28);
  _objc_release(lVar25);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar24);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  func_0x00010bf179a0(*(undefined8 *)(lVar9 + lVar29));
  puVar12 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar8 = puVar12;
  func_0x00010c219b60(puVar12,param_2,0);
  func_0x000104d0ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar12,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + lVar27),param_2,puVar12);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0x4030000000000000,puVar13,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  puStack_340 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493c0(0xc020000000000000,puVar15,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_338 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_340,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar22);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar24);
  _objc_release(lVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar8 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar8);
  func_0x00010c219b60(puVar13,param_2,0);
  uVar22 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar1);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  puStack_418 = puVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493c0(uVar22,puVar18,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_410 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_418,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar1);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  uVar22 = *(undefined8 *)(puVar12 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar22,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0b51c; end: 104d0b7ef; -[SCNGOPhoneEntryLoginViewController _setupPolicyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0b51c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711224);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar1;
  func_0x00010c113f80();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11271123c;
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  *(undefined8 *)(param_1 + lVar26) = uVar24;
  _objc_release(uVar23);
  _objc_release(uVar1);
  lVar25 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar25),param_2,*(undefined8 *)(param_1 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26),param_2,0);
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  lStack_98 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar29;
  func_0x00010bf493c0(0x4030000000000000,lVar2,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  lStack_a8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  uStack_b8 = uVar23;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc030000000000000,uVar23,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar26);
  uStack_80 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar3;
  func_0x00010bf493c0(0x4020000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar25);
  uStack_78 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf49460(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar25 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104d0b7f0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126af058;
  uStack_120 = uVar23;
  lStack_118 = lVar2;
  uStack_110 = uVar3;
  lStack_108 = lVar29;
  puStack_100 = puVar7;
  uStack_f8 = uVar6;
  uStack_f0 = uVar1;
  uStack_e8 = uVar5;
  uStack_e0 = uVar24;
  uStack_d8 = uVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lVar27 = (long)_DAT_112711240;
  uVar24 = *(undefined8 *)(lVar25 + lVar27);
  *(undefined **)(lVar25 + lVar27) = puVar8;
  _objc_release(uVar24);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar25 + lVar27),param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar25 + lVar27),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar27),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(lVar25 + lVar27),param_2,lVar25);
  lVar28 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar28),param_2,*(undefined8 *)(lVar25 + lVar27));
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(lVar25 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar25;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar9;
  func_0x00010bf493c0(0x4030000000000000,lVar9,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar25 + lVar27);
  lStack_148 = lVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar25;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar3;
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + lVar27);
  uStack_140 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar25 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf493c0(0x4020000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar25 + lVar28);
  uStack_138 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar25 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar6;
  func_0x00010bf49460(uVar6,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_148,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar23);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar24);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar3);
  _objc_release(lVar26);
  _objc_release(lVar2);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126af648;
  _objc_alloc();
  func_0x00010c051860();
  lVar29 = (long)_DAT_112711238;
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  *(undefined **)(lVar9 + lVar29) = puVar7;
  _objc_release(uVar24);
  func_0x00010c18b5e0(*(undefined8 *)(lVar9 + lVar29),param_2,lVar9);
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba200(uVar24,param_2,puVar7);
  _objc_release(puVar7);
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee240(uVar24,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c1733a0(0,*(undefined8 *)(lVar9 + lVar29));
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000104d0ec68();
  _objc_retainAutoreleasedReturnValue();
  uStack_220 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar13 = puVar8;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_210 = puVar14;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_208 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_210,&uStack_220,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar7,param_2,puVar8,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar8);
  func_0x00010c1ee200(*(undefined8 *)(lVar9 + lVar29),param_2,puVar7);
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar24,param_2,puVar8);
  _objc_release(puVar8);
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c08c0e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c08c0e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c08c0e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar24);
  uVar24 = 0xb;
  if (*(char *)(lVar9 + _DAT_112711228) == '\0') {
    uVar24 = 5;
  }
  func_0x00010c1b6ec0(*(undefined8 *)(lVar9 + lVar29),param_2,uVar24);
  func_0x00010c219b60(*(undefined8 *)(lVar9 + lVar29),param_2,0);
  lVar28 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar9 + lVar28),param_2,*(undefined8 *)(lVar9 + lVar29));
  uVar30 = 0x4071800000000000;
  func_0x00010bdc5bc0(lVar9);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar9 + lVar29);
  uStack_240 = uVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf493c0(0x4030000000000000,uVar5,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + lVar29);
  uStack_238 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar9;
  func_0x00010c29bf00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar6;
  func_0x00010bf493c0(0xc030000000000000,uVar6,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar9 + lVar29);
  uStack_230 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c29bf00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf493c0(uVar30,uVar12,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_228 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_240,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar3);
  _objc_release(lVar27);
  _objc_release(lVar11);
  _objc_release(uVar12);
  _objc_release(uVar23);
  _objc_release(lVar10);
  _objc_release(lVar26);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar4);
  func_0x00010bf179a0(*(undefined8 *)(lVar9 + lVar29));
  puVar13 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar8 = puVar13;
  func_0x00010c219b60(puVar13,param_2,0);
  func_0x000104d0ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar13,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010befbb60(*(undefined8 *)(lVar9 + lVar28),param_2,puVar13);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf493c0(0x4030000000000000,puVar14,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  puStack_250 = puVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar9 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf493c0(0xc020000000000000,puVar16,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_248 = puVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_250,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar24);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar8 = puVar7;
  func_0x00010c29bf00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar8);
  func_0x00010c219b60(puVar14,param_2,0);
  uVar24 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar7);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar7;
  func_0x00010c29bf00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar14;
  puStack_328 = puVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493c0(uVar24,puVar19,param_2,puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_320 = puVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_328,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar7);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  uVar24 = *(undefined8 *)(puVar13 + _DAT_112711220);
  puVar7 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar24,param_2,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104d0b7f0; end: 104d0bb17; -[SCNGOPhoneEntryLoginViewController _setupErrorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0b7f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af058;
  _objc_opt_new();
  lVar27 = (long)_DAT_112711240;
  uVar25 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar1;
  _objc_release(uVar25);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar27),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar27),param_2,param_1);
  lVar28 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28),param_2,*(undefined8 *)(param_1 + lVar27));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493c0(0x4030000000000000,lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar27);
  lStack_88 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar6;
  func_0x00010bf493c0(0xc030000000000000,uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar27);
  uStack_80 = uVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112711238);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493c0(0x4020000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar28);
  uStack_78 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf49460(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar25);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  func_0x00010c051860();
  lVar29 = (long)_DAT_112711238;
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  *(undefined **)(lVar3 + lVar29) = puVar1;
  _objc_release(uVar25);
  func_0x00010c18b5e0(*(undefined8 *)(lVar3 + lVar29),param_2,lVar3);
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba200(uVar25,param_2,puVar1);
  _objc_release(puVar1);
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee240(uVar25,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1733a0(0,*(undefined8 *)(lVar3 + lVar29));
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104d0ec68();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar15 = puVar2;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_150 = puVar16;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_148 = puVar17;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_150,&uStack_160,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,puVar2,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar2);
  func_0x00010c1ee200(*(undefined8 *)(lVar3 + lVar29),param_2,puVar1);
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar25,param_2,puVar2);
  _objc_release(puVar2);
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c08c0e0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar25);
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c08c0e0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar25);
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c08c0e0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar25);
  uVar25 = 0xb;
  if (*(char *)(lVar3 + _DAT_112711228) == '\0') {
    uVar25 = 5;
  }
  func_0x00010c1b6ec0(*(undefined8 *)(lVar3 + lVar29),param_2,uVar25);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar29),param_2,0);
  lVar26 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar26),param_2,*(undefined8 *)(lVar3 + lVar29));
  uVar30 = 0x4071800000000000;
  func_0x00010bdc5bc0(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar9;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + lVar29);
  uStack_180 = uVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493c0(0x4030000000000000,uVar10,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar3 + lVar29);
  uStack_178 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493c0(0xc030000000000000,uVar12,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar3 + lVar29);
  uStack_170 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar3;
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf493c0(uVar30,uVar13,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_168 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_180,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(uVar6);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar10);
  _objc_release(uVar25);
  _objc_release(uVar9);
  func_0x00010bf179a0(*(undefined8 *)(lVar3 + lVar29));
  puVar15 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar2 = puVar15;
  func_0x00010c219b60(puVar15,param_2,0);
  func_0x000104d0ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar15,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar26),param_2,puVar15);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar16 = puVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf493c0(0x4030000000000000,puVar16,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar15;
  puStack_190 = puVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493c0(0xc020000000000000,puVar18,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_188 = puVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_190,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar20);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar25);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    return;
  }
  ___stack_chk_fail();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar16,param_2,0);
  uVar25 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar17;
  func_0x00010bf493a0(puVar17,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar16;
  puStack_268 = puVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493c0(uVar25,puVar21,param_2,puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_260 = puVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_268,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar24);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar1);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  uVar25 = *(undefined8 *)(puVar15 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar25,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0bb18; end: 104d0c1a3; -[SCNGOPhoneEntryLoginViewController _setupPhoneEntryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0bb18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  func_0x00010c051860();
  lVar28 = (long)_DAT_112711238;
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar26);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar28),param_2,param_1);
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba200(uVar26,param_2,puVar1);
  _objc_release(puVar1);
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee240(uVar26,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1733a0(0,*(undefined8 *)(param_1 + lVar28));
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104d0ec68();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar3 = puVar2;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_90 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&uStack_a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,puVar2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1ee200(*(undefined8 *)(param_1 + lVar28),param_2,puVar1);
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar26,param_2,puVar2);
  _objc_release(puVar2);
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar26);
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar26);
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08c0e0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar26);
  uVar26 = 0xb;
  if (*(char *)(param_1 + _DAT_112711228) == '\0') {
    uVar26 = 5;
  }
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar28),param_2,uVar26);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28),param_2,0);
  lVar27 = (long)_DAT_112711248;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar27),param_2,*(undefined8 *)(param_1 + lVar28));
  uVar29 = 0x4071800000000000;
  func_0x00010bdc5bc0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar7;
  func_0x00010bf49420(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar28);
  uStack_c0 = uVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0x4030000000000000,uVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar28);
  uStack_b8 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493c0(0xc030000000000000,uVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar28);
  uStack_b0 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493c0(uVar29,uVar16,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar26);
  _objc_release(uVar7);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar28));
  puVar3 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar2 = puVar3;
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x000104d0ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar27),param_2,puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0x4030000000000000,puVar4,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_d0 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar6;
  func_0x00010bf493c0(0xc020000000000000,puVar6,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar26);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar4,param_2,0);
  uVar26 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar4;
  puStack_1a8 = puVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493c0(uVar26,puVar22,param_2,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1a0 = puVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar1);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  uVar26 = *(undefined8 *)(puVar3 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar26,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0c1a4; end: 104d0c3d7; -[SCNGOPhoneEntryLoginViewController _addLaunchGhost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c1a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dae538);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar11);
  func_0x00010c219b60(puVar2,param_2,0);
  uVar12 = 0x4054000000000000;
  func_0x00010bdc5bc0(0x4054000000000000,param_1);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_88 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(uVar12,puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(puVar1 + _DAT_112711220);
  puVar10 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar11,param_2,puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 104d0c3d8; end: 104d0c423; -[SCNGOPhoneEntryLoginViewController _useEmailOrUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c3d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0c424; end: 104d0c46f; -[SCNGOPhoneEntryLoginViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c25ed20(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0c470; end: 104d0c53b; -[SCNGOPhoneEntryLoginViewController rightTextField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d0c470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711220);
  puVar2 = PTR_PTR_1126af650;
  func_0x00010c288700(PTR_PTR_1126af650,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 104d0c53c; end: 104d0c587; -[SCNGOPhoneEntryLoginViewController leftButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c53c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c268ee0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0c588; end: 104d0c58f; -[SCNGOPhoneEntryLoginViewController rightTextFieldShouldReturn] */

undefined8 FUN_104d0c588(void)

{
  return 1;
}



/* Entry: 104d0c590; end: 104d0c5e7; -[SCNGOPhoneEntryLoginViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d0c590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711220);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c158da0(PTR_PTR_1126af650,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 104d0c5e8; end: 104d0c653; -[SCNGOPhoneEntryLoginViewController _adaptiveTopOffset:] */

double FUN_104d0c5e8(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  dVar2 = (param_4 / 852.0) * (param_4 / 852.0);
  dVar3 = 1.0;
  if (dVar2 <= 1.0) {
    dVar3 = dVar2;
  }
  return param_1 * dVar3;
}



/* Entry: 104d0c654; end: 104d0c713; -[SCNGOPhoneEntryLoginViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c654(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271122c,0);
  _objc_storeStrong(param_1 + _DAT_112711240,0);
  _objc_storeStrong(param_1 + _DAT_11271123c,0);
  _objc_storeStrong(param_1 + _DAT_112711234,0);
  _objc_storeStrong(param_1 + _DAT_112711224,0);
  _objc_storeStrong(param_1 + _DAT_112711230,0);
  _objc_storeStrong(param_1 + _DAT_112711244,0);
  _objc_storeStrong(param_1 + _DAT_112711238,0);
  _objc_storeStrong(param_1 + _DAT_112711248,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711220,0);
  return;
}



/* Entry: 104d0c714; end: 104d0c7fb; -[SCNGOPhoneEntryViewController initWithScreen:context:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d0c714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3d80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271124c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112711250) = param_4;
    lVar4 = (long)_DAT_112711254;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711258);
    *(undefined **)((long)puVar1 + (long)_DAT_112711258) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0c7fc; end: 104d0c803; -[SCNGOPhoneEntryViewController pageViewName] */

undefined8 FUN_104d0c7fc(void)

{
  return 0xc4;
}



/* Entry: 104d0c804; end: 104d0c853; -[SCNGOPhoneEntryViewController viewDidLoad] */

void FUN_104d0c804(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3d80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104d0c854; end: 104d0c887; -[SCNGOPhoneEntryViewController viewWillAppear:] */

void FUN_104d0c854(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3d80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 104d0c888; end: 104d0c8ff; -[SCNGOPhoneEntryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c888(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3d80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711254);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_11271125c));
  return;
}



/* Entry: 104d0c900; end: 104d0c9af; -[SCNGOPhoneEntryViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c900(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271124c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d0c9b0; end: 104d0c9f7;  */

void FUN_104d0c9b0(long param_1,undefined8 param_2)

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



/* Entry: 104d0c9f8; end: 104d0ccfb; -[SCNGOPhoneEntryViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0c9f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb60e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271125c;
  func_0x00010c1ee220(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfb6000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba340(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfb6020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174ac0(*(undefined8 *)(param_1 + _DAT_112711260),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf2c700(param_3);
  lVar5 = (long)_DAT_112711264;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  lVar1 = param_3;
  func_0x00010c09cb40(param_3);
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar5),param_2,lVar1);
  lVar1 = param_3;
  func_0x00010c09cb40(param_3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_112711268),param_2,(uint)lVar1 ^ 1);
  lVar1 = param_3;
  func_0x00010bf98d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    func_0x00010beed2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
  }
  else {
    func_0x00010bf98d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 4;
  }
  func_0x00010c161240(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  lVar1 = param_3;
  func_0x00010c261820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c261820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebb4c0(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bfe0100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bfe0100(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(*(undefined8 *)(param_1 + _DAT_11271126c),param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bfdff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bfdff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0(*(undefined8 *)(param_1 + _DAT_11271126c),param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c22ffc0();
  if ((int)lVar1 != 0) {
    func_0x00010c18f820(*(undefined8 *)(param_1 + _DAT_11271126c),param_2,2);
  }
  lVar1 = param_3;
  func_0x00010c234520();
  if ((int)lVar1 == 0) {
    func_0x00010c161160(*(undefined8 *)(param_1 + lVar4),param_2,0);
  }
  else {
    func_0x000104d0ec38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161160(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  lVar1 = param_3;
  func_0x00010bf4fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3,param_2,lVar1,0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d0ccfc; end: 104d0e05f; -[SCNGOPhoneEntryViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0ccfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar36);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126af078;
  _objc_opt_new();
  puVar1 = PTR_PTR_1126af080;
  _objc_opt_new();
  lVar36 = (long)_DAT_11271126c;
  uVar34 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar34);
  func_0x00010c18f820(*(undefined8 *)(param_1 + lVar36),param_2,0);
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c20f6c0(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36),param_2,param_1);
  func_0x00010c187440(puVar2,param_2,*(undefined8 *)(param_1 + lVar36));
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar36);
  func_0x00010c219b60(puVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar37;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_88 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puStack_80 = puVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar35);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar36);
  func_0x00010c219b60(puVar3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  puStack_a0 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar35;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  puStack_98 = puVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493a0(puVar12,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(lVar6);
  _objc_release(lVar35);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_112711264;
  uVar34 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar1;
  _objc_release(uVar34);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar35),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar35),param_2,
                      &PTR____CFConstantStringClassReference_110dae558);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar35),param_2,param_1,
                      PTR_s__continueButtonTapped_112557b90,0x40);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + lVar35));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar35),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar15;
  func_0x00010bf493c0(0x4038000000000000,uVar15,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar35);
  uStack_c0 = uVar34;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar16;
  func_0x00010bf493c0(0xc038000000000000,uVar16,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar35);
  uStack_b8 = uVar30;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar37;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar17;
  func_0x00010bf493c0(0xc030000000000000,uVar17,param_2,lVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar35);
  uStack_b0 = uVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar18;
  func_0x00010bf493c0(0x4030000000000000,uVar18,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar26;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar26);
  _objc_release(puVar9);
  _objc_release(uVar18);
  _objc_release(uVar31);
  _objc_release(lVar36);
  _objc_release(lVar37);
  _objc_release(uVar17);
  _objc_release(uVar30);
  _objc_release(puVar5);
  _objc_release(uVar16);
  _objc_release(uVar34);
  _objc_release(puVar4);
  _objc_release(uVar15);
  puVar14 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar36);
  puVar1 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar37;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010bf493e0(0x3fb1111120000000,puVar1,param_2,lVar36);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  _objc_release(lVar37);
  _objc_release(puVar1);
  func_0x00010c1e3380(0x43790000,puVar19);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar9 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  puStack_e0 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar14;
  puStack_d8 = puVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar25;
  func_0x00010bf493a0(puVar25,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar13;
  puStack_c8 = puVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(lVar35);
  _objc_release(lVar6);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar9);
  puVar20 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new();
  lVar36 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar36);
  func_0x00010c219b60(puVar20,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar21 = puVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493a0(puVar21,param_2,puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar20;
  puStack_100 = puVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf493a0(puVar24,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar20;
  puStack_f8 = puVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar37;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,lVar36);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar20;
  puStack_f0 = puVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010bf49500(puVar8,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_100,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(lVar36);
  _objc_release(lVar37);
  _objc_release(puVar13);
  _objc_release(puVar25);
  _objc_release(lVar35);
  _objc_release(lVar6);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar37 = (long)_DAT_112711268;
  uVar34 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar1;
  _objc_release(uVar34);
  func_0x00010befbb60(puVar20,param_2,*(undefined8 *)(param_1 + lVar37));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37),param_2,0);
  uVar34 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar34;
  func_0x00010bf493a0(uVar34,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar34);
  func_0x00010c1e3380(0x437a0000,uVar26);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar17 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar37);
  uStack_130 = uVar34;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar18;
  func_0x00010bf493c0(0x4038000000000000,uVar18,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar37);
  uStack_128 = uVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar27;
  func_0x00010bf493c0(0xc038000000000000,uVar27,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar37);
  uStack_120 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar28;
  func_0x00010bf493a0(uVar28,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar37);
  uStack_118 = uVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bf493c0(0xc048000000000000,uVar29,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar30;
  uStack_108 = uVar26;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_130,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar30);
  _objc_release(puVar9);
  _objc_release(uVar29);
  _objc_release(uVar15);
  _objc_release(puVar8);
  _objc_release(uVar28);
  _objc_release(uVar16);
  _objc_release(puVar13);
  _objc_release(uVar27);
  _objc_release(uVar31);
  _objc_release(puVar4);
  _objc_release(uVar18);
  _objc_release(uVar34);
  _objc_release(puVar5);
  _objc_release(uVar17);
  puVar1 = PTR_PTR_1126af658;
  _objc_alloc();
  puVar4 = puVar1;
  func_0x000104d0ebf0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a80(puVar1,param_2,puVar4);
  lVar35 = (long)_DAT_112711260;
  uVar34 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar1;
  _objc_release(uVar34);
  _objc_release(puVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar35),param_2,
                      &PTR____CFConstantStringClassReference_110daf9f8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar35),param_2,param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar35),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar37),param_2,*(undefined8 *)(param_1 + lVar35));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar35);
  uStack_148 = uVar31;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar35);
  uStack_140 = uVar34;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_138 = uVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_148,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar30);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar34);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar31);
  _objc_release(uVar16);
  _objc_release(uVar15);
  puVar1 = PTR_PTR_1126af648;
  _objc_alloc();
  uVar34 = *(undefined8 *)PTR__UITextContentTypeTelephoneNumber_110345e28;
  puVar5 = puVar1;
  func_0x000104d0ebd8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x000104d0ebd8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051860(puVar1,param_2,uVar34,puVar5,puVar4,0);
  lVar36 = (long)_DAT_11271125c;
  uVar34 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar34);
  _objc_release(puVar4);
  _objc_release(puVar5);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar36),param_2,0xb);
  func_0x00010c1ee1e0(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110dafa18);
  func_0x00010c1ba320(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110dafa38);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36),param_2,param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar37),param_2,*(undefined8 *)(param_1 + lVar36));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010bf493c0(0x4034000000000000,uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar36);
  uStack_168 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar36);
  uStack_160 = uVar30;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar28;
  func_0x00010bf493a0(uVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar36);
  uStack_158 = uVar31;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493a0(uVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_168,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar30);
  _objc_release(uVar27);
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar26);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar14);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar34 = *(undefined8 *)(puVar2 + _DAT_11271124c);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c25ed20(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar34,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0e060; end: 104d0e0ab; -[SCNGOPhoneEntryViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c25ed20(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0e0ac; end: 104d0e25f; -[SCNGOPhoneEntryViewController _showSuccessPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(*(undefined8 *)(param_1 + _DAT_11271124c));
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010b75e3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  return;
}



/* Entry: 104d0e260; end: 104d0e2bb;  */

void FUN_104d0e260(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d0e2bc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}



/* Entry: 104d0e2bc; end: 104d0e2ff;  */

void FUN_104d0e2bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010bf84640(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0e300; end: 104d0e3cf; -[SCNGOPhoneEntryViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e300(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010bf9b400(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
  _objc_release(puVar1);
  if (*(long *)(param_1 + _DAT_112711250) - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
    return;
  }
  if (*(long *)(param_1 + _DAT_112711250) == 2) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d0e3d0; end: 104d0e41b; -[SCNGOPhoneEntryViewController buttonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e3d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c268ee0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0e41c; end: 104d0e4e7; -[SCNGOPhoneEntryViewController leftTextField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d0e41c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar2 = PTR_PTR_1126af650;
  func_0x00010c284b20(PTR_PTR_1126af650,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 104d0e4e8; end: 104d0e5f3; -[SCNGOPhoneEntryViewController rightTextField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104d0e4e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711258);
  func_0x00010c06cc60(uVar1,param_2,param_4,param_5,param_6);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_6);
    uVar2 = param_6;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar3 = PTR_PTR_1126af650;
  func_0x00010c288700(PTR_PTR_1126af650,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  return 0;
}



/* Entry: 104d0e5f4; end: 104d0e63f; -[SCNGOPhoneEntryViewController accessoryTextLinkPressedWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e5f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c158da0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0e640; end: 104d0e68b; -[SCNGOPhoneEntryViewController accessoryButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e640(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271124c);
  puVar1 = PTR_PTR_1126af650;
  func_0x00010c2655a0(PTR_PTR_1126af650);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d0e68c; end: 104d0e73b; -[SCNGOPhoneEntryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d0e68c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711258,0);
  _objc_storeStrong(param_1 + _DAT_11271126c,0);
  _objc_storeStrong(param_1 + _DAT_112711268,0);
  _objc_storeStrong(param_1 + _DAT_112711264,0);
  _objc_storeStrong(param_1 + _DAT_11271125c,0);
  _objc_storeStrong(param_1 + _DAT_112711260,0);
  _objc_storeStrong(param_1 + _DAT_112711270,0);
  _objc_storeStrong(param_1 + _DAT_11271124c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711254,0);
  return;
}



/* Entry: 104d0e73c; end: 104d0e7f7; -[SCNGOPhoneEntryWorkflow initWithRouter:delegate:dataSource:] */

undefined1 *
FUN_104d0e73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e3d88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d0e7f8; end: 104d0e84f; -[SCNGOPhoneEntryWorkflow begin] */

void FUN_104d0e7f8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d0e850;
  puStack_20 = &UNK_11084a608;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d0e850; end: 104d0e8a7;  */

void FUN_104d0e850(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c239020(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d0e8a8; end: 104d0e92f; -[SCNGOPhoneEntryWorkflow countryCodePickerTappedWithDelegate:] */

void FUN_104d0e8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d0e930;
  puStack_30 = &UNK_11084a608;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d0e930; end: 104d0e93b;  */

void FUN_104d0e930(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCountryCodePickerWithDelegat_11266b570,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d0e93c; end: 104d0e953; -[SCNGOPhoneEntryWorkflow countryCodePickerFinished] */

void FUN_104d0e93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11084a658);
  return;
}



/* Entry: 104d0e954; end: 104d0e99b; -[SCNGOPhoneEntryWorkflow phoneEntryFinishedWithSuccess:] */

void FUN_104d0e954(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fad80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d0e99c; end: 104d0e9c7; -[SCNGOPhoneEntryWorkflow phoneEntryExited] */

void FUN_104d0e99c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d0e9c8; end: 104d0ea0f; -[SCNGOPhoneEntryWorkflow phoneEntryExitedWithUnretryableError:] */

void FUN_104d0e9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fad40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d0ea10; end: 104d0ea9f; -[SCNGOPhoneEntryWorkflow phoneEntryLinkSelectedWithURL:] */

void FUN_104d0ea10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d0eaa0;
  puStack_48 = &UNK_11084a678;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 104d0eaa0; end: 104d0eaab;  */

void FUN_104d0eaa0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d0eaac; end: 104d0eb1b; -[SCNGOPhoneEntryWorkflow phoneEntrySwitchButtonTapped] */

void FUN_104d0eaac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0fae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d0eb1c; end: 104d0eb8b; -[SCNGOPhoneEntryWorkflow phoneEntryUpdatedPhone] */

void FUN_104d0eb1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0faec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d0eb8c; end: 104d0eba3; -[SCNGOPhoneEntryWorkflow webBrowserDidDismiss:] */

void FUN_104d0eb8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11084a6a8);
  return;
}



/* Entry: 104d0eba4; end: 104d0ebd7; -[SCNGOPhoneEntryWorkflow .cxx_destruct] */

void FUN_104d0eba4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d0ebd8; end: 104d0ec97;  */

void FUN_104d0ebd8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dafa58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dafa58,
                      &PTR____CFConstantStringClassReference_110dafa78,0);
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



/* Entry: 104d0ec98; end: 104d0ece3; +[SCNGOPhoneEntryAction dismissSuccessPrompt] */

void FUN_104d0ec98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ece4; end: 104d0ed2f; +[SCNGOPhoneEntryAction exit] */

void FUN_104d0ece4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ed30; end: 104d0ed9b; +[SCNGOPhoneEntryAction selectLinkWithUrl:] */

void FUN_104d0ed30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ed9c; end: 104d0ede3; +[SCNGOPhoneEntryAction submit] */

void FUN_104d0ed9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ede4; end: 104d0ee2f; +[SCNGOPhoneEntryAction switchButtonTapped] */

void FUN_104d0ede4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ee30; end: 104d0ee7b; +[SCNGOPhoneEntryAction tapCountryCodeButton] */

void FUN_104d0ee30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d0ee7c; end: 104d0eee7; +[SCNGOPhoneEntryAction updateCountryCodeWithNumericCountryCode:] */

void FUN_104d0ee7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


