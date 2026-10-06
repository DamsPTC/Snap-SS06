/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d49d7c; end: 106d4a06f;  */

void FUN_106d49d7c(undefined **param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuStack_c8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar9 = PTR_PTR_1126b23c0;
  _objc_retain(param_1);
  func_0x00010c0ea1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5480();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5380(0,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c2300e0();
  if ((int)lVar4 != 0) {
    func_0x00010c2b69c0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac5c0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf21520(param_2);
  func_0x00010c2ac520(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c22ff80();
  if ((int)lVar4 != 0) {
    func_0x00010c2a75e0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afd20(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar4 = param_2;
  func_0x00010bfa32a0();
  if (lVar4 - 1U < 3) {
    func_0x00010c0d9c20(PTR_PTR_1126c9b90);
  }
  else {
    if (lVar4 != 0) goto LAB_106d49ef8;
    func_0x00010c282640(PTR_PTR_1126c9b90);
  }
  func_0x00010c2bc6c0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_106d49ef8:
  func_0x00010c230140(param_2);
  func_0x00010c2b4880(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5ea0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar2 = ppuVar7;
  func_0x00010c0d3c80();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar3 = ppuVar2;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar7);
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(ppuVar3);
  _objc_release(puVar1);
  ppuVar7 = ppuVar3;
  func_0x00010c2aba40(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c29e220();
  if (lVar4 == 0x5b) {
    ppuVar7 = (undefined **)0x1;
    func_0x00010c2b5b80(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar9);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(ppuVar7);
    ppuVar2 = ppuVar7;
    func_0x00010bf977c0();
    lVar4 = (long)(int)ppuVar2;
    func_0x00010b5f5864(lVar4,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2600;
    _objc_alloc();
    func_0x00010bfbdda0();
    _objc_retain(ppuVar7);
    ppuVar2 = ppuVar7;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c08fa60();
    _objc_release(ppuVar2);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar2 = ppuVar7;
      func_0x00010bfbdda0();
      _objc_release(ppuVar7);
      func_0x00010b5fa33c();
      if (ppuVar2 == (undefined **)0x2) {
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110db1e38;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuStack_c8 = (undefined **)0x0;
      }
    }
    else {
      ppuStack_c8 = ppuVar7;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    func_0x00010bf977c0();
    func_0x00010c07b240();
    func_0x00010b5fc5e4();
    func_0x00010c0f7a20();
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010b5f6b3c();
    ppuVar2 = ppuVar7;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3d240();
    ppuVar3 = ppuVar7;
    func_0x00010bf3fcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar5 = ppuVar3;
    func_0x00010c0fefc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar6 = ppuVar3;
      func_0x00010c0fefa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar5);
      if (ppuVar6 == (undefined **)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126d2520;
        _objc_alloc();
        ppuVar5 = ppuVar3;
        func_0x00010c0fefc0(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar3;
        func_0x00010c0fefa0(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffe180();
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
      }
    }
    _objc_release(ppuVar3);
    ppuVar5 = ppuVar7;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    func_0x00010c010560(puVar1);
    _objc_release(ppuVar5);
    _objc_release(puVar9);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_c8);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d4a070; end: 106d4a37b; +[SCMemoriesOperaDataModelConverter operaSnapEntryInfoFromEntry:isFailedEntry:] */

void FUN_106d4a070(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuStack_78;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf977c0();
  lVar2 = (long)(int)ppuVar1;
  func_0x00010b5f5864(lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2600;
  _objc_alloc();
  func_0x00010bfbdda0();
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010bfbdda0();
    _objc_release(param_3);
    func_0x00010b5fa33c();
    if (ppuVar1 == (undefined **)0x2) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110db1e38;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuStack_78 = (undefined **)0x0;
    }
  }
  else {
    ppuStack_78 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  func_0x00010bf977c0();
  func_0x00010c07b240();
  func_0x00010b5fc5e4();
  func_0x00010c0f7a20();
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010b5f6b3c();
  ppuVar1 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d240();
  ppuVar4 = param_3;
  func_0x00010bf3fcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar5 = ppuVar4;
  func_0x00010c0fefc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar4;
    func_0x00010c0fefa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar5);
    if (ppuVar6 == (undefined **)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126d2520;
      _objc_alloc();
      ppuVar5 = ppuVar4;
      func_0x00010c0fefc0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c0fefa0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffe180();
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
    }
  }
  _objc_release(ppuVar4);
  ppuVar5 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c010560(puVar3);
  _objc_release(ppuVar5);
  _objc_release(puVar7);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(ppuStack_78);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d4a37c; end: 106d4a6b7;  */

void FUN_106d4a37c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar4 = PTR_PTR_1126cdc60;
  _objc_retain(param_4);
  func_0x00010bf97860();
  func_0x00010c07b240();
  func_0x00010c06bee0(param_1);
  func_0x00010c0c6c20(param_1);
  uVar1 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ac0();
  uVar2 = param_1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1177c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51040(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar5);
  _objc_release(param_4);
  if (param_2 != 0) {
    lVar6 = param_2;
    func_0x00010c0ff4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    uVar1 = param_3;
    func_0x00010c2356a0();
    if ((int)uVar1 != 0) {
      func_0x00010c1d0640(puVar5);
    }
    _objc_release(lVar6);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c99e0;
  func_0x00010c29e360(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c99e0;
  func_0x00010bf24bc0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00010c0f1980(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar5);
  _objc_release(puVar7);
  uVar1 = param_1;
  func_0x00010c2a5040(param_1);
  uVar2 = param_1;
  func_0x00010bfe0640(param_1);
  FUN_106d4a6b8((double)(int)uVar1,(double)(int)uVar2,puVar5);
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d4a6b8; end: 106d4a82b;  */

void FUN_106d4a6b8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ac0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126caf60;
  if (puVar2 == (undefined *)0x1) {
    _objc_opt_new(PTR_PTR_1126caf60);
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3720(0,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3660(0,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    goto LAB_106d4a7d8;
  }
  if (((param_1 + -16.0 == 0.0) || (param_1 == 0.0)) || (param_2 / (param_1 + -16.0) < 1.777778)) {
    _objc_opt_new(PTR_PTR_1126caf60);
LAB_106d4a7c4:
    uVar3 = 3;
  }
  else {
    _objc_opt_new(PTR_PTR_1126caf60);
    if (1.77778 < param_2 / param_1) goto LAB_106d4a7c4;
    uVar3 = 6;
  }
  func_0x00010c2b25c0(puVar1,param_4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_106d4a7d8:
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3,param_4,puVar2,&PTR____CFConstantStringClassReference_110f0e978);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4a82c; end: 106d4ac3b;  */

void FUN_106d4a82c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_1);
  func_0x000108ec1968();
  uVar1 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e800();
  _objc_release(uVar1);
  func_0x00010c2356a0();
  puVar5 = PTR_PTR_1126cdc68;
  uVar2 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf0af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0c7f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51180(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_3 != 0) {
    lVar4 = param_3;
    func_0x00010c0ff4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    uVar1 = param_4;
    func_0x00010c2356a0();
    if ((int)uVar1 != 0) {
      func_0x00010c1d0640(puVar6);
    }
    _objc_release(lVar4);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c99e0;
  func_0x00010c29e360(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c99e0;
  func_0x00010bf24bc0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c99e0;
  func_0x00010c29e200(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c1d0640(puVar6);
  func_0x00010c1d0640(puVar6);
  puVar7 = PTR_PTR_1126c99e0;
  func_0x00010c09aa00(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(param_1);
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010c0f1980(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar6);
  _objc_release(puVar7);
  uVar2 = param_2;
  func_0x00010bf0af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fce40();
  uVar9 = param_2;
  func_0x00010bf0af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0fcaa0();
  FUN_106d4a6b8((double)uVar3,(double)uVar10,puVar6);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar7 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d4ac3c; end: 106d4acdf;  */

void FUN_106d4ac3c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c99e0;
  func_0x00010bf249a0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126bf7e0;
  _objc_opt_class(PTR_PTR_1126bf7e0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d4ace0; end: 106d4af5b;  */

void FUN_106d4ace0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf5f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cdc58;
  _objc_opt_class(PTR_PTR_1126cdc58);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar7);
  puVar7 = PTR_PTR_1126cdc58;
  if ((uVar6 & 1) == 0) {
    puVar7 = PTR_PTR_1126cdc18;
    _objc_opt_class(PTR_PTR_1126cdc18);
    uVar6 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar7);
    if ((uVar6 & 1) == 0) {
      uVar9 = 0;
      puVar7 = (undefined *)0x0;
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      _objc_retain(uVar3);
      uVar6 = uVar3;
      func_0x00010bf97200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c0844e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar9 = 0;
      puVar7 = (undefined *)0x0;
    }
  }
  else {
    _objc_retain(uVar3);
    _objc_opt_class(puVar7);
    uVar6 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar7);
    uVar1 = uVar3;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar6 = uVar1;
    func_0x00010bf0af00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar9 = param_1;
    func_0x00010bf5f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cdc50;
    _objc_opt_class(PTR_PTR_1126cdc50);
    uVar6 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar7);
    uVar2 = uVar9;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar9);
    if (uVar2 == 0) {
      uVar9 = 0;
      puVar7 = (undefined *)0x0;
      uVar8 = 0;
      uVar6 = uVar4;
    }
    else {
      uVar6 = uVar9;
      func_0x00010c0844e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar8 = uVar9;
      func_0x00010c0ff4a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0();
      func_0x00010c0df840(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010c0c7f00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar5 = PTR_PTR_1126d2528;
  _objc_alloc(PTR_PTR_1126d2528);
  func_0x00010c020080();
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106d4af5c; end: 106d4afa3;  */

void FUN_106d4af5c(long param_1)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (param_1 == 0) {
    ppuVar1 = &PTR_PTR_110ac5bb0;
  }
  else {
    if (param_1 != 1) goto LAB_106d4af94;
    ppuVar1 = &PTR_PTR_110ac5bb8;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_106d4af94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106d4afa4; end: 106d4b033;  */

void FUN_106d4afa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bcf38;
  _objc_alloc(PTR_PTR_1126bcf38);
  func_0x00010c008360();
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d4b034; end: 106d4b2cb; -[SCGalleryOperaViewingMetricsSession initWithEventAnnouncer:operaSnapResolver:galleryLogger:pageHeight:featureSettingsService:coreConfigProvider:grapheneRegistry:] */

undefined1 *
FUN_106d4b034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f6990;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x30),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x38),param_5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined **)((long)puVar2 + 0x28) = puVar3;
    _objc_release(uVar7);
    _objc_retain(param_6);
    uVar7 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_6;
    _objc_release(uVar7);
    *(undefined8 *)((long)puVar2 + 0x50) = param_1;
    puVar4 = (undefined1 *)((long)puVar2 + 0x30);
    _objc_loadWeakRetained(puVar4);
    puVar5 = (undefined1 *)puVar2;
    func_0x00010be89fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar7 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined **)((long)puVar2 + 0x58) = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar6);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar2 + 0x60);
    *(undefined **)((long)puVar2 + 0x60) = puVar3;
    _objc_release(uVar7);
    _objc_retain(param_7);
    uVar7 = *(undefined8 *)((long)puVar2 + 0x68);
    *(undefined8 *)((long)puVar2 + 0x68) = param_7;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar7 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_8;
    _objc_release(uVar7);
    _objc_retain(param_9);
    uVar7 = *(undefined8 *)((long)puVar2 + 0x70);
    *(undefined8 *)((long)puVar2 + 0x70) = param_9;
    _objc_release(uVar7);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x40);
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0x78) = uVar1;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 106d4b2cc; end: 106d4b317; -[SCGalleryOperaViewingMetricsSession dealloc] */

void FUN_106d4b2cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _CACurrentMediaTime();
  func_0x00010be57380(param_1);
  puStack_28 = PTR_PTR_1126f6990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d4b318; end: 106d4b3f3; -[SCGalleryOperaViewingMetricsSession userDidTakeScreenshot] */

void FUN_106d4b318(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0c6c20(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0844e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfbcb80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfbcb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf3d2a0(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcef60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aed20(uVar7,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d4b3f4; end: 106d4b63f; -[SCGalleryOperaViewingMetricsSession operaViewDidSendEvent:page:params:] */

void FUN_106d4b3f4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  uVar1 = param_2;
  func_0x00010bed04e0();
  if ((uVar1 & 1) == 0) {
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106d4b640;
    uStack_88 = 0x106d4b650;
    puStack_a0 = &uStack_a8;
    _objc_retain(param_2);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_106d4b658;
    puStack_d8 = &UNK_110977e58;
    puStack_b8 = &uStack_a8;
    uStack_80 = param_2;
    _objc_retain(param_4);
    uStack_d0 = param_4;
    _objc_retain(param_5);
    uStack_c8 = param_5;
    _objc_retain(param_6);
    ppuVar2 = &puStack_f0;
    uStack_c0 = param_6;
    uStack_b0 = param_1;
    _objc_retainBlock();
    lVar3 = param_2 + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf0c1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0e0ea0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar2);
    lVar7 = lVar6;
    func_0x00010c25ff60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d4b640; end: 106d4b657;  */

void FUN_106d4b640(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d4b658; end: 106d4b7bb;  */

void FUN_106d4b658(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c0c0800(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d4b7bc; end: 106d4b7cb;  */

void FUN_106d4b7bc(void)

{
  return;
}



/* Entry: 106d4b7cc; end: 106d4b9a7; -[SCGalleryOperaViewingMetricsSession _registeredEventsForOperaSession] */

undefined *
FUN_106d4b7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_b8 = puVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_b0 = puVar2;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_a8 = puVar3;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2338;
  puStack_a0 = puVar4;
  func_0x00010c0c4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_98 = puVar5;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_90 = puVar6;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  puStack_88 = puVar7;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c95c8;
  puStack_80 = puVar8;
  func_0x00010bf98f20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9898;
  puStack_78 = puVar9;
  func_0x00010c0c6040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = &puStack_b8;
  uVar26 = 10;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  uVar31 = param_1;
  _objc_retain(ppuVar25);
  _objc_retain(uVar26);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2e48;
  func_0x00010bf4f180(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar13 = lVar12;
  func_0x00010bf4f080(lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c13ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010be23de0(puVar1,param_3,uVar26);
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar25;
    func_0x00010c0720c0(ppuVar25,param_3,puVar4);
    _objc_release(puVar4);
    if ((int)ppuVar14 == 0) {
      puVar4 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar25;
      func_0x00010c0720c0(ppuVar25,param_3,puVar4);
      _objc_release(puVar4);
      if ((int)ppuVar14 == 0) {
        puVar4 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar25;
        func_0x00010c0720c0(ppuVar25,param_3,puVar4);
        _objc_release(puVar4);
        if ((int)ppuVar14 == 0) {
          puVar4 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar25;
          func_0x00010c0720c0(ppuVar25,param_3,puVar4);
          if ((int)ppuVar14 == 0) {
            puVar5 = PTR_PTR_1126b2330;
            func_0x00010bf17f80(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar25;
            func_0x00010c0720c0(ppuVar25,param_3,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar4);
            if ((int)ppuVar14 == 0) goto LAB_106d4baf8;
          }
          else {
            _objc_release(puVar4);
          }
          puVar4 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar25;
          func_0x00010c0720c0(ppuVar25,param_3,puVar4);
          if (((ulong)ppuVar14 & 1) == 0) {
            bVar30 = puVar1[0x78] ^ 1;
          }
          else {
            bVar30 = 1;
          }
          _objc_release(puVar4);
          lVar28 = *(long *)(puVar1 + 0x28);
          puVar4 = puVar3;
          func_0x00010c09da80(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(lVar28,param_3,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if ((lVar28 != 0) && ((bVar30 & 1) != 0)) {
            uVar29 = *(undefined8 *)(puVar1 + 0x28);
            puVar4 = puVar3;
            func_0x00010c09da80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar29,param_3,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            uVar32 = uVar31;
            _objc_release(uVar29);
            _objc_release(puVar4);
            uVar29 = *(undefined8 *)(puVar1 + 0x28);
            puVar4 = puVar3;
            func_0x00010c09da80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(uVar29,param_3,puVar4);
            _objc_release(puVar4);
            uVar29 = uVar26;
            FUN_106d4ac3c();
            _objc_retainAutoreleasedReturnValue();
            uVar27 = *(undefined8 *)(puVar1 + 8);
            uVar15 = uVar26;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126b2340;
            uVar16 = uVar26;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c075040();
            func_0x00010bf8b160(puVar3);
            uVar33 = *(undefined8 *)(puVar1 + 0x50);
            uVar17 = uVar26;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126c99e0;
            func_0x00010bf24bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar17;
            func_0x00010c0e00e0(uVar17,param_3,puVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar18;
            func_0x00010c2827c0();
            uVar20 = uVar26;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126c99e0;
            func_0x00010c29e200();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar21;
            func_0x00010c2827c0();
            puVar7 = PTR_PTR_1126b2348;
            func_0x00010bfe74e0(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            lVar28 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar23 = lVar28;
            func_0x00010c067fc0();
            if (lVar23 == 0) {
              puVar8 = PTR_PTR_1126b2348;
              func_0x00010c0c4a80();
              _objc_retainAutoreleasedReturnValue();
              lVar23 = param_6;
              func_0x00010c0e00e0(param_6,param_3,puVar8);
              _objc_retainAutoreleasedReturnValue();
              lVar24 = lVar23;
              func_0x00010c067fc0();
              func_0x00010c0ea560(uVar31,uVar32,uVar33,uVar27,param_3,uVar15,uVar29,
                                  (ulong)puVar4 & 0xffffffff,lVar13,puVar3,uVar19,uVar22,lVar24,0,
                                  puVar2);
              _objc_release(lVar23);
              _objc_release(puVar8);
            }
            else {
              func_0x00010c0ea560(uVar31,uVar32,uVar33,uVar27,param_3,uVar15,uVar29,
                                  (ulong)puVar4 & 0xffffffff,lVar13,puVar3,uVar19,uVar22,lVar23,0,
                                  puVar2);
            }
            _objc_release(lVar28);
            _objc_release(puVar7);
            _objc_release(uVar21);
            _objc_release(puVar6);
            _objc_release(uVar20);
            _objc_release(uVar18);
            _objc_release(puVar5);
            _objc_release(uVar17);
            _objc_release(uVar16);
            _objc_release(uVar15);
            _objc_release(uVar29);
          }
          puVar4 = PTR_PTR_1126b2330;
          func_0x00010bf17f80(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar25;
          func_0x00010c0720c0(ppuVar25,param_3,puVar4);
          _objc_release(puVar4);
          if ((int)ppuVar14 != 0) {
            if (puVar2 == (undefined *)0x65) {
              func_0x00010c1b1d20(*(undefined8 *)(puVar1 + 8),param_3,0);
              func_0x00010be53de0(puVar1,param_3,uVar26,0x65);
            }
            func_0x00010be09de0(puVar1,param_3,puVar2);
          }
        }
        else {
          func_0x00010be52180(param_1,puVar1,param_3,puVar3,uVar26,lVar13);
        }
      }
      else {
        puVar2 = puVar3;
        func_0x00010c0c6c20();
        if (puVar2 == (undefined *)0x1) {
          func_0x00010be52180(param_1,puVar1,param_3,puVar3,uVar26,lVar13);
        }
      }
    }
    else {
      *(undefined8 *)(puVar1 + 0x20) = param_1;
      func_0x00010be59360(puVar1,param_3,uVar26,puVar2);
      func_0x00010bea33a0(puVar1,param_3,0,puVar3,0);
    }
  }
LAB_106d4baf8:
  _objc_release(puVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(param_6);
  _objc_release(uVar26);
  _objc_release(ppuVar25);
  return (undefined *)(ulong)(puVar3 != (undefined *)0x0);
}



/* Entry: 106d4b9a8; end: 106d4c03f; -[SCGalleryOperaViewingMetricsSession _tryToHandleOperaViewEventAsCameraRollItemWithEvent:page:params:eventReceivedTime:] */

bool FUN_106d4b9a8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  byte bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar25 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2e48;
  func_0x00010bf4f180(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010bf4f080(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + 0x38;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c13ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = param_2;
    func_0x00010be23de0(param_2,param_3,param_5);
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar1);
    _objc_release(puVar1);
    if ((int)uVar6 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar1);
      _objc_release(puVar1);
      if ((int)uVar6 == 0) {
        puVar1 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar1);
        _objc_release(puVar1);
        if ((int)uVar6 == 0) {
          puVar1 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_4;
          func_0x00010c0720c0(param_4,param_3,puVar1);
          if ((int)uVar6 == 0) {
            puVar7 = PTR_PTR_1126b2330;
            func_0x00010bf17f80(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_4;
            func_0x00010c0720c0(param_4,param_3,puVar7);
            _objc_release(puVar7);
            _objc_release(puVar1);
            if ((int)uVar6 == 0) goto LAB_106d4baf8;
          }
          else {
            _objc_release(puVar1);
          }
          puVar1 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_4;
          func_0x00010c0720c0(param_4,param_3,puVar1);
          if ((uVar6 & 1) == 0) {
            bVar24 = *(byte *)(param_2 + 0x78) ^ 1;
          }
          else {
            bVar24 = 1;
          }
          _objc_release(puVar1);
          lVar22 = *(long *)(param_2 + 0x28);
          lVar8 = lVar5;
          func_0x00010c09da80(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(lVar22,param_3,lVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar8);
          if ((lVar22 != 0) && ((bVar24 & 1) != 0)) {
            uVar23 = *(undefined8 *)(param_2 + 0x28);
            lVar8 = lVar5;
            func_0x00010c09da80(lVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar23,param_3,lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            uVar26 = uVar25;
            _objc_release(uVar23);
            _objc_release(lVar8);
            uVar23 = *(undefined8 *)(param_2 + 0x28);
            lVar8 = lVar5;
            func_0x00010c09da80(lVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(uVar23,param_3,lVar8);
            _objc_release(lVar8);
            uVar23 = param_5;
            FUN_106d4ac3c();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = *(undefined8 *)(param_2 + 8);
            uVar9 = param_5;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126b2340;
            uVar10 = param_5;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c075040();
            func_0x00010bf8b160(lVar5);
            uVar27 = *(undefined8 *)(param_2 + 0x50);
            uVar11 = param_5;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126c99e0;
            func_0x00010bf24bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c0e00e0(uVar11,param_3,puVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c2827c0();
            uVar14 = param_5;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126c99e0;
            func_0x00010c29e200();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar16;
            func_0x00010c2827c0();
            puVar18 = PTR_PTR_1126b2348;
            func_0x00010bfe74e0(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar18);
            _objc_retainAutoreleasedReturnValue();
            lVar22 = lVar8;
            func_0x00010c067fc0();
            if (lVar22 == 0) {
              puVar19 = PTR_PTR_1126b2348;
              func_0x00010c0c4a80();
              _objc_retainAutoreleasedReturnValue();
              lVar22 = param_6;
              func_0x00010c0e00e0(param_6,param_3,puVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar20 = lVar22;
              func_0x00010c067fc0();
              func_0x00010c0ea560(uVar25,uVar26,uVar27,uVar21,param_3,uVar9,uVar23,
                                  (ulong)puVar1 & 0xffffffff,lVar3,lVar5,uVar13,uVar17,lVar20,0,
                                  lVar4);
              _objc_release(lVar22);
              _objc_release(puVar19);
            }
            else {
              func_0x00010c0ea560(uVar25,uVar26,uVar27,uVar21,param_3,uVar9,uVar23,
                                  (ulong)puVar1 & 0xffffffff,lVar3,lVar5,uVar13,uVar17,lVar22,0,
                                  lVar4);
            }
            _objc_release(lVar8);
            _objc_release(puVar18);
            _objc_release(uVar16);
            _objc_release(puVar15);
            _objc_release(uVar14);
            _objc_release(uVar12);
            _objc_release(puVar7);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar23);
          }
          puVar1 = PTR_PTR_1126b2330;
          func_0x00010bf17f80(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_4;
          func_0x00010c0720c0(param_4,param_3,puVar1);
          _objc_release(puVar1);
          if ((int)uVar6 != 0) {
            if (lVar4 == 0x65) {
              func_0x00010c1b1d20(*(undefined8 *)(param_2 + 8),param_3,0);
              func_0x00010be53de0(param_2,param_3,param_5,0x65);
            }
            func_0x00010be09de0(param_2,param_3,lVar4);
          }
        }
        else {
          func_0x00010be52180(param_1,param_2,param_3,lVar5,param_5,lVar3);
        }
      }
      else {
        lVar4 = lVar5;
        func_0x00010c0c6c20();
        if (lVar4 == 1) {
          func_0x00010be52180(param_1,param_2,param_3,lVar5,param_5,lVar3);
        }
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x20) = param_1;
      func_0x00010be59360(param_2,param_3,param_5,lVar4);
      func_0x00010bea33a0(param_2,param_3,0,lVar5,0);
    }
  }
LAB_106d4baf8:
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return lVar5 != 0;
}



/* Entry: 106d4c040; end: 106d4c15f; -[SCGalleryOperaViewingMetricsSession _logGalleryOperaExitWithPage:viewSource:] */

void FUN_106d4c040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c99e0;
  func_0x00010bf24bc0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c99e0;
  func_0x00010c29e360(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logGalleryOperaExitWithViewSourc_112607688,param_4,
             uVar4,uVar5);
  return;
}



/* Entry: 106d4c160; end: 106d4cadb; -[SCGalleryOperaViewingMetricsSession _handleOperaViewEventForSnap:entry:event:page:params:eventReceivedTime:] */

void FUN_106d4c160(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  long lStack_138;
  undefined *puStack_130;
  
  uVar23 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) goto LAB_106d4ca30;
  puVar1 = PTR_PTR_1126b2e48;
  func_0x00010bf4f180(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_8;
  func_0x00010c0e00e0(param_8,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdd5920(param_2,param_3,param_4,param_7);
  lVar5 = param_2;
  func_0x00010be23de0(param_2,param_3,param_7);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010c0720c0(param_6,param_3,puVar1);
  _objc_release(puVar1);
  if ((int)uVar6 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010c0720c0(param_6,param_3,puVar1);
    _objc_release(puVar1);
    if ((int)uVar6 == 0) {
      puVar1 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_6;
      func_0x00010c0720c0(param_6,param_3,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2340;
      if ((int)uVar6 == 0) {
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_6;
        func_0x00010c0720c0(param_6,param_3,puVar1);
        if ((int)uVar6 == 0) {
          puVar7 = PTR_PTR_1126b2330;
          func_0x00010bf17f80(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_6;
          func_0x00010c0720c0(param_6,param_3,puVar7);
          _objc_release(puVar7);
          _objc_release(puVar1);
          if ((int)uVar6 == 0) {
            puVar1 = PTR_PTR_1126b2330;
            func_0x00010bfaf7a0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_6;
            func_0x00010c0720c0(param_6,param_3,puVar1);
            _objc_release(puVar1);
            if ((int)uVar6 != 0) {
              if (lVar5 == 0x65) {
                func_0x00010c1b1d20(*(undefined8 *)(param_2 + 8),param_3,0);
                func_0x00010be53de0(param_2,param_3,param_7,0x65);
              }
              goto LAB_106d4ca00;
            }
            puVar1 = PTR_PTR_1126b2338;
            func_0x00010c0c4dc0(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_6;
            func_0x00010c0720c0(param_6,param_3,puVar1);
            if ((uVar6 & 1) == 0) {
              puVar7 = PTR_PTR_1126b2338;
              func_0x00010c0c4e00(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_6;
              func_0x00010c0720c0(param_6,param_3,puVar7);
              if ((uVar6 & 1) != 0) {
LAB_106d4c9e0:
                _objc_release(puVar7);
                goto LAB_106d4c9e8;
              }
              puVar18 = PTR_PTR_1126c9898;
              func_0x00010c0c6040(PTR_PTR_1126c9898);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_6;
              func_0x00010c0720c0(param_6,param_3,puVar18);
              if ((int)uVar6 != 0) {
                _objc_release(puVar18);
                goto LAB_106d4c9e0;
              }
              puVar19 = PTR_PTR_1126c95c8;
              func_0x00010bf98f20(PTR_PTR_1126c95c8);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_6;
              func_0x00010c0720c0(param_6,param_3,puVar19);
              _objc_release(puVar19);
              _objc_release(puVar18);
              _objc_release(puVar7);
              _objc_release(puVar1);
              if ((uVar6 & 1) == 0) goto LAB_106d4ca00;
            }
            else {
LAB_106d4c9e8:
              _objc_release(puVar1);
            }
            func_0x00010be3d820(param_2);
            goto LAB_106d4ca00;
          }
        }
        else {
          _objc_release(puVar1);
        }
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_6;
        func_0x00010c0720c0(param_6,param_3,puVar1);
        if ((uVar6 & 1) == 0) {
          bVar24 = *(byte *)(param_2 + 0x78) ^ 1;
        }
        else {
          bVar24 = 1;
        }
        _objc_release(puVar1);
        lVar20 = *(long *)(param_2 + 0x28);
        lVar4 = param_4;
        func_0x00010c241220(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar20,param_3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        if ((lVar20 != 0) && ((bVar24 & 1) != 0)) {
          uVar21 = *(undefined8 *)(param_2 + 0x28);
          lVar4 = param_4;
          func_0x00010c241220(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar21,param_3,lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar22 = uVar23;
          _objc_release(uVar21);
          fVar25 = (float)uVar22;
          _objc_release(lVar4);
          uVar22 = *(undefined8 *)(param_2 + 0x28);
          lVar4 = param_4;
          func_0x00010c241220(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(uVar22,param_3,lVar4);
          _objc_release(lVar4);
          puVar1 = PTR_PTR_1126b2348;
          func_0x00010c0c2c20(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_8;
          func_0x00010c0e00e0(param_8,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          fVar26 = 0.0;
          if (fVar25 != 0.0) {
            fVar26 = fVar25;
          }
          dVar28 = (double)fVar26;
          _objc_release(lVar4);
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126b2348;
          func_0x00010c0cd980(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_8;
          func_0x00010c0e00e0(param_8,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          fVar25 = 0.0;
          if (fVar26 != 0.0) {
            fVar25 = fVar26;
          }
          dVar27 = (double)(ulong)(uint)fVar25;
          _objc_release(lVar4);
          _objc_release(puVar1);
          uVar22 = *(undefined8 *)(param_2 + 8);
          uVar6 = param_7;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126c99e0;
          func_0x00010c281320();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c0e00e0(uVar6,param_3,puVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_7;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126c99e0;
          func_0x00010bf24a80();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c0e00e0(uVar9,param_3,puVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bf1f3c0();
          puVar18 = PTR_PTR_1126b2348;
          func_0x00010bfe74e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar4;
          func_0x00010c067fc0();
          lVar12 = lVar20;
          if (lVar20 == 0) {
            puStack_130 = PTR_PTR_1126b2348;
            func_0x00010c0c4a80();
            _objc_retainAutoreleasedReturnValue();
            lStack_138 = param_8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lStack_138;
            func_0x00010c067fc0();
          }
          puVar19 = PTR_PTR_1126b2348;
          func_0x00010c0fc300();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = param_8;
          func_0x00010c0e00e0(param_8,param_3,puVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar29 = 0.0;
          if (dVar27 != 0.0) {
            dVar29 = dVar27;
          }
          uVar21 = *(undefined8 *)(param_2 + 0x50);
          uVar14 = param_7;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR_PTR_1126c99e0;
          func_0x00010bf24bc0(PTR_PTR_1126c99e0);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar14;
          func_0x00010c0e00e0(uVar14,param_3,puVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010c2827c0();
          func_0x00010c0ea580(dVar29,dVar28,(double)fVar25,uVar23,uVar21,uVar22,param_3,param_4,
                              uVar8,uVar11 & 0xffffffff,lVar12,1,lVar3,uVar17,lVar5);
          _objc_release(uVar16);
          _objc_release(puVar15);
          _objc_release(uVar14);
          _objc_release(lVar13);
          _objc_release(puVar19);
          if (lVar20 == 0) {
            _objc_release(lStack_138);
            _objc_release(puStack_130);
          }
          _objc_release(lVar4);
          _objc_release(puVar18);
          _objc_release(uVar10);
          _objc_release(puVar7);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(puVar1);
          _objc_release(uVar6);
        }
        puVar1 = PTR_PTR_1126b2340;
        uVar6 = param_7;
        func_0x00010c118b40(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07ff40(puVar1,param_3,uVar6);
        _objc_release(uVar6);
        if ((int)puVar1 != 0) {
          func_0x00010be59480(param_2,param_3,param_7,param_8);
        }
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010bf17f80(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_6;
        func_0x00010c0720c0(param_6,param_3,puVar1);
        _objc_release(puVar1);
        if ((int)uVar6 != 0) {
          func_0x00010be09de0(param_2,param_3,lVar5);
        }
      }
      else {
        uVar23 = *(undefined8 *)(param_2 + 8);
        uVar6 = param_7;
        func_0x00010c118b40(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c074260(puVar1,param_3,uVar6);
        func_0x00010c0eb6c0(uVar23,param_3,(uint)puVar1 ^ 1);
        _objc_release(uVar6);
        puVar1 = PTR_PTR_1126b2340;
        uVar6 = param_7;
        func_0x00010c118b40(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07ff40(puVar1,param_3,uVar6);
        func_0x00010be521a0(param_1,param_2,param_3,param_4,lVar4,puVar1);
        _objc_release(uVar6);
      }
    }
    else if (lVar4 == 0) {
      func_0x00010be521a0(param_1,param_2,param_3,param_4,0,0);
    }
  }
  else {
    func_0x00010be59360(param_2,param_3,param_7,lVar5);
    func_0x00010be57380(param_1,param_2);
    func_0x00010bec1d20(param_1,param_2,param_3,param_4,param_5,lVar4,param_7);
  }
LAB_106d4ca00:
  func_0x00010be52b60(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106d4ca30:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d4cadc; end: 106d4cdcf; -[SCGalleryOperaViewingMetricsSession _logErrorsIfNecessary:entry:event:page:params:] */

void FUN_106d4cadc(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined *param_6,undefined *param_7)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == 0) || (param_4 == 0)) goto LAB_106d4ccf0;
  func_0x00010bf5a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf3d240(param_4);
  }
  _objc_release(param_3);
  func_0x00010bfbdda0(param_4);
  func_0x00010b5fa33c();
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c4dc0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  puVar2 = param_7;
  if ((int)uVar3 == 0) {
    puVar8 = PTR_PTR_1126b2338;
    func_0x00010c0c4e00(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c9898;
    func_0x00010c0c6040(PTR_PTR_1126c9898);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 != 0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e84eb8;
      goto LAB_106d4cc58;
    }
    uVar3 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126c95c8;
      func_0x00010bf98f20(PTR_PTR_1126c95c8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        puVar8 = param_6;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110e84ef8;
        goto LAB_106d4cc58;
      }
      ppuVar7 = (undefined **)0x0;
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = (undefined *)0x0;
      ppuVar7 = &PTR____CFConstantStringClassReference_110e84ed8;
    }
  }
  else {
    puVar8 = PTR_PTR_1126b2348;
    func_0x00010c120300(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e84e98;
LAB_106d4cc58:
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar8);
    puVar8 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar2);
  }
  func_0x00010c08fa60();
  if (ppuVar7 != (undefined **)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f1dc0();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar8);
LAB_106d4ccf0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d4cdd0; end: 106d4ce4f; -[SCGalleryOperaViewingMetricsSession _logStorySessionIfNeededWithPage:viewSource:] */

void FUN_106d4cdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf5f660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010be59340(param_1,param_2,lVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d4ce50; end: 106d4cf17; -[SCGalleryOperaViewingMetricsSession _logStorySessionIfNeededWithMemoriesOperaPlaybackItem:viewSource:] */

void FUN_106d4ce50(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ea540();
  if (lVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    if (uVar2 != 0) {
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_106d4cf00;
      func_0x00010be09de0(param_1,param_2,param_4);
    }
    func_0x00010bec1a80(param_1,param_2,param_3);
  }
  else {
    func_0x00010be09de0(param_1,param_2,param_4);
  }
LAB_106d4cf00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4cf18; end: 106d4cf6b; -[SCGalleryOperaViewingMetricsSession _startStoryViewSessionWithPlaybackItem:] */

void FUN_106d4cf18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c250be0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4cf6c; end: 106d4cf9f; -[SCGalleryOperaViewingMetricsSession _endStoryViewSessionIfNeededWithViewSource:] */

void FUN_106d4cf6c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010be09dc0();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106d4cfa0; end: 106d4d17b; -[SCGalleryOperaViewingMetricsSession _endStoryViewSessionForStoryLevelPlaylistGroupWithViewSource:] */

void FUN_106d4cfa0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar4 = lVar2;
  if ((int)lVar3 == 0) {
    lVar4 = 0;
  }
  _objc_retain(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c101560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0844e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(lVar2);
    puVar6 = PTR_PTR_1126cdc40;
    uVar10 = *(ulong *)(param_1 + 0x48);
    _objc_retain(uVar10);
    _objc_opt_class(puVar6);
    uVar7 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar6);
    uVar1 = uVar10;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar10);
    puVar6 = PTR_PTR_1126cdc50;
    if (uVar1 == 0) {
      uVar10 = *(ulong *)(param_1 + 0x48);
      _objc_retain(uVar10);
      _objc_opt_class(puVar6);
      uVar8 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar6);
      uVar7 = uVar10;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar10);
      if (uVar7 == 0) {
        uVar10 = 0;
      }
      else {
        uVar7 = uVar10;
        func_0x00010c0c7f00(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf529e0(lVar2);
        func_0x00010bf95560(uVar9);
        _objc_release(uVar7);
      }
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x00010c259cc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(lVar2);
      func_0x00010bf95580(uVar9);
    }
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d4d17c; end: 106d4d3cb; -[SCGalleryOperaViewingMetricsSession _logStreamingStallStatusWithPage:params:] */

void FUN_106d4d17c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c276c80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c064460(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar6 = param_1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c064440(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar7 = uVar6;
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c276ca0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_2 + 8);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c07f740(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  func_0x00010c0eabc0(param_1,uVar6,uVar7,uVar5,param_3,uVar4,uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d4d3cc; end: 106d4d403; -[SCGalleryOperaViewingMetricsSession _startToViewSnap:entry:browseMediaType:page:eventReceivedTime:] */

void FUN_106d4d3cc(undefined8 param_1,long param_2)

{
  func_0x00010bea33a0();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 106d4d404; end: 106d4d41f; -[SCGalleryOperaViewingMetricsSession _invalidateCurrentLoadingSnap] */

void FUN_106d4d404(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea33b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setCurrentlyPlayingSnap_asset_e_112586690,0,0,0);
    return;
  }
  return;
}



/* Entry: 106d4d420; end: 106d4d4e7; -[SCGalleryOperaViewingMetricsSession _logCurrentFinishLoadingSnap:browseMediaType:isProgressivePlayback:eventReceivedTime:] */

void FUN_106d4d420(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    param_1 = param_1 - *(double *)(param_2 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    lVar2 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_3,puVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010c0eb820(param_1,*(undefined8 *)(param_2 + 8),param_3,*(undefined8 *)(param_2 + 0x10)
                       );
  }
  func_0x00010bea33a0(param_2,param_3,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d4d4e8; end: 106d4d5c3; -[SCGalleryOperaViewingMetricsSession _logCurrentFinishLoadingPHAsset:page:contextSessionId:eventReceivedTime:] */

void FUN_106d4d4e8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    param_1 = param_1 - *(double *)(param_2 + 0x20);
    _objc_retain(param_4);
    FUN_106d4ac3c(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb800(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    lVar2 = param_4;
    func_0x00010c09da80(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c1d0640(uVar3,param_3,puVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 106d4d5c4; end: 106d4d653; -[SCGalleryOperaViewingMetricsSession _logPreviousUnfinishLoadingSnapIfNeededWithEventReceivedTime:] */

void FUN_106d4d5c4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    param_1 = param_1 - *(double *)(param_2 + 0x20);
    func_0x00010c0eb820(param_1,*(undefined8 *)(param_2 + 8));
    func_0x00010c0ea580(0,0,0,param_1,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 8),
                        param_3,*(undefined8 *)(param_2 + 0x10),0,0,0,0,0,0x7fffffffffffffff,0x3a);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106d4d654; end: 106d4d783; -[SCGalleryOperaViewingMetricsSession _browseMediaTypeForSnap:page:] */

undefined8 FUN_106d4d654(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  func_0x00010b5fa088();
  if (param_3 < 0xd) {
    if ((1L << (param_3 & 0x3f) & 0x1564U) != 0) {
      lVar1 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_release(lVar1);
        uVar6 = 2;
      }
      else {
        lVar3 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c2827c0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        uVar6 = 2;
        if (lVar5 == 1) {
          uVar6 = 3;
        }
      }
      goto LAB_106d4d764;
    }
    if (param_3 != 1) goto LAB_106d4d74c;
  }
  else {
LAB_106d4d74c:
    if (param_3 != 9999) {
      uVar6 = 0;
      goto LAB_106d4d764;
    }
  }
  uVar6 = 1;
LAB_106d4d764:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 106d4d784; end: 106d4d963; -[SCGalleryOperaViewingMetricsSession _setCurrentlyPlayingSnap:asset:entry:] */

void FUN_106d4d784(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_106d4d930;
    func_0x00010c0c6c20();
    puVar3 = PTR_PTR_1126d2530;
    _objc_alloc();
    lVar4 = param_4;
    func_0x00010c09da80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ff80();
    lVar6 = *(long *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
  }
  else {
    lVar4 = param_3;
    func_0x00010bfcef60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3d2a0();
    func_0x00010b5fc768();
    puVar3 = PTR_PTR_1126d2530;
    _objc_alloc();
    lVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5fa088(param_3);
    func_0x000108dfc978();
    uVar1 = param_5;
    func_0x00010bf9e140(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010bf977c0(param_5);
    lVar2 = (long)(int)uVar5;
    func_0x00010b5f5864(lVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ff80();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
LAB_106d4d930:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4d964; end: 106d4da3b; -[SCGalleryOperaViewingMetricsSession _getViewSourceFromPage:] */

undefined8 FUN_106d4d964(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c99e0;
  func_0x00010bf249c0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if (uVar3 - 1 < 3) {
    uVar5 = *(undefined8 *)(&UNK_10ddedf88 + (uVar3 - 1) * 8);
  }
  else {
    uVar5 = 0x3a;
  }
  return uVar5;
}



/* Entry: 106d4da3c; end: 106d4dadb; -[SCGalleryOperaViewingMetricsSession .cxx_destruct] */

void FUN_106d4da3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d4dadc; end: 106d4db0b;  */

void FUN_106d4dadc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e84f18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e84f18,
                      &PTR____CFConstantStringClassReference_110e84f38,0);
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



/* Entry: 106d4db0c; end: 106d4dbe3; -[SCGalleryOperaGroup initWithGroupId:snaps:snapIdToSnapIsFavorited:] */

undefined1 *
FUN_106d4db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6998;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d4dbe4; end: 106d4dc07; -[SCGalleryOperaGroup copyWithZone:] */

undefined8 FUN_106d4dbe4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4dc08; end: 106d4dc87; -[SCGalleryOperaGroup hash] */

undefined8 * FUN_106d4dc08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106d4dd20:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106d4dd2c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106d4dd2c;
          }
          goto LAB_106d4dd20;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106d4dd2c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106d4dc88; end: 106d4dd47; -[SCGalleryOperaGroup isEqual:] */

long FUN_106d4dc88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d4dd20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d4dd2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106d4dd2c;
          }
          goto LAB_106d4dd20;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d4dd2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d4dd48; end: 106d4dd4f; -[SCGalleryOperaGroup groupId] */

undefined8 FUN_106d4dd48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d4dd50; end: 106d4dd57; -[SCGalleryOperaGroup snaps] */

undefined8 FUN_106d4dd50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d4dd58; end: 106d4dd5f; -[SCGalleryOperaGroup snapIdToSnapIsFavorited] */

undefined8 FUN_106d4dd58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d4dd60; end: 106d4dd9b; -[SCGalleryOperaGroup .cxx_destruct] */

void FUN_106d4dd60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d4dd9c; end: 106d4de07; +[SCGalleryOperaSnap cameraRollWithCameraRoll:] */

void FUN_106d4dd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2608;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d4de08; end: 106d4de9f; +[SCGalleryOperaSnap snapDocBasedSnapWithSnap:entryInfo:] */

void FUN_106d4de08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2608;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d4dea0; end: 106d4df2f; +[SCGalleryOperaSnap snapWithSnap:entryInfo:] */

void FUN_106d4dea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2608;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d4df30; end: 106d4dffb; +[SCGalleryOperaSnap timelineSnapWithSnaps:entryInfo:entryAssets:] */

void FUN_106d4df30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2608;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d4dffc; end: 106d4e01f; -[SCGalleryOperaSnap copyWithZone:] */

undefined8 FUN_106d4dffc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4e020; end: 106d4e0df; -[SCGalleryOperaSnap hash] */

void FUN_106d4e020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126f69a0;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d4e0e0; end: 106d4e123; -[SCGalleryOperaSnap internalInit] */

void FUN_106d4e0e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f69a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d4e124; end: 106d4e26b; -[SCGalleryOperaSnap isEqual:] */

long FUN_106d4e124(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d4e244:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d4e250;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_106d4e250;
                    }
                    goto LAB_106d4e244;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d4e250:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d4e26c; end: 106d4e367; -[SCGalleryOperaSnap matchSnap:cameraRoll:timelineSnap:snapDocBasedSnap:] */

void FUN_106d4e26c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 != 0) {
      if ((lVar3 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_106d4e338;
    }
    if (param_3 == 0) goto LAB_106d4e338;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_3 + 0x10);
    lVar3 = param_3;
  }
  else {
    if (lVar3 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_106d4e338;
    }
    if ((lVar3 != 3) || (param_6 == 0)) goto LAB_106d4e338;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_106d4e338:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4e368; end: 106d4e3df; -[SCGalleryOperaSnap .cxx_destruct] */

void FUN_106d4e368(long param_1)

{
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



/* Entry: 106d4e3e0; end: 106d4e58b; -[SCGalleryOperaSnapEntryInfo initWithEntryType:title:entrySource:isPrivate:isEntryClientCompatible:isPendingBackup:isPersistLocally:isTemporaryFeatured:isFailedEntry:entryId:clientProcessingBitMaskType:collectionAttributes:externalId:collectionCategory:] */

undefined8 *
FUN_106d4e3e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f69a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x14) = param_5;
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._2_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106d4e58c; end: 106d4e5af; -[SCGalleryOperaSnapEntryInfo copyWithZone:] */

undefined8 FUN_106d4e58c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4e5b0; end: 106d4e68b; -[SCGalleryOperaSnapEntryInfo hash] */

long * FUN_106d4e5b0(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = (long)*(int *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lStack_88 = (long)*(int *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_80 = (ulong)uVar1 & 0xff;
  uStack_78 = uVar10 >> 0x10 & 0xff;
  uStack_70 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_68 = (ulong)uVar8;
  uStack_60 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_58 = (ulong)*(byte *)(param_1 + 0xd);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  plVar4 = &lStack_98;
  uStack_30 = uVar2;
  func_0x000100505190(plVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_106d4e7e4:
    plVar7 = (long *)0x1;
  }
  else {
    plVar7 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_106d4e7f0;
    plVar7 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar7);
    if ((((((ulong)plVar5 & 1) != 0) &&
         (((((int)plVar4[2] == (int)param_3[2] &&
            (*(int *)((long)plVar4 + 0x14) == *(int *)((long)param_3 + 0x14))) &&
           ((char)plVar4[1] == (char)param_3[1])) &&
          ((*(char *)((long)plVar4 + 9) == *(char *)((long)param_3 + 9) &&
           (*(char *)((long)plVar4 + 10) == *(char *)((long)param_3 + 10))))))) &&
        (*(char *)((long)plVar4 + 0xb) == *(char *)((long)param_3 + 0xb))) &&
       (((*(char *)((long)plVar4 + 0xc) == *(char *)((long)param_3 + 0xc) &&
         (*(char *)((long)plVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) &&
        (plVar4[5] == param_3[5])))) {
      lVar6 = plVar4[3];
      if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = plVar4[4];
        if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = plVar4[6];
          if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = plVar4[7];
            if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              plVar7 = (long *)plVar4[8];
              if (plVar7 != (long *)param_3[8]) {
                func_0x00010c071ae0();
                goto LAB_106d4e7f0;
              }
              goto LAB_106d4e7e4;
            }
          }
        }
      }
    }
    plVar7 = (long *)0x0;
  }
LAB_106d4e7f0:
  _objc_release(param_3);
  return plVar7;
}



/* Entry: 106d4e68c; end: 106d4e80b; -[SCGalleryOperaSnapEntryInfo isEqual:] */

long FUN_106d4e68c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d4e7e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d4e7f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10) &&
            (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
       (((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
         (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if (lVar3 != *(long *)(param_3 + 0x40)) {
                func_0x00010c071ae0();
                goto LAB_106d4e7f0;
              }
              goto LAB_106d4e7e4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d4e7f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d4e80c; end: 106d4e813; -[SCGalleryOperaSnapEntryInfo entryType] */

undefined4 FUN_106d4e80c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106d4e814; end: 106d4e81b; -[SCGalleryOperaSnapEntryInfo title] */

undefined8 FUN_106d4e814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d4e81c; end: 106d4e823; -[SCGalleryOperaSnapEntryInfo entrySource] */

undefined4 FUN_106d4e81c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 106d4e824; end: 106d4e82b; -[SCGalleryOperaSnapEntryInfo isPrivate] */

undefined1 FUN_106d4e824(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d4e82c; end: 106d4e833; -[SCGalleryOperaSnapEntryInfo isEntryClientCompatible] */

undefined1 FUN_106d4e82c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106d4e834; end: 106d4e83b; -[SCGalleryOperaSnapEntryInfo isPendingBackup] */

undefined1 FUN_106d4e834(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106d4e83c; end: 106d4e843; -[SCGalleryOperaSnapEntryInfo isPersistLocally] */

undefined1 FUN_106d4e83c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106d4e844; end: 106d4e84b; -[SCGalleryOperaSnapEntryInfo isTemporaryFeatured] */

undefined1 FUN_106d4e844(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106d4e84c; end: 106d4e853; -[SCGalleryOperaSnapEntryInfo isFailedEntry] */

undefined1 FUN_106d4e84c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106d4e854; end: 106d4e85b; -[SCGalleryOperaSnapEntryInfo entryId] */

undefined8 FUN_106d4e854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d4e85c; end: 106d4e863; -[SCGalleryOperaSnapEntryInfo clientProcessingBitMaskType] */

undefined8 FUN_106d4e85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d4e864; end: 106d4e86b; -[SCGalleryOperaSnapEntryInfo collectionAttributes] */

undefined8 FUN_106d4e864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d4e86c; end: 106d4e873; -[SCGalleryOperaSnapEntryInfo externalId] */

undefined8 FUN_106d4e86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d4e874; end: 106d4e87b; -[SCGalleryOperaSnapEntryInfo collectionCategory] */

undefined8 FUN_106d4e874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d4e87c; end: 106d4e8cf; -[SCGalleryOperaSnapEntryInfo .cxx_destruct] */

void FUN_106d4e87c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106d4e8d0; end: 106d4e97b; -[SCMemoriesOperaCollectionAttributes initWithChromeTitle:chromeSubtitle:] */

undefined1 *
FUN_106d4e8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f69b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d4e97c; end: 106d4e99f; -[SCMemoriesOperaCollectionAttributes copyWithZone:] */

undefined8 FUN_106d4e97c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4e9a0; end: 106d4ea13; -[SCMemoriesOperaCollectionAttributes hash] */

undefined8 * FUN_106d4e9a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106d4ea94:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106d4eaa0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106d4eaa0;
        }
        goto LAB_106d4ea94;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106d4eaa0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106d4ea14; end: 106d4eabb; -[SCMemoriesOperaCollectionAttributes isEqual:] */

long FUN_106d4ea14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d4ea94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d4eaa0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106d4eaa0;
        }
        goto LAB_106d4ea94;
      }
    }
    lVar3 = 0;
  }
LAB_106d4eaa0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d4eabc; end: 106d4eac3; -[SCMemoriesOperaCollectionAttributes chromeTitle] */

undefined8 FUN_106d4eabc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d4eac4; end: 106d4eacb; -[SCMemoriesOperaCollectionAttributes chromeSubtitle] */

undefined8 FUN_106d4eac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d4eacc; end: 106d4eafb; -[SCMemoriesOperaCollectionAttributes .cxx_destruct] */

void FUN_106d4eacc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d4eafc; end: 106d4eb8b; -[SCMemoriesOperaActionMenuV2Option initWithOption:optionEnabled:title:] */

undefined1 *
FUN_106d4eafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f69b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106d4eb8c; end: 106d4ebaf; -[SCMemoriesOperaActionMenuV2Option copyWithZone:] */

undefined8 FUN_106d4eb8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4ebb0; end: 106d4ebb7; -[SCMemoriesOperaActionMenuV2Option option] */

undefined8 FUN_106d4ebb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d4ebb8; end: 106d4ebbf; -[SCMemoriesOperaActionMenuV2Option optionEnabled] */

undefined1 FUN_106d4ebb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d4ebc0; end: 106d4ebc7; -[SCMemoriesOperaActionMenuV2Option title] */

undefined8 FUN_106d4ebc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d4ebc8; end: 106d4ebd3; -[SCMemoriesOperaActionMenuV2Option .cxx_destruct] */

void FUN_106d4ebc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106d4ebd4; end: 106d4ecdf; -[SCMemoriesOperaPlaybackItemInfo initWithItemId:snapLevelItemId:playbackItemIndex:crFeaturedStory:] */

undefined1 *
FUN_106d4ebd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f69c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d4ece0; end: 106d4ed03; -[SCMemoriesOperaPlaybackItemInfo copyWithZone:] */

undefined8 FUN_106d4ece0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4ed04; end: 106d4ed8f; -[SCMemoriesOperaPlaybackItemInfo hash] */

undefined8 * FUN_106d4ed04(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106d4ee40:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106d4ee4c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_106d4ee4c;
            }
            goto LAB_106d4ee40;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106d4ee4c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106d4ed90; end: 106d4ee67; -[SCMemoriesOperaPlaybackItemInfo isEqual:] */

long FUN_106d4ed90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d4ee40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d4ee4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_106d4ee4c;
            }
            goto LAB_106d4ee40;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d4ee4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d4ee68; end: 106d4ee6f; -[SCMemoriesOperaPlaybackItemInfo itemId] */

undefined8 FUN_106d4ee68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d4ee70; end: 106d4ee77; -[SCMemoriesOperaPlaybackItemInfo snapLevelItemId] */

undefined8 FUN_106d4ee70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d4ee78; end: 106d4ee7f; -[SCMemoriesOperaPlaybackItemInfo playbackItemIndex] */

undefined8 FUN_106d4ee78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d4ee80; end: 106d4ee87; -[SCMemoriesOperaPlaybackItemInfo crFeaturedStory] */

undefined8 FUN_106d4ee80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d4ee88; end: 106d4eecf; -[SCMemoriesOperaPlaybackItemInfo .cxx_destruct] */

void FUN_106d4ee88(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d4eed0; end: 106d4eff3; -[SCMemoriesLastPlayedItemInfo initWithItemId:mediaType:galleryCollectionId:galleryCollectionCategory:clientProcessingType:groupName:] */

undefined1 *
FUN_106d4eed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f69c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d4eff4; end: 106d4f017; -[SCMemoriesLastPlayedItemInfo copyWithZone:] */

undefined8 FUN_106d4eff4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d4f018; end: 106d4f0bb; -[SCMemoriesLastPlayedItemInfo hash] */

undefined8 * FUN_106d4f018(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar4;
  if (-1 < lVar4) {
    lStack_50 = lVar4;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar2 = &uStack_58;
  func_0x000100505190(puVar2,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_106d4f18c:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106d4f198;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && ((puVar2[2] == param_3[2] && (puVar2[5] == param_3[5])))) {
      lVar4 = puVar2[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[3];
        if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = puVar2[4];
          if ((lVar4 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            puVar5 = (undefined8 *)puVar2[6];
            if (puVar5 != (undefined8 *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_106d4f198;
            }
            goto LAB_106d4f18c;
          }
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_106d4f198:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106d4f0bc; end: 106d4f1b3; -[SCMemoriesLastPlayedItemInfo isEqual:] */

long FUN_106d4f0bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d4f18c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d4f198;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_106d4f198;
            }
            goto LAB_106d4f18c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d4f198:
  _objc_release(param_3);
  return lVar3;
}


