/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fa91b0; end: 108fa93cf; -[NBPhoneNumberUtil buildNationalNumberForParsing:nationalNumber:] */

void FUN_108fa91b0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  if (param_4 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init();
    uVar3 = param_1;
    func_0x00010bfecec0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110f13e78);
    if ((int)uVar3 < 1) {
      uVar6 = param_1;
      func_0x00010bf9eea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f13e78;
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110f13e78);
      lVar1 = (long)ppuVar4 + (uVar3 & 0xffffffff);
      uVar6 = param_3;
      func_0x00010bf35920(param_3,param_2,lVar1);
      if ((int)uVar6 == 0x2b) {
        uVar6 = param_3;
        func_0x00010c08fa60(param_3);
        uVar5 = param_3;
        func_0x00010c11f460(param_3,param_2,&PTR____CFConstantStringClassReference_110db97b8,2,lVar1
                            ,uVar6 - lVar1);
        uVar6 = param_3;
        if (uVar5 == 0x7fffffffffffffff) {
          func_0x00010c260c00(param_3,param_2,lVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c260c80(param_3,param_2,lVar1,uVar5 - lVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bf070e0(puVar2,param_2,uVar6);
        _objc_release(uVar6);
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110f13e58;
      uVar6 = param_1;
      func_0x00010bfecec0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110f13e58);
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110f13e58);
      lVar1 = (long)ppuVar4 + (long)(int)uVar6;
      uVar6 = param_3;
      func_0x00010c260c80(param_3,param_2,lVar1,(uVar3 & 0xffffffff) - lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf070e0(puVar2,param_2,uVar6);
    _objc_release(uVar6);
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bfecec0(param_1,param_2,puVar7,&PTR____CFConstantStringClassReference_110f13e98);
    puVar8 = puVar2;
    if (0 < (int)param_1) {
      puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      _objc_alloc();
      puVar9 = puVar7;
      func_0x00010c260c80(puVar7,param_2,0,param_1 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar8,param_2,puVar9);
      _objc_release(puVar2);
      _objc_release(puVar9);
    }
    puVar2 = puVar8;
    func_0x00010bf51e00();
    _objc_autorelease();
    *param_4 = puVar2;
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fa93d0; end: 108fa9523; -[NBPhoneNumberUtil isNumberMatch:second:error:] */

undefined8
FUN_108fa93d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c078e60(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa9524; end: 108fa9adb; -[NBPhoneNumberUtil isNumberMatch:second:] */

/* WARNING: Removing unreachable block (ram,0x000108fa970c) */
/* WARNING: Removing unreachable block (ram,0x000108fa9928) */
/* WARNING: Removing unreachable block (ram,0x000108fa973c) */
/* WARNING: Removing unreachable block (ram,0x000108fa95bc) */
/* WARNING: Removing unreachable block (ram,0x000108fa95ec) */
/* WARNING: Removing unreachable block (ram,0x000108fa9604) */
/* WARNING: Removing unreachable block (ram,0x000108fa9640) */
/* WARNING: Removing unreachable block (ram,0x000108fa9678) */
/* WARNING: Removing unreachable block (ram,0x000108fa9690) */
/* WARNING: Removing unreachable block (ram,0x000108fa9694) */
/* WARNING: Removing unreachable block (ram,0x000108fa9a84) */
/* WARNING: Removing unreachable block (ram,0x000108fa9a8c) */
/* WARNING: Removing unreachable block (ram,0x000108fa9900) */
/* WARNING: Removing unreachable block (ram,0x000108fa9ad0) */

ulong FUN_108fa9524(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
  }
  else {
    uVar3 = param_1;
    func_0x00010c0f3dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010bf51e00();
    func_0x00010c1e7880(uVar3);
    func_0x00010bf3b080(uVar3);
    func_0x00010c1dff20(uVar3);
    func_0x00010c1e7880(uVar4);
    func_0x00010bf3b080(uVar4);
    func_0x00010c1dff20(uVar4);
    uVar10 = uVar3;
    func_0x00010bf9dc80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar10 != 0) {
      uVar5 = uVar3;
      func_0x00010bf9dc80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar10);
      if (uVar6 == 0) {
        func_0x00010c1992c0(uVar3);
      }
    }
    uVar10 = uVar4;
    func_0x00010bf9dc80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar10 != 0) {
      uVar5 = uVar4;
      func_0x00010bf9dc80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar10);
      if (uVar6 == 0) {
        func_0x00010c1992c0(uVar4);
      }
    }
    puVar2 = PTR_PTR_1126dcc78;
    uVar10 = uVar3;
    func_0x00010bf9dc80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360();
    puVar7 = PTR_PTR_1126dcc78;
    if ((int)puVar2 == 0) {
LAB_108fa9938:
      _objc_release(uVar10);
    }
    else {
      uVar5 = uVar4;
      func_0x00010bf9dc80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfde360();
      if (((ulong)puVar7 & 1) == 0) {
        _objc_release(uVar5);
        goto LAB_108fa9938;
      }
      uVar6 = uVar3;
      func_0x00010bf9dc80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf9dc80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar10);
      if ((uVar9 & 1) == 0) {
        param_1 = 1;
        goto LAB_108fa9a40;
      }
    }
    uVar10 = uVar3;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010c071f40();
    if (((uVar6 & 1) == 0) && (uVar6 = uVar5, func_0x00010c071f40(), (uVar6 & 1) == 0)) {
      uVar6 = uVar3;
      func_0x00010c071ae0();
      if ((uVar6 & 1) == 0) {
        uVar6 = uVar10;
        func_0x00010c071f40();
        if (((int)uVar6 == 0) || (func_0x00010c078760(), (param_1 & 1) == 0)) {
          param_1 = 1;
        }
        else {
          param_1 = 2;
        }
      }
      else {
        param_1 = 4;
      }
    }
    else {
      func_0x00010c184960(uVar3);
      func_0x00010c184960(uVar4);
      uVar6 = uVar3;
      func_0x00010c071ae0();
      if ((uVar6 & 1) == 0) {
        func_0x00010c078760();
        iVar1 = (int)param_1;
        param_1 = 1;
        if (iVar1 != 0) {
          param_1 = 2;
        }
      }
      else {
        param_1 = 3;
      }
    }
    _objc_release(uVar5);
  }
  else {
    uVar4 = param_1;
    func_0x00010c0f3dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    _objc_retain(0);
    func_0x00010c078e60(param_1);
  }
  _objc_release(uVar10);
LAB_108fa9a40:
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa9adc; end: 108fa9be3; -[NBPhoneNumberUtil isNationalNumberSuffixOfTheOther:second:] */

undefined *
FUN_108fa9adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c0d55e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_4;
  func_0x00010c0d55e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfdcf80(puVar1,param_2,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar3;
    func_0x00010bfdcf80(puVar3,param_2,puVar1);
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 108fa9be4; end: 108fa9d17; -[NBPhoneNumberUtil canBeInternationallyDialled:error:] */

undefined8 FUN_108fa9be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf2c520(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa9d18; end: 108fa9e13; -[NBPhoneNumberUtil canBeInternationallyDialled:] */

uint FUN_108fa9d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfe0aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfc97e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfc78a0(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfc7de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0da860(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078e80(param_1,param_2,lVar1,lVar2);
    uVar4 = (uint)param_1 ^ 1;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108fa9e14; end: 108fa9f17; -[NBPhoneNumberUtil matchesEntirely:string:] */

undefined8 FUN_108fa9e14(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf96d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c08fa60();
    lVar3 = param_1;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    if (((lVar3 == 0) || (lVar4 = lVar3, func_0x00010c11f2a0(), lVar4 != 0)) || (param_2 != lVar2))
    {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108fa9f18; end: 108fa9f1f; -[NBPhoneNumberUtil entireStringCacheLock] */

undefined8 FUN_108fa9f18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fa9f20; end: 108fa9f4f; -[NBPhoneNumberUtil setEntireStringCacheLock:] */

void FUN_108fa9f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fa9f50; end: 108fa9f57; -[NBPhoneNumberUtil entireStringRegexCache] */

undefined8 FUN_108fa9f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fa9f58; end: 108fa9f87; -[NBPhoneNumberUtil setEntireStringRegexCache:] */

void FUN_108fa9f58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108fa9f88; end: 108fa9f8f; -[NBPhoneNumberUtil lockPatternCache] */

undefined8 FUN_108fa9f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fa9f90; end: 108fa9fbf; -[NBPhoneNumberUtil setLockPatternCache:] */

void FUN_108fa9f90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108fa9fc0; end: 108fa9fc7; -[NBPhoneNumberUtil regexPatternCache] */

undefined8 FUN_108fa9fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fa9fc8; end: 108fa9ff7; -[NBPhoneNumberUtil setRegexPatternCache:] */

void FUN_108fa9fc8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108fa9ff8; end: 108fa9fff; -[NBPhoneNumberUtil CAPTURING_DIGIT_PATTERN] */

undefined8 FUN_108fa9ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108faa000; end: 108faa02f; -[NBPhoneNumberUtil setCAPTURING_DIGIT_PATTERN:] */

void FUN_108faa000(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108faa030; end: 108faa037; -[NBPhoneNumberUtil VALID_ALPHA_PHONE_PATTERN] */

undefined8 FUN_108faa030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108faa038; end: 108faa067; -[NBPhoneNumberUtil setVALID_ALPHA_PHONE_PATTERN:] */

void FUN_108faa038(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108faa068; end: 108faa06f; -[NBPhoneNumberUtil helper] */

undefined8 FUN_108faa068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108faa070; end: 108faa09f; -[NBPhoneNumberUtil setHelper:] */

void FUN_108faa070(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108faa0a0; end: 108faa15f; -[NBPhoneNumberUtil .cxx_destruct] */

void FUN_108faa0a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108faa160; end: 108faa1e3;  */

void FUN_108faa160(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_opt_isKindOfClass();
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      _objc_retain(param_1);
      uVar1 = param_1;
    }
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108faa1e4; end: 108faa2c3;  */

void FUN_108faa1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010c0d6e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_nb_safeObjectAtIndex_class__1126135a0,param_3,puVar1);
  return;
}



/* Entry: 108faa2c4; end: 108faa313;  */

void FUN_108faa2c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f15538,1,0);
  return;
}



/* Entry: 108faa314; end: 108faa33b;  */

double FUN_108faa314(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  func_0x00010bfb2cc0(0x3f800000,param_1,param_2,&PTR____CFConstantStringClassReference_110f155b8,0)
  ;
  return (double)fVar1;
}



/* Entry: 108faa33c; end: 108faa3c7;  */

void FUN_108faa33c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f14f98,0,0);
  return;
}



/* Entry: 108faa3c8; end: 108faa43f;  */

long FUN_108faa3c8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f14e38,2000,0);
  return (long)(int)param_1;
}



/* Entry: 108faa440; end: 108faa48f;  */

void FUN_108faa440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f14f18,0,0);
  return;
}



/* Entry: 108faa490; end: 108faa4b7;  */

long FUN_108faa490(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f14fb8,0x14,0);
  return (long)(int)param_1;
}



/* Entry: 108faa4b8; end: 108faa50b;  */

void FUN_108faa4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f155d8,0,0);
  return;
}



/* Entry: 108faa50c; end: 108faa533;  */

long FUN_108faa50c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f15658,0,0);
  return (long)(int)param_1;
}



/* Entry: 108faa534; end: 108faa59f;  */

undefined1  [16] FUN_108faa534(void)

{
  return ZEXT816(0x4024000000000000) << 0x40;
}



/* Entry: 108faa5a0; end: 108faa647;  */

double FUN_108faa5a0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.3;
  func_0x00010bfb2cc0(0x3e99999a,param_1,param_2,&PTR____CFConstantStringClassReference_110f15678,0)
  ;
  return (double)fVar1;
}



/* Entry: 108faa648; end: 108faa6c3;  */

void FUN_108faa648(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110f156f8,
             &PTR____CFConstantStringClassReference_110f15718,0);
  return;
}



/* Entry: 108faa6c4; end: 108faa743;  */

long FUN_108faa6c4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f15038,1,0);
  return (long)(int)param_1;
}



/* Entry: 108faa744; end: 108faa9db;  */

void FUN_108faa744(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f15098,0,0);
  return;
}



/* Entry: 108faa9dc; end: 108faaa57;  */

undefined * FUN_108faa9dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730570 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f15758,
                        &UNK_10dfb16c0,&UNK_10dfb1790,0x18,FUN_108faaa58,0);
    do {
      if (puRam0000000113730570 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730570;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730570,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730570 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730570;
}



/* Entry: 108faaa58; end: 108faaa63;  */

bool FUN_108faaa58(uint param_1)

{
  return param_1 < 0x18;
}



/* Entry: 108faaa64; end: 108faaadf;  */

undefined * FUN_108faaa64(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730578 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f15778,
                        &UNK_10dfb17f0,&UNK_10dfb1868,4,FUN_108faaae0,0);
    do {
      if (puRam0000000113730578 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730578;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730578,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730578 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730578;
}



/* Entry: 108faaae0; end: 108faaaeb;  */

bool FUN_108faaae0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108faaaec; end: 108faab53; +[SCShareDestinationsList descriptor] */

void FUN_108faaaec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdd430,
                        &PTR____CFConstantStringClassReference_110f15798,&PTR_DAT_1132bda60,
                        &PTR_DAT_1132bda78,1,0x10,0x1c);
    puRam0000000113730580 = puVar1;
  }
  return;
}



/* Entry: 108faab54; end: 108faabbb; +[SCShareDestinationsBySource descriptor] */

void FUN_108faab54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdd480,
                        &PTR____CFConstantStringClassReference_110f157b8,&PTR_DAT_1132bda60,
                        &PTR_DAT_1132bda98,7,0x38,0x1c);
    puRam0000000113730588 = puVar1;
  }
  return;
}



/* Entry: 108faabbc; end: 108faac93;  */

void FUN_108faabbc(undefined8 param_1,double param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_3;
  func_0x00010c08dda0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1a08;
  _objc_opt_class(PTR_PTR_1126b1a08);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c0699c0(param_3);
    param_2 = param_2 + -16.0;
    puVar1 = PTR_PTR_1126b1a08;
    _objc_alloc(PTR_PTR_1126b1a08);
    func_0x00010c013de0(0,0,param_2,param_2);
    func_0x00010c1d5da0();
    func_0x00010c1e0040(param_2,param_2,puVar1);
    func_0x00010c1b9fe0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108faac94; end: 108faacf7; +[SCProfileHeaderButtonABHelpers headerIconRingStyleWithCircumstanceEngine:] */

undefined8 FUN_108faac94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c067f00(param_3,param_2,&PTR____CFConstantStringClassReference_110f157d8,0,0);
  if ((int)(uint)param_3 < 0) {
    uVar1 = 0;
  }
  else {
    if ((uint)param_3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bddecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clampIconRingStyle__1125554d8);
      return param_1;
    }
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 108faacf8; end: 108faad23; +[SCProfileHeaderButtonABHelpers cellIconRingStyleWithCircumstanceEngine:] */

long FUN_108faacf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067f00(param_3,param_2,&PTR____CFConstantStringClassReference_110f157f8,0,0);
  return (long)(int)param_3;
}



/* Entry: 108faad24; end: 108faad37; +[SCProfileHeaderButtonABHelpers _clampIconRingStyle:] */

ulong FUN_108faad24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  param_3 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
  if (2 < (long)param_3) {
    param_3 = 3;
  }
  return param_3;
}



/* Entry: 108faad38; end: 108faae5b; +[SCProfileHeaderButtonABHelpers storyTypeForSnapAttributes:] */

undefined8 FUN_108faad38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c1340(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108faae5c; end: 108faaef7;  */

void FUN_108faae5c(long param_1,long param_2)

{
  func_0x00010c27dd80();
  if (param_2 - 1U < 3) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10dfb1878 + (param_2 - 1U) * 8);
  }
  return;
}



/* Entry: 108faaef8; end: 108faaf0b;  */

void FUN_108faaef8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  return;
}



/* Entry: 108faaf0c; end: 108faaf6f;  */

void FUN_108faaf0c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07f5e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c077620();
    uVar2 = 2;
    if ((int)uVar1 == 0) {
      uVar2 = 8;
    }
  }
  else {
    uVar2 = 2;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108faaf70; end: 108fab043; +[SCProfileHeaderButtonABHelpers colorMappingForStoriesTypes] */

void FUN_108faaf70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17e8;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1818;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1818;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1830;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17e8;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1848;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1860;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1878;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1890;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18a8;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1800;
  pppuVar3 = &ppuStack_60;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar3,&ppuStack_a8,9);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  uVar1 = 0x35;
  if (pppuVar3 != (undefined ***)0x1) {
    uVar1 = 0xb1;
  }
  uVar2 = 0xdc;
  if (pppuVar3 != (undefined ***)0x2) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,uVar2);
  return;
}



/* Entry: 108fab044; end: 108fab06b; +[SCProfileHeaderButtonABHelpers storyRingColorForStyle:] */

void FUN_108fab044(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x35;
  if (param_3 != 1) {
    uVar1 = 0xb1;
  }
  uVar2 = 0xdc;
  if (param_3 != 2) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,uVar2);
  return;
}



/* Entry: 108fab06c; end: 108fab117; +[SCProfileHeaderButtonABHelpers storyRingColorForSnapAttributes:] */

void FUN_108fab06c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c25b760(PTR_PTR_1126c2fa8);
  puVar1 = PTR_PTR_1126c2fa8;
  func_0x00010bf410e0(PTR_PTR_1126c2fa8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dff20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c067fc0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c25aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_storyRingColorForStyle__1126745d8,puVar4);
  return;
}



/* Entry: 108fab118; end: 108fab237;  */

undefined ** FUN_108fab118(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108fab238; end: 108fab26f;  */

undefined1 FUN_108fab238(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f158d8,0,0);
  uVar1 = 2;
  if ((int)param_1 != 2) {
    uVar1 = (int)param_1 == 1;
  }
  return uVar1;
}



/* Entry: 108fab270; end: 108fab2fb;  */

void FUN_108fab270(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f158f8,0,0);
  return;
}



/* Entry: 108fab2fc; end: 108fab307; -[SCFeatureSettingsService isSnapcodeTooltipLastImpressionTimestampSeconds] */

void FUN_108fab2fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f15a98);
  return;
}



/* Entry: 108fab308; end: 108fab313; -[SCFeatureSettingsService snapcodeTooltipLastImpressionTimestampSecondsServerParam] */

undefined ** FUN_108fab308(void)

{
  return &PTR____CFConstantStringClassReference_110f15a98;
}



/* Entry: 108fab314; end: 108fab323; -[SCFeatureSettingsService setSnapcodeTooltipLastImpressionTimestampSeconds:] */

void FUN_108fab314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f15a98,param_3);
  return;
}



/* Entry: 108fab324; end: 108fab32b; -[SCFeatureSettingsService snapcode_tooltip_last_impression_timestamp_seconds_client_value:] */

void FUN_108fab324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108fab32c; end: 108fab333; -[SCFeatureSettingsService snapcode_tooltip_last_impression_timestamp_seconds_server_value:] */

void FUN_108fab32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108fab334; end: 108fab343; -[SCFeatureSettingsService snapcodeTooltipLastImpressionTimestampSeconds] */

void FUN_108fab334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f15a98,0);
  return;
}



/* Entry: 108fab344; end: 108fab34f; -[SCFeatureSettingsService isSnapcodeLastExpansionTimestampSeconds] */

void FUN_108fab344(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f15ab8);
  return;
}



/* Entry: 108fab350; end: 108fab35b; -[SCFeatureSettingsService snapcodeLastExpansionTimestampSecondsServerParam] */

undefined ** FUN_108fab350(void)

{
  return &PTR____CFConstantStringClassReference_110f15ab8;
}



/* Entry: 108fab35c; end: 108fab36b; -[SCFeatureSettingsService setSnapcodeLastExpansionTimestampSeconds:] */

void FUN_108fab35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f15ab8,param_3);
  return;
}



/* Entry: 108fab36c; end: 108fab373; -[SCFeatureSettingsService snapcode_last_expansion_timestamp_seconds_client_value:] */

void FUN_108fab36c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108fab374; end: 108fab37b; -[SCFeatureSettingsService snapcode_last_expansion_timestamp_seconds_server_value:] */

void FUN_108fab374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108fab37c; end: 108fab39f; -[SCFeatureSettingsService snapcodeLastExpansionTimestampSeconds] */

void FUN_108fab37c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f15ab8,0);
  return;
}



/* Entry: 108fab3a0; end: 108fab50f; -[SCSnapchatterCarouselCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108fab3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff9b0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcca0;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar6 = (long)_DAT_11277ed64;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1619c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11277ed68;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ed6c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ed6c) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277ed70) = 0xffffffffffffffff;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fab510; end: 108fab52b;  */

void FUN_108fab510(void)

{
  _objc_opt_new(PTR_PTR_1126b52f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fab52c; end: 108fab61b; -[SCSnapchatterCarouselCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fab52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff9b0;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11277ed64));
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277ed6c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  func_0x00010bea76c0(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 108fab61c; end: 108fab68b; -[SCSnapchatterCarouselCollectionViewCell applyLayoutAttributes:] */

void FUN_108fab61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126ff9b0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108fab68c; end: 108faba17; -[SCSnapchatterCarouselCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fab68c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11277ed74;
  uVar5 = *(ulong *)(param_2 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_4);
  if (uVar5 == param_4) {
    _objc_release(param_4);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108fab9f8;
    }
    puVar2 = PTR_PTR_1126b1910;
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar1 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar5 = param_4;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_4);
    uVar1 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    *(ulong *)(param_2 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar1 = uVar5;
    func_0x00010c244760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277ed64;
    func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar6));
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_11277ed78;
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    *(undefined **)(param_2 + lVar7) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar7));
    uVar1 = uVar5;
    func_0x00010c23cf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      func_0x00010bef9040(*(undefined8 *)(param_2 + lVar6));
    }
    uVar1 = uVar5;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar1 = uVar5;
      func_0x00010bf1fb20();
      _objc_retainAutoreleasedReturnValue();
      dVar8 = param_1;
      if (uVar1 != 0) {
        func_0x00010bf1fc80(uVar5);
        dVar8 = param_1;
        _objc_release(uVar1);
        if (0.0 < param_1) goto LAB_108fab824;
      }
    }
    else {
      _objc_release();
      dVar8 = param_1;
LAB_108fab824:
      lVar7 = (long)_DAT_11277ed6c;
      lVar6 = *(long *)(param_2 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_2 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar6 = param_2;
        func_0x00010bf4dce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fa0(lVar6);
        _objc_release(uVar4);
        _objc_release(lVar6);
      }
    }
    func_0x00010bf1fc80(uVar5);
    lVar6 = (long)_DAT_11277ed6c;
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(dVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar1 = uVar5;
    func_0x00010bf1fb20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010bf13d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_2);
  }
  _objc_release(uVar5);
LAB_108fab9f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108faba18; end: 108faba93; +[SCSnapchatterCarouselCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108faba18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b1910;
  _objc_opt_class(PTR_PTR_1126b1910);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108faba94; end: 108fabab3; -[SCSnapchatterCarouselCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faba94(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11277ed70) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277ed70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed3bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundShapViewPath_112592890);
  return;
}



/* Entry: 108fabab4; end: 108fabacf; -[SCSnapchatterCarouselCollectionViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ed7c),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108fabad0; end: 108fabb2b; -[SCSnapchatterCarouselCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277ed64;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setImageDownloader__1126482a8);
  if ((uVar1 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fabb2c; end: 108fabc07; -[SCSnapchatterCarouselCollectionViewCell _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabb2c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c252440();
  puVar2 = PTR_PTR_1126b1910;
  if (param_3 == 1) {
    uVar4 = *(ulong *)(param_1 + _DAT_11277ed74);
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277ed7c);
    uVar3 = uVar1;
    func_0x00010c0b4d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108fabc08; end: 108fabc8f; -[SCSnapchatterCarouselCollectionViewCell _setShapeLayerPathRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277ed60);
  uVar2 = param_5;
  _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bed3bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateBackgroundShapViewPath_112592890);
  return;
}



/* Entry: 108fabc90; end: 108fabe6b; -[SCSnapchatterCarouselCollectionViewCell _updateBackgroundShapViewPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabc90(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = PTR_PTR_1126b1910;
  uVar7 = *(ulong *)(param_5 + _DAT_11277ed74);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar8 = (long)_DAT_11277ed6c;
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar9 = param_1;
  func_0x00010bf525a0(uVar1);
  dVar10 = dVar9;
  func_0x00010bf525a0(uVar1);
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,dVar9,dVar10,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    func_0x00010bf1fc80(uVar1);
    _objc_release(uVar3);
    if (0.0 < param_1) {
      uVar6 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      FUN_108fe9e04(0,0x3ff0000000000000,0x4000000000000000,0x3fc3333333333333);
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fabe6c; end: 108fabf23; -[SCSnapchatterCarouselCollectionViewCell _didTapOnCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabe6c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b1910;
  uVar4 = *(ulong *)(param_1 + _DAT_11277ed74);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277ed7c);
  uVar3 = uVar1;
  func_0x00010c23cf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fabf24; end: 108fabf7b; -[SCSnapchatterCarouselCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108fabf24(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 108fabf7c; end: 108fabf8b; -[SCSnapchatterCarouselCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fabf7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ed74);
}



/* Entry: 108fabf8c; end: 108fabf9b; -[SCSnapchatterCarouselCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fabf8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ed7c);
}



/* Entry: 108fabf9c; end: 108fabfdb; -[SCSnapchatterCarouselCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabf9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ed7c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fabfdc; end: 108fabfeb; -[SCSnapchatterCarouselCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fabfdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ed70);
}



/* Entry: 108fabfec; end: 108fac06b; -[SCSnapchatterCarouselCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fabfec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ed7c,0);
  _objc_storeStrong(param_1 + _DAT_11277ed74,0);
  _objc_storeStrong(param_1 + _DAT_11277ed78,0);
  _objc_storeStrong(param_1 + _DAT_11277ed68,0);
  _objc_storeStrong(param_1 + _DAT_11277ed64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ed6c,0);
  return;
}



/* Entry: 108fac06c; end: 108fac183; +[SCSnapchatterCollectionInfoCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108fac06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b18a0;
  _objc_opt_class(PTR_PTR_1126b18a0);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b1898;
  if (uVar1 == 0) {
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_6;
    func_0x00010c2711a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c25e840(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078a40(param_6);
    func_0x00010bddc2a0(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = param_3;
  return auVar5;
}



/* Entry: 108fac184; end: 108fac263; -[SCSnapchatterCollectionInfoCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fac184(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff9b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ed80);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ed80) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ed84);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ed84) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ed88);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ed88) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fac264; end: 108fac2f3;  */

void FUN_108fac264(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fac2f4; end: 108fac6a3; -[SCSnapchatterCollectionInfoCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fac2f4(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ff9b8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar3 = (long)_DAT_11277ed8c;
  dVar17 = param_1;
  if ((*(byte *)(param_5 + lVar3) & 1) == 0) {
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    param_3 = param_3 + -30.0;
    dVar17 = 15.0;
    param_2 = param_1;
  }
  func_0x00010c19f0e0(dVar17,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11277ed90));
  if ((*(byte *)(param_5 + lVar3) & 1) == 0) {
    func_0x00010bdcdee0(param_5);
  }
  dVar15 = dVar17;
  _CGRectGetMinX(dVar17,param_2,param_3,param_4);
  dVar15 = dVar15 + 12.5;
  dVar8 = dVar17;
  _CGRectGetMinY(dVar17,param_2,param_3,param_4);
  dVar8 = dVar8 + 10.0;
  uVar11 = 0x4046000000000000;
  uVar13 = 0x4046000000000000;
  func_0x00010b816528();
  dVar14 = dVar17;
  _CGRectGetWidth(dVar17,param_2,param_3,param_4);
  dVar6 = dVar15;
  _CGRectGetMaxX(dVar15,dVar8,uVar11,uVar13);
  dVar16 = (dVar14 - dVar6) + -25.0;
  lVar3 = (long)_DAT_11277ed80;
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar16,0x7fefffffffffffff);
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11277ed84;
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar16);
  _objc_release(uVar1);
  dVar14 = dVar17;
  _CGRectGetMinY(dVar17,param_2,param_3,param_4);
  _CGRectGetHeight(dVar17,param_2,param_3,param_4);
  dVar14 = dVar14 + (double)(long)(((dVar17 - dVar9) - dVar10) * 0.5);
  dVar17 = dVar15;
  _CGRectGetMaxX(dVar15,dVar8,uVar11,uVar13);
  dVar17 = dVar17 + 12.5;
  dVar12 = dVar16;
  func_0x00010b8162e0(dVar17,dVar14,dVar16,dVar9);
  dVar6 = dVar17;
  _CGRectGetMinX();
  dVar7 = dVar17;
  _CGRectGetMaxY(dVar17,dVar14,dVar12,dVar9);
  func_0x00010b8162e0();
  lVar5 = (long)_DAT_11277ed88;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010b8166f8(dVar15,dVar8,uVar11,uVar13,param_5);
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar15,dVar8,uVar11,uVar13);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar17,dVar14,dVar12,dVar9);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar6,dVar7,dVar16,dVar10);
  _objc_release(uVar1);
  return;
}



/* Entry: 108fac6a4; end: 108fac8b3; -[SCSnapchatterCollectionInfoCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fac6a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277ed94;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108fac89c;
    }
    puVar2 = PTR_PTR_1126b18a0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_11277ed90;
    if (*(long *)(param_1 + lVar6) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar2;
      _objc_release(uVar3);
      func_0x00010befbb60(param_1);
      uVar1 = uVar5;
      func_0x00010c2711a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c25e840(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bead5a0(param_1);
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = uVar5;
      func_0x00010bfedd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb0840(param_1);
      _objc_release(uVar1);
    }
    uVar1 = uVar5;
    func_0x00010c078a40();
    *(char *)(param_1 + _DAT_11277ed8c) = (char)uVar1;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar5);
LAB_108fac89c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fac8b4; end: 108faca1f; -[SCSnapchatterCollectionInfoCell _setupLabels:subTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fac8b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277ed80;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_11277ed84;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b1898;
  func_0x00010bdf4c80(PTR_PTR_1126b1898,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b1898;
  func_0x00010bdf43a0(PTR_PTR_1126b1898,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108faca20; end: 108facb63; -[SCSnapchatterCollectionInfoCell _setupThumbnailView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faca20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277ed88;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108facb64; end: 108facc43; -[SCSnapchatterCollectionInfoCell _applyCornerRadiusAndShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108facb64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar5 = (long)_DAT_11277ed90;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bf199e0(puVar1,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_2,puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar4);
  FUN_108fe9e04(0,0x3ff0000000000000,0x4018000000000000,0x3faeb851eb851eb8,
                *(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108facc44; end: 108facd7b; +[SCSnapchatterCollectionInfoCell _createTitleAttributedString:] */

double FUN_108facc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  dVar8 = 16.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c04e840();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar10);
    _objc_alloc();
    uStack_d8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    dVar8 = 12.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c8 = puVar2;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    iVar7 = 2;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c8,&uStack_d8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    puVar6 = puVar4;
    func_0x00010c04e840(puVar1,param_2,uVar10,puVar4);
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_retain(puVar6);
      _objc_retain(uVar5);
      _objc_alloc(puVar1);
      uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      dVar8 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010c013de0(uVar10,uVar12,dVar8,uVar13);
      func_0x00010c1cfce0();
      puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
      func_0x00010c013de0(uVar10,uVar12,dVar8,uVar13);
      puVar3 = PTR_PTR_1126b1898;
      func_0x00010bdf4c80(PTR_PTR_1126b1898,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c16b720(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b1898;
      func_0x00010bdf43a0(PTR_PTR_1126b1898,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c16b720(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar11 = dVar8 + -44.0 + -37.5;
      _objc_release(puVar3);
      dVar8 = 1.79769313486232e+308;
      func_0x00010c23d5a0(dVar11,puVar1);
      dVar9 = 1.79769313486232e+308;
      func_0x00010c23d5a0(dVar11,puVar2);
      dVar9 = dVar8 + dVar9 + 20.0;
      dVar8 = dVar9;
      if (iVar7 == 0) {
        dVar8 = dVar9 + 20.0;
      }
      if (dVar9 <= 64.0) {
        dVar8 = 64.0;
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      return dVar8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return dVar8;
}



/* Entry: 108facd7c; end: 108faceb3; +[SCSnapchatterCollectionInfoCell _createSubTitleAttributedString:] */

double FUN_108facd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  dVar8 = 12.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  iVar7 = 2;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  puVar6 = puVar4;
  func_0x00010c04e840(puVar1,param_2,param_3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return dVar8;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(puVar6);
  _objc_retain(uVar5);
  _objc_alloc(puVar1);
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar8 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar10,uVar12,dVar8,uVar13);
  func_0x00010c1cfce0();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(uVar10,uVar12,dVar8,uVar13);
  puVar3 = PTR_PTR_1126b1898;
  func_0x00010bdf4c80(PTR_PTR_1126b1898,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c16b720(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1898;
  func_0x00010bdf43a0(PTR_PTR_1126b1898,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c16b720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar11 = dVar8 + -44.0 + -37.5;
  _objc_release(puVar3);
  dVar8 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar11,puVar1);
  dVar9 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar11,puVar2);
  dVar9 = dVar8 + dVar9 + 20.0;
  dVar8 = dVar9;
  if (iVar7 == 0) {
    dVar8 = dVar9 + 20.0;
  }
  if (dVar9 <= 64.0) {
    dVar8 = 64.0;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return dVar8;
}



/* Entry: 108faceb4; end: 108fad07f; +[SCSnapchatterCollectionInfoCell _cellHeightWithTitle:subTitle:newUIEnabled:] */

double FUN_108faceb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar8 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar7,dVar8,uVar9);
  func_0x00010c1cfce0();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(uVar5,uVar7,dVar8,uVar9);
  puVar3 = PTR_PTR_1126b1898;
  func_0x00010bdf4c80(PTR_PTR_1126b1898,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c16b720(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1898;
  func_0x00010bdf43a0(PTR_PTR_1126b1898,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c16b720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar6 = dVar8 + -44.0 + -37.5;
  _objc_release(puVar3);
  dVar8 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar6,puVar1);
  dVar4 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar6,puVar2);
  dVar4 = dVar8 + dVar4 + 20.0;
  dVar8 = dVar4;
  if (param_5 == 0) {
    dVar8 = dVar4 + 20.0;
  }
  if (dVar4 <= 64.0) {
    dVar8 = 64.0;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return dVar8;
}



/* Entry: 108fad080; end: 108fad08f; -[SCSnapchatterCollectionInfoCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fad080(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ed94);
}


