/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f9b23c; end: 108f9b46b; -[NBAsYouTypeFormatter attemptToExtractCountryCallingCode_] */

uint FUN_108f9b23c(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuStack_58;
  
  puVar3 = param_1;
  func_0x00010c0d5620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    return 0;
  }
  puVar3 = param_1;
  func_0x00010c0fb240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c0d5620(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daafd8;
  puVar5 = puVar3;
  func_0x00010bf9ec60(puVar3,param_2,puVar4,&ppuStack_58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuStack_58;
  _objc_retain(ppuStack_58);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010c071f40(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1728);
  if (((ulong)puVar3 & 1) != 0) goto LAB_108f9b438;
  ppuVar6 = ppuVar1;
  func_0x00010c0d3c80(ppuVar1);
  func_0x00010c1cb1c0(param_1,param_2,ppuVar6);
  _objc_release(ppuVar6);
  puVar4 = param_1;
  func_0x00010c0fb240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfc97c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar2 = 0x10f13dd8;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f13dd8,param_2,puVar7);
  if (iVar2 == 0) {
    puVar4 = param_1;
    func_0x00010bf691a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != puVar4) {
      puVar4 = param_1;
      func_0x00010bfc7900(param_1,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187660(param_1,param_2,puVar4);
      goto LAB_108f9b3f4;
    }
  }
  else {
    puVar4 = PTR_PTR_1126dcc78;
    _objc_alloc_init(PTR_PTR_1126dcc78);
    puVar8 = puVar4;
    func_0x00010bfc7880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187660(param_1,param_2,puVar8);
    _objc_release(puVar8);
LAB_108f9b3f4:
    _objc_release(puVar4);
  }
  func_0x00010c1084a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  _objc_release(param_1);
  _objc_release(puVar7);
LAB_108f9b438:
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  return (uint)puVar3 ^ 1;
}



/* Entry: 108f9b46c; end: 108f9b5c3; -[NBAsYouTypeFormatter normalizeAndAccrueDigitsAndPlusSign_:rememberPosition:] */

void FUN_108f9b46c(undefined **param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918);
  ppuVar4 = param_1;
  if ((int)ppuVar1 == 0) {
    ppuVar2 = param_1;
    func_0x00010c0fb240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bdc13a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_108f9b5a4;
    }
    ppuVar2 = param_1;
    func_0x00010beed6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(ppuVar2);
    func_0x00010c0d5620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
  }
  else {
    _objc_retain(param_3);
    func_0x00010beed6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    ppuVar1 = param_3;
  }
  _objc_release(ppuVar4);
  if (param_4 != 0) {
    ppuVar4 = param_1;
    func_0x00010beed6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010c08fa60();
    func_0x00010c1def60(param_1,param_2,ppuVar2);
    _objc_release(ppuVar4);
  }
LAB_108f9b5a4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f9b5c4; end: 108f9b7d7; -[NBAsYouTypeFormatter inputDigitHelper_:] */

void FUN_108f9b5c4(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010bfb6220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010c08fa60();
  ppuVar3 = param_1;
  func_0x00010c089560();
  if (ppuVar3 < ppuVar1) {
    func_0x00010c089560(param_1);
    ppuVar1 = ppuVar2;
    func_0x00010c260c00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  ppuVar3 = param_1;
  func_0x00010c0fb240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c25d660();
  _objc_release(ppuVar3);
  if ((int)ppuVar4 < 0) {
    ppuVar3 = param_1;
    func_0x00010c1044c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x1) {
      func_0x00010c160a80(param_1);
    }
    func_0x00010c187360(param_1);
    func_0x00010beed700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c0fb240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d660();
    _objc_release(ppuVar3);
    func_0x00010c11f420(ppuVar2);
    ppuVar3 = ppuVar2;
    func_0x00010c25cfe0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0d3c80();
    func_0x00010c19ed40(param_1);
    _objc_release(ppuVar4);
    func_0x00010c1b8220(param_1);
    func_0x00010c089560(param_1);
    param_1 = ppuVar3;
    func_0x00010c260c80(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9b7d8; end: 108f9b7db; -[NBAsYouTypeFormatter description] */

void FUN_108f9b7d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentOutput__1125b5778);
  return;
}



/* Entry: 108f9b7dc; end: 108f9b7e3; -[NBAsYouTypeFormatter isSuccessfulFormatting] */

undefined1 FUN_108f9b7dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f9b7e4; end: 108f9b7eb; -[NBAsYouTypeFormatter currentOutput_] */

undefined8 FUN_108f9b7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9b7ec; end: 108f9b81b; -[NBAsYouTypeFormatter setCurrentOutput_:] */

void FUN_108f9b7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b81c; end: 108f9b823; -[NBAsYouTypeFormatter currentFormattingPattern_] */

undefined8 FUN_108f9b81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f9b824; end: 108f9b853; -[NBAsYouTypeFormatter setCurrentFormattingPattern_:] */

void FUN_108f9b824(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108f9b854; end: 108f9b85b; -[NBAsYouTypeFormatter defaultCountry_] */

undefined8 FUN_108f9b854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f9b85c; end: 108f9b88b; -[NBAsYouTypeFormatter setDefaultCountry_:] */

void FUN_108f9b85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b88c; end: 108f9b893; -[NBAsYouTypeFormatter nationalPrefixExtracted_] */

undefined8 FUN_108f9b88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f9b894; end: 108f9b8c3; -[NBAsYouTypeFormatter setNationalPrefixExtracted_:] */

void FUN_108f9b894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b8c4; end: 108f9b8cb; -[NBAsYouTypeFormatter formattingTemplate_] */

undefined8 FUN_108f9b8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f9b8cc; end: 108f9b8fb; -[NBAsYouTypeFormatter setFormattingTemplate_:] */

void FUN_108f9b8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b8fc; end: 108f9b903; -[NBAsYouTypeFormatter accruedInput_] */

undefined8 FUN_108f9b8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f9b904; end: 108f9b933; -[NBAsYouTypeFormatter setAccruedInput_:] */

void FUN_108f9b904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b934; end: 108f9b93b; -[NBAsYouTypeFormatter prefixBeforeNationalNumber_] */

undefined8 FUN_108f9b934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f9b93c; end: 108f9b96b; -[NBAsYouTypeFormatter setPrefixBeforeNationalNumber_:] */

void FUN_108f9b93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b96c; end: 108f9b973; -[NBAsYouTypeFormatter accruedInputWithoutFormatting_] */

undefined8 FUN_108f9b96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f9b974; end: 108f9b9a3; -[NBAsYouTypeFormatter setAccruedInputWithoutFormatting_:] */

void FUN_108f9b974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b9a4; end: 108f9b9ab; -[NBAsYouTypeFormatter nationalNumber_] */

undefined8 FUN_108f9b9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f9b9ac; end: 108f9b9db; -[NBAsYouTypeFormatter setNationalNumber_:] */

void FUN_108f9b9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9b9dc; end: 108f9b9e3; -[NBAsYouTypeFormatter DIGIT_PATTERN_] */

undefined8 FUN_108f9b9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f9b9e4; end: 108f9ba13; -[NBAsYouTypeFormatter setDIGIT_PATTERN_:] */

void FUN_108f9b9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ba14; end: 108f9ba1b; -[NBAsYouTypeFormatter NATIONAL_PREFIX_SEPARATORS_PATTERN_] */

undefined8 FUN_108f9ba14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f9ba1c; end: 108f9ba4b; -[NBAsYouTypeFormatter setNATIONAL_PREFIX_SEPARATORS_PATTERN_:] */

void FUN_108f9ba1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ba4c; end: 108f9ba53; -[NBAsYouTypeFormatter CHARACTER_CLASS_PATTERN_] */

undefined8 FUN_108f9ba4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f9ba54; end: 108f9ba83; -[NBAsYouTypeFormatter setCHARACTER_CLASS_PATTERN_:] */

void FUN_108f9ba54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ba84; end: 108f9ba8b; -[NBAsYouTypeFormatter STANDALONE_DIGIT_PATTERN_] */

undefined8 FUN_108f9ba84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108f9ba8c; end: 108f9babb; -[NBAsYouTypeFormatter setSTANDALONE_DIGIT_PATTERN_:] */

void FUN_108f9ba8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9babc; end: 108f9bac3; -[NBAsYouTypeFormatter ELIGIBLE_FORMAT_PATTERN_] */

undefined8 FUN_108f9babc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108f9bac4; end: 108f9baf3; -[NBAsYouTypeFormatter setELIGIBLE_FORMAT_PATTERN_:] */

void FUN_108f9bac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9baf4; end: 108f9bafb; -[NBAsYouTypeFormatter ableToFormat_] */

undefined1 FUN_108f9baf4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f9bafc; end: 108f9bb03; -[NBAsYouTypeFormatter setAbleToFormat_:] */

void FUN_108f9bafc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108f9bb04; end: 108f9bb0b; -[NBAsYouTypeFormatter inputHasFormatting_] */

undefined1 FUN_108f9bb04(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f9bb0c; end: 108f9bb13; -[NBAsYouTypeFormatter setInputHasFormatting_:] */

void FUN_108f9bb0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108f9bb14; end: 108f9bb1b; -[NBAsYouTypeFormatter isCompleteNumber_] */

undefined1 FUN_108f9bb14(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108f9bb1c; end: 108f9bb23; -[NBAsYouTypeFormatter setIsCompleteNumber_:] */

void FUN_108f9bb1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 108f9bb24; end: 108f9bb2b; -[NBAsYouTypeFormatter isExpectingCountryCallingCode_] */

undefined1 FUN_108f9bb24(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108f9bb2c; end: 108f9bb33; -[NBAsYouTypeFormatter setIsExpectingCountryCallingCode_:] */

void FUN_108f9bb2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108f9bb34; end: 108f9bb3b; -[NBAsYouTypeFormatter shouldAddSpaceAfterNationalPrefix_] */

undefined1 FUN_108f9bb34(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108f9bb3c; end: 108f9bb43; -[NBAsYouTypeFormatter setShouldAddSpaceAfterNationalPrefix_:] */

void FUN_108f9bb3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 108f9bb44; end: 108f9bb4b; -[NBAsYouTypeFormatter phoneUtil_] */

undefined8 FUN_108f9bb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108f9bb4c; end: 108f9bb7b; -[NBAsYouTypeFormatter setPhoneUtil_:] */

void FUN_108f9bb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9bb7c; end: 108f9bb83; -[NBAsYouTypeFormatter lastMatchPosition_] */

undefined8 FUN_108f9bb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108f9bb84; end: 108f9bb8b; -[NBAsYouTypeFormatter setLastMatchPosition_:] */

void FUN_108f9bb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 108f9bb8c; end: 108f9bb93; -[NBAsYouTypeFormatter originalPosition_] */

undefined8 FUN_108f9bb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108f9bb94; end: 108f9bb9b; -[NBAsYouTypeFormatter setOriginalPosition_:] */

void FUN_108f9bb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 108f9bb9c; end: 108f9bba3; -[NBAsYouTypeFormatter positionToRemember_] */

undefined8 FUN_108f9bb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108f9bba4; end: 108f9bbab; -[NBAsYouTypeFormatter setPositionToRemember_:] */

void FUN_108f9bba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 108f9bbac; end: 108f9bbb3; -[NBAsYouTypeFormatter possibleFormats_] */

undefined8 FUN_108f9bbac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108f9bbb4; end: 108f9bbe3; -[NBAsYouTypeFormatter setPossibleFormats_:] */

void FUN_108f9bbb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9bbe4; end: 108f9bbeb; -[NBAsYouTypeFormatter currentMetaData_] */

undefined8 FUN_108f9bbe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108f9bbec; end: 108f9bc1b; -[NBAsYouTypeFormatter setCurrentMetaData_:] */

void FUN_108f9bbec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9bc1c; end: 108f9bc23; -[NBAsYouTypeFormatter defaultMetaData_] */

undefined8 FUN_108f9bc1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108f9bc24; end: 108f9bc53; -[NBAsYouTypeFormatter setDefaultMetaData_:] */

void FUN_108f9bc24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9bc54; end: 108f9bd43; -[NBAsYouTypeFormatter .cxx_destruct] */

void FUN_108f9bc54(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f9bd44; end: 108f9bea7; -[NBMetadataHelper init] */

undefined1 * FUN_108f9bd44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff978;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xfe);
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f9bea8; end: 108f9beaf; -[NBMetadataHelper lowMemoryWarning:] */

void FUN_108f9bea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108f9beb0; end: 108f9bf37; +[NBMetadataHelper countryCodeToRegionCodeMap] */

void FUN_108f9beb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108f9bf38;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137304a8 != -1) {
    func_0x000107c27d9c(0x1137304a8,&puStack_48);
  }
  uVar1 = uRam00000001137304a0;
  _objc_retain(uRam00000001137304a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f9bf38; end: 108f9bf77;  */

void FUN_108f9bf38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c085f80(uVar2,param_2,0x1132b1940,0x448,0xb88);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001137304a0;
  uRam00000001137304a0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9bf78; end: 108f9bfff; +[NBMetadataHelper CCode2CNMap] */

void FUN_108f9bf78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108f9c000;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137304b8 != -1) {
    func_0x000107c27d9c(0x1137304b8,&puStack_48);
  }
  uVar1 = uRam00000001137304b0;
  _objc_retain(uRam00000001137304b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f9c000; end: 108f9c1d7;  */

void FUN_108f9c000(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bdc1160();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar3 = puRam00000001137304b0;
  puRam00000001137304b0 = puVar5;
  _objc_release(uVar3);
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar7 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010c1d0640(puRam00000001137304b0);
          lVar11 = lVar11 + 1;
        } while (lVar8 != lVar11);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar6);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf53590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108f9c1d8; end: 108f9c1db; +[NBMetadataHelper CN2CCodeMap] */

void FUN_108f9c1d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_countryCodeToRegionCodeMap_1125b2708);
  return;
}



/* Entry: 108f9c1dc; end: 108f9c4eb; -[NBMetadataHelper getAllMetadata] */

void FUN_108f9c1dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bdc17c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(puVar1);
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar1);
  puVar9 = &uStack_130;
  puStack_138 = puVar1;
  func_0x00010bf52a60();
  if (puStack_138 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_128 + (long)puVar13 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010c09e240(PTR__OBJC_CLASS___NSLocale_1126af788);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf5f320();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf85f20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        if (puVar5 == (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x00010c2670c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf85f20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          if (puVar7 != (undefined *)0x0) {
            func_0x00010c1d0560(puVar4);
          }
          _objc_release(puVar7);
        }
        else {
          func_0x00010c1d0560(puVar4);
        }
        if (lVar11 != 0) {
          func_0x00010c1d0560(puVar4);
        }
        lVar11 = param_1;
        func_0x00010bfc78a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          func_0x00010c1d0560(puVar4);
        }
        func_0x00010befa120(puVar12);
        _objc_release(lVar11);
        _objc_release(puVar4);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar13 = puVar13 + 1;
      } while (puStack_138 != puVar13);
      puVar9 = &uStack_130;
      puStack_138 = puVar1;
      func_0x00010bf52a60();
    } while (puStack_138 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    func_0x00010bdc1160();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c25d700(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar13 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar12 = puVar13;
    _objc_opt_isKindOfClass(puVar13,puVar1);
    if ((((ulong)puVar12 & 1) == 0) ||
       (puVar1 = puVar13, func_0x00010bf529e0(), puVar1 == (undefined *)0x0)) {
      puVar12 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar13);
      puVar12 = puVar13;
    }
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108f9c4ec; end: 108f9c5bb; +[NBMetadataHelper regionCodeFromCountryCode:] */

void FUN_108f9c4ec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010bdc1160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25d700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if (((uVar4 & 1) == 0) || (uVar4 = uVar2, func_0x00010bf529e0(), uVar4 == 0)) {
    uVar4 = 0;
  }
  else {
    _objc_retain(uVar2);
    uVar4 = uVar2;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f9c5bc; end: 108f9c627; +[NBMetadataHelper countryCodeFromRegionCode:] */

void FUN_108f9c5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc0fa0(param_1);
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



/* Entry: 108f9c628; end: 108f9c70b; -[NBMetadataHelper getMetadataForRegion:] */

void FUN_108f9c628(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_108f9c70c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0dff20(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      lVar1 = param_1;
      func_0x00010bfc78c0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR_PTR_1126dcc80;
        _objc_alloc(PTR_PTR_1126dcc80);
        func_0x00010c010140();
        func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,puVar3,param_3);
      }
      _objc_release(lVar1);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f9c70c; end: 108f9c77b;  */

void FUN_108f9c70c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam00000001137304c0;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137304c0,&PTR___NSConcreteGlobalBlock_110ad0f88);
  }
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f9c77c; end: 108f9c7cf; -[NBMetadataHelper getMetadataForNonGeographicalRegion:] */

void FUN_108f9c77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c25d700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc78a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9c7d0; end: 108f9c813; +[NBMetadataHelper hasValue:] */

bool FUN_108f9c7d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_108f9c70c(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 108f9c814; end: 108f9c8f7; +[NBMetadataHelper jsonObjectFromZippedDataWithBytes:compressedLength:expandedLength:] */

void FUN_108f9c814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  _inflateInit2_(&uStack_a0,0x10,&UNK_10f45dced,0x70);
  uStack_98 = CONCAT44(uStack_98._4_4_,param_4);
  puVar2 = puVar1;
  uStack_a0 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  puVar3 = puVar1;
  puStack_88 = puVar2;
  func_0x00010c08fa60();
  uStack_80 = CONCAT44(uStack_80._4_4_,(int)puVar3);
  _inflate(&uStack_a0,4);
  _inflateEnd(&uStack_a0);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f9c8f8; end: 108f9c98f; -[NBMetadataHelper getMetadataForRegionCode:] */

void FUN_108f9c8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067ec0();
    lVar2 = (long)(int)lVar2 * 0x10;
    func_0x00010bf0a020(param_1,param_2,*(undefined4 *)(&UNK_110acffb0 + lVar2),
                        *(undefined4 *)(&UNK_110acffb4 + lVar2),param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9c990; end: 108f9cbe7; -[NBMetadataHelper arrayFromZippedDataAtUncompressedOffset:usize:regionCode:] */

void FUN_108f9c990(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  
  _objc_retain(param_5);
  lVar9 = 0;
  piVar10 = (int *)&UNK_10dfb168c;
  do {
    if (param_3 <= *piVar10) {
      uVar11 = ~(uint)lVar9;
      goto LAB_108f9c9f0;
    }
    lVar9 = lVar9 + -1;
    piVar10 = piVar10 + 2;
  } while (lVar9 != -5);
  uVar11 = 4;
LAB_108f9c9f0:
  uVar8 = (ulong)*(uint *)(&UNK_10dfb1688 + (long)(int)uVar11 * 8);
  iVar1 = *(int *)(&UNK_10dfb168c + (long)(int)uVar11 * 8);
  uVar4 = param_5;
  func_0x00010c08fa60(param_5);
  uVar5 = param_5;
  func_0x00010c08fa60(param_5);
  iVar3 = (param_4 - (int)uVar5) + -4;
  puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  func_0x000108f9cae8(uVar8,(param_3 - iVar1) + (int)uVar4 + 3,puVar7,iVar3);
  if ((int)uVar8 != 0) {
    uVar2 = *(undefined4 *)(&UNK_10dfb1690 + (long)(int)uVar11 * 8);
    puVar7 = puVar6;
    _objc_retainAutorelease(puVar6);
    func_0x00010c0d3c60();
    func_0x000108f9cae8(uVar2,0,puVar7 + (iVar3 - (int)uVar8),uVar8);
  }
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108f9cbe8; end: 108f9cbef; -[NBMetadataHelper countryToIndex] */

undefined8 FUN_108f9cbe8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f9cbf0; end: 108f9cbf7; -[NBMetadataHelper metadataCache] */

undefined8 FUN_108f9cbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9cbf8; end: 108f9cc27; -[NBMetadataHelper setMetadataCache:] */

void FUN_108f9cbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9cc28; end: 108f9cccb; -[NBMetadataHelper .cxx_destruct] */

void FUN_108f9cc28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f9cccc; end: 108f9cdff; -[NBNumberFormat initWithPattern:withFormat:withLeadingDigitsPatterns:withNationalPrefixFormattingRule:whenFormatting:withDomesticCarrierCodeFormattingRule:] */

undefined1 *
FUN_108f9cccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff980;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f9ce00; end: 108f9cf47; -[NBNumberFormat initWithEntry:] */

undefined1 * FUN_108f9ce00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if ((param_3 != 0) && (puVar1 != (undefined8 *)0x0)) {
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010c0d6dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(long *)((long)puVar1 + 0x20) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(long *)((long)puVar1 + 0x28) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010c0d6e00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)lVar3;
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f9cf48; end: 108f9d05f; -[NBNumberFormat description] */

void FUN_108f9cf48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c0f5aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08de80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0d56c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d56e0();
  func_0x00010bf87f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110f13c38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f9d060; end: 108f9d163; -[NBNumberFormat copyWithZone:] */

undefined * FUN_108f9d060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126dcc88;
  _objc_alloc(PTR_PTR_1126dcc88);
  uVar2 = param_1;
  func_0x00010c0f5aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfb5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c08de80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0d56c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0d56e0(param_1);
  func_0x00010bf87f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034760(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 108f9d164; end: 108f9d16b; -[NBNumberFormat pattern] */

undefined8 FUN_108f9d164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9d16c; end: 108f9d19b; -[NBNumberFormat setPattern:] */

void FUN_108f9d16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9d19c; end: 108f9d1a3; -[NBNumberFormat format] */

undefined8 FUN_108f9d19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f9d1a4; end: 108f9d1d3; -[NBNumberFormat setFormat:] */

void FUN_108f9d1a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108f9d1d4; end: 108f9d1db; -[NBNumberFormat leadingDigitsPatterns] */

undefined8 FUN_108f9d1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f9d1dc; end: 108f9d20b; -[NBNumberFormat setLeadingDigitsPatterns:] */

void FUN_108f9d1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9d20c; end: 108f9d213; -[NBNumberFormat nationalPrefixFormattingRule] */

undefined8 FUN_108f9d20c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f9d214; end: 108f9d243; -[NBNumberFormat setNationalPrefixFormattingRule:] */

void FUN_108f9d214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9d244; end: 108f9d24b; -[NBNumberFormat nationalPrefixOptionalWhenFormatting] */

undefined1 FUN_108f9d244(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f9d24c; end: 108f9d253; -[NBNumberFormat setNationalPrefixOptionalWhenFormatting:] */

void FUN_108f9d24c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108f9d254; end: 108f9d25b; -[NBNumberFormat domesticCarrierCodeFormattingRule] */

undefined8 FUN_108f9d254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f9d25c; end: 108f9d28b; -[NBNumberFormat setDomesticCarrierCodeFormattingRule:] */

void FUN_108f9d25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9d28c; end: 108f9d2df; -[NBNumberFormat .cxx_destruct] */

void FUN_108f9d28c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f9d2e0; end: 108f9d377; -[NBPhoneMetaData init] */

undefined1 * FUN_108f9d2e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff988;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined **)((long)puVar1 + 0xb8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined **)((long)puVar1 + 0xc0) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = 0;
    *(undefined2 *)((long)puVar1 + 8) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined ***)((long)puVar1 + 0x88) = &PTR____CFConstantStringClassReference_110dc94b8;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f9d378; end: 108f9d9db; -[NBPhoneMetaData initWithEntry:] */

undefined1 * FUN_108f9d378(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ff988;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if ((param_3 != 0) && (puVar1 != (undefined8 *)0x0)) {
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126dcc90;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010140();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x78);
    *(long *)((long)puVar1 + 0x78) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x80);
    *(long *)((long)puVar1 + 0x80) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x88);
    *(long *)((long)puVar1 + 0x88) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x90);
    *(long *)((long)puVar1 + 0x90) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x98);
    *(long *)((long)puVar1 + 0x98) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(long *)((long)puVar1 + 0xa0) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(long *)((long)puVar1 + 0xa8) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(long *)((long)puVar1 + 0xb0) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)lVar4;
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c0de9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined1 **)((long)puVar1 + 0xb8) = puVar5;
    _objc_release(uVar6);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0d6dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c0de9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined1 **)((long)puVar1 + 0xc0) = puVar5;
    _objc_release(uVar6);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0d6e00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)lVar4;
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 200);
    *(long *)((long)puVar1 + 200) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0d6e00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 10) = (char)lVar4;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f9d9dc; end: 108f9db37; -[NBPhoneMetaData numberFormatsFromEntry:] */

void FUN_108f9d9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      puVar5 = PTR_PTR_1126dcc88;
      _objc_alloc(PTR_PTR_1126dcc88);
      func_0x00010c010140();
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e139d8;
  if (*(char *)(param_3 + 8) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e13878;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,ppuVar1,
                      &PTR____CFConstantStringClassReference_110f13c58);
  return;
}



/* Entry: 108f9db38; end: 108f9dbef; -[NBPhoneMetaData description] */

void FUN_108f9db38(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e139d8;
  if (*(char *)(param_1 + 8) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e13878;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,ppuVar1,
                      &PTR____CFConstantStringClassReference_110f13c58);
  return;
}


