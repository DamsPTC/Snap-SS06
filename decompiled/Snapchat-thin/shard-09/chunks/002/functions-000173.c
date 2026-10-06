/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b3116c; end: 106b31217; -[EmailSettingsViewController updateTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3116c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bfd6980();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127586ec);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071720();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a0e0();
      goto LAB_106b31204;
    }
  }
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
LAB_106b31204:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b31218; end: 106b3155b; -[EmailSettingsViewController updateLowerInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b31218(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  
  uVar1 = param_1;
  func_0x00010bfc4a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfd6980();
    lVar11 = (long)_DAT_1127586ec;
    lVar2 = *(long *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar1 != 0) {
      lVar6 = lVar3;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar7 != 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e74498;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74498,0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf8d6c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c0b5a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar1);
        _objc_release(puVar5);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar4);
        _objc_release(ppuVar10);
      }
      uVar1 = param_1;
      func_0x00010c0b5a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      func_0x00010c137e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106b31538;
    }
    lVar6 = lVar3;
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar7 != 0) {
      uVar1 = param_1;
      func_0x00010c0b5a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      func_0x00010c137e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106b31538;
    }
    uVar1 = param_1;
    func_0x00010bfd6980();
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c071720();
      _objc_release(uVar8);
      _objc_release(uVar4);
      if ((int)uVar9 != 0) {
        uVar1 = param_1;
        func_0x00010c137e40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        _objc_release(uVar1);
        ppuVar10 = &PTR____CFConstantStringClassReference_110e744b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e744b8,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c0b5a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar1);
        _objc_release(ppuVar10);
        func_0x00010c0b5a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106b31538;
      }
    }
  }
  uVar1 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_106b31538:
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b3155c; end: 106b3175f; -[EmailSettingsViewController updateActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3155c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar12 = param_1;
  func_0x00010bfd6980();
  if ((int)lVar12 == 0) {
    lVar12 = (long)_DAT_1127586ec;
    ppuVar1 = *(undefined ***)(param_1 + lVar12);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      lVar5 = *(long *)(param_1 + lVar12);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        uVar9 = *(ulong *)(param_1 + lVar12);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c071720();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        if ((uVar11 & 1) != 0) goto LAB_106b31614;
        ppuVar1 = &PTR____CFConstantStringClassReference_110dad158;
        goto LAB_106b3158c;
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e744d8;
LAB_106b3158c:
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fa0(param_1);
  }
  _objc_release(ppuVar1);
LAB_106b31614:
  lVar12 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar12);
  lVar12 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074c20();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112758730));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 106b31760; end: 106b317f7; -[EmailSettingsViewController setActionTitle:] */

void FUN_106b31760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b317f8; end: 106b31877; -[EmailSettingsViewController textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b317f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c196ee0(param_3,param_2,0);
  func_0x00010c2883c0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758730);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288720(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b31878; end: 106b3187f; -[EmailSettingsViewController textViewShouldBeginEditing:] */

undefined8 FUN_106b31878(void)

{
  return 1;
}



/* Entry: 106b31880; end: 106b31903; -[EmailSettingsViewController hasPendingVerification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b31880(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_1127586ec);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 != 0;
}



/* Entry: 106b31904; end: 106b319f7; -[EmailSettingsViewController hasEmailChanged] */

uint FUN_106b31904(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25d0a0(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfc4a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return (uint)uVar4 ^ 1;
}



/* Entry: 106b319f8; end: 106b31adb; -[EmailSettingsViewController getDefaultText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b319f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_1127586ec;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  if (lVar4 == 0) {
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106b31adc; end: 106b31bff; -[EmailSettingsViewController isEmailValid:] */

undefined1 FUN_106b31adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106b31c00; end: 106b31c13;  */

void FUN_106b31c00(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106b31c14; end: 106b31d3f; -[EmailSettingsViewController emailDomainSuggestionScrollView:didSelectPill:] */

void FUN_106b31c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be4f360(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = param_4;
  func_0x00010bfbb800(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar1 = lVar3;
  func_0x00010c25ce40(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cb00(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be61420(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106b31d40; end: 106b31dff; -[EmailSettingsViewController _localPartOfEmail:] */

void FUN_106b31d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010c11f420(lVar2,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
  lVar4 = lVar2;
  if (lVar3 == 0x7fffffffffffffff) {
    _objc_retain(lVar2);
  }
  else {
    func_0x00010c260c20(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106b31e00; end: 106b31e97; -[EmailSettingsViewController _moveTextViewCursorToStart] */

void FUN_106b31e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf193c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c26c600(uVar1,param_2,uVar2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b31e98; end: 106b31f13; -[EmailSettingsViewController logSettingEmailSettingPageview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b31e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d0a08;
  _objc_alloc_init(PTR_PTR_1126d0a08);
  func_0x00010c206c40();
  func_0x00010c161620(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758714);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b31f14; end: 106b31fa7; -[EmailSettingsViewController _showLinkedAccountsAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b31f14(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + _DAT_112758720) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106b31fa8;
    puStack_30 = &UNK_11085c638;
    lStack_28 = param_1;
    func_0x00010bfa8060(*(long *)(param_1 + _DAT_112758720),param_2,&puStack_48);
    return;
  }
  func_0x00010c255b00(param_1);
  func_0x00010bea4f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2883d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updatePage_11267fb18);
  return;
}



/* Entry: 106b31fa8; end: 106b32063;  */

void FUN_106b31fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b32064;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 106b32064; end: 106b321c7;  */

void FUN_106b32064(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c255b00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bea4f20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c2883c0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_110962000);
      uVar3 = uVar2;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff3e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
      func_0x00010beef340(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6960(puVar5);
      _objc_release(puVar4);
      func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar5);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 106b321c8; end: 106b321cf;  */

void FUN_106b321c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 106b321d0; end: 106b321df; -[EmailSettingsViewController upperInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b321d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275873c);
}



/* Entry: 106b321e0; end: 106b3221f; -[EmailSettingsViewController setUpperInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b321e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275873c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b32220; end: 106b3222f; -[EmailSettingsViewController textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b32220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758728);
}



/* Entry: 106b32230; end: 106b3226f; -[EmailSettingsViewController setTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758728;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b32270; end: 106b3227f; -[EmailSettingsViewController lowerInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b32270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758740);
}



/* Entry: 106b32280; end: 106b322bf; -[EmailSettingsViewController setLowerInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758740;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b322c0; end: 106b322cf; -[EmailSettingsViewController resendLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b322c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758744);
}



/* Entry: 106b322d0; end: 106b3230f; -[EmailSettingsViewController setResendLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b322d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758744;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b32310; end: 106b3231f; -[EmailSettingsViewController resendLinkActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b32310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758748);
}



/* Entry: 106b32320; end: 106b3235f; -[EmailSettingsViewController setResendLinkActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758748;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b32360; end: 106b3236f; -[EmailSettingsViewController actionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b32360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275874c);
}



/* Entry: 106b32370; end: 106b323af; -[EmailSettingsViewController setActionBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275874c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b323b0; end: 106b323bf; -[EmailSettingsViewController actionBarActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b323b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758750);
}



/* Entry: 106b323c0; end: 106b323ff; -[EmailSettingsViewController setActionBarActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b323c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758750;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b32400; end: 106b3240f; -[EmailSettingsViewController KVOController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b32400(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758754);
}



/* Entry: 106b32410; end: 106b3244f; -[EmailSettingsViewController setKVOController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112758754;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b32450; end: 106b3261b; -[EmailSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32450(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758754,0);
  _objc_storeStrong(param_1 + _DAT_112758750,0);
  _objc_storeStrong(param_1 + _DAT_11275874c,0);
  _objc_storeStrong(param_1 + _DAT_112758748,0);
  _objc_storeStrong(param_1 + _DAT_112758744,0);
  _objc_storeStrong(param_1 + _DAT_112758740,0);
  _objc_storeStrong(param_1 + _DAT_112758728,0);
  _objc_storeStrong(param_1 + _DAT_11275873c,0);
  _objc_storeStrong(param_1 + _DAT_11275871c,0);
  _objc_storeStrong(param_1 + _DAT_112758704,0);
  _objc_storeStrong(param_1 + _DAT_112758738,0);
  _objc_storeStrong(param_1 + _DAT_112758708,0);
  _objc_storeStrong(param_1 + _DAT_112758730,0);
  _objc_storeStrong(param_1 + _DAT_11275872c,0);
  _objc_storeStrong(param_1 + _DAT_112758724,0);
  _objc_storeStrong(param_1 + _DAT_112758720,0);
  _objc_destroyWeak(param_1 + _DAT_112758710);
  _objc_storeStrong(param_1 + _DAT_112758718,0);
  _objc_storeStrong(param_1 + _DAT_112758714,0);
  _objc_storeStrong(param_1 + _DAT_1127586f0,0);
  _objc_storeStrong(param_1 + _DAT_1127586f4,0);
  _objc_storeStrong(param_1 + _DAT_1127586ec,0);
  _objc_storeStrong(param_1 + _DAT_11275870c,0);
  _objc_storeStrong(param_1 + _DAT_112758700,0);
  _objc_storeStrong(param_1 + _DAT_1127586fc,0);
  _objc_storeStrong(param_1 + _DAT_1127586f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127586e8,0);
  return;
}



/* Entry: 106b3261c; end: 106b32a93; -[SCLegacyEmailSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3261c(long param_1,undefined8 param_2)

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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  
  puVar1 = PTR_PTR_1126d0a10;
  _objc_alloc();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275875c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar20;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_106b32a94();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106b32a94();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf8d9c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112758768;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11275876c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar22;
  func_0x00010c122000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112758770;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar23;
  func_0x00010bf34ca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112758764;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar24;
  func_0x00010c154a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11275877c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar25;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112758780;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar26;
  func_0x00010bf9c540();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112758774;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar27;
  func_0x00010c0f54a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112758778;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar28;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112758788;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar29;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000106b32ab8();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar30 = 0;
    lVar31 = 0;
  }
  else {
    uVar30 = *(undefined8 *)(param_1 + _DAT_11275878c);
    _objc_retain(uVar30);
    lVar31 = param_1 + _DAT_112758784;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar31;
  func_0x00010bf48600();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d800(puVar1,param_2,lVar2,lVar4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                      ,lVar14,lVar15,lVar17,uVar30,lVar19);
  _objc_release(uVar30);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar31);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar14);
  _objc_release(lVar28);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar26);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar20);
  func_0x000106b32ab8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar20);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b32a94; end: 106b32adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32a94(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758760);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b32adc; end: 106b32ba7; -[SCLegacyEmailSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b32adc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275878c,0);
  _objc_destroyWeak(param_1 + _DAT_112758788);
  _objc_destroyWeak(param_1 + _DAT_112758784);
  _objc_destroyWeak(param_1 + _DAT_112758780);
  _objc_destroyWeak(param_1 + _DAT_11275877c);
  _objc_destroyWeak(param_1 + _DAT_112758778);
  _objc_destroyWeak(param_1 + _DAT_112758774);
  _objc_destroyWeak(param_1 + _DAT_112758770);
  _objc_destroyWeak(param_1 + _DAT_11275876c);
  _objc_destroyWeak(param_1 + _DAT_112758768);
  _objc_destroyWeak(param_1 + _DAT_112758764);
  _objc_destroyWeak(param_1 + _DAT_112758760);
  _objc_destroyWeak(param_1 + _DAT_11275875c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758758);
  return;
}



/* Entry: 106b32ba8; end: 106b32d23; -[SCBirthdaySettingsPageLaunchHandler initWithFeatureSettingsServices:reauthenticationServices:userInfoServices:auraServices:auraSettingScopeExposer:navigationDelegate:circumstanceEngine:] */

undefined1 *
FUN_106b32ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f5028;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x48) = 0x1b;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b32d24; end: 106b32eeb; -[SCBirthdaySettingsPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_106b32d24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar2;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126b4378;
  _objc_alloc(PTR_PTR_1126b4378);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1a840(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1a6e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c127bc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c121fe0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7920(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  (**(code **)(param_5 + 0x10))(param_5,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106b32eec; end: 106b32ef7; -[SCBirthdaySettingsPageLaunchHandler birthdaySettingsDidComplete] */

void FUN_106b32eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b32ef8; end: 106b32eff; -[SCBirthdaySettingsPageLaunchHandler screen] */

undefined4 FUN_106b32ef8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* Entry: 106b32f00; end: 106b32f73; -[SCBirthdaySettingsPageLaunchHandler .cxx_destruct] */

void FUN_106b32f00(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b32f74; end: 106b33017; -[SCDisplayNameSettingsPageLaunchHandler initWithNavigationDelegate:userInfoServices:] */

undefined1 *
FUN_106b32f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 0x1f;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b33018; end: 106b33137; -[SCDisplayNameSettingsPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_106b33018(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar2;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126b5508;
  _objc_alloc(PTR_PTR_1126b5508);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf85f80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf85f60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d5c0(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c1c8b80(puVar3);
  func_0x00010bf0c980(param_4);
  (**(code **)(param_5 + 0x10))(param_5,0);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b33138; end: 106b3313f; -[SCDisplayNameSettingsPageLaunchHandler screen] */

undefined4 FUN_106b33138(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 106b33140; end: 106b3316b; -[SCDisplayNameSettingsPageLaunchHandler .cxx_destruct] */

void FUN_106b33140(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b3316c; end: 106b333ef; -[SCIdentityPageLauncherPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b3316c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + _DAT_1127587c0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d0a18;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127587c4;
  _objc_loadWeakRetained(lVar1);
  lVar4 = param_1 + _DAT_1127587c8;
  _objc_loadWeakRetained(lVar4);
  lVar12 = (long)_DAT_1127587cc;
  lVar5 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_1127587d0;
  _objc_loadWeakRetained(lVar6);
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127587d4);
  lVar7 = param_1 + _DAT_1127587d8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012220(puVar3,param_2,lVar1,lVar4,lVar5,lVar6,uVar13,lVar2,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126d0a20;
  _objc_alloc();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  func_0x00010c02e8e0(puVar9,param_2,lVar2,lVar12);
  _objc_release(lVar12);
  puVar10 = PTR_PTR_1126d0a28;
  _objc_alloc();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127587dc);
  lVar1 = param_1 + _DAT_1127587e0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c02e820(puVar10,param_2,lVar2,uVar13,lVar1);
  _objc_release(lVar1);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  puStack_78 = puVar9;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127587e4);
  *(undefined **)(param_1 + _DAT_1127587e4) = puVar11;
  _objc_release(uVar13);
  param_1 = param_1 + _DAT_1127587e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_1127587e4);
}



/* Entry: 106b333f0; end: 106b333ff; -[SCIdentityPageLauncherPluginEntryPoint handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b333f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127587e4);
}



/* Entry: 106b33400; end: 106b3343f; -[SCIdentityPageLauncherPluginEntryPoint setHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127587e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b33440; end: 106b334ef; -[SCIdentityPageLauncherPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33440(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127587e0);
  _objc_storeStrong(param_1 + _DAT_1127587dc,0);
  _objc_storeStrong(param_1 + _DAT_1127587d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127587c0);
  _objc_destroyWeak(param_1 + _DAT_1127587d0);
  _objc_destroyWeak(param_1 + _DAT_1127587cc);
  _objc_destroyWeak(param_1 + _DAT_1127587c8);
  _objc_destroyWeak(param_1 + _DAT_1127587c4);
  _objc_destroyWeak(param_1 + _DAT_1127587d8);
  _objc_destroyWeak(param_1 + _DAT_1127587e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127587e4,0);
  return;
}



/* Entry: 106b334f0; end: 106b335bb; -[SCPasswordSettingsPageLauncher initWithNavigationDelegate:scopeExposer:passwordSettingsScopeServices:] */

undefined1 *
FUN_106b334f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0x2b;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b335bc; end: 106b33713; -[SCPasswordSettingsPageLauncher launchWithCommand:uiContainer:completion:] */

void FUN_106b335bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar7 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar1 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar2;
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(param_4);
    lVar7 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = param_4;
  }
  _objc_release(lVar7);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = *(code **)(param_5 + 0x10);
    puVar3 = puVar4;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf24220(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
    pcVar6 = *(code **)(param_5 + 0x10);
    puVar4 = (undefined *)0x0;
  }
  (*pcVar6)(param_5,puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b33714; end: 106b33717; -[SCPasswordSettingsPageLauncher passwordSettingsDidCompleteChange] */

void FUN_106b33714(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCompletion_112577b38);
  return;
}



/* Entry: 106b33718; end: 106b3371b; -[SCPasswordSettingsPageLauncher passwordSettingsDidExitWithoutCompletion] */

void FUN_106b33718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCompletion_112577b38);
  return;
}



/* Entry: 106b3371c; end: 106b33763; -[SCPasswordSettingsPageLauncher _onCompletion] */

void FUN_106b3371c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106b33764; end: 106b3376b; -[SCPasswordSettingsPageLauncher screen] */

undefined4 FUN_106b33764(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 106b3376c; end: 106b337af; -[SCPasswordSettingsPageLauncher .cxx_destruct] */

void FUN_106b3376c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b337b0; end: 106b3396b; -[ChangePasswordReauthViewController initWithUserSession:emailInfoProvider:usernameProvider:oneTapLoginRegistry:reauthenticationService:searchabilityService:settingsEventLogger:passwordNetworkRequester:delegate:userPhoneVerificationScopeExposer:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b337b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f5040;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserSession_emailInfoPro_11252e928,param_3,param_4,
                      param_5,param_8,param_9,param_10,param_12,param_13);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112758804;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758808;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275880c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758810;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112758814,param_11);
    lVar3 = (long)_DAT_112758818;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275881c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106b3396c; end: 106b33973; -[ChangePasswordReauthViewController pageViewName] */

undefined8 FUN_106b3396c(void)

{
  return 0xbe;
}



/* Entry: 106b33974; end: 106b33983; -[ChangePasswordReauthViewController getTitle] */

void FUN_106b33974(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74558;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74558,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b33984; end: 106b33993; -[ChangePasswordReauthViewController getInfo] */

void FUN_106b33984(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74578;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74578,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b33994; end: 106b33af7; -[ChangePasswordReauthViewController continueButtonBarPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c24e680(param_1);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b33af8;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar2 = &puStack_80;
  _objc_retainBlock(ppuVar2);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b33bec;
  puStack_90 = &UNK_110870850;
  _objc_copyWeak(auStack_88,auStack_58);
  ppuVar3 = &puStack_a8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112758808);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121fc0();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106b33af8; end: 106b33beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33af8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      puVar4 = PTR_PTR_1126d0a30;
      _objc_alloc(PTR_PTR_1126d0a30);
      func_0x00010c034540();
      func_0x00010c18b5e0();
      lVar1 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11c520();
      _objc_release(lVar1);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b33bec; end: 106b33c4f;  */

void FUN_106b33bec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010c1ad320(param_1,param_2,param_3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b33c50; end: 106b33c83; -[ChangePasswordReauthViewController didChangePasswordSuccessfully] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33c50(long param_1)

{
  param_1 = param_1 + _DAT_112758814;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f5540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b33c84; end: 106b33cbf; -[ChangePasswordReauthViewController didExitPasswordSettingsView] */

void FUN_106b33c84(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b33cc0; end: 106b33cf3; -[ChangePasswordReauthViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33cc0(long param_1)

{
  param_1 = param_1 + _DAT_112758814;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f5560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b33cf4; end: 106b33d7f; -[ChangePasswordReauthViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33cf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275881c,0);
  _objc_storeStrong(param_1 + _DAT_112758818,0);
  _objc_destroyWeak(param_1 + _DAT_112758814);
  _objc_storeStrong(param_1 + _DAT_11275880c,0);
  _objc_storeStrong(param_1 + _DAT_112758810,0);
  _objc_storeStrong(param_1 + _DAT_112758808,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758804,0);
  return;
}



/* Entry: 106b33d80; end: 106b33f8f; -[GenericSettingsPasswordViewController initWithUserSession:emailInfoProvider:usernameProvider:searchabilityService:settingsEventLogger:passwordNetworkRequester:userPhoneVerificationScopeExposer:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b33d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f5048;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112758820;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758824;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758828;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275882c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758830;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758834;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758838;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275883c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
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



/* Entry: 106b33f90; end: 106b33f9b; +[GenericSettingsPasswordViewController getPasswordResetUrl] */

undefined ** FUN_106b33f90(void)

{
  return &PTR____CFConstantStringClassReference_110e74598;
}



/* Entry: 106b33f9c; end: 106b33fa3; -[GenericSettingsPasswordViewController pageViewName] */

undefined8 FUN_106b33f9c(void)

{
  return 0;
}



/* Entry: 106b33fa4; end: 106b33faf; -[GenericSettingsPasswordViewController getTitle] */

undefined ** FUN_106b33fa4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106b33fb0; end: 106b33fbb; -[GenericSettingsPasswordViewController getInfo] */

undefined ** FUN_106b33fb0(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106b33fbc; end: 106b33fbf; -[GenericSettingsPasswordViewController continueButtonBarPressed:] */

void FUN_106b33fbc(void)

{
  return;
}



/* Entry: 106b33fc0; end: 106b34323; -[GenericSettingsPasswordViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b33fc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5048;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar1 = param_1;
  _objc_opt_class();
  lVar2 = param_1;
  func_0x00010bfc65c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112758840;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar1;
  _objc_release(uVar5);
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar6));
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010be3a120(param_1);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19eb40(param_1);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daeb78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daeb78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(lVar1);
  _objc_release(ppuVar4);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181e40(0x4030000000000000,0x4030000000000000,0x4030000000000000,0x4030000000000000);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf55780(param_1);
  func_0x00010beabac0(param_1);
  return;
}



/* Entry: 106b34324; end: 106b343c7; -[GenericSettingsPasswordViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b34324(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5048;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758844);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b343c8; end: 106b3467f; -[GenericSettingsPasswordViewController forgotPasswordClicked] */

void FUN_106b343c8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e745b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e745b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e745d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e745d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e745f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e745f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,param_1);
  puVar4 = PTR_PTR_1126af180;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106b34680;
  puStack_a8 = &UNK_110848a18;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  _objc_copyWeak(auStack_c8,auStack_98);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af180;
  ppuVar6 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar8 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar4;
  puStack_88 = puVar5;
  puStack_80 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(ppuVar1);
  ppuVar1 = ppuVar1 + 4;
  _objc_loadWeakRetained(ppuVar1);
  func_0x00010becc880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106b34680; end: 106b346d7;  */

void FUN_106b34680(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b346d8; end: 106b34733; -[GenericSettingsPasswordViewController hideForgotPasswordButton] */

void FUN_106b346d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfb56e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010bfb56e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b34734; end: 106b3496f; -[GenericSettingsPasswordViewController _toEmailResetPwdPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b34734(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d0a38;
  func_0x00010bfc88c0(PTR_PTR_1126d0a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar7 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_98 = *(undefined8 *)PTR__NSHTTPCookieName_1103454a8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dada98;
  uStack_90 = *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0;
  func_0x00010af82634();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)PTR__NSHTTPCookieDomain_110345498;
  puVar5 = puVar3;
  puStack_70 = puVar4;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dacf38;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bd5b0;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0579a0();
  _objc_release(puVar4);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar6 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_106b34970;
  lVar8 = (long)_DAT_112758838;
  iVar1 = (int)*(undefined8 *)(puVar6 + lVar8);
  puStack_e0 = puVar5;
  puStack_d8 = puVar4;
  puStack_d0 = puVar2;
  puStack_c8 = puVar7;
  uStack_c0 = param_1;
  puStack_b8 = puVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c071800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_e8,puVar6);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_copyWeak(auStack_f0,auStack_e8);
    func_0x00010c0311a0(puVar2);
    puVar3 = PTR_PTR_1126c2868;
    _objc_alloc(PTR_PTR_1126c2868);
    puVar7 = PTR_PTR_1126c2860;
    func_0x00010bfbaea0(PTR_PTR_1126c2860);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056720(puVar3);
    _objc_release(puVar7);
    func_0x00010bf9d620(*(undefined8 *)(puVar6 + lVar8));
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
  }
  return;
}



/* Entry: 106b34970; end: 106b34ac3; -[GenericSettingsPasswordViewController _toSMSResetPwdPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b34970(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_112758838;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c071800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0311a0(puVar2);
    puVar3 = PTR_PTR_1126c2868;
    _objc_alloc(PTR_PTR_1126c2868);
    puVar4 = PTR_PTR_1126c2860;
    func_0x00010bfbaea0(PTR_PTR_1126c2860);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056720(puVar3);
    _objc_release(puVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106b34ac4; end: 106b34b0f;  */

void FUN_106b34ac4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b34b10; end: 106b34b13;  */

void FUN_106b34b10(void)

{
  return;
}



/* Entry: 106b34b14; end: 106b34b73; -[GenericSettingsPasswordViewController _pushViewController:animated:] */

void FUN_106b34b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b34b74; end: 106b34e7f; -[GenericSettingsPasswordViewController createContinueBar] */

void FUN_106b34b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183740(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e744d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e744d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183780(param_1);
  uVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c183760(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 106b34e80; end: 106b34edf; -[GenericSettingsPasswordViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b34e80(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5048;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  lVar1 = (long)_DAT_112758844;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 106b34ee0; end: 106b34eeb; -[GenericSettingsPasswordViewController supportedInterfaceOrientations] */

undefined8 FUN_106b34ee0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106b34eec; end: 106b34f33; -[GenericSettingsPasswordViewController continueButtonBarPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b34eec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758844);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fa80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b34f34; end: 106b34fc3; -[GenericSettingsPasswordViewController setInputError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b34f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112758844;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c26bc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2c0();
  _objc_release(uVar1);
  func_0x00010c196ee0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b34fc4; end: 106b3504f; -[GenericSettingsPasswordViewController startContinueBarAnimation] */

void FUN_106b34fc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf4fa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c183790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setContinueBarTitle__11263e800,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106b35050; end: 106b351b7; -[GenericSettingsPasswordViewController stopContinueBarAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b35050(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010bf4fa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4fa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(lVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e744d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e744d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183780(param_1);
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758844);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112758824);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar3);
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b351b8; end: 106b35277; -[GenericSettingsPasswordViewController setContinueBarTitle:] */

void FUN_106b351b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b35278; end: 106b3532b; -[GenericSettingsPasswordViewController textViewDidChange:] */

void FUN_106b35278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c196ee0(param_3,param_2,0);
  uVar1 = param_3;
  func_0x00010c26bc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee2c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c08fa60(uVar1);
  func_0x00010bf4fa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b3532c; end: 106b35333; -[GenericSettingsPasswordViewController textViewShouldBeginEditing:] */

undefined8 FUN_106b3532c(void)

{
  return 1;
}



/* Entry: 106b35334; end: 106b35403; -[GenericSettingsPasswordViewController userPhoneVerificationCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b35334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112758838));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112758820) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275882c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2898c0();
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126d0a30;
  _objc_alloc(PTR_PTR_1126d0a30);
  func_0x00010c034560();
  func_0x00010c18b5e0();
  func_0x00010be759a0(param_1);
  func_0x00010be84f40(param_1,param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b35404; end: 106b3542b; -[GenericSettingsPasswordViewController userPhoneVerificationExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b35404(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_112758838));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b3542c; end: 106b35823; -[GenericSettingsPasswordViewController _initPasswordField] */

/* WARNING: Possible PIC construction at 0x000106b35634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b35638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3542c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar4 = (long)_DAT_112758848;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112758844;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c234280(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e74618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f9a00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110e74638);
  return;
}



/* Entry: 106b35824; end: 106b360db; -[GenericSettingsPasswordViewController _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b35824(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined *puVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined8 uVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar63 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar65 = (long)_DAT_112758840;
  lVar2 = *(long *)(param_1 + lVar65);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar67 = uVar5;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar64 = (long)_DAT_112758848;
  uVar12 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar65);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar65;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_112758844;
  uVar24 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_112758850;
  uVar33 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar64);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar66);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar64;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar36;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = (long)_DAT_112758854;
  uVar38 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar39;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = lVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar42;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar48;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar52;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = (long)_DAT_112758858;
  uVar56 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = uVar56;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_1 + lVar69);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_1 + lVar70);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = uVar59;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar62 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(lVar66);
  _objc_release(lVar64);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar65);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar67);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar68);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar63) {
    return;
  }
  ___stack_chk_fail();
  lVar68 = (long)_DAT_11275885c;
  *(byte *)(lVar2 + lVar68) = *(byte *)(lVar2 + lVar68) ^ 1;
  uVar67 = *(undefined8 *)(lVar2 + _DAT_11275884c);
  lVar3 = lVar2;
  func_0x00010beb95a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar67);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1f9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112758844),PTR_s_setSecureTextEntry__11265c0a8,
             (*(byte *)(lVar2 + lVar68) ^ 0xff) & 1);
  return;
}


