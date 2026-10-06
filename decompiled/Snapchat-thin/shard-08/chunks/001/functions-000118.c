/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105df6280; end: 105df62db; -[SCPreviewUCOServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df6280(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736f10);
  _objc_destroyWeak(param_1 + _DAT_112736f0c);
  _objc_destroyWeak(param_1 + _DAT_112736f08);
  _objc_destroyWeak(param_1 + _DAT_112736f04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736f00);
  return;
}



/* Entry: 105df62dc; end: 105df64d7; -[SCPreviewUCOServiceProviderImpl initWithPreviewABServices:ucoDataFetcher:userSession:previewConfiguration:] */

undefined1 *
FUN_105df62dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = &uStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR_PTR_1126ed288;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = lVar2;
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar6;
    _objc_release(uVar7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f02a18;
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c0945a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    uStack_78 = uVar6;
    func_0x00010c0945c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar5 = *(undefined1 **)(param_3 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_containsObject__1125b07e8);
  return puVar5;
}



/* Entry: 105df64d8; end: 105df64df; -[SCPreviewUCOServiceProviderImpl isTouchHandlingEnabledForLensId:] */

void FUN_105df64d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 105df64e0; end: 105df65d7; -[SCPreviewUCOServiceProviderImpl fetchLensId:] */

void FUN_105df64e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be4b560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105df65d8; end: 105df663b;  */

void FUN_105df65d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1c740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105df663c; end: 105df6733; -[SCPreviewUCOServiceProviderImpl fetchLensMetaDataForId:] */

void FUN_105df663c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be4b560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105df6734; end: 105df685b;  */

void FUN_105df6734(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1c740();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar2 = lVar1;
  func_0x00010c0b8600(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105df685c; end: 105df6943; -[SCPreviewUCOServiceProviderImpl _lensMetadataFutureForFilterID:] */

void FUN_105df685c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105df6944;
  puStack_40 = &UNK_110861798;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bfab0c0(uVar2,param_2,param_3,&puStack_58,uVar4);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105df6944; end: 105df6957;  */

void FUN_105df6944(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 105df6958; end: 105df6a63; -[SCPreviewUCOServiceProviderImpl _geoFilterImageConfigFutureForLens:] */

void FUN_105df6958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010be117c0(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105df6a64; end: 105df6b7b;  */

void FUN_105df6a64(long param_1,long param_2,undefined *param_3,undefined ***param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar18 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar18 != 0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f27758;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f27778;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f273f8;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f27798;
    param_4 = &ppuStack_78;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_58 = param_2;
    puStack_50 = param_3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
  _objc_release(lVar18);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3890;
  _objc_alloc();
  puVar2 = puVar17;
  func_0x00010bf32760(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf32760(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar19;
  func_0x00010bf32a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0191e0();
  _objc_release(puVar4);
  _objc_release(puVar19);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar17;
  func_0x00010bf29280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar17;
    func_0x00010bf29280(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar17;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar17;
    func_0x00010bf07540(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar17;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = PTR_PTR_1126c4d70;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c23e500();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bef5fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c11fae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c086040();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010c119580();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010bf17380();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1ea0();
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b3898;
  puVar5 = puVar17;
  func_0x00010c094540(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010c0d4f60(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar17;
  func_0x00010bf32720(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c07a7e0();
  func_0x00010c07eda0();
  func_0x00010c27e700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  lVar18 = param_2 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c083340();
  _objc_release(lVar18);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  lVar18 = param_2;
  func_0x00010c07e920();
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126b38a8;
  if ((int)lVar18 == 0) {
    func_0x00010bf69120(PTR_PTR_1126b38a8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf69740();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_105df7234;
  uStack_108 = 0x105df7244;
  uStack_100 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_105df7234;
  uStack_138 = 0x105df7244;
  uStack_130 = 0;
  puVar6 = PTR_PTR_1126b2718;
  _objc_alloc(PTR_PTR_1126b2718);
  func_0x00010c0044c0();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f8 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfa7640(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar19);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_158,8);
  lVar18 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  *(undefined8 *)(puVar17 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 105df6b7c; end: 105df7233; -[SCPreviewUCOServiceProviderImpl _fetchGeoFilterImageInfoForLens:completion:] */

void FUN_105df6b7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3890;
  _objc_alloc();
  lVar20 = param_3;
  func_0x00010bf32760(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar20;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf32760(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf32a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0191e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar20);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar20 = param_3;
  func_0x00010bf29280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar20 != 0) {
    lVar20 = param_3;
    func_0x00010bf29280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(lVar20);
  }
  lVar20 = param_3;
  func_0x00010bf07540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar20 != 0) {
    lVar20 = param_3;
    func_0x00010bf07540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(lVar20);
  }
  lVar20 = param_3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar20 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126c4d70;
    _objc_alloc();
    lVar2 = lVar20;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar20;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar20;
    func_0x00010c23e500();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar20;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar20;
    func_0x00010bef5fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar20;
    func_0x00010c11fae0(lVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar20;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar20;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar20;
    func_0x00010c086040();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar20;
    func_0x00010c119580();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar20;
    func_0x00010bf17380();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar20;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar20;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1ea0();
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar17 = PTR_PTR_1126b3898;
  lVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf32720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c07a7e0();
  func_0x00010c07eda0();
  func_0x00010c27e700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c083340();
  _objc_release(lVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c07e920();
  _objc_release(param_1);
  puVar16 = PTR_PTR_1126b38a8;
  if ((int)lVar2 == 0) {
    func_0x00010bf69120(PTR_PTR_1126b38a8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf69740();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105df7234;
  uStack_88 = 0x105df7244;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105df7234;
  uStack_b8 = 0x105df7244;
  uStack_b0 = 0;
  puVar18 = PTR_PTR_1126b2718;
  _objc_alloc(PTR_PTR_1126b2718);
  func_0x00010c0044c0();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfa7640(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(lVar20);
  _objc_release(puVar21);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d8,8);
  lVar20 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar20 + 0x28);
  *(undefined8 *)(lVar20 + 0x28) = 0;
  return;
}



/* Entry: 105df7234; end: 105df724b;  */

void FUN_105df7234(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105df724c; end: 105df72bf;  */

void FUN_105df724c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105df72c0; end: 105df72e3;  */

void FUN_105df72c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105df72e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 105df72e4; end: 105df734b; -[SCPreviewUCOServiceProviderImpl .cxx_destruct] */

void FUN_105df72e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105df734c; end: 105df749b; -[SCShoppingLensCameraToPreviewBridgingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df734c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112736f30);
  *(undefined **)(param_1 + _DAT_112736f30) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112736f3c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c110400();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105df749c; end: 105df74eb;  */

void FUN_105df749c(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be5a9e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105df74ec; end: 105df7a0f; -[SCShoppingLensCameraToPreviewBridgingEntryPoint _logWithPreviewAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df74ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x24;
  undefined8 uVar10;
  undefined *puStack_1f8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)(param_1 + _DAT_112736f34);
    _objc_loadWeakRetained();
  }
  puVar1 = puVar9;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c22cfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar9);
  if (puVar2 == (undefined *)0x0) goto LAB_105df797c;
  puVar9 = PTR_PTR_1126c4d78;
  _objc_opt_new(PTR_PTR_1126c4d78);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_105df7a10;
  uStack_100 = 0x105df7a20;
  uStack_f8 = 0;
  func_0x00010c0bfd80(param_3);
  lVar3 = puStack_118[5];
  if (lVar3 == 0) goto LAB_105df7960;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar9);
  _objc_release(lVar3);
  func_0x00010c122b20(puStack_118[5]);
  func_0x00010c18e140(puVar9);
  func_0x00010c23fde0(puStack_118[5]);
  func_0x00010c226120(puVar9);
  func_0x00010c23fd80(puStack_118[5]);
  func_0x00010c226f40(puVar9);
  func_0x00010c14a280(puStack_118[5]);
  func_0x00010c226dc0(puVar9);
  puVar1 = puVar2;
  func_0x00010c094540(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar9);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c096b60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar9);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c092140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb4c0(puVar9);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf9bb00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198600(puVar9);
  _objc_release(puVar1);
  puStack_1f8 = PTR_PTR_1126c4d80;
  _objc_opt_new();
  func_0x00010bf9bb20(puVar2);
  func_0x00010c1985c0(puStack_1f8);
  unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = puVar2;
  func_0x00010bf9ba40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar4);
      }
      uVar10 = *(undefined8 *)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126c4d88;
      _objc_opt_new(PTR_PTR_1126c4d88);
      uVar6 = uVar10;
      func_0x00010bf87dc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c198520(puVar5);
      _objc_release(uVar6);
      uVar6 = uVar10;
      func_0x00010c0ec860(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c198540(puVar5);
      _objc_release(uVar6);
      uVar6 = uVar10;
      func_0x00010c115ea0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c198560(puVar5);
      _objc_release(uVar6);
      func_0x00010c115ec0(uVar10);
      func_0x00010c198580(puVar5);
      func_0x00010befa120(unaff_x24);
      _objc_release(puVar5);
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar8);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  func_0x00010c1985a0(puStack_1f8);
  func_0x00010c198380(puVar9);
  if (param_1 == 0) goto LAB_105df79d0;
  param_1 = param_1 + _DAT_112736f38;
  _objc_loadWeakRetained(param_1);
  while( true ) {
    lVar3 = param_1;
    func_0x00010bf1cf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(unaff_x24);
    _objc_release(puStack_1f8);
LAB_105df7960:
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    _objc_release(puVar9);
LAB_105df797c:
    _objc_release(puVar2);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_105df79d0:
    param_1 = 0;
  }
  return;
}



/* Entry: 105df7a10; end: 105df7a27;  */

void FUN_105df7a10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105df7a28; end: 105df7acf;  */

void FUN_105df7a28(long param_1,undefined8 param_2)

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



/* Entry: 105df7ad0; end: 105df7b9f; -[SCShoppingLensCameraToPreviewBridgingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df7ad0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736f3c);
  _objc_destroyWeak(param_1 + _DAT_112736f38);
  _objc_destroyWeak(param_1 + _DAT_112736f34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736f30,0);
  return;
}



/* Entry: 105df7ba0; end: 105df7bab;  */

bool FUN_105df7ba0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105df7bac; end: 105df7c3b;  */

undefined * FUN_105df7bac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2300 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e2b038,
                        &UNK_10ddd0ee0,&UNK_10ddd0ef0,1,FUN_105df7c3c,0,&UNK_10ddd0ef8);
    do {
      if (puRam00000001136c2300 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2300;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2300,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2300 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2300;
}



/* Entry: 105df7c3c; end: 105df7c47;  */

bool FUN_105df7c3c(int param_1)

{
  return param_1 == 0;
}



/* Entry: 105df7c48; end: 105df7caf; +[SCMusicSynthesizeRequest descriptor] */

void FUN_105df7c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aa0450,
                        &PTR____CFConstantStringClassReference_110e2b058,&PTR_DAT_11312cd70,
                        &PTR_s_useCase_11312cee8,8,0x38,0x1c);
    puRam00000001136c2308 = puVar1;
  }
  return;
}



/* Entry: 105df7cb0; end: 105df7d17; +[SCMusicSynthesizeResponse descriptor] */

void FUN_105df7cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aa04a0,
                        &PTR____CFConstantStringClassReference_110e2b078,&PTR_DAT_11312cd70,
                        &PTR_DAT_11312cde8,4,0x20,0x1c);
    puRam00000001136c2310 = puVar1;
  }
  return;
}



/* Entry: 105df7d18; end: 105df7d7f; +[SCMusicWordInfo descriptor] */

void FUN_105df7d18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aa04f0,
                        &PTR____CFConstantStringClassReference_110e2b098,&PTR_DAT_11312cd70,
                        &PTR_DAT_11312cd88,3,0x18,0x1c);
    puRam00000001136c2318 = puVar1;
  }
  return;
}



/* Entry: 105df7d80; end: 105df7de7; +[SCMusicPhonemeInfo descriptor] */

void FUN_105df7d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aa0540,
                        &PTR____CFConstantStringClassReference_110e2b0b8,&PTR_DAT_11312cd70,
                        &PTR_DAT_11312ce68,4,0x18,0x1c);
    puRam00000001136c2320 = puVar1;
  }
  return;
}



/* Entry: 105df7de8; end: 105df7df3; -[SCFeatureSettingsService getRemixMentionPrivacyPromptAccepted] */

void FUN_105df7de8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e2b0d8);
  return;
}



/* Entry: 105df7df4; end: 105df7dff; -[SCFeatureSettingsService remixMentionPrivacyPromptAcceptedServerParam] */

undefined ** FUN_105df7df4(void)

{
  return &PTR____CFConstantStringClassReference_110e2b0d8;
}



/* Entry: 105df7e00; end: 105df7e0f; -[SCFeatureSettingsService setRemixMentionPrivacyPromptAccepted:] */

void FUN_105df7e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e2b0d8,param_3);
  return;
}



/* Entry: 105df7e10; end: 105df7e17; -[SCFeatureSettingsService remix_mention_privacy_prompt_accepted_client_value:] */

undefined * FUN_105df7e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105df7e18; end: 105df7e1f; -[SCFeatureSettingsService remix_mention_privacy_prompt_accepted_server_value:] */

void FUN_105df7e18(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105df7e20; end: 105df7e2f; -[SCFeatureSettingsService remixMentionPrivacyPromptAccepted] */

void FUN_105df7e20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e2b0d8,0);
  return;
}



/* Entry: 105df7e30; end: 105df7ed3; -[SCRemixDialogController initWithFeatureSettingsService:webBrowsingScopeExposer:] */

undefined1 *
FUN_105df7e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed290;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105df7ed4; end: 105df7eef; -[SCRemixDialogController shouldPresentRemixPrivacyDialog] */

uint FUN_105df7ed4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c129820(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105df7ef0; end: 105df817f; -[SCRemixDialogController presentRemixPrivacyDialogOnViewController:completion:] */

void FUN_105df7ef0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar10 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar10);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(uVar10);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010902297c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000109022964();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000109022994();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = puVar3;
  func_0x000108065d38(puVar3,uVar8,param_1,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bddc0(puVar3);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(uVar11);
  uVar10 = *(undefined8 *)(param_4 + 0x28);
  _objc_retain(uVar10);
  func_0x00010bf84b00(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar11);
  return;
}



/* Entry: 105df8180; end: 105df821b;  */

void FUN_105df8180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105df821c; end: 105df825b;  */

void FUN_105df821c(long param_1,undefined8 param_2)

{
  func_0x00010c1e9fe0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105df824c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105df825c; end: 105df82a3; -[SCRemixDialogController webBrowserDidDismiss:] */

void FUN_105df825c(long param_1)

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



/* Entry: 105df82a4; end: 105df82d3; -[SCRemixDialogController .cxx_destruct] */

void FUN_105df82a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105df82d4; end: 105df83b7; -[SCRemixPreviewServiceProvider provide] */

void FUN_105df82d4(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c4d98;
  _objc_alloc(PTR_PTR_1126c4d98);
  func_0x00010c03de60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105df83b8; end: 105df83f7;  */

void FUN_105df83b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf58320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105df83f8; end: 105df84bb; -[SCRemixPreviewServiceProvider createRemixPreviewSettingsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df83f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c4da0;
  _objc_alloc(PTR_PTR_1126c4da0);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112736f4c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bfa2b80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112736f50);
  }
  func_0x00010c0121e0(puVar1,param_2,lVar3,uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df84bc; end: 105df8503; -[SCRemixPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df84bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736f50,0);
  _objc_destroyWeak(param_1 + _DAT_112736f4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736f48);
  return;
}



/* Entry: 105df8504; end: 105df864f; -[SCRemixPreviewSettingsServiceImpl initWithFeatureSettingsService:webBrowsingScopeExposer:] */

undefined8 *
FUN_105df8504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ed298;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_58,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105df8650; end: 105df86a7;  */

void FUN_105df8650(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c4da8;
    _objc_alloc(PTR_PTR_1126c4da8);
    func_0x00010c0121e0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df86a8; end: 105df8703; -[SCRemixPreviewSettingsServiceImpl remixShareSettingsController] */

void FUN_105df86a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c4db0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1ea100(*(undefined8 *)(param_1 + 8),param_2,1);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105df8704; end: 105df8743; -[SCRemixPreviewSettingsServiceImpl shouldPresentRemixPrivacyDialog] */

undefined8 FUN_105df8704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c232040();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105df8744; end: 105df87b3; -[SCRemixPreviewSettingsServiceImpl presentRemixPrivacyDialogOnViewController:completion:] */

void FUN_105df8744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10de60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df87b4; end: 105df87ef; -[SCRemixPreviewSettingsServiceImpl .cxx_destruct] */

void FUN_105df87b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105df87f0; end: 105df87f7; -[SCRemixShareSettingsController remixShareSetting] */

undefined1 FUN_105df87f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105df87f8; end: 105df87ff; -[SCRemixShareSettingsController setRemixShareSetting:] */

void FUN_105df87f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105df8800; end: 105df8afb; -[SCPlaceTagsTrackerImpl initWithCheckInOptionFetcher:placeVisitFetcher:circumstanceEngine:grapheneMetricLogger:s2rInfoProviderRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105df8800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ed2a0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112736f64;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112736f68;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f6c);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f6c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f70);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f74);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f74) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112736f78) = 0xffffffffffffffff;
    lVar6 = (long)_DAT_112736f7c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112736f80;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112736f84;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f88);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f88) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f8c);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f8c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_105dfbd64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f90);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f90) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f94);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f94) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f98);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f98) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736f9c);
    *(undefined **)((long)puVar1 + (long)_DAT_112736f9c) = puVar3;
    _objc_release(uVar2);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bde6c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736fa0);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112736fa0) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105df8afc; end: 105df8b13;  */

void FUN_105df8afc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sig_icon_iconSize_sigColor__11266c910,0x195,0
             ,0x4a);
  return;
}



/* Entry: 105df8b14; end: 105df8caf; -[SCPlaceTagsTrackerImpl placeTagsMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df8b14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112736fa4;
  if ((*(byte *)(param_1 + lVar8) & 1) == 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_112736f74));
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736f6c);
  func_0x00010bf529e0(uVar1);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + _DAT_112736f74);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if ((*(byte *)(param_1 + lVar8) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112736fa8);
    func_0x00010c296f60(uVar1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  lVar8 = lVar4;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126c4db8;
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112736f70);
  }
  _objc_retain(uVar7);
  _objc_alloc(puVar5);
  func_0x00010bffcaa0();
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126c4dc0;
  _objc_alloc(PTR_PTR_1126c4dc0);
  func_0x00010c0367c0();
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105df8cb0; end: 105df8d07; -[SCPlaceTagsTrackerImpl setVenueFilterOrStickerUsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df8cb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_112736fa4) = param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736f8c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105df8d08; end: 105df8d4b; -[SCPlaceTagsTrackerImpl showPlaceTagCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105df8d08(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((*(byte *)(param_1 + _DAT_112736fa4) & 1) == 0)) {
    lVar1 = *(long *)(param_1 + _DAT_112736f6c);
    func_0x00010bf529e0(lVar1);
    return lVar1 != 0;
  }
  return false;
}



/* Entry: 105df8d4c; end: 105df8d97; -[SCPlaceTagsTrackerImpl setInitialSelectionState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df8d4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736f88);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105df8d98; end: 105df8f27; -[SCPlaceTagsTrackerImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df8d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4dc8;
  _objc_alloc();
  func_0x00010c036800();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112736fac);
  *(undefined **)(param_1 + _DAT_112736fac) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112736f84);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126aa0();
  _objc_release(uVar4);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112736f9c));
  lVar2 = param_1 + _DAT_112736fb0;
  _objc_storeWeak(lVar2,param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(lVar2);
  uVar4 = param_3;
  func_0x00010c0fdda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105df8f28; end: 105df9063;  */

void FUN_105df8f28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bde0ec0();
    _objc_release(lVar1);
  }
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0dff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0dff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c220840();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a820();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105df9064; end: 105df91c3; -[SCPlaceTagsTrackerImpl showPlaceTagCarouselObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736f8c);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be6e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105df91c4; end: 105df922b;  */

void FUN_105df91c4(long param_1,long param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2391e0();
    _objc_release(param_1);
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105df922c; end: 105df9347; -[SCPlaceTagsTrackerImpl fetchSuggestedNearbyPlaceTags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df922c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010be93660(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736f64);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa59e0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105df9348; end: 105df938f;  */

void FUN_105df9348(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8300();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105df9390; end: 105df944b; -[SCPlaceTagsTrackerImpl _handleHideSpotlightPostingHintIfNeededWithTaggedPlaces:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112736fb0;
  _objc_retain(param_3);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c2683a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  FUN_105dfbde0(param_3,lVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112736f94);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105df944c; end: 105df94ff; -[SCPlaceTagsTrackerImpl _constructInferredLocationPostingHintObservable] */

void FUN_105df944c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde6fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105df9500; end: 105df962b; -[SCPlaceTagsTrackerImpl _constructSpotlightPostingHintObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736f94);
  func_0x00010c14f680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736f90);
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010bf870c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105df962c; end: 105df97c3;  */

void FUN_105df962c(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c067fc0();
  if ((ppuVar1 == (undefined **)0x4) && (lVar2 = param_2, func_0x00010c067fc0(), lVar2 != 0)) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3c28;
  }
  else {
    _objc_retain(param_3);
    ppuVar1 = param_3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105df97c4; end: 105df985b; -[SCPlaceTagsTrackerImpl _recordSpotlightPostingHintVisibilityWithPostingHint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df97c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29fb40();
  if (lVar1 != 1) {
    lVar1 = param_3;
    func_0x00010c29fb40();
    lVar2 = param_3;
    func_0x00010c29fb40(param_3);
    func_0x000105dfbd40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      FUN_105e01b64(*(undefined8 *)(param_1 + _DAT_112736f80),1);
    }
    else {
      FUN_105e01bdc(*(undefined8 *)(param_1 + _DAT_112736f80),lVar2,1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105df985c; end: 105df9b0b; -[SCPlaceTagsTrackerImpl _getPostingHintFromInferredLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df985c(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    unaff_x20 = param_4;
    func_0x00010c102a40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_4;
    func_0x00010c09e680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x20;
    func_0x00010c08fa60();
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = unaff_x21, func_0x00010c08fa60(), puVar3 == (undefined *)0x0)) {
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0db140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = unaff_x20;
      func_0x00010c08fa60();
      if ((puVar1 == (undefined *)0x0) ||
         (puVar3 = unaff_x21, func_0x00010c08fa60(), puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         puVar3 == (undefined *)0x0)) {
        puVar1 = unaff_x20;
        func_0x00010c08fa60();
        puVar2 = unaff_x21;
        if (puVar1 != (undefined *)0x0) {
          puVar2 = unaff_x20;
        }
        _objc_retain(puVar2);
      }
      else {
        FUN_105e01ad8();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = unaff_x20;
        puStack_88 = unaff_x21;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar1;
        _objc_retain();
        func_0x00010b87f3b0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bfb3e40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar2;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d660(puVar1);
        _objc_release(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = unaff_x20;
        if (param_1 <= 200.0) {
          puVar2 = puVar1;
        }
        _objc_retain(puVar2);
        _objc_release(puVar1);
      }
      puVar4 = PTR_PTR_1126b5218;
      _objc_alloc();
      uVar5 = *(undefined8 *)(param_2 + _DAT_112736f98);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      param_5 = uVar5;
      func_0x00010c0513c0();
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126ae750;
      puVar1 = puVar4;
      func_0x00010c2468a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105df9b0c;
  puStack_c0 = puVar3;
  puStack_b8 = unaff_x21;
  puStack_b0 = unaff_x20;
  puStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010be92ee0(puVar2);
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_c8,puVar2);
    uVar5 = *(undefined8 *)(puVar2 + _DAT_112736f68);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_c8);
    func_0x00010bfc65a0(uVar5);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 105df9b0c; end: 105df9c23; -[SCPlaceTagsTrackerImpl fetchInferredLocationForCaptureLocation:completionQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9b0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be92ee0(param_1);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112736f68);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfc65a0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105df9c24; end: 105df9c8b;  */

void FUN_105df9c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ac60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105df9c8c; end: 105df9eb7; -[SCPlaceTagsTrackerImpl _handleInferredLocation:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9c8c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 == 0)) {
    lVar1 = param_3;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar2 = param_3;
      func_0x00010c09e680();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126c4dc0;
        _objc_alloc(PTR_PTR_1126c4dc0);
        lVar1 = param_3;
        func_0x00010c0fd0e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0367c0(puVar4);
        _objc_release(lVar1);
        puVar5 = PTR_PTR_1126c0e50;
        _objc_alloc();
        lVar1 = param_3;
        func_0x00010c0fd0e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010c09e680(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c036540();
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = param_1 + _DAT_112736fb0;
        _objc_loadWeakRetained(lVar1);
        func_0x00010befa940();
        _objc_release(lVar1);
        uVar6 = *(undefined8 *)(param_1 + _DAT_112736fb4);
        *(undefined **)(param_1 + _DAT_112736fb4) = puVar5;
        _objc_retain(puVar5);
        _objc_release(uVar6);
        lVar1 = param_1;
        func_0x00010be21900(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        FUN_105dfbd64();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112736f90));
        _objc_release(puVar5);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(puVar4);
        goto LAB_105df9e90;
      }
    }
  }
  func_0x00010be92ee0(param_1);
LAB_105df9e90:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105df9eb8; end: 105df9f5f; -[SCPlaceTagsTrackerImpl _resetInferredLocationWithHiddenReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9eb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_105dfbd64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112736f90));
  lVar3 = param_1 + _DAT_112736fb0;
  _objc_loadWeakRetained(lVar3);
  lVar5 = (long)_DAT_112736fb4;
  func_0x00010c12dae0();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105df9f60; end: 105df9f8f; -[SCPlaceTagsTrackerImpl viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df9f60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736f6c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105df9f90; end: 105dfa097; -[SCPlaceTagsTrackerImpl handleAction:] */

void FUN_105df9f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105dfa098;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c1680(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105dfa098; end: 105dfa0f7;  */

void FUN_105dfa098(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be613c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dfa0f8; end: 105dfa46b; -[SCPlaceTagsTrackerImpl _togglePlaceTagSelectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfa0f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_112736f6c;
  uVar1 = *(ulong *)(param_1 + lVar12);
  func_0x00010bf529e0();
  if (uVar1 <= param_3) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + lVar12);
  func_0x00010c0d3c80();
  uVar3 = *(ulong *)(param_1 + lVar12);
  func_0x00010c0dfd20(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c07d660();
  puVar4 = PTR_PTR_1126c4dd0;
  _objc_alloc(PTR_PTR_1126c4dd0);
  uVar5 = uVar3;
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c297e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = (uint)uVar1;
  func_0x00010c053a20(puVar4,param_2,uVar5,uVar6,uVar9 ^ 1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c130f40(uVar2,param_2,param_3,puVar4);
  if ((*(byte *)(param_1 + _DAT_112736fb8) & 1) == 0) {
    lVar10 = (long)_DAT_112736f78;
    if (uVar9 != 0) {
      *(undefined8 *)(param_1 + lVar10) = 0xffffffffffffffff;
      goto LAB_105dfa220;
    }
    uVar1 = *(ulong *)(param_1 + lVar10);
    if ((uVar1 != 0xffffffffffffffff) && (uVar5 = uVar2, func_0x00010bf529e0(), uVar1 < uVar5)) {
      uVar1 = uVar2;
      func_0x00010c0dfd20(uVar2,param_2,*(undefined8 *)(param_1 + lVar10));
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c4dd0;
      _objc_alloc();
      uVar5 = uVar1;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c297e20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053a20(puVar7,param_2,uVar5,uVar6,0);
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010c130f40(uVar2,param_2,*(undefined8 *)(param_1 + lVar10),puVar7);
      uVar11 = *(undefined8 *)(param_1 + _DAT_112736f74);
      puVar8 = puVar7;
      func_0x00010c297e20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar11,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar1);
    }
  }
  else if ((uVar1 & 1) != 0) {
LAB_105dfa220:
    uVar11 = *(undefined8 *)(param_1 + _DAT_112736f74);
    uVar1 = uVar3;
    func_0x00010c297e20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar11,param_2,uVar1);
    _objc_release(uVar1);
    goto LAB_105dfa380;
  }
  uVar11 = *(undefined8 *)(param_1 + _DAT_112736f74);
  uVar1 = uVar3;
  func_0x00010c297e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar11,param_2,uVar1);
  _objc_release(uVar1);
  *(ulong *)(param_1 + _DAT_112736f78) = param_3;
LAB_105dfa380:
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(ulong *)(param_1 + lVar12) = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar11);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108ea2a0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112736f70);
  *(ulong *)(param_1 + _DAT_112736f70) = uVar1;
  _objc_release(uVar11);
  _objc_release(uVar2);
  puVar7 = puVar4;
  func_0x00010c297e20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c2711a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2e100(param_1,param_2,puVar7,puVar8,uVar9 ^ 1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105dfa46c; end: 105dfa65f; -[SCPlaceTagsTrackerImpl _moveSelectedPlaceTagsToFront] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfa46c(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112736f74);
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    unaff_x20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar8 = (long)_DAT_112736f6c;
    lVar5 = *(long *)(param_1 + lVar8);
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar5);
          }
          iVar7 = (int)*(undefined8 *)(lStack_128 + lVar10 * 8);
          func_0x00010c07d660();
          puVar2 = unaff_x20;
          if (iVar7 == 0) {
            puVar2 = unaff_x21;
          }
          func_0x00010befa120(puVar2);
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = lVar5;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar5);
    unaff_x22 = unaff_x20;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = unaff_x22;
    _objc_retain();
    _objc_release(uVar6);
    param_3 = &PTR___NSConcreteGlobalBlock_1108ea2a0;
    puVar2 = unaff_x22;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112736f70);
    *(undefined **)(param_1 + _DAT_112736f70) = puVar2;
    _objc_release(uVar6);
    _objc_release(unaff_x22);
    *(undefined8 *)(param_1 + _DAT_112736f78) = 0;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
    _objc_release(unaff_x21);
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105dfa660;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108ea1b0);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_105dfa750;
  puStack_170 = &UNK_1108ea1d0;
  _objc_retain();
  ppuVar4 = param_3;
  puStack_168 = puVar3;
  func_0x00010bd86420(param_3,&puStack_188);
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112736f6c);
  *(undefined ***)(puVar2 + _DAT_112736f6c) = ppuVar4;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112736fa8);
  *(undefined **)(puVar2 + _DAT_112736fa8) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar6);
  _objc_release(puStack_168);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dfa660; end: 105dfa73b; -[SCPlaceTagsTrackerImpl _setSuggestedNearbyPlaceTags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfa660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108ea1b0);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105dfa750;
  puStack_40 = &UNK_1108ea1d0;
  _objc_retain();
  uVar3 = param_3;
  puStack_38 = puVar1;
  func_0x00010bd86420(param_3,&puStack_58);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736f6c);
  *(undefined8 *)(param_1 + _DAT_112736f6c) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112736fa8);
  *(undefined **)(param_1 + _DAT_112736fa8) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dfa73c; end: 105dfa74f;  */

long FUN_105dfa73c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isReportable_1125fcb70);
    return param_2;
  }
  return 0;
}



/* Entry: 105dfa750; end: 105dfa843;  */

void FUN_105dfa750(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c4dd0;
  _objc_alloc(PTR_PTR_1126c4dd0);
  uVar2 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c053a20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dfa844; end: 105dfa8ab; -[SCPlaceTagsTrackerImpl _resetPlaceTagsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfa844(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736f6c);
  *(undefined **)(param_1 + _DAT_112736f6c) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736f70);
  *(undefined **)(param_1 + _DAT_112736f70) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736fa8);
  *(undefined **)(param_1 + _DAT_112736fa8) = PTR____NSDictionary0__struct_11034ab58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105dfa8ac; end: 105dfa9a3; -[SCPlaceTagsTrackerImpl _clearSelectedPlaceTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfa8ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112736f74;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar4));
    *(undefined8 *)(param_1 + _DAT_112736f78) = 0xffffffffffffffff;
    lVar1 = (long)_DAT_112736f6c;
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108ea220);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = uVar2;
    _objc_retain();
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108ea2a0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736f70);
    *(undefined8 *)(param_1 + _DAT_112736f70) = uVar5;
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105dfa9a4; end: 105dfaa57;  */

void FUN_105dfa9a4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c07d660();
  if ((int)puVar1 == 0) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    puVar1 = PTR_PTR_1126c4dd0;
    _objc_alloc(PTR_PTR_1126c4dd0);
    puVar2 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c297e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053a20(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dfaa58; end: 105dfaba7; -[SCPlaceTagsTrackerImpl _ourStorySelectionStateObservable:] */

undefined * FUN_105dfaa58(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108ea240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar10 = PTR_PTR_1126ae6b8;
  func_0x00010c241e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = param_2;
    _objc_retain(param_2);
    _objc_retain(param_2);
    puVar10 = param_2;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar10 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = *(ulong *)((long)puVar12 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar11);
        if ((uVar7 & 1) != 0) {
          puVar10 = param_2;
          func_0x00010c0e00e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105dfacf0;
        }
        puVar12 = puVar12 + 1;
      } while (puVar10 != puVar12);
      puVar10 = param_2;
      func_0x00010bf52a60();
    }
    puVar10 = (undefined *)0x0;
LAB_105dfacf0:
    _objc_release(param_2);
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      return (undefined *)(ulong)(puVar4 != (undefined *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 105dfaba8; end: 105dfad3f;  */

ulong FUN_105dfaba8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar7 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar7 == 0) {
      uVar7 = 0;
LAB_105dfacf0:
      _objc_release(param_2);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
        return uVar7;
      }
      ___stack_chk_fail();
      return (ulong)(uVar5 != 0);
    }
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar8 = *(ulong *)(uVar9 * 8);
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar8);
      if ((uVar4 & 1) != 0) {
        uVar7 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105dfacf0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
    uVar7 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105dfad40; end: 105dfad4b;  */

bool FUN_105dfad40(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 105dfad4c; end: 105dfada3; -[SCPlaceTagsTrackerImpl snapMapSelectionStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfad4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736f88);
  func_0x00010c2519e0(uVar1,param_2,PTR____kCFBooleanFalse_11034ab60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105dfada4; end: 105dfae7f; -[SCPlaceTagsTrackerImpl _handlePlaceTagActionForPlaceId:placeName:isSelected:] */

void FUN_105dfada4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0e50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0fd640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036540(puVar1,param_2,param_3,param_4,5,1,uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    func_0x00010c12dae0();
  }
  else {
    func_0x00010befa940();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dfae80; end: 105dfae9f; -[SCPlaceTagsTrackerImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfae80(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112736fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dfaea0; end: 105dfaeaf; -[SCPlaceTagsTrackerImpl allowsMultiSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105dfaea0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112736fb8);
}



/* Entry: 105dfaeb0; end: 105dfaebf; -[SCPlaceTagsTrackerImpl setAllowsMultiSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfaeb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112736fb8) = param_3;
  return;
}



/* Entry: 105dfaec0; end: 105dfaecf; -[SCPlaceTagsTrackerImpl selectedPlaceTagIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dfaec0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736f78);
}



/* Entry: 105dfaed0; end: 105dfaedf; -[SCPlaceTagsTrackerImpl venueFilterOrStickerUsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105dfaed0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112736fa4);
}



/* Entry: 105dfaee0; end: 105dfaeef; -[SCPlaceTagsTrackerImpl inferredLocationPostingHintObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dfaee0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736fa0);
}



/* Entry: 105dfaef0; end: 105dfb03b; -[SCPlaceTagsTrackerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfaef0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736fa0,0);
  _objc_destroyWeak(param_1 + _DAT_112736fb0);
  _objc_storeStrong(param_1 + _DAT_112736fac,0);
  _objc_storeStrong(param_1 + _DAT_112736f80,0);
  _objc_storeStrong(param_1 + _DAT_112736f9c,0);
  _objc_storeStrong(param_1 + _DAT_112736fb4,0);
  _objc_storeStrong(param_1 + _DAT_112736f98,0);
  _objc_storeStrong(param_1 + _DAT_112736f94,0);
  _objc_storeStrong(param_1 + _DAT_112736f90,0);
  _objc_storeStrong(param_1 + _DAT_112736f8c,0);
  _objc_storeStrong(param_1 + _DAT_112736f88,0);
  _objc_storeStrong(param_1 + _DAT_112736f84,0);
  _objc_storeStrong(param_1 + _DAT_112736f7c,0);
  _objc_storeStrong(param_1 + _DAT_112736fa8,0);
  _objc_storeStrong(param_1 + _DAT_112736f74,0);
  _objc_storeStrong(param_1 + _DAT_112736f70,0);
  _objc_storeStrong(param_1 + _DAT_112736f6c,0);
  _objc_storeStrong(param_1 + _DAT_112736f68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736f64,0);
  return;
}



/* Entry: 105dfb03c; end: 105dfb043;  */

void FUN_105dfb03c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_venueId_1126839b0);
  return;
}


