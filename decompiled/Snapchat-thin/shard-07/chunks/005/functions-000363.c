/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10569b084; end: 10569b0bb; -[SCUcoCarouselConfigServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b084(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272780c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727808);
  return;
}



/* Entry: 10569b0bc; end: 10569b1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b0bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272781c;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_1 + _DAT_112727834;
    _objc_loadWeakRetained(lVar5);
    lVar2 = lVar5;
    func_0x00010c08f040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar2 = param_1 + _DAT_112727838;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c097cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bed0b60(param_1,param_2,lVar1,lVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10569b1d8; end: 10569b1f3;  */

void FUN_10569b1d8(void)

{
  _objc_opt_new(PTR_PTR_1126bcc50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10569b1f4; end: 10569b287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b1f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126bcc58;
  _objc_alloc(PTR_PTR_1126bcc58);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28) + (long)_DAT_112727844;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010c096720(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041bc0(puVar2,param_2,uVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10569b288; end: 10569b427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126bcc60;
    _objc_alloc();
    lVar4 = lVar3 + _DAT_112727820;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = lVar3 + _DAT_112727858;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    lVar10 = lVar3 + _DAT_112727844;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c096720();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3 + _DAT_112727860;
    _objc_loadWeakRetained();
    func_0x00010c04ea20(puVar14,param_2,lVar6,uVar13,lVar9,0,uVar1,uVar2,uVar15,lVar11,lVar12);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(0);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10569b428; end: 10569b46f;  */

void FUN_10569b428(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10569b470; end: 10569b477;  */

void FUN_10569b470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10569b478; end: 10569b587; -[SCUcoServicesEntryPoint _ucoRemoteAssetsLoaderWithUserSession:dataFetcher:lensUserProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126bbab0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c023840();
  _objc_release(param_5);
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126bcc80;
  _objc_alloc();
  func_0x00010c03df40();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bcc88;
  _objc_alloc();
  func_0x00010c03f6e0();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = puVar1 + 0x28;
    _objc_loadWeakRetained();
    if (puVar1 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar1 + _DAT_112727828;
      _objc_loadWeakRetained(puVar5);
    }
    puVar2 = puVar5;
    func_0x00010c097b40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0b79c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10569b588; end: 10569b6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b588(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112727828;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c097b40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b79c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10569b6f4; end: 10569b893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b6f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar8 = lVar1;
    func_0x00010bdd70a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f60(uVar7,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    uVar2 = uVar7;
    func_0x00010c0b8600(uVar7,param_2,&PTR___NSConcreteGlobalBlock_1108a6f18);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_112727840;
    _objc_loadWeakRetained(lVar8);
    lVar3 = lVar8;
    func_0x00010c0951e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar8);
    lVar8 = lVar1 + _DAT_112727820;
    _objc_loadWeakRetained();
    lVar3 = lVar8;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c23e2e0();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar8);
    lVar3 = lVar4;
    if ((int)lVar6 == 0) {
      func_0x00010bf58560(lVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf58580();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar8 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(uVar2);
    _objc_release(uVar7);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10569b894; end: 10569b95b;  */

void FUN_10569b894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10569b95c; end: 10569bb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569b95c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = lVar1 + _DAT_112727834;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c08f060();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112727848;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf89160();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_11272783c;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bf59c40(lVar2,param_2,uVar13,lVar5,lVar7,lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar10 != 0) {
      puVar11 = PTR_PTR_1126bccb0;
      _objc_alloc(PTR_PTR_1126bccb0);
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c058000(puVar11,param_2,lVar10,uVar13);
      _objc_release(uVar13);
      puVar14 = PTR_PTR_1126bccb8;
      _objc_alloc(PTR_PTR_1126bccb8);
      puVar12 = PTR_PTR_1126aeea8;
      _objc_opt_new(PTR_PTR_1126aeea8);
      func_0x00010c051cc0(puVar14,param_2,puVar11,puVar12);
      _objc_release(lVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      goto LAB_10569bb20;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_10569bb20:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10569bb4c; end: 10569bc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569bb4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = lVar1 + _DAT_11272782c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c27e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf59c60(uVar5,param_2,uVar6,uVar7,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 10569bc5c; end: 10569bd0f; -[SCUcoServicesEntryPoint _bundledLensesMetadataStore] */

void FUN_10569bc5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010042a170();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf24d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10569bd10;
  puStack_30 = &UNK_1108a6dc8;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10569bd10; end: 10569be3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569bd10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bccc0;
  func_0x00010bdf9220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bccc0;
  func_0x00010bed0a80(PTR_PTR_1126bccc0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bccc8;
  _objc_alloc();
  func_0x00010bff9a20();
  puVar4 = PTR_PTR_1126bccc8;
  _objc_alloc();
  func_0x00010bff9a20();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_alloc();
  func_0x00010bff9b60();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
        ___stack_chk_fail();
        _objc_storeStrong(puVar1 + _DAT_112727870,0);
        _objc_storeStrong(puVar1 + _DAT_11272786c,0);
        _objc_storeStrong(puVar1 + _DAT_112727868,0);
        _objc_storeStrong(puVar1 + _DAT_112727864,0);
        _objc_destroyWeak(puVar1 + _DAT_112727810);
        _objc_destroyWeak(puVar1 + _DAT_112727860);
        _objc_destroyWeak(puVar1 + _DAT_11272785c);
        _objc_destroyWeak(puVar1 + _DAT_112727818);
        _objc_destroyWeak(puVar1 + _DAT_112727814);
        _objc_destroyWeak(puVar1 + _DAT_112727858);
        _objc_destroyWeak(puVar1 + _DAT_112727854);
        _objc_destroyWeak(puVar1 + _DAT_112727850);
        _objc_destroyWeak(puVar1 + _DAT_11272784c);
        _objc_destroyWeak(puVar1 + _DAT_112727848);
        _objc_destroyWeak(puVar1 + _DAT_112727844);
        _objc_destroyWeak(puVar1 + _DAT_112727840);
        _objc_destroyWeak(puVar1 + _DAT_11272783c);
        _objc_destroyWeak(puVar1 + _DAT_112727838);
        _objc_destroyWeak(puVar1 + _DAT_112727834);
        _objc_destroyWeak(puVar1 + _DAT_112727830);
        _objc_destroyWeak(puVar1 + _DAT_11272782c);
        _objc_destroyWeak(puVar1 + _DAT_112727828);
        _objc_destroyWeak(puVar1 + _DAT_112727824);
        _objc_destroyWeak(puVar1 + _DAT_112727820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11272781c);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10569be40; end: 10569beaf; +[SCUcoServicesEntryPoint _defaultBundleLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569be40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f77898;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      _objc_storeStrong(puVar1 + _DAT_112727870,0);
      _objc_storeStrong(puVar1 + _DAT_11272786c,0);
      _objc_storeStrong(puVar1 + _DAT_112727868,0);
      _objc_storeStrong(puVar1 + _DAT_112727864,0);
      _objc_destroyWeak(puVar1 + _DAT_112727810);
      _objc_destroyWeak(puVar1 + _DAT_112727860);
      _objc_destroyWeak(puVar1 + _DAT_11272785c);
      _objc_destroyWeak(puVar1 + _DAT_112727818);
      _objc_destroyWeak(puVar1 + _DAT_112727814);
      _objc_destroyWeak(puVar1 + _DAT_112727858);
      _objc_destroyWeak(puVar1 + _DAT_112727854);
      _objc_destroyWeak(puVar1 + _DAT_112727850);
      _objc_destroyWeak(puVar1 + _DAT_11272784c);
      _objc_destroyWeak(puVar1 + _DAT_112727848);
      _objc_destroyWeak(puVar1 + _DAT_112727844);
      _objc_destroyWeak(puVar1 + _DAT_112727840);
      _objc_destroyWeak(puVar1 + _DAT_11272783c);
      _objc_destroyWeak(puVar1 + _DAT_112727838);
      _objc_destroyWeak(puVar1 + _DAT_112727834);
      _objc_destroyWeak(puVar1 + _DAT_112727830);
      _objc_destroyWeak(puVar1 + _DAT_11272782c);
      _objc_destroyWeak(puVar1 + _DAT_112727828);
      _objc_destroyWeak(puVar1 + _DAT_112727824);
      _objc_destroyWeak(puVar1 + _DAT_112727820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11272781c);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10569beb0; end: 10569bf3b; +[SCUcoServicesEntryPoint _ucoBundledLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569beb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f778b8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f778d8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f778f8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_112727870,0);
  _objc_storeStrong(puVar1 + _DAT_11272786c,0);
  _objc_storeStrong(puVar1 + _DAT_112727868,0);
  _objc_storeStrong(puVar1 + _DAT_112727864,0);
  _objc_destroyWeak(puVar1 + _DAT_112727810);
  _objc_destroyWeak(puVar1 + _DAT_112727860);
  _objc_destroyWeak(puVar1 + _DAT_11272785c);
  _objc_destroyWeak(puVar1 + _DAT_112727818);
  _objc_destroyWeak(puVar1 + _DAT_112727814);
  _objc_destroyWeak(puVar1 + _DAT_112727858);
  _objc_destroyWeak(puVar1 + _DAT_112727854);
  _objc_destroyWeak(puVar1 + _DAT_112727850);
  _objc_destroyWeak(puVar1 + _DAT_11272784c);
  _objc_destroyWeak(puVar1 + _DAT_112727848);
  _objc_destroyWeak(puVar1 + _DAT_112727844);
  _objc_destroyWeak(puVar1 + _DAT_112727840);
  _objc_destroyWeak(puVar1 + _DAT_11272783c);
  _objc_destroyWeak(puVar1 + _DAT_112727838);
  _objc_destroyWeak(puVar1 + _DAT_112727834);
  _objc_destroyWeak(puVar1 + _DAT_112727830);
  _objc_destroyWeak(puVar1 + _DAT_11272782c);
  _objc_destroyWeak(puVar1 + _DAT_112727828);
  _objc_destroyWeak(puVar1 + _DAT_112727824);
  _objc_destroyWeak(puVar1 + _DAT_112727820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11272781c);
  return;
}



/* Entry: 10569bf3c; end: 10569c097; -[SCUcoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569bf3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727870,0);
  _objc_storeStrong(param_1 + _DAT_11272786c,0);
  _objc_storeStrong(param_1 + _DAT_112727868,0);
  _objc_storeStrong(param_1 + _DAT_112727864,0);
  _objc_destroyWeak(param_1 + _DAT_112727810);
  _objc_destroyWeak(param_1 + _DAT_112727860);
  _objc_destroyWeak(param_1 + _DAT_11272785c);
  _objc_destroyWeak(param_1 + _DAT_112727818);
  _objc_destroyWeak(param_1 + _DAT_112727814);
  _objc_destroyWeak(param_1 + _DAT_112727858);
  _objc_destroyWeak(param_1 + _DAT_112727854);
  _objc_destroyWeak(param_1 + _DAT_112727850);
  _objc_destroyWeak(param_1 + _DAT_11272784c);
  _objc_destroyWeak(param_1 + _DAT_112727848);
  _objc_destroyWeak(param_1 + _DAT_112727844);
  _objc_destroyWeak(param_1 + _DAT_112727840);
  _objc_destroyWeak(param_1 + _DAT_11272783c);
  _objc_destroyWeak(param_1 + _DAT_112727838);
  _objc_destroyWeak(param_1 + _DAT_112727834);
  _objc_destroyWeak(param_1 + _DAT_112727830);
  _objc_destroyWeak(param_1 + _DAT_11272782c);
  _objc_destroyWeak(param_1 + _DAT_112727828);
  _objc_destroyWeak(param_1 + _DAT_112727824);
  _objc_destroyWeak(param_1 + _DAT_112727820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272781c);
  return;
}



/* Entry: 10569c098; end: 10569c0df; -[SCPreviewCameraSourceOverlayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569c098(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727874,0);
  _objc_destroyWeak(param_1 + _DAT_11272787c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727878);
  return;
}



/* Entry: 10569c0e0; end: 10569c0eb; -[SCPreviewCameraSourceOverlayProviderImpl .cxx_destruct] */

void FUN_10569c0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10569c0ec; end: 10569c12b;  */

void FUN_10569c0ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be77100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10569c12c; end: 10569c153; -[SCPreviewABProviderImpl configProvider] */

void FUN_10569c12c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10569c154; end: 10569c163; -[SCPreviewABProviderImpl consistentMuteEnabled] */

void FUN_10569c154(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df5958);
  return;
}



/* Entry: 10569c164; end: 10569c173; -[SCPreviewABProviderImpl respectMuteSwitchInPreviewEnabled] */

void FUN_10569c164(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df5978);
  return;
}



/* Entry: 10569c174; end: 10569c183; -[SCPreviewABProviderImpl convertMemoriesSnapToSnapDocEnabled] */

void FUN_10569c174(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df5a58);
  return;
}



/* Entry: 10569c184; end: 10569c18b; -[SCPreviewABProviderImpl snapWidth] */

undefined8 FUN_10569c184(void)

{
  return 0x19e;
}



/* Entry: 10569c18c; end: 10569c20f; -[SCPreviewABProviderImpl shouldUpdateSendToButtonTitle] */

bool FUN_10569c18c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = param_1;
  func_0x00010becf920();
  if (lVar2 == 2) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c244ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d42e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    bVar1 = uVar5 < 0xf;
  }
  else {
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 10569c210; end: 10569c23f; -[SCPreviewABProviderImpl isMemoriesMultiSelectThumbnailPreviewEnabled] */

bool FUN_10569c210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110df59b8,0,0);
  return (int)uVar1 == 1;
}



/* Entry: 10569c240; end: 10569c247; -[SCPreviewABProviderImpl isSkipCameraRollVideoTranscodingEnabled] */

undefined8 FUN_10569c240(void)

{
  return 0;
}



/* Entry: 10569c248; end: 10569c257; -[SCPreviewABProviderImpl storiesTrayRefreshEnabled] */

void FUN_10569c248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df59d8);
  return;
}



/* Entry: 10569c258; end: 10569c267; -[SCPreviewABProviderImpl storiesQuickPostTrayRefreshEnabled] */

void FUN_10569c258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df5a18);
  return;
}



/* Entry: 10569c268; end: 10569c27f; -[SCPreviewABProviderImpl deferQuickPostSendFlowEventEnabled] */

void FUN_10569c268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5a38,1,0);
  return;
}



/* Entry: 10569c280; end: 10569c297; -[SCPreviewABProviderImpl previewLensAttributionFallbackEnabled] */

void FUN_10569c280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5f58,1,0);
  return;
}



/* Entry: 10569c298; end: 10569c2af; -[SCPreviewABProviderImpl previewPlusPostSaveUpsellFromDialogEnabled] */

void FUN_10569c298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5ed8,0,0);
  return;
}



/* Entry: 10569c2b0; end: 10569c323; -[SCPreviewABProviderImpl storiesOneTapQuickPostEnabled] */

undefined8 FUN_10569c2b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc4a0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110df5ab8,0,0);
    return uVar2;
  }
  return 0;
}



/* Entry: 10569c324; end: 10569c33b; -[SCPreviewABProviderImpl storiesQuickPostRecencyFixEnabled] */

void FUN_10569c324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5ad8,0,0);
  return;
}



/* Entry: 10569c33c; end: 10569c353; -[SCPreviewABProviderImpl operaScaleFillVerticalMediaEnabled] */

void FUN_10569c33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5b58,0,0);
  return;
}



/* Entry: 10569c354; end: 10569c36b; -[SCPreviewABProviderImpl publicStoryOneTapQuickPostEnabled] */

void FUN_10569c354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5af8,0,0);
  return;
}



/* Entry: 10569c36c; end: 10569c387; -[SCPreviewABProviderImpl filtersCTItemEnabled] */

bool FUN_10569c36c(long param_1)

{
  func_0x00010bfaec80();
  return param_1 != 0;
}



/* Entry: 10569c388; end: 10569c38f; -[SCPreviewABProviderImpl filtersCTItemSave] */

void FUN_10569c388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__ctItemSaveForToolType__11255b288,0);
  return;
}



/* Entry: 10569c390; end: 10569c3cf; -[SCPreviewABProviderImpl clearStaleLensIdCaptureFixEnabled] */

undefined8 FUN_10569c390(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3c1a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10569c3d0; end: 10569c3d7; -[SCPreviewABProviderImpl loadAutoCaptionVideoCacheUIThread] */

undefined8 FUN_10569c3d0(void)

{
  return 1;
}



/* Entry: 10569c3d8; end: 10569c3ef; -[SCPreviewABProviderImpl memoriesPostSaveIconEnabled] */

void FUN_10569c3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5e18,0,0);
  return;
}



/* Entry: 10569c3f0; end: 10569c42f; -[SCPreviewABProviderImpl prefetchRadius] */

ulong FUN_10569c3f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010befda20();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 10569c430; end: 10569c4eb; -[SCPreviewABProviderImpl _prefetchConfig] */

void FUN_10569c430(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110df5e58,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bcce8;
    _objc_alloc(PTR_PTR_1126bcce8);
    func_0x00010c008360();
    _objc_retain(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10569c4ec; end: 10569c54b; -[SCPreviewABProviderImpl _treatmentForSendToUpdate] */

undefined8 FUN_10569c4ec(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1498;
  func_0x00010c2827c0();
  if (ppuVar1 == (undefined **)0x3) {
    uVar2 = 2;
  }
  else if (ppuVar1 == (undefined **)0x2) {
    uVar2 = 1;
  }
  else {
    if (ppuVar1 == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde1bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cofTreatmentForSendToUpdate_112556088);
      return param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10569c54c; end: 10569c5c3; -[SCPreviewABProviderImpl _cofTreatmentForSendToUpdate] */

ulong FUN_10569c54c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110df5998,
                      &PTR____CFConstantStringClassReference_110dafd38,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110df5f98);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    uVar2 = 2;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10569c5c4; end: 10569c637; -[SCPreviewABProviderImpl _enabledForStatus:key:] */

undefined8 FUN_10569c5c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_3 == 2) {
    uVar1 = 0;
  }
  else if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440(uVar1,param_2,param_4,0,0);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10569c638; end: 10569c693; -[SCPreviewABProviderImpl _ctItemSaveForToolType:] */

ulong FUN_10569c638(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  if (param_3 == 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1498;
    func_0x00010c2827c0();
    if ((long)ppuVar2 - 1U < 3) {
      return (long)ppuVar2 - 1U;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110df5b98;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,ppuVar2,0,0);
  return (long)(int)uVar1;
}



/* Entry: 10569c694; end: 10569c6a3; -[SCPreviewABProviderImpl ucoStackingLimitationsRemoved] */

void FUN_10569c694(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df5a78);
  return;
}



/* Entry: 10569c6a4; end: 10569c713; -[SCPreviewABProviderImpl isCTLensToolbarEnabled] */

bool FUN_10569c6a4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf5cf20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10569c714; end: 10569c80b; -[SCPreviewABProviderImpl ctLensToolConfig] */

void FUN_10569c714(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110df5a98,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126bccf0;
      _objc_alloc(PTR_PTR_1126bccf0);
      lVar4 = lVar1;
      func_0x00010c296d80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lStack_48 = 0;
      func_0x00010c008360(puVar3,param_2,lVar4,&lStack_48);
      lVar2 = lStack_48;
      _objc_retain(lStack_48);
      _objc_release(lVar4);
      puVar5 = puVar3;
      if (lVar2 != 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10569c80c; end: 10569c8ff; -[SCPreviewABProviderImpl toggleToolLenses] */

void FUN_10569c80c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110df5b18,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126bccf8;
      _objc_alloc(PTR_PTR_1126bccf8);
      lVar4 = lVar1;
      func_0x00010c296d80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lStack_48 = 0;
      func_0x00010c008360(puVar3,param_2,lVar4,&lStack_48);
      lVar2 = lStack_48;
      _objc_release(lVar4);
      puVar5 = (undefined *)0x0;
      if (lVar2 == 0) {
        puVar5 = puVar3;
        func_0x00010c273c60(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10569c900; end: 10569c907; -[SCPreviewABProviderImpl maxVideoDurationStrategy] */

undefined8 FUN_10569c900(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  lVar2 = lRam0000000113730a68;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_109127e78;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar3;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113730a68,&puStack_48);
    uVar4 = uStack_28;
  }
  uVar1 = uRam0000000113730a60;
  _objc_release(uVar4);
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 10569c908; end: 10569c947; -[SCPreviewABProviderImpl maxVideoDurationInSec] */

undefined8 FUN_10569c908(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000109127dd4();
  uVar3 = 0x4072c00000000000;
  if (lVar1 != 2) {
    uVar3 = 0x405e000000000000;
  }
  uVar2 = 0x4066800000000000;
  if (lVar1 != 1) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 10569c948; end: 10569c957; -[SCPreviewABProviderImpl isCTLensToolRemoteInferenceEnabled] */

void FUN_10569c948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enabledForStatus_key__11255fe50,0,
             &PTR____CFConstantStringClassReference_110df5b38);
  return;
}



/* Entry: 10569c958; end: 10569c96f; -[SCPreviewABProviderImpl isUserEligibleForAgeGatedFeatures] */

void FUN_10569c958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5b78,1,0);
  return;
}



/* Entry: 10569c970; end: 10569c987; -[SCPreviewABProviderImpl isUCOFilterUIMaxZIndexEnabled] */

void FUN_10569c970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5bb8,1,0);
  return;
}



/* Entry: 10569c988; end: 10569c9c3; -[SCPreviewABProviderImpl isAiModeEnabled] */

undefined8 FUN_10569c988(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf8f3a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569c9c4; end: 10569ca93; -[SCPreviewABProviderImpl lensIdForAiMode] */

void FUN_10569c9c4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110daafd8);
  ppuVar1 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    lVar2 = param_1;
    func_0x00010bdc9a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010befed80();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 < 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110df5bf8;
    }
    else {
      func_0x00010bdc9a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010befed80();
      func_0x00010c0df7c0(ppuVar1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10569ca94; end: 10569caaf; -[SCPreviewABProviderImpl lensIdForAiRemix] */

void FUN_10569ca94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110df5c18,
             &PTR____CFConstantStringClassReference_110df5c38,0);
  return;
}



/* Entry: 10569cab0; end: 10569cac7; -[SCPreviewABProviderImpl isAiRemixEmptyTextInputEnabled] */

void FUN_10569cab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5c58,0,0);
  return;
}



/* Entry: 10569cac8; end: 10569cadf; -[SCPreviewABProviderImpl isAiRemixV2InputBarEnabled] */

void FUN_10569cac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5c78,0,0);
  return;
}



/* Entry: 10569cae0; end: 10569caf7; -[SCPreviewABProviderImpl isAiRemixViewportTapGenerateDisabled] */

void FUN_10569cae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5c98,0,0);
  return;
}



/* Entry: 10569caf8; end: 10569cb0f; -[SCPreviewABProviderImpl isAiModeV2InputBarEnabled] */

void FUN_10569caf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5cb8,0,0);
  return;
}



/* Entry: 10569cb10; end: 10569cb27; -[SCPreviewABProviderImpl isAiModeTrayUnderPreviewEnabled] */

void FUN_10569cb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5cd8,0,0);
  return;
}



/* Entry: 10569cb28; end: 10569cb3f; -[SCPreviewABProviderImpl isAiModeStartWithTrendingListOpenEnabled] */

void FUN_10569cb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5cf8,0,0);
  return;
}



/* Entry: 10569cb40; end: 10569cb57; -[SCPreviewABProviderImpl isAiModeGenerateOnTapOnVisualPromptEnabled] */

void FUN_10569cb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5d18,0,0);
  return;
}



/* Entry: 10569cb58; end: 10569cb6f; -[SCPreviewABProviderImpl isMentionEnabledForAiMode] */

void FUN_10569cb58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5d38,0,0);
  return;
}



/* Entry: 10569cb70; end: 10569cb87; -[SCPreviewABProviderImpl isMentionEnabledForAiRemix] */

void FUN_10569cb70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5d58,0,0);
  return;
}



/* Entry: 10569cb88; end: 10569cb9f; -[SCPreviewABProviderImpl isMentionPinCurrentUserEnabledForAiRemix] */

void FUN_10569cb88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5d78,0,0);
  return;
}



/* Entry: 10569cba0; end: 10569cbdb; -[SCPreviewABProviderImpl isAiModeEnabledOnReplyCamera] */

undefined8 FUN_10569cba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf904c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569cbdc; end: 10569cc17; -[SCPreviewABProviderImpl isAiModeEnabledForMemoriesImport] */

undefined8 FUN_10569cbdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf904a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569cc18; end: 10569cc53; -[SCPreviewABProviderImpl isAiModeEnabledForCrImport] */

undefined8 FUN_10569cc18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf90480();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569cc54; end: 10569cca3; -[SCPreviewABProviderImpl aiModeAspectRatioThreshold] */

float FUN_10569cc54(float param_1,undefined8 param_2)

{
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ad00();
  _objc_release(param_2);
  if (param_1 <= 0.0) {
    param_1 = 0.76;
  }
  return param_1;
}



/* Entry: 10569cca4; end: 10569ccdf; -[SCPreviewABProviderImpl aiModeFaceDetectionEnabled] */

uint FUN_10569cca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf7fee0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10569cce0; end: 10569ccf7; -[SCPreviewABProviderImpl watermarkEnabledForAIMode] */

void FUN_10569cce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5d98,0,0);
  return;
}



/* Entry: 10569ccf8; end: 10569cd33; -[SCPreviewABProviderImpl isAIModeLensShareable] */

undefined8 FUN_10569ccf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c076800();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569cd34; end: 10569cd6f; -[SCPreviewABProviderImpl isAIModeCheckSubscriptionNatively] */

undefined8 FUN_10569cd34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf38600();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569cd70; end: 10569cdab; -[SCPreviewABProviderImpl shouldApplyCaptionInPreviewFromAIMode] */

undefined8 FUN_10569cd70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef74e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10569cdac; end: 10569ce2b; -[SCPreviewABProviderImpl shareableLensId] */

void FUN_10569cdac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bdc9a00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c22b540();
  _objc_release(param_1);
  if (lVar1 < 1) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10569ce2c; end: 10569ce43; -[SCPreviewABProviderImpl plusShowLightningSnapsLast] */

void FUN_10569ce2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5fb8,0,0);
  return;
}



/* Entry: 10569ce44; end: 10569ce5b; -[SCPreviewABProviderImpl shouldSaveImageSnapAsSnapDoc] */

void FUN_10569ce44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5dd8,0,0);
  return;
}



/* Entry: 10569ce5c; end: 10569ce73; -[SCPreviewABProviderImpl shouldSaveVideoSnapAsSnapDoc] */

void FUN_10569ce5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5df8,0,0);
  return;
}



/* Entry: 10569ce74; end: 10569ce7f; -[SCPreviewABProviderImpl retouchFilterId] */

undefined ** FUN_10569ce74(void)

{
  return &PTR____CFConstantStringClassReference_110df5938;
}



/* Entry: 10569ce80; end: 10569ce8b; -[SCPreviewABProviderImpl repostLensId] */

undefined ** FUN_10569ce80(void)

{
  return &PTR____CFConstantStringClassReference_110df5918;
}



/* Entry: 10569ce8c; end: 10569cf13; -[SCPreviewABProviderImpl _aiModeConfig] */

void FUN_10569ce8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10569cf14;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bd6b8 != -1) {
    func_0x00010002a2fc(0x1136bd6b8,&puStack_48);
  }
  uVar1 = uRam00000001136bd6b0;
  _objc_retain(uRam00000001136bd6b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10569cf14; end: 10569cfe3;  */

void FUN_10569cf14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110df5bd8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bcd00;
  _objc_alloc();
  func_0x00010c008360();
  _objc_retain(0);
  _objc_retain(puVar3);
  uVar1 = puRam00000001136bd6b0;
  puRam00000001136bd6b0 = puVar3;
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(uVar2);
  return;
}



/* Entry: 10569cfe4; end: 10569cffb; -[SCPreviewABProviderImpl quickPostPreselectRefreshEnabled] */

void FUN_10569cfe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5db8,0,0);
  return;
}



/* Entry: 10569cffc; end: 10569d003; -[SCPreviewABProviderImpl previewToolbarIconStyle] */

undefined8 FUN_10569cffc(void)

{
  return 2;
}



/* Entry: 10569d004; end: 10569d01b; -[SCPreviewABProviderImpl shouldShowSaveButtonTitle] */

void FUN_10569d004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5e38,0,0);
  return;
}



/* Entry: 10569d01c; end: 10569d033; -[SCPreviewABProviderImpl allowUserInteractionsWhileSaving] */

void FUN_10569d01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5e78,0,0);
  return;
}



/* Entry: 10569d034; end: 10569d04b; -[SCPreviewABProviderImpl imageFilterExportAtFullResolution] */

void FUN_10569d034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5e98,0,0);
  return;
}



/* Entry: 10569d04c; end: 10569d063; -[SCPreviewABProviderImpl embedOverlayForSnapSaverImageProviderEnabled] */

void FUN_10569d04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5eb8,1,0);
  return;
}



/* Entry: 10569d064; end: 10569d0ab; -[SCPreviewABProviderImpl venueLensId] */

void FUN_10569d064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10569d0ac; end: 10569d0c3; -[SCPreviewABProviderImpl enableVenueLensForMultiSnap] */

void FUN_10569d0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5ef8,0,0);
  return;
}



/* Entry: 10569d0c4; end: 10569d0db; -[SCPreviewABProviderImpl isAIModeGenerationAttemptMigrationEnabled] */

void FUN_10569d0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5f18,0,0);
  return;
}



/* Entry: 10569d0dc; end: 10569d0f3; -[SCPreviewABProviderImpl isPreviewAIModeAiCreationFlowEnabled] */

void FUN_10569d0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df5f38,0,0);
  return;
}



/* Entry: 10569d0f4; end: 10569d2f3; -[SCPreviewABProviderImpl createPostStoryPolicyForConfig:] */

uint FUN_10569d0f4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf11d00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  ppuVar5 = param_3;
  ppuVar6 = param_3;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = param_3;
    func_0x00010bf11d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar1);
    if (ppuVar2 != (undefined **)0x0) goto LAB_10569d164;
    ppuVar2 = param_3;
    func_0x00010c23a3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110df5fd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    ppuVar3 = param_3;
    func_0x00010c23a400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bdd50e0(param_1,param_2,ppuVar1,ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if ((int)uVar4 == 0) goto LAB_10569d210;
    func_0x00010bf11ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110df5ff8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    func_0x00010bf11cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd50e0(param_1,param_2,ppuVar1,ppuVar6);
    iVar7 = (int)param_1;
    iVar9 = 0;
  }
  else {
    _objc_release(ppuVar1);
LAB_10569d164:
    ppuVar1 = param_3;
    func_0x00010bf11d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    func_0x00010bf11d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bdd50e0(param_1,param_2,ppuVar1,ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if ((int)uVar4 == 0) {
LAB_10569d210:
      iVar9 = 0;
      iVar7 = 0;
      uVar8 = 0;
      goto LAB_10569d218;
    }
    func_0x00010bfba500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfba520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd50e0(param_1,param_2,ppuVar5,ppuVar6);
    iVar9 = (int)param_1;
    iVar7 = 1;
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  uVar8 = 1;
LAB_10569d218:
  _objc_release(param_3);
  return iVar9 << 0x10 | iVar7 << 8 | uVar8;
}



/* Entry: 10569d2f4; end: 10569d38f; -[SCPreviewABProviderImpl _boolForCofKey:orDefault:] */

undefined8 FUN_10569d2f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = param_4;
    func_0x00010bf1f3c0(param_4);
    _objc_release(param_4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_4;
    func_0x00010bf1f3c0(param_4);
    _objc_release(param_4);
    func_0x00010bf1f440(uVar3,param_2,param_3,uVar2,0);
  }
  _objc_release(param_3);
  return uVar3;
}


