/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067a0580; end: 1067a0797; -[SCPlusMerlinInitializerImpl initializeMerlinIfNeeded] */

void FUN_1067a0580(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  uVar7 = param_1;
  func_0x00010c082580();
  puVar10 = PTR_PTR_1126ae558;
  if ((uVar7 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar11);
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    _objc_retain(uVar3);
    puVar9 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar8 = uVar2;
    FUN_1067a1224(uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar11);
    _objc_retain(uVar3);
    func_0x00010c297260(uVar8);
    _objc_release(uVar8);
    puVar10 = puVar9;
    func_0x00010bfbc3e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1067a0798; end: 1067a0803; -[SCPlusMerlinInitializerImpl isPinned] */

undefined8 FUN_1067a0798(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0fc460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfda360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1067a0804; end: 1067a0a77; -[SCPlusMerlinInitializerImpl setPinned:] */

void FUN_1067a0804(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126b2a58;
  func_0x00010c2942a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = *(undefined **)(param_1 + 0x30);
  if (param_3 == 0) {
    func_0x00010c0fc460(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12da80();
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    _objc_retain(uVar2);
    _objc_retain(uVar9);
    puVar5 = PTR_PTR_1126ae560;
    _objc_retain(uVar1);
    _objc_retain(puVar8);
    _objc_opt_new();
    uVar6 = uVar1;
    FUN_1067a0d50(uVar1,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_retain(uVar2);
    _objc_retain(uVar9);
    _objc_retain(uVar10);
    func_0x00010c297260(uVar6);
    _objc_release(uVar6);
    puVar7 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(puVar5);
    func_0x00010c297260(puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1067a0a78; end: 1067a0b33;  */

void FUN_1067a0a78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fc460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa920();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1067a0b34; end: 1067a0be7;  */

void FUN_1067a0b34(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5ef98;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5ef98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1067a0be8; end: 1067a0cb3; -[SCPlusMerlinInitializerImpl isUserEligibleForInitializeMerlin] */

undefined8 FUN_1067a0be8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cae80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 3) {
    return 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e5efb8,0,0);
  return uVar6;
}



/* Entry: 1067a0cb4; end: 1067a0d4f; -[SCPlusMerlinInitializerImpl .cxx_destruct] */

void FUN_1067a0cb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1067a0d50; end: 1067a0eff;  */

void FUN_1067a0d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae560;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar9 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c11de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar7 = puVar4;
  func_0x00010bf504e0(uVar9);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  if (puVar7 == (undefined *)0x0) {
    uVar2 = uVar6;
    func_0x000106c74fa8(uVar6,1,*(undefined8 *)(puVar1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar1 + 0x30);
    _objc_retain(uVar9);
    _objc_retain(uVar6);
    func_0x00010c297260(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(puVar1 + 0x20));
  }
  _objc_release(uVar6);
  return;
}



/* Entry: 1067a0f00; end: 1067a111f;  */

void FUN_1067a0f00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x000106c74fa8(param_2,1,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1067a1120; end: 1067a118f;  */

void FUN_1067a1120(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5efd8;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5efd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1067a1190; end: 1067a1223;  */

void FUN_1067a1190(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  else {
    ppuVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067a1224; end: 1067a1353;  */

void FUN_1067a1224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c244ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c11de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2448c0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067a1354; end: 1067a1687;  */

void FUN_1067a1354(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    FUN_1067a1688(*(undefined8 *)(param_1 + 0x20),1);
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    goto LAB_1067a165c;
  }
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010901c54c(), (int)lVar1 == 0)) {
    _objc_release(param_2);
    _objc_release(param_2);
LAB_1067a1404:
    puVar7 = PTR_PTR_1126cde78;
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar11);
    _objc_opt_new(puVar7);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126cde80);
    func_0x00010c0199c0(puVar3);
    uVar6 = uVar11;
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar4 = puVar7;
    func_0x00010bf63640(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar6);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar10);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar6);
  }
  else {
    lVar1 = param_2;
    func_0x000100bf119c();
    if ((int)lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010c06d560();
      _objc_release(param_2);
      _objc_release(param_2);
      if ((int)lVar1 == 0) goto LAB_1067a1404;
    }
    else {
      _objc_release(param_2);
      _objc_release(param_2);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar6);
  }
  _objc_release(puVar7);
LAB_1067a165c:
  _objc_release(param_3);
  return;
}



/* Entry: 1067a1688; end: 1067a173f;  */

void FUN_1067a1688(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cde70;
  func_0x00010c064a00(PTR_PTR_1126cde70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0caf40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067a1740; end: 1067a1997;  */

void FUN_1067a1740(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar1);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    _objc_retain(uVar4);
    _objc_retain(uVar8);
    _objc_retain(uVar9);
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1067a1a60;
    puStack_90 = &UNK_110863958;
    uStack_88 = uVar1;
    _objc_retain(uVar9);
    uStack_80 = uVar9;
    _objc_retain(uVar1);
    uVar6 = uVar9;
    func_0x000106c778cc(uVar9,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_retain(uVar9);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    _objc_retain(uVar4);
    func_0x00010c297260(uVar6);
    _objc_release(uVar6);
    puVar7 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(puVar5);
    func_0x00010c297260(puVar7);
    _objc_release(puVar7);
  }
  else {
    FUN_1067a1688(*(undefined8 *)(param_1 + 0x20),2);
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1067a1998; end: 1067a1a4b;  */

void FUN_1067a1998(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithError__1125ae8d0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067a1a4c; end: 1067a1a5f;  */

void FUN_1067a1a4c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1067a1a60; end: 1067a1bbf;  */

void FUN_1067a1a60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar3 = PTR_PTR_1126cde88;
  _objc_alloc(PTR_PTR_1126cde88);
  uVar4 = uVar1;
  func_0x00010c244ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c244b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049d20(puVar3,param_2,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067a1eec;
  puStack_58 = &UNK_11093b458;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar7 = puVar6;
  func_0x00010bfb2660(puVar6,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1067a1bc0; end: 1067a1d1f;  */

void FUN_1067a1bc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1067a1d20;
    puStack_78 = &UNK_11093b3c8;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = uVar3;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    func_0x000106c778cc(uVar1,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  else {
    FUN_1067a1688(*(undefined8 *)(param_1 + 0x20),3);
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1067a1d20; end: 1067a1e5f;  */

void FUN_1067a1d20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar4);
  puVar5 = PTR_PTR_1126ae560;
  _objc_retain(uVar3);
  _objc_opt_new();
  uVar6 = uVar3;
  FUN_1067a0d50(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  func_0x00010c297260(uVar6);
  _objc_release(uVar6);
  puVar7 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067a1e60; end: 1067a1eeb;  */

void FUN_1067a1e60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    FUN_1067a1688(*(undefined8 *)(param_1 + 0x20),0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
    _objc_release(puVar1);
  }
  else {
    FUN_1067a1688(*(undefined8 *)(param_1 + 0x20),4);
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067a1eec; end: 1067a1ef7;  */

void FUN_1067a1eec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126ae560;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_opt_new();
  uVar3 = uVar4;
  func_0x00010c244ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2448c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1067a1ef8; end: 1067a209b;  */

void FUN_1067a1ef8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5f098;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5f098);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  else {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067a209c; end: 1067a228b;  */

void FUN_1067a209c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126ae560;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_opt_new();
  uVar5 = uVar2;
  func_0x00010bf50600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar6 = uVar5;
  func_0x00010beee460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5f80();
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar7 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c297260(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c297260(puVar4);
  _objc_release(puVar4);
  return;
}



/* Entry: 1067a228c; end: 1067a229f;  */

void FUN_1067a228c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1067a22a0; end: 1067a2327;  */

void FUN_1067a22a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1067a2328;
  puStack_20 = &UNK_110904f68;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067a236c;
  puStack_48 = &UNK_11093b528;
  uStack_18 = uStack_40;
  func_0x00010c0bf0a0(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1067a2328; end: 1067a236b;  */

void FUN_1067a2328(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5f0b8;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5f0b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1067a236c; end: 1067a2377;  */

void FUN_1067a236c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1067a2378; end: 1067a2447;  */

void FUN_1067a2378(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    if ((param_2 == 0) || (uVar1 = param_2, func_0x00010c074920(), (uVar1 & 1) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppuVar2 = (undefined **)PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppuVar2 = (undefined **)PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf43d60(uVar3);
  }
  else {
    if (param_3 != 1) goto LAB_1067a2434;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e38938;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38938);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  _objc_release(ppuVar2);
LAB_1067a2434:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067a2448; end: 1067a252b; -[SCPlusMerlinServiceProvider provide] */

void FUN_1067a2448(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cde90;
  _objc_alloc(PTR_PTR_1126cde90);
  func_0x00010c01df00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067a252c; end: 1067a256b;  */

void FUN_1067a252c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeec00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067a256c; end: 1067a2763; -[SCPlusMerlinServiceProvider _createInitializer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067a256c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cde98;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275015c;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112750160;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_112750164;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112750168;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11275016c;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112750170;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_112750174;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_112750178;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_11275017c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112750180;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112750184;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0377a0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar11,lVar13,
                      lVar14);
  _objc_release(lVar14);
  _objc_release(param_1);
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
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067a2764; end: 1067a2813; -[SCPlusMerlinServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067a2764(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275017c);
  _objc_destroyWeak(param_1 + _DAT_112750178);
  _objc_destroyWeak(param_1 + _DAT_112750184);
  _objc_destroyWeak(param_1 + _DAT_112750174);
  _objc_destroyWeak(param_1 + _DAT_112750170);
  _objc_destroyWeak(param_1 + _DAT_112750168);
  _objc_destroyWeak(param_1 + _DAT_11275016c);
  _objc_destroyWeak(param_1 + _DAT_112750164);
  _objc_destroyWeak(param_1 + _DAT_112750160);
  _objc_destroyWeak(param_1 + _DAT_11275015c);
  _objc_destroyWeak(param_1 + _DAT_112750180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750188);
  return;
}



/* Entry: 1067a2814; end: 1067a293b; -[SCPlusMerlinSnapchattersFetchRequest initWithSnapchattersDataMutator:snapchattersDataTracker:] */

undefined1 *
FUN_1067a2814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3128;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bb6f8;
    func_0x00010bfa6d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2900();
    _objc_release(uVar3);
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 **)((long)puVar1 + 0x18) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067a293c; end: 1067a2943; -[SCPlusMerlinSnapchattersFetchRequest future] */

void FUN_1067a293c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 1067a2944; end: 1067a2947; -[SCPlusMerlinSnapchattersFetchRequest didStartSnapchattersUpdateDataRequest:] */

void FUN_1067a2944(void)

{
  return;
}



/* Entry: 1067a2948; end: 1067a294b; -[SCPlusMerlinSnapchattersFetchRequest didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1067a2948(void)

{
  return;
}



/* Entry: 1067a294c; end: 1067a294f; -[SCPlusMerlinSnapchattersFetchRequest didStartSnapchattersFetchDataRequest:] */

void FUN_1067a294c(void)

{
  return;
}



/* Entry: 1067a2950; end: 1067a29e3; -[SCPlusMerlinSnapchattersFetchRequest didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_1067a2950(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  if (param_3 != *(long *)(param_1 + 0x10)) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f0d8;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5f0d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar1,param_2,ppuVar2);
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar1,param_2,ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1067a29e4; end: 1067a2a1f; -[SCPlusMerlinSnapchattersFetchRequest .cxx_destruct] */

void FUN_1067a29e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067a2a20; end: 1067a2a4b; +[SCGrapheneMerlinMetric initializeResult] */

void FUN_1067a2a20(void)

{
  _objc_alloc(PTR_PTR_1126cde70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067a2a4c; end: 1067a2aeb; -[SCGrapheneMerlinMetric description] */

void FUN_1067a2a4c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20e38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e20e38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f3130;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1067a2aec; end: 1067a2c2f; -[SCGrapheneRegistry merlinGraphene] */

void FUN_1067a2aec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1067a2b74;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4500 != -1) {
    func_0x00010002a2fc(0x1136c4500,&puStack_48);
  }
  uVar1 = uRam00000001136c44f8;
  _objc_retain(uRam00000001136c44f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067a2c30; end: 1067a2c3b; -[SCFeatureSettingsService isStoryBoostStartTimestampAvailable] */

void FUN_1067a2c30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e5f118);
  return;
}



/* Entry: 1067a2c3c; end: 1067a2c47; -[SCFeatureSettingsService storyBoostStartTimestampServerParam] */

undefined ** FUN_1067a2c3c(void)

{
  return &PTR____CFConstantStringClassReference_110e5f118;
}



/* Entry: 1067a2c48; end: 1067a2c57; -[SCFeatureSettingsService setStoryBoostStartTimestamp:] */

void FUN_1067a2c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e5f118,param_3);
  return;
}



/* Entry: 1067a2c58; end: 1067a2c5f; -[SCFeatureSettingsService story_boost_start_timestamp_client_value:] */

void FUN_1067a2c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1067a2c60; end: 1067a2c67; -[SCFeatureSettingsService story_boost_start_timestamp_server_value:] */

void FUN_1067a2c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1067a2c68; end: 1067a2c77; -[SCFeatureSettingsService storyBoostStartTimestamp] */

void FUN_1067a2c68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e5f118,0);
  return;
}



/* Entry: 1067a2c78; end: 1067a2c83; -[SCFeatureSettingsService isStoryBoostEndTimestampAvailable] */

void FUN_1067a2c78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e5f138);
  return;
}



/* Entry: 1067a2c84; end: 1067a2c8f; -[SCFeatureSettingsService storyBoostEndTimestampServerParam] */

undefined ** FUN_1067a2c84(void)

{
  return &PTR____CFConstantStringClassReference_110e5f138;
}



/* Entry: 1067a2c90; end: 1067a2c9f; -[SCFeatureSettingsService setStoryBoostEndTimestamp:] */

void FUN_1067a2c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e5f138,param_3);
  return;
}



/* Entry: 1067a2ca0; end: 1067a2ca7; -[SCFeatureSettingsService story_boost_end_timestamp_client_value:] */

void FUN_1067a2ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1067a2ca8; end: 1067a2caf; -[SCFeatureSettingsService story_boost_end_timestamp_server_value:] */

void FUN_1067a2ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1067a2cb0; end: 1067a2cbf; -[SCFeatureSettingsService storyBoostEndTimestamp] */

void FUN_1067a2cb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e5f138,0);
  return;
}



/* Entry: 1067a2cc0; end: 1067a2fcf; -[SCPlusStoryBoostServiceImpl initWithPlusServices:featureSettingsService:storiesServices:myStoriesServices:storiesNetworkingServices:composerServices:composerCoreUIServices:composerPeopleBridgeUserInfoServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:] */

undefined8 *
FUN_1067a2cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126f3138;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cdea0;
    _objc_alloc(PTR_PTR_1126cdea0);
    uVar4 = puVar1[2];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c259200();
    uVar6 = puVar1[2];
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2591c0();
    func_0x00010c04bbe0((double)uVar5,(double)uVar7,puVar3);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar8 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar8;
    _objc_release(uVar2);
    func_0x00010c0d9840(puVar1[0xc]);
    _objc_release(puVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 1067a2fd0; end: 1067a31ef; -[SCPlusStoryBoostServiceImpl storyManagementCardForStoryType:storyId:viewController:] */

void FUN_1067a2fd0(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *unaff_x23;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126ae6b8;
  if (param_3 < 3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        func_0x00010be5c3a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_1;
      }
      else if (param_3 == 2) {
        _objc_initWeak(auStack_58,param_1);
        puVar1 = *(undefined **)(param_1 + 0x18);
        func_0x00010bf62060(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puVar2 = puVar3;
        func_0x00010bf62580(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_68,auStack_58);
        _objc_retain(param_5);
        uStack_60 = 2;
        unaff_x23 = puVar2;
        func_0x00010bfb2660(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_5);
        _objc_destroyWeak(auStack_68);
        _objc_release(puVar2);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_destroyWeak(auStack_58);
      }
      goto LAB_1067a319c;
    }
  }
  else if (1 < param_3 - 3U) goto LAB_1067a319c;
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  unaff_x23 = puVar3;
LAB_1067a319c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
  return;
}



/* Entry: 1067a31f0; end: 1067a32b7;  */

void FUN_1067a31f0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 1) {
    puVar2 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c27dd80(param_2);
    puVar3 = puVar2;
    func_0x00010be5c3a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067a32b8; end: 1067a33ab; -[SCPlusStoryBoostServiceImpl boost] */

void FUN_1067a32b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1067a3368;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067a33ac;
  puStack_58 = &UNK_110849810;
  puStack_50 = puVar1;
  puStack_28 = puVar1;
  func_0x00010bdd51e0(param_1,param_2,&puStack_48,&puStack_70);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067a33ac; end: 1067a33b7;  */

void FUN_1067a33ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 1067a33b8; end: 1067a349b; -[SCPlusStoryBoostServiceImpl hasEligibleStoriesToBoost] */

void FUN_1067a33b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be1f1a0(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067a349c; end: 1067a3553;  */

void FUN_1067a349c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f158;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5f158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    func_0x00010bf529e0(param_2);
    func_0x00010c0df760(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067a3554; end: 1067a357b; -[SCPlusStoryBoostServiceImpl observeBoostState] */

void FUN_1067a3554(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067a357c; end: 1067a372f; -[SCPlusStoryBoostServiceImpl _makeStoryBoostViewForViewController:storyType:customStoryType:] */

void FUN_1067a357c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa2420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2591a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0e60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uVar7 = uVar6;
  uStack_78 = param_4;
  uStack_70 = param_5;
  func_0x00010c2656e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1067a3730; end: 1067a37bf;  */

void FUN_1067a3730(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067a37c0; end: 1067a3ca7; -[SCPlusStoryBoostServiceImpl _makeStoryBoostViewForViewController:storyType:customStoryType:gatingValue:] */

void FUN_1067a37c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_6;
  func_0x00010c252440();
  if (lVar1 != 3) {
    lVar1 = param_6;
    func_0x00010c252440();
    if (lVar1 == 1) {
      uVar8 = *(ulong *)(param_1 + 8);
      func_0x00010c28ee80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c25a200();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0e56a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      uVar9 = uVar12;
      func_0x00010c083820();
      if ((uVar9 & 1) == 0) {
        puVar15 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar13 = auStack_68;
        _objc_loadWeakRetained(puVar13);
        puVar14 = puVar13;
        func_0x00010be5c6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        puVar15 = PTR_PTR_1126ae750;
        func_0x00010c0ec800(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
      }
      _objc_release(uVar12);
    }
    else {
      puVar15 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_1067a3c24;
  }
  puVar2 = PTR_PTR_1126cdea8;
  _objc_alloc(PTR_PTR_1126cdea8);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bff92a0(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar5 = PTR_PTR_1126cdeb0;
  _objc_alloc_init(PTR_PTR_1126cdeb0);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010beff660(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2928c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1cf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar3 = 0;
  if (param_4 < 3) {
    if (param_4 == 0) {
LAB_1067a3aec:
      uVar3 = 0xffffffffffffffff;
    }
    else if (param_4 == 2) {
      if (10 < param_5) goto LAB_1067a3af4;
      uVar3 = *(undefined8 *)(&UNK_10dddf7a0 + param_5 * 8);
    }
  }
  else if (param_4 == 3) {
LAB_1067a3af4:
    uVar3 = 1;
  }
  else if (param_4 == 4) goto LAB_1067a3aec;
  func_0x00010bb15538(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ddc0(puVar5);
  _objc_release(uVar3);
  uVar3 = 0x12;
  func_0x00010bc9107c(0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8800(puVar5);
  _objc_release(uVar3);
  puVar16 = PTR_PTR_1126cdeb8;
  _objc_alloc(PTR_PTR_1126cdeb8);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c295440(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar16);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  puVar15 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
LAB_1067a3c24:
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1067a3ca8; end: 1067a3d83;  */

void FUN_1067a3ca8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010bdd51e0(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1067a3d84; end: 1067a3d93;  */

void FUN_1067a3d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067a3d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067a3d94; end: 1067a3dd7;  */

void FUN_1067a3d94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000106c7758c(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067a3dd8; end: 1067a40cb; -[SCPlusStoryBoostServiceImpl _makeUpsellCardWithViewController:impression:] */

void FUN_1067a3dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  func_0x00010bfa1820(param_4);
  puVar1 = PTR_PTR_1126b1da8;
  _objc_alloc();
  func_0x00010c04abe0();
  puVar2 = puVar1;
  func_0x000106c68d1c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cdec0;
  _objc_alloc();
  func_0x00010c0277e0();
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b35c8;
  _objc_alloc();
  func_0x00010c057140();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1cf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28ee80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c25a200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1067a40cc;
  puStack_80 = &UNK_110842e18;
  ppuVar11 = &puStack_98;
  uStack_78 = uVar10;
  _objc_retainBlock(ppuVar11);
  puStack_c0 = puVar13;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1067a40d4;
  puStack_a8 = &UNK_110842e18;
  ppuVar12 = &puStack_c0;
  uStack_a0 = uVar10;
  _objc_retainBlock(ppuVar12);
  puVar13 = PTR_PTR_1126cdec8;
  _objc_alloc(PTR_PTR_1126cdec8);
  func_0x00010c04efa0();
  func_0x00010c1d2680();
  puVar14 = PTR_PTR_1126cded0;
  _objc_alloc(PTR_PTR_1126cded0);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c295440(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar14,param_2,puVar3,puVar13,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(puVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1067a40cc; end: 1067a40db;  */

void FUN_1067a40cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onInteraction_112616c98);
  return;
}



/* Entry: 1067a40dc; end: 1067a41d7; -[SCPlusStoryBoostServiceImpl _boostStoriesWithSuccessCallback:errorCallback:] */

void FUN_1067a40dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be1f1a0(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067a41d8; end: 1067a4287;  */

void FUN_1067a41d8(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f158;
  }
  else {
    lVar3 = param_2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010bdd51c0(lVar1);
      goto LAB_1067a426c;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f178;
  }
  func_0x000106c7723c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
  _objc_release(ppuVar2);
LAB_1067a426c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067a4288; end: 1067a43c3; -[SCPlusStoryBoostServiceImpl _getFilteredStoriesWithCallback:] */

void FUN_1067a4288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d4b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c11d120(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1067a43c4; end: 1067a4483;  */

void FUN_1067a43c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1067a4484;
    puStack_40 = &UNK_11093b640;
    uVar2 = param_2;
    lStack_38 = lVar1;
    func_0x0001006372a4(param_2,&puStack_58);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067a4484; end: 1067a45bf;  */

bool FUN_1067a4484(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c25b720();
  if (lVar2 == 2) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf625c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar2 = lVar5;
    func_0x00010c27dd80();
    if (lVar2 == 1) {
      lVar2 = param_2;
      func_0x00010c25b340(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf529e0();
      bVar1 = lVar4 != 0;
      _objc_release(lVar2);
    }
    else {
      bVar1 = false;
    }
  }
  else {
    if (lVar2 != 1) {
      bVar1 = false;
      goto LAB_1067a45a0;
    }
    lVar5 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf529e0();
    bVar1 = lVar2 != 0;
  }
  _objc_release(lVar5);
LAB_1067a45a0:
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1067a45c0; end: 1067a4767; -[SCPlusStoryBoostServiceImpl _boostStories:successCallback:errorCallback:] */

void FUN_1067a45c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010c255740(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1067a4768;
  puStack_a8 = &UNK_11093b670;
  uStack_a0 = uVar3;
  uStack_98 = uVar4;
  uStack_90 = param_6;
  uStack_88 = param_5;
  dStack_80 = param_1 * 1000.0;
  dStack_78 = (param_1 + 86400.0) * 1000.0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf1f920(param_1,param_1 + 86400.0,uVar2,param_3,param_4,
                      PTR___dispatch_main_q_11034be20,&puStack_c0);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_6);
  return;
}



/* Entry: 1067a4768; end: 1067a4833;  */

void FUN_1067a4768(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067a4794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20cbc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20cb60();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cdea0;
  _objc_alloc(PTR_PTR_1126cdea0);
  func_0x00010c04bbe0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067a4834; end: 1067a48db; -[SCPlusStoryBoostServiceImpl .cxx_destruct] */

void FUN_1067a4834(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067a48dc; end: 1067a49bf; -[SCPlusStoryBoostServiceProvider provide] */

void FUN_1067a48dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cded8;
  _objc_alloc(PTR_PTR_1126cded8);
  func_0x00010c04d4e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067a49c0; end: 1067a49ff;  */

void FUN_1067a49c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf40c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067a4a00; end: 1067a4ba3; -[SCPlusStoryBoostServiceProvider _createStoryBoostService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067a4a00(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126cdee0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127501c8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_1127501cc;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127501d0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_1127501d4;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_1127501d8;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_1127501dc;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1 + _DAT_1127501e0;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_1127501e4;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_1127501e8;
  _objc_loadWeakRetained();
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127501ec);
  param_1 = param_1 + _DAT_1127501f0;
  _objc_loadWeakRetained();
  func_0x00010c0377c0(puVar1,param_2,lVar2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12,
                      param_1);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067a4ba4; end: 1067a4c57; -[SCPlusStoryBoostServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067a4ba4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127501ec,0);
  _objc_destroyWeak(param_1 + _DAT_1127501f0);
  _objc_destroyWeak(param_1 + _DAT_1127501e8);
  _objc_destroyWeak(param_1 + _DAT_1127501d8);
  _objc_destroyWeak(param_1 + _DAT_1127501d4);
  _objc_destroyWeak(param_1 + _DAT_1127501d0);
  _objc_destroyWeak(param_1 + _DAT_1127501cc);
  _objc_destroyWeak(param_1 + _DAT_1127501c8);
  _objc_destroyWeak(param_1 + _DAT_1127501e4);
  _objc_destroyWeak(param_1 + _DAT_1127501e0);
  _objc_destroyWeak(param_1 + _DAT_1127501dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127501f4);
  return;
}



/* Entry: 1067a4c58; end: 1067a4d9f; -[SCPlusFeatureLauncherEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067a4c58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar2 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar3 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar4 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar5 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar6 = PTR_PTR_1126cdee8;
  _objc_alloc(PTR_PTR_1126cdee8);
  lVar7 = param_1 + _DAT_112750214;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c037780(puVar6,param_2,puVar1,puVar2,puVar3,lVar7,puVar4,puVar5);
  _objc_release(lVar7);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275020c),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067a4da0; end: 1067a4e37; -[SCPlusFeatureLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067a4da0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275020c,0);
  _objc_storeStrong(param_1 + _DAT_112750208,0);
  _objc_storeStrong(param_1 + _DAT_112750204,0);
  _objc_destroyWeak(param_1 + _DAT_112750214);
  _objc_storeStrong(param_1 + _DAT_112750200,0);
  _objc_storeStrong(param_1 + _DAT_1127501fc,0);
  _objc_storeStrong(param_1 + _DAT_1127501f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750210);
  return;
}



/* Entry: 1067a4e38; end: 1067a4eab; -[SCGrapheneAnimatedStickerMetric2 init] */

undefined1 * FUN_1067a4e38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067a4eac; end: 1067a50db;  */

void FUN_1067a4eac(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11093b6d0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1067a50dc;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_11093b720,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1067a50dc; end: 1067a5153;  */

void FUN_1067a50dc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093b720,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067a5154; end: 1067a52c7;  */

undefined8 *****
FUN_1067a5154(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6,undefined8 ****param_7,
             undefined8 ****param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****unaff_x22;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  undefined8 ****ppppuStack_178;
  undefined *puStack_170;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined7 uStack_d0;
  char cStack_c9;
  undefined8 ***pppuStack_c8;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 **appuStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppppuVar13 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar9 = param_2;
  ppppuVar11 = param_3;
  _objc_retain(param_2);
  ppppuVar12 = (undefined8 ****)0x0;
  if (param_1 != 0) {
    ppppuVar12 = *(undefined8 *****)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (undefined8 ****)appuStack_60;
    func_0x00010002b838(appuStack_60,pcVar6);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,appuStack_60,&lStack_48,1);
    pppppuVar9 = (undefined8 *****)&UNK_11093b770;
    (*(code *)(*ppppuVar12)[3])(ppppuVar12);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar11 = ppppuVar13;
    param_4 = param_3;
    unaff_x22 = (undefined8 ****)&ppuStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(appuStack_60[0]);
      ppppuVar11 = ppppuVar13;
      param_4 = param_3;
      unaff_x22 = (undefined8 ****)&ppuStack_80;
    }
  }
  pppppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  ppppuVar10 = &pppuStack_100;
  pppuStack_c8 = *(undefined8 ****)PTR____stack_chk_guard_11034bdc0;
  ppppuVar13 = ppppuVar11;
  _objc_retain(pppppuVar9);
  if (pppppuVar8 != (undefined8 *****)0x0) {
    ppppuVar13 = pppppuVar8[1];
    _objc_retain(pppppuVar9);
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar9;
      _objc_retainAutorelease(pppppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar9);
    func_0x00010002b838(&pppuStack_e0,pcVar6);
    pppuStack_100 = (undefined8 ****)0x0;
    pppuStack_f8 = (undefined8 ****)0x0;
    pppuStack_f0 = (undefined8 ****)0x0;
    func_0x00010007e1e8(&pppuStack_100,&pppuStack_e0,&pppuStack_c8,1);
    (*(code *)(*ppppuVar13)[3])(ppppuVar13,&UNK_11093b7c0);
    pppuStack_e8 = &pppuStack_100;
    func_0x00010007e5dc(&pppuStack_e8);
    ppppuVar13 = ppppuVar10;
    param_4 = ppppuVar11;
    if (cStack_c9 < '\0') {
      __ZdlPv(pppuStack_e0);
      ppppuVar13 = ppppuVar10;
      param_4 = ppppuVar11;
    }
  }
  pppppuVar8 = pppppuVar9;
  _objc_release();
  if (*(undefined8 *****)PTR____stack_chk_guard_11034bdc0 == (undefined8 ****)pppuStack_c8) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar9);
  _objc_release(pppppuVar9);
  __Unwind_Resume();
  pppuVar5 = pppuStack_c8;
  pppuVar4 = pppuStack_e8;
  pppuVar3 = pppuStack_f0;
  pppuVar2 = pppuStack_f8;
  pppuVar1 = pppuStack_100;
  ppppuVar11 = (undefined8 ****)CONCAT17(cStack_c9,uStack_d0);
  _objc_retain(ppppuVar13);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuVar1);
  _objc_retain(pppuVar2);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  _objc_retain(pppuStack_e0);
  _objc_retain(pppuStack_d8);
  _objc_retain(ppppuVar11);
  _objc_retain(pppuVar5);
  _objc_retain(unaff_x24);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x22);
  _objc_retain(ppppuVar12);
  _objc_retain(pppppuVar7);
  _objc_retain(param_2);
  _objc_retain(&stack0xfffffffffffffff0);
  _objc_retain(FUN_1067a52c8);
  puStack_170 = PTR_PTR_1126f3148;
  pppppuVar9 = &ppppuStack_178;
  ppppuStack_178 = pppppuVar8;
  _objc_msgSendSuper2(pppppuVar9,PTR_s_init_1125d9248);
  if (pppppuVar9 != (undefined8 *****)0x0) {
    _objc_retain(ppppuVar13);
    ppppuVar10 = pppppuVar9[1];
    pppppuVar9[1] = ppppuVar13;
    _objc_release(ppppuVar10);
    _objc_retain(param_4);
    ppppuVar10 = pppppuVar9[2];
    pppppuVar9[2] = param_4;
    _objc_release(ppppuVar10);
    _objc_retain(param_5);
    ppppuVar10 = pppppuVar9[4];
    pppppuVar9[4] = param_5;
    _objc_release(ppppuVar10);
    _objc_retain(param_6);
    ppppuVar10 = pppppuVar9[5];
    pppppuVar9[5] = param_6;
    _objc_release(ppppuVar10);
    _objc_retain(param_7);
    ppppuVar10 = pppppuVar9[3];
    pppppuVar9[3] = param_7;
    _objc_release(ppppuVar10);
    _objc_retain(param_8);
    ppppuVar10 = pppppuVar9[8];
    pppppuVar9[8] = param_8;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar1);
    ppppuVar10 = pppppuVar9[6];
    pppppuVar9[6] = (undefined8 ****)pppuVar1;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar2);
    ppppuVar10 = pppppuVar9[7];
    pppppuVar9[7] = (undefined8 ****)pppuVar2;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar3);
    ppppuVar10 = pppppuVar9[9];
    pppppuVar9[9] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar4);
    ppppuVar10 = pppppuVar9[10];
    pppppuVar9[10] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_e0);
    ppppuVar10 = pppppuVar9[0xb];
    pppppuVar9[0xb] = (undefined8 ****)pppuStack_e0;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_d8);
    ppppuVar10 = pppppuVar9[0xc];
    pppppuVar9[0xc] = (undefined8 ****)pppuStack_d8;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar11);
    ppppuVar10 = pppppuVar9[0xd];
    pppppuVar9[0xd] = ppppuVar11;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar5);
    ppppuVar10 = pppppuVar9[0xe];
    pppppuVar9[0xe] = (undefined8 ****)pppuVar5;
    _objc_release(ppppuVar10);
    _objc_retain(unaff_x24);
    ppppuVar10 = pppppuVar9[0xf];
    pppppuVar9[0xf] = unaff_x24;
    _objc_release(ppppuVar10);
    _objc_retain(unaff_x22);
    ppppuVar10 = pppppuVar9[0x11];
    pppppuVar9[0x11] = unaff_x22;
    _objc_release(ppppuVar10);
    _objc_retain(unaff_x23);
    ppppuVar10 = pppppuVar9[0x10];
    pppppuVar9[0x10] = unaff_x23;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar12);
    ppppuVar10 = pppppuVar9[0x12];
    pppppuVar9[0x12] = ppppuVar12;
    _objc_release(ppppuVar10);
    _objc_retain(pppppuVar7);
    ppppuVar10 = pppppuVar9[0x13];
    pppppuVar9[0x13] = pppppuVar7;
    _objc_release(ppppuVar10);
    _objc_retain(param_2);
    ppppuVar10 = pppppuVar9[0x14];
    pppppuVar9[0x14] = param_2;
    _objc_release(ppppuVar10);
    _objc_retain(&stack0xfffffffffffffff0);
    ppppuVar10 = pppppuVar9[0x15];
    pppppuVar9[0x15] = (undefined8 ****)&stack0xfffffffffffffff0;
    _objc_release(ppppuVar10);
    _objc_retain(FUN_1067a52c8);
    ppppuVar10 = pppppuVar9[0x16];
    pppppuVar9[0x16] = (undefined8 ****)FUN_1067a52c8;
    _objc_release(ppppuVar10);
  }
  _objc_release(FUN_1067a52c8);
  _objc_release(&stack0xfffffffffffffff0);
  _objc_release(param_2);
  _objc_release(pppppuVar7);
  _objc_release(ppppuVar12);
  _objc_release(unaff_x22);
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(pppuVar5);
  _objc_release(ppppuVar11);
  _objc_release(pppuStack_d8);
  _objc_release(pppuStack_e0);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  _objc_release(pppuVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppppuVar13);
  return pppppuVar9;
}



/* Entry: 1067a52c8; end: 1067a543b;  */

undefined8 ***
FUN_1067a52c8(long param_1,undefined8 ***param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5,undefined8 **param_6,undefined8 **param_7,undefined8 **param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **unaff_x19;
  undefined8 **unaff_x20;
  undefined8 **unaff_x21;
  long *plVar12;
  undefined8 **unaff_x22;
  undefined8 **unaff_x23;
  undefined8 **unaff_x24;
  undefined8 **unaff_x29;
  undefined8 **unaff_x30;
  undefined8 **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined7 uStack_50;
  char cStack_49;
  undefined8 *puStack_48;
  
  ppuVar11 = &puStack_80;
  puStack_48 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ***)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(&puStack_60,pcVar6);
    puStack_80 = (undefined8 **)0x0;
    puStack_78 = (undefined8 **)0x0;
    puStack_70 = (undefined8 **)0x0;
    func_0x00010007e1e8(&puStack_80,&puStack_60,&puStack_48,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11093b7c0);
    puStack_68 = &puStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar10 = ppuVar11;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(puStack_60);
      ppuVar10 = ppuVar11;
      param_4 = param_3;
    }
  }
  pppuVar7 = param_2;
  _objc_release();
  if (*(undefined8 ***)PTR____stack_chk_guard_11034bdc0 == (undefined8 **)puStack_48) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = puStack_48;
  puVar4 = puStack_68;
  puVar3 = puStack_70;
  puVar2 = puStack_78;
  puVar1 = puStack_80;
  ppuVar11 = (undefined8 **)CONCAT17(cStack_49,uStack_50);
  _objc_retain(ppuVar10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(puStack_60);
  _objc_retain(puStack_58);
  _objc_retain(ppuVar11);
  _objc_retain(puVar5);
  _objc_retain(unaff_x24);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x22);
  _objc_retain(unaff_x21);
  _objc_retain(unaff_x20);
  _objc_retain(unaff_x19);
  _objc_retain(unaff_x29);
  _objc_retain(unaff_x30);
  puStack_f0 = PTR_PTR_1126f3148;
  pppuVar8 = &ppuStack_f8;
  ppuStack_f8 = pppuVar7;
  _objc_msgSendSuper2(pppuVar8,PTR_s_init_1125d9248);
  if (pppuVar8 != (undefined8 ***)0x0) {
    _objc_retain(ppuVar10);
    ppuVar9 = pppuVar8[1];
    pppuVar8[1] = ppuVar10;
    _objc_release(ppuVar9);
    _objc_retain(param_4);
    ppuVar9 = pppuVar8[2];
    pppuVar8[2] = param_4;
    _objc_release(ppuVar9);
    _objc_retain(param_5);
    ppuVar9 = pppuVar8[4];
    pppuVar8[4] = param_5;
    _objc_release(ppuVar9);
    _objc_retain(param_6);
    ppuVar9 = pppuVar8[5];
    pppuVar8[5] = param_6;
    _objc_release(ppuVar9);
    _objc_retain(param_7);
    ppuVar9 = pppuVar8[3];
    pppuVar8[3] = param_7;
    _objc_release(ppuVar9);
    _objc_retain(param_8);
    ppuVar9 = pppuVar8[8];
    pppuVar8[8] = param_8;
    _objc_release(ppuVar9);
    _objc_retain(puVar1);
    ppuVar9 = pppuVar8[6];
    pppuVar8[6] = (undefined8 **)puVar1;
    _objc_release(ppuVar9);
    _objc_retain(puVar2);
    ppuVar9 = pppuVar8[7];
    pppuVar8[7] = (undefined8 **)puVar2;
    _objc_release(ppuVar9);
    _objc_retain(puVar3);
    ppuVar9 = pppuVar8[9];
    pppuVar8[9] = (undefined8 **)puVar3;
    _objc_release(ppuVar9);
    _objc_retain(puVar4);
    ppuVar9 = pppuVar8[10];
    pppuVar8[10] = (undefined8 **)puVar4;
    _objc_release(ppuVar9);
    _objc_retain(puStack_60);
    ppuVar9 = pppuVar8[0xb];
    pppuVar8[0xb] = (undefined8 **)puStack_60;
    _objc_release(ppuVar9);
    _objc_retain(puStack_58);
    ppuVar9 = pppuVar8[0xc];
    pppuVar8[0xc] = (undefined8 **)puStack_58;
    _objc_release(ppuVar9);
    _objc_retain(ppuVar11);
    ppuVar9 = pppuVar8[0xd];
    pppuVar8[0xd] = ppuVar11;
    _objc_release(ppuVar9);
    _objc_retain(puVar5);
    ppuVar9 = pppuVar8[0xe];
    pppuVar8[0xe] = (undefined8 **)puVar5;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x24);
    ppuVar9 = pppuVar8[0xf];
    pppuVar8[0xf] = unaff_x24;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x22);
    ppuVar9 = pppuVar8[0x11];
    pppuVar8[0x11] = unaff_x22;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x23);
    ppuVar9 = pppuVar8[0x10];
    pppuVar8[0x10] = unaff_x23;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x21);
    ppuVar9 = pppuVar8[0x12];
    pppuVar8[0x12] = unaff_x21;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x20);
    ppuVar9 = pppuVar8[0x13];
    pppuVar8[0x13] = unaff_x20;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x19);
    ppuVar9 = pppuVar8[0x14];
    pppuVar8[0x14] = unaff_x19;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x29);
    ppuVar9 = pppuVar8[0x15];
    pppuVar8[0x15] = unaff_x29;
    _objc_release(ppuVar9);
    _objc_retain(unaff_x30);
    ppuVar9 = pppuVar8[0x16];
    pppuVar8[0x16] = unaff_x30;
    _objc_release(ppuVar9);
  }
  _objc_release(unaff_x30);
  _objc_release(unaff_x29);
  _objc_release(unaff_x19);
  _objc_release(unaff_x20);
  _objc_release(unaff_x21);
  _objc_release(unaff_x22);
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(puVar5);
  _objc_release(ppuVar11);
  _objc_release(puStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar10);
  return pppuVar8;
}



/* Entry: 1067a543c; end: 1067a58d3; -[SCPreviewSnapSender initWithConfiguration:conversationParser:discoverSender:userProfileIdProvider:storiesThumbnailCoordinator:circumstanceEngine:snapchatterFetcher:networkConnectivityMonitor:mediaDataIngestor:storiesMediaCoordinator:snapSender:pollsCreationManager:userTrackedBlizzardLogger:memoriesMediaSender:bitmojiMessageSender:premiumStoryShareSender:memoriesExperimentService:snapVideoFilterCoordinator:storyInviteSendingServices:sendToMassSnapNotificationService:spotlightAutoShareService:spotlightTileServices:] */

undefined8 *
FUN_1067a543c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126f3148;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 1067a58d4; end: 1067a5e57; -[SCPreviewSnapSender sendEphemeralMediaList:snapSenderDataModel:lensAssetsUploadInfo:lensMetadataFuture:mischiefs:isSendToPagePresentedFromPreview:isSnapEditor:] */

void FUN_1067a58d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined1 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_7;
  _objc_retain();
  func_0x000107d6f954();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_4;
  func_0x00010c258a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar12 * 8);
        uVar6 = uVar11;
        func_0x00010c075620();
        if ((int)uVar6 != 0) {
          puVar4 = PTR_PTR_1126c2698;
          _objc_alloc(PTR_PTR_1126c2698);
          uVar6 = uVar11;
          func_0x00010c11ac00(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80(uVar11);
          func_0x00010c03bfe0(puVar4);
          _objc_release(uVar6);
          lVar5 = lVar1;
          func_0x00010c269d40(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c284e20();
          _objc_release(lVar5);
          _objc_release(puVar4);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  lVar2 = param_4;
  func_0x00010c122ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  lVar9 = lVar2;
  func_0x000108605670(param_7,lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c122ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010bf529e0();
  lVar12 = lVar3;
  func_0x00010c0de0e0();
  _objc_release(lVar2);
  lVar2 = param_7;
  func_0x000107e3271c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c122e60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x000107e327a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x1067a5d60;
  puStack_190 = &UNK_11093b850;
  uStack_147 = param_9;
  lStack_188 = param_1;
  uStack_180 = param_3;
  lStack_178 = param_4;
  uStack_170 = param_5;
  uStack_168 = param_6;
  lStack_160 = param_7;
  lStack_158 = lVar3;
  lStack_150 = lVar12 + lVar13;
  uStack_148 = param_8;
  _objc_retain(lVar3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar11 = param_3;
  _objc_retain();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_1a8;
  func_0x00010c297260(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(lStack_158);
  _objc_release(lStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(lStack_178);
  _objc_release(uStack_180);
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar10 != (undefined **)0x0) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf50b20(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar13 = lVar3;
  func_0x0001086063f4(lVar3,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x50),0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f020(uVar6);
  _objc_release(lVar13);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067a5e58; end: 1067a6557; -[SCPreviewSnapSender _sendEphemeralMediaList:snapSenderDataModel:lensAssetsUploadInfo:lensMetadataFuture:arroyoConversationIds:mischiefs:destinationInfo:isSendToPagePresentedFromPreview:isSnapEditor:] */

void FUN_1067a5e58(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_228;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 auStack_178 [16];
  long lStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_7;
  puVar12 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  puVar1 = param_3;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = &uStack_1c0;
  puVar3 = auStack_f0;
  puVar10 = (undefined8 *)0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar16 = *plStack_1b0;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_1b0 != lVar16) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = param_4;
        func_0x00010c258a20(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_4;
        func_0x00010bf24f00(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_4;
        func_0x00010bfbada0();
        puVar11 = param_4;
        func_0x00010bfbaf40();
        puStack_258 = param_4;
        func_0x00010bfea5e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_260 = CONCAT71(CONCAT61(uStack_260._2_6_,(byte)param_10),(char)puVar11);
        param_6 = puVar10;
        puVar11 = param_8;
        func_0x00010bed7960(param_1);
        _objc_release(puStack_258);
        _objc_release(puVar10);
        _objc_release(puVar3);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar2 != puVar13);
      puVar13 = &uStack_1c0;
      puVar3 = auStack_f0;
      puVar10 = (undefined8 *)0x10;
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c258a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010846b590();
  if (((ulong)puVar15 & 1) == 0) {
    puVar15 = puVar2;
    func_0x00010bf529e0();
    puVar15 = (undefined8 *)(ulong)(puVar15 != (undefined8 *)0x0);
  }
  else {
    puVar15 = (undefined8 *)0x1;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  iVar14 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfbafc0();
  puVar1 = puVar15;
  if (iVar14 != 0) {
    iVar14 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c0792e0();
    if (iVar14 == 0) {
      puVar1 = (undefined8 *)0x1;
    }
  }
  func_0x00010bf529e0(param_7);
  puVar2 = param_4;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010bf529e0();
  iVar14 = (int)puVar15;
  if ((puVar2 == (undefined8 *)0x0 && iVar14 == 0) && (puVar4 == (undefined8 *)0x0))
  goto LAB_1067a63b0;
  lVar16 = param_5;
  func_0x00010c135b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
    puStack_228 = (undefined8 *)0x0;
  }
  else {
    puStack_228 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_f8 = lVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_3);
  puVar3 = param_3;
  FUN_1067ac43c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = param_4;
  puVar4 = param_4;
  puVar13 = param_3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = param_3;
    func_0x0001067aca80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_3);
    if (puVar3 != (undefined8 *)0x0) goto LAB_1067a6184;
    func_0x00010c0fb120(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258a20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_4;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_258 = (undefined8 *)CONCAT71(CONCAT61(puStack_258._2_6_,(byte)param_10),(char)puVar1);
    uStack_260 = param_9;
    puVar3 = param_7;
    puVar10 = puVar2;
    param_6 = puVar4;
    puVar11 = puVar9;
    puVar12 = puStack_228;
    func_0x00010be9f740(param_1);
    _objc_release(puVar9);
  }
  else {
    _objc_release();
LAB_1067a6184:
    puVar12 = (undefined8 *)(ulong)param_10._1_1_;
    func_0x00010c258a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined8 *)(ulong)(byte)param_10;
    puVar3 = puVar2;
    puVar10 = puVar4;
    func_0x00010bdcffc0(param_1);
    param_6 = puVar1;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar1 = param_7;
  func_0x00010bf529e0();
  uVar5 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  puVar2 = param_4;
  if (puVar1 == (undefined8 *)0x0) {
    uVar6 = uVar5;
    _objc_opt_respondsToSelector(uVar5,PTR_s_didPostStoryWithStoryTypes__1125bbaf8);
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) {
      uVar5 = param_1 + 0xb8;
      _objc_loadWeakRetained(uVar5);
      func_0x00010c258a20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010846ba3c();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010bf78540(uVar5);
      goto LAB_1067a6298;
    }
  }
  else {
    func_0x00010c258a20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010846ba3c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf7b520(uVar5);
LAB_1067a6298:
    _objc_release(puVar13);
    _objc_release(puVar2);
    _objc_release(uVar5);
    puVar13 = puVar15;
  }
  puVar1 = param_4;
  func_0x00010c258a20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d9740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = param_1 + 0xb8;
      _objc_loadWeakRetained();
      puVar13 = puVar2;
      func_0x00010bf784a0();
      _objc_release(lVar7);
    }
  }
  if (iVar14 != 0) {
    uVar5 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = param_1 + 0xb8;
      _objc_loadWeakRetained();
      puVar1 = param_4;
      func_0x00010c258a20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010bf78520(lVar7);
      _objc_release(puVar1);
      _objc_release(lVar7);
    }
  }
  _objc_release(puVar2);
  _objc_release(puStack_228);
  _objc_release(lVar16);
LAB_1067a63b0:
  if (iVar14 != 0) {
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    puVar1 = param_4;
    func_0x00010bf1ce40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = &uStack_200;
    puVar3 = auStack_178;
    puVar10 = (undefined8 *)0x10;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar16 = *plStack_1f0;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_1f0 != lVar16) {
            _objc_enumerationMutation(puVar1);
          }
          uVar8 = *(undefined8 *)(param_1 + 0x68);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b2e60();
          _objc_release(uVar8);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar2 != puVar13);
        puVar13 = &uStack_200;
        puVar3 = auStack_178;
        puVar10 = (undefined8 *)0x10;
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    _objc_retain(puVar3);
    _objc_retain(puVar10);
    _objc_retain(param_6);
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    _objc_retain(uStack_260);
    _objc_retain(puStack_258);
    puVar1 = puVar3;
    func_0x00010c08fa60();
    if (puVar1 != (undefined8 *)0x0) {
      puVar1 = puVar11;
      func_0x00010bf529e0();
      puVar2 = puVar12;
      func_0x00010bf529e0();
      if ((undefined *)((long)puVar1 + (long)puVar2) != (undefined *)0x0) {
        uVar8 = param_3[0xf];
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15b6e0();
        _objc_release(uVar8);
        _objc_loadWeakRetained(param_3 + 0x17);
        _objc_release();
        puVar1 = param_3 + 0x17;
        _objc_loadWeakRetained();
        puVar2 = puVar1;
        _objc_opt_respondsToSelector();
        _objc_release(puVar1);
        if (((ulong)puVar2 & 1) != 0) {
          param_3 = param_3 + 0x17;
          _objc_loadWeakRetained(param_3);
          func_0x00010bf7b400();
          _objc_release(param_3);
        }
      }
    }
    _objc_release(puStack_258);
    _objc_release(uStack_260);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(param_6);
    _objc_release(puVar10);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar13);
    return;
  }
  return;
}



/* Entry: 1067a6558; end: 1067a66eb; -[SCPreviewSnapSender sendBitmojiShareMessageWithChatMedia:userId:encodedOutfit:toRecipientUsernames:recipientUserIds:mischiefs:additionalText:completion:] */

void FUN_1067a6558(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_7;
    func_0x00010bf529e0();
    lVar2 = param_8;
    func_0x00010bf529e0();
    if (lVar1 + lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b6e0();
      _objc_release(uVar3);
      _objc_loadWeakRetained(param_1 + 0xb8);
      _objc_release();
      uVar4 = param_1 + 0xb8;
      _objc_loadWeakRetained();
      uVar5 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        param_1 = param_1 + 0xb8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf7b400();
        _objc_release(param_1);
      }
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067a66ec; end: 1067a6727; -[SCPreviewSnapSender sendChatMessageWithChatMedia:toRecipientUsernames:recipientUserIds:mischiefs:blizzardEventsForSuccessfulSend:additionalText:commonLoggingParams:completion:] */

void FUN_1067a66ec(void)

{
  func_0x00010c15b820();
  return;
}



/* Entry: 1067a6728; end: 1067a6ba7; -[SCPreviewSnapSender sendChatMessageWithChatMedia:toRecipientUsernames:recipientUserIds:massSnapRecipients:mischiefs:blizzardEventsForSuccessfulSend:additionalText:commonLoggingParams:provenance:timing:completion:] */

void FUN_1067a6728(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar1 = param_5;
  func_0x00010bf529e0();
  lVar2 = param_7;
  func_0x00010bf529e0();
  lVar3 = param_6;
  func_0x00010bf529e0();
  if (lVar2 + lVar1 + lVar3 != 0) {
    lVar1 = param_6;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = param_5;
      func_0x00010bf529e0();
      lVar2 = param_7;
      func_0x00010bf529e0();
      if (lVar1 + lVar2 != 0) goto LAB_1067a6a38;
    }
    lVar1 = param_7;
    func_0x000108605534();
    lVar2 = param_5;
    func_0x00010bf529e0();
    lVar3 = param_6;
    func_0x00010bf529e0();
    lVar4 = param_7;
    func_0x000107e3271c();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x000107e327a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_6;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c246920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_6);
      _objc_retain(param_8);
      _objc_retain(param_9);
      _objc_retain(param_10);
      _objc_retain(param_11);
      _objc_retain(param_12);
      uVar11 = param_13;
      _objc_retain(param_13);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(param_13);
      _objc_release(param_12);
      _objc_release(param_11);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_6);
      puVar8 = param_3;
    }
    else {
      puVar8 = PTR____NSArray0__struct_11034ab48;
      func_0x0001086063f4(PTR____NSArray0__struct_11034ab48,lVar2 + lVar1 + lVar3,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9ebe0(param_1);
    }
    _objc_release(puVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
LAB_1067a6a38:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1067a6ba8; end: 1067a6e07; -[SCPreviewSnapSender _sendChatMessageWithChatMedia:conversationIds:massSnapRecipients:blizzardEventsForSuccessfulSend:additionalText:commonLoggingParams:destinationInfo:provenance:timing:completion:] */

void FUN_1067a6ba8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if ((lVar2 != 0) || (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bfbafe0();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bfbaa60();
      if ((uVar3 & 1) == 0) {
        func_0x00010bfbafc0();
      }
    }
    uVar4 = param_8;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bddd060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (param_7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar2;
      func_0x000108604db4();
      _objc_retainAutoreleasedReturnValue();
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bfbafc0();
    if (iVar1 != 0) {
      func_0x00010c0792e0(*(undefined8 *)(param_1 + 8));
    }
    func_0x00010be9e8e0(param_1);
    _objc_loadWeakRetained(param_1 + 0xb8);
    _objc_release();
    uVar3 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    uVar6 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar6 & 1) != 0) {
      param_1 = param_1 + 0xb8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf7b400();
      _objc_release(param_1);
    }
    _objc_release(lVar7);
    _objc_release(lVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067a6e08; end: 1067a70f3; -[SCPreviewSnapSender sendAdShareMedia:toRecipientUsernames:recipientUserIds:mischiefs:loggingParameters:sendToSessionId:additionalText:] */

void FUN_1067a6e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_6;
  func_0x000108605534();
  lVar2 = param_5;
  func_0x00010bf529e0();
  lVar3 = param_6;
  func_0x000107e3271c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar4 = param_5;
  func_0x000107e327a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar5 = lVar3;
  func_0x00010bf09f80(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1067a7010;
  puStack_98 = &UNK_11093b8b0;
  uStack_70 = param_9;
  lStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_7;
  uStack_78 = param_8;
  lStack_68 = lVar2 + lVar1;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar8 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar7,param_2,&puStack_b0,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 1067a70f4; end: 1067a72a3; -[SCPreviewSnapSender _sendAdShareMedia:conversationIds:loggingParameters:sendToSessionId:additionalText:destinationInfo:] */

void FUN_1067a70f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar4 = param_4;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bddd060(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (param_7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x000108604db4(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be9e760(param_1);
    _objc_loadWeakRetained(param_1 + 0xb8);
    _objc_release();
    uVar2 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      param_1 = param_1 + 0xb8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf7b440();
      _objc_release(param_1);
    }
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067a72a4; end: 1067a73ef; -[SCPreviewSnapSender _sendAdShareMedia:conversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:] */

void FUN_1067a72a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cdef0;
    _objc_alloc(PTR_PTR_1126cdef0);
    uVar3 = param_3;
    FUN_1067ae6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028f60(puVar2,param_2,param_3,uVar3,param_5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec2820(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b500(uVar3,param_2,puVar2,param_4,param_6,param_7,PTR___dispatch_main_q_11034be20
                        ,param_1);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


