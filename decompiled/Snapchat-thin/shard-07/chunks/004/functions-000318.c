/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055cbecc; end: 1055cbed3; -[SCLensCrashLoggerContext renderingContext] */

undefined8 FUN_1055cbecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1055cbed4; end: 1055cbedb; -[SCLensCrashLoggerContext productType] */

undefined8 FUN_1055cbed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1055cbedc; end: 1055cbee3; -[SCLensCrashLoggerContext methodSelector] */

undefined8 FUN_1055cbedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1055cbee4; end: 1055cbf43; -[SCLensCrashLoggerContext .cxx_destruct] */

void FUN_1055cbee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cbf44; end: 1055cbf5f; +[SCLensCrashLoggerContextBuilder lensCrashLoggerContext] */

void FUN_1055cbf44(void)

{
  _objc_alloc_init(PTR_PTR_1126bb910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055cbf60; end: 1055cc197; +[SCLensCrashLoggerContextBuilder lensCrashLoggerContextFromExistingLensCrashLoggerContext:] */

void FUN_1055cbf60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  puVar1 = PTR_PTR_1126bb910;
  _objc_retain(param_3);
  func_0x00010c092020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ad520(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2880(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c094660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b28a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b8500(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c264ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2bab60(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c130720(param_3);
  puVar13 = puVar11;
  func_0x00010c2b6dc0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c116320(param_3);
  puVar14 = puVar13;
  func_0x00010c2b6200(puVar13,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0cca60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar15 = puVar14;
  func_0x00010c2b3f20(puVar14,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1055cc198; end: 1055cc1df; -[SCLensCrashLoggerContextBuilder build] */

void FUN_1055cc198(void)

{
  _objc_alloc(PTR_PTR_1126bb950);
  func_0x00010c0107c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055cc1e0; end: 1055cc217; -[SCLensCrashLoggerContextBuilder withError:] */

long FUN_1055cc1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1055cc218; end: 1055cc24f; -[SCLensCrashLoggerContextBuilder withLensId:] */

long FUN_1055cc218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1055cc250; end: 1055cc287; -[SCLensCrashLoggerContextBuilder withLensIds:] */

long FUN_1055cc250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1055cc288; end: 1055cc2bf; -[SCLensCrashLoggerContextBuilder withSessionId:] */

long FUN_1055cc288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1055cc2c0; end: 1055cc2f7; -[SCLensCrashLoggerContextBuilder withSwipeId:] */

long FUN_1055cc2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1055cc2f8; end: 1055cc2ff; -[SCLensCrashLoggerContextBuilder withRenderingContext:] */

void FUN_1055cc2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1055cc300; end: 1055cc307; -[SCLensCrashLoggerContextBuilder withProductType:] */

void FUN_1055cc300(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1055cc308; end: 1055cc33f; -[SCLensCrashLoggerContextBuilder withMethodSelector:] */

long FUN_1055cc308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1055cc340; end: 1055cc39f; -[SCLensCrashLoggerContextBuilder .cxx_destruct] */

void FUN_1055cc340(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cc3a0; end: 1055cc407;  */

void FUN_1055cc3a0(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055cc408; end: 1055cc40f; -[SCLensBasePerformerProvider lensProcessingPlainPerformer] */

void FUN_1055cc408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 1055cc410; end: 1055cc417; -[SCLensBasePerformerProvider lensUtilityPerformer] */

void FUN_1055cc410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 1055cc418; end: 1055cc483; -[SCLensBasePerformerProvider .cxx_destruct] */

void FUN_1055cc418(long param_1)

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



/* Entry: 1055cc484; end: 1055cc493; -[SCLensPerformerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cc484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726464);
  return;
}



/* Entry: 1055cc494; end: 1055cc4cf; -[SCBundledLensProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cc494(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726468,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272646c);
  return;
}



/* Entry: 1055cc4d0; end: 1055cc5c3;  */

void FUN_1055cc4d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bb978;
  _objc_alloc(PTR_PTR_1126bb978);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1046a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c27a020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045be0(puVar1,param_2,lVar2,uVar3,uVar4,lVar6,1,1,*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055cc5c4; end: 1055cc603;  */

void FUN_1055cc5c4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1055cc604; end: 1055cc6f7;  */

void FUN_1055cc604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bb978;
  _objc_alloc(PTR_PTR_1126bb978);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1046a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c1116c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045be0(puVar1,param_2,lVar2,uVar3,uVar4,lVar6,0,1,*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055cc6f8; end: 1055cc767;  */

void FUN_1055cc6f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf24e00(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055cc768; end: 1055cc7b3; -[SCLegacyImageProcessEntryPoint bundledVisualFilterCommandFactoryWithCommandProvider:] */

void FUN_1055cc768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb988;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01cc60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055cc7b4; end: 1055cc837; -[SCLegacyImageProcessEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cc7b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726480,0);
  _objc_destroyWeak(param_1 + _DAT_11272648c);
  _objc_destroyWeak(param_1 + _DAT_112726488);
  _objc_destroyWeak(param_1 + _DAT_11272647c);
  _objc_destroyWeak(param_1 + _DAT_112726474);
  _objc_destroyWeak(param_1 + _DAT_112726470);
  _objc_destroyWeak(param_1 + _DAT_112726478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726484);
  return;
}



/* Entry: 1055cc838; end: 1055cc8ab; -[SCBundledVisualFilterImageProcessCommandFactory initWithImageProcessCommandProvider:] */

undefined1 * FUN_1055cc838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9348;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cc8ac; end: 1055cc9e7; -[SCBundledVisualFilterImageProcessCommandFactory imageCommandFromVisualFilterType:] */

void FUN_1055cc8ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108d3fc9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b26e0;
  _objc_alloc(PTR_PTR_1126b26e0);
  puVar2 = PTR_PTR_1126b26d8;
  func_0x00010bf978e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055ac0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf41e60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1055cc9e8; end: 1055cc9f3; -[SCBundledVisualFilterImageProcessCommandFactory .cxx_destruct] */

void FUN_1055cc9e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cc9f4; end: 1055cca33;  */

void FUN_1055cc9f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd7b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055cca34; end: 1055ccaef;  */

void FUN_1055cca34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = PTR_PTR_1126bb990;
  _objc_alloc(PTR_PTR_1126bb990);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffaa20(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055ccaf0; end: 1055ccb37;  */

void FUN_1055ccaf0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055ccb38; end: 1055ccba7;  */

void FUN_1055ccb38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be4af80(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055ccba8; end: 1055ccc17;  */

void FUN_1055ccba8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055ccc18; end: 1055ccd4b;  */

void FUN_1055ccc18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf70360();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    puVar3 = PTR_PTR_1126bb9d0;
    _objc_opt_new(PTR_PTR_1126bb9d0);
  }
  else {
    puVar3 = PTR_PTR_1126bb9c0;
    _objc_alloc(PTR_PTR_1126bb9c0);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126bb9c8;
    _objc_opt_new(PTR_PTR_1126bb9c8);
    func_0x00010bff8740(puVar3,param_2,uVar4,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055ccd4c; end: 1055ccdd7;  */

void FUN_1055ccd4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb9f8;
  _objc_alloc(PTR_PTR_1126bb9f8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0236e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ccdd8; end: 1055cce87;  */

void FUN_1055ccdd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010be4a480(lVar1,param_2,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1055cce88; end: 1055cd05f; -[SCLensContentEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cce88(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127264a0;
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112726498);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055cd060;
  puStack_70 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  func_0x00010c1383a0(uVar4);
  _objc_release(uVar4);
  lVar6 = (long)_DAT_11272649c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    _dispatch_group_enter(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar5;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1055cd068;
    puStack_98 = &UNK_110842e18;
    _objc_retain(uVar3);
    uStack_90 = uVar3;
    func_0x00010c139e40(uVar4);
    _objc_release(uVar4);
    _objc_release(uStack_90);
  }
  uVar4 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar5;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1055cd070;
  puStack_c0 = &UNK_110842e18;
  puStack_b8 = puVar2;
  _objc_retain(puVar2);
  func_0x000100bc0718(uVar3,uVar4,&puStack_d8);
  _objc_release(uVar4);
  puVar5 = puVar2;
  func_0x00010c117720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_b8);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055cd060; end: 1055cd077;  */

void FUN_1055cd060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1055cd078; end: 1055cd1b7; -[SCLensContentEntryPoint _cacheMetadataProvider] */

void FUN_1055cd078(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010074c930();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bba78;
  _objc_alloc(PTR_PTR_1126bba78);
  uVar1 = param_1;
  FUN_1055cd1b8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003c8e58(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0033a0(puVar4,param_2,uVar2,uVar3,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055cd1b8; end: 1055cd1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cd1b8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127264b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055cd1dc; end: 1055cd48b; -[SCLensContentEntryPoint _lensContentDataFetcherWithSystemLevelCache:] */

void FUN_1055cd1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126bba80;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010074c930(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x0001003c8e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c092300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bba88;
  _objc_alloc();
  uVar2 = param_1;
  FUN_1055cd1b8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003080(puVar4,param_2,uVar5,uVar3,param_3);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126bb998;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126bba88;
  _objc_alloc(PTR_PTR_1126bba88);
  uVar2 = param_1;
  func_0x000100ba26d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003080(puVar7,param_2,uVar5,uVar3,puVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126bba90;
  _objc_alloc(PTR_PTR_1126bba90);
  uVar2 = param_1;
  func_0x00010be13640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010074c90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126bb9c8;
  _objc_opt_new(PTR_PTR_1126bb9c8);
  func_0x00010074c930();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003840(puVar8,param_2,puVar4,puVar7,uVar2,uVar9,puVar10,puVar1,uVar11);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055cd48c; end: 1055cd4e7; -[SCLensContentEntryPoint _fetchRanker] */

void FUN_1055cd48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bba98;
  _objc_alloc(PTR_PTR_1126bba98);
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f100(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055cd4e8; end: 1055cd5ef; -[SCLensContentEntryPoint _lensIconRepositoryWithContentDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cd4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bbaa0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x0001003c8e58(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025a60(puVar1,param_2,param_3,lVar3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126bbaa8;
  _objc_alloc(PTR_PTR_1126bbaa8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127264e0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf24d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b060(puVar4,param_2,puVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055cd5f0; end: 1055cd73b; -[SCLensContentEntryPoint _createLensDataPrefetcherWithFetcher:lensDataConfigProvider:] */

void FUN_1055cd5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bbab0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x000100ba133c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f98a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023860(puVar1,param_2,param_3,uVar3,0,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126bbab8;
  _objc_alloc(PTR_PTR_1126bbab8);
  uVar2 = param_3;
  func_0x00010c0f98a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ba133c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023880(puVar5,param_2,param_3,uVar2,uVar3,puVar1,0);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055cd73c; end: 1055cd7b7; -[SCLensContentEntryPoint _createLensFetchTypeProvider] */

void FUN_1055cd73c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbac8;
  _objc_alloc(PTR_PTR_1126bbac8);
  func_0x0001003c8e2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf07b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3d00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055cd7b8; end: 1055cd867; -[SCLensContentEntryPoint _lensBitmojiIconFetcherWithDownloadOperationFactory:performer:] */

void FUN_1055cd7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bbb30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126bbb38;
  _objc_alloc(PTR_PTR_1126bbb38);
  func_0x00010c023940();
  puVar3 = PTR_PTR_1126bbb40;
  _objc_alloc(PTR_PTR_1126bbb40);
  func_0x00010c023b20();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055cd868; end: 1055cdaab; -[SCLensContentEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cd868(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726530,0);
  _objc_storeStrong(param_1 + _DAT_11272652c,0);
  _objc_storeStrong(param_1 + _DAT_112726528,0);
  _objc_storeStrong(param_1 + _DAT_112726524,0);
  _objc_storeStrong(param_1 + _DAT_112726520,0);
  _objc_storeStrong(param_1 + _DAT_11272651c,0);
  _objc_storeStrong(param_1 + _DAT_112726518,0);
  _objc_storeStrong(param_1 + _DAT_112726514,0);
  _objc_storeStrong(param_1 + _DAT_112726510,0);
  _objc_storeStrong(param_1 + _DAT_11272650c,0);
  _objc_storeStrong(param_1 + _DAT_112726508,0);
  _objc_storeStrong(param_1 + _DAT_112726504,0);
  _objc_storeStrong(param_1 + _DAT_112726500,0);
  _objc_storeStrong(param_1 + _DAT_1127264fc,0);
  _objc_destroyWeak(param_1 + _DAT_1127264f8);
  _objc_destroyWeak(param_1 + _DAT_1127264f4);
  _objc_destroyWeak(param_1 + _DAT_1127264f0);
  _objc_destroyWeak(param_1 + _DAT_1127264a4);
  _objc_destroyWeak(param_1 + _DAT_1127264ec);
  _objc_destroyWeak(param_1 + _DAT_1127264e8);
  _objc_destroyWeak(param_1 + _DAT_112726494);
  _objc_destroyWeak(param_1 + _DAT_1127264e4);
  _objc_destroyWeak(param_1 + _DAT_1127264e0);
  _objc_destroyWeak(param_1 + _DAT_1127264dc);
  _objc_destroyWeak(param_1 + _DAT_1127264d8);
  _objc_destroyWeak(param_1 + _DAT_1127264d4);
  _objc_destroyWeak(param_1 + _DAT_1127264d0);
  _objc_destroyWeak(param_1 + _DAT_1127264cc);
  _objc_destroyWeak(param_1 + _DAT_1127264c8);
  _objc_destroyWeak(param_1 + _DAT_1127264c4);
  _objc_destroyWeak(param_1 + _DAT_1127264c0);
  _objc_destroyWeak(param_1 + _DAT_1127264bc);
  _objc_destroyWeak(param_1 + _DAT_1127264b8);
  _objc_destroyWeak(param_1 + _DAT_1127264b4);
  _objc_destroyWeak(param_1 + _DAT_1127264b0);
  _objc_destroyWeak(param_1 + _DAT_1127264ac);
  _objc_destroyWeak(param_1 + _DAT_1127264a8);
  _objc_storeStrong(param_1 + _DAT_11272649c,0);
  _objc_storeStrong(param_1 + _DAT_112726498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127264a0,0);
  return;
}



/* Entry: 1055cdaac; end: 1055cdb53; -[SCLensDownloadStatusProvider downloadStatusForLens:] */

long FUN_1055cdaac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c072d20();
  lVar1 = 2;
  if ((int)uVar2 == 0) {
    lVar1 = 0;
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4c6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010c094380(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 1055cdb54; end: 1055cdb5b; -[SCLensDownloadStatusProvider isContentDownloadedForLens:] */

void FUN_1055cdb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isFetched_1125fa558);
  return;
}



/* Entry: 1055cdb5c; end: 1055cdb67; -[SCLensDownloadStatusProvider .cxx_destruct] */

void FUN_1055cdb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cdb68; end: 1055cdc27; -[SCDefaultLensIconRepository initWithIconUrlFetcher:bundledLensProvider:] */

undefined1 *
FUN_1055cdb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bbb48;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cdc28; end: 1055cdcab; -[SCDefaultLensIconRepository lensIconForKey:] */

void FUN_1055cdc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c094400(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c06d920();
    if ((int)uVar2 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x00010bdd7080(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055cdcac; end: 1055cdcb3; -[SCDefaultLensIconRepository setLensIcon:withKey:] */

void FUN_1055cdcac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bbd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLensIconImage_forKey__11264c968);
  return;
}



/* Entry: 1055cdcb4; end: 1055cdcf3; -[SCDefaultLensIconRepository clearCache] */

void FUN_1055cdcb4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3ab80(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055cdcf4; end: 1055cde1b; -[SCDefaultLensIconRepository lensIconFutureForKey:] */

void FUN_1055cdcf4(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06d920();
  if ((uVar1 & 1) == 0) {
    func_0x00010be8b1a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x00010bdd7080(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      uVar1 = param_3;
      func_0x00010c094500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR_PTR_1126ae558;
      if (uVar1 == 0) {
        _objc_opt_class(param_1);
        func_0x00010be0b240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9c80(puVar3,param_2,param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        param_1 = puVar3;
      }
      else {
        func_0x00010be8b1a0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      param_1 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055cde1c; end: 1055cde6b; -[SCDefaultLensIconRepository lensIconPlaceholder] */

void FUN_1055cde1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf24ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055cde6c; end: 1055cdf2b; -[SCDefaultLensIconRepository initWithIconUrlFetcher:bundledImageProvider:] */

undefined1 *
FUN_1055cde6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bbb48;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cdf2c; end: 1055cdfbb; -[SCDefaultLensIconRepository _bundledIconImageForKey:] */

void FUN_1055cdf2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c091460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf24d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1055cdfbc; end: 1055ce273; -[SCDefaultLensIconRepository _remoteIconImageFutureForKey:] */

void FUN_1055cdfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c094400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    uVar5 = param_3;
    func_0x00010c091460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa840(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c094500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af940(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 8));
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0943e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    puVar7 = PTR_PTR_1126ae790;
    puVar6 = PTR_PTR_1126bbaa8;
    _objc_opt_class(PTR_PTR_1126bbaa8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    puVar7 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055ce274; end: 1055ce343;  */

void FUN_1055ce274(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  if (param_2 == 0) {
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126bbaa8;
      func_0x00010be0b240(PTR_PTR_1126bbaa8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      puVar2 = param_3;
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1bbd00();
    _objc_release(lVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055ce344; end: 1055ce433; +[SCDefaultLensIconRepository _errorWithCode:] */

void FUN_1055ce344(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (param_3 == -100) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dede78;
    }
    ppuStack_40 = &PTR____CFConstantStringClassReference_110dede98;
    if (param_3 != -99) {
      ppuStack_40 = ppuVar1;
    }
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ce434; end: 1055ce46f; -[SCDefaultLensIconRepository .cxx_destruct] */

void FUN_1055ce434(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ce470; end: 1055ce513; -[SCLensIconUrlFetcher initWithLensURLDataFetcher:lensPerformerProvider:] */

undefined1 *
FUN_1055ce470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9360;
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



/* Entry: 1055ce514; end: 1055ce85b; -[SCLensIconUrlFetcher lensIconFutureForLens:] */

void FUN_1055ce514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126ae558;
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dedeb8,0xffffffffffffff38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar6,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126bbb50;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010b729684(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010b729834(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03a140(puVar4,param_2,4,0,uVar1,uVar5,
                        &PTR____CFConstantStringClassReference_110db6dd8);
    _objc_release(uVar5);
    _objc_release(uVar1);
    puVar6 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0680e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1055ce760;
    puStack_80 = &UNK_1108475b0;
    lStack_78 = param_1;
    _objc_retain(puVar2);
    puStack_70 = puVar2;
    _objc_retain(param_3);
    uStack_68 = param_3;
    puStack_60 = puVar4;
    puStack_58 = puVar3;
    _objc_retain(puVar3);
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(puVar7,param_2,&puStack_98);
    puVar6 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
    _objc_release(puStack_60);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055ce85c; end: 1055ce873;  */

void FUN_1055ce85c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1055ce874; end: 1055ce8a3; -[SCLensIconUrlFetcher .cxx_destruct] */

void FUN_1055ce874(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ce8a4; end: 1055ce91b; -[SCLensExplorerStudySettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ce8a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726550);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272654c);
  return;
}



/* Entry: 1055ce91c; end: 1055ce9bb; -[SCLensDataLoggerServiceProvider _resourceVerificationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ce91c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + _DAT_112726554;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126bbb80;
  _objc_alloc(PTR_PTR_1126bbb80);
  func_0x00010c018080();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055ce9bc; end: 1055ce9ff; -[SCLensDataLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ce9bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726558);
  _objc_destroyWeak(param_1 + _DAT_112726554);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272655c);
  return;
}



/* Entry: 1055cea00; end: 1055cea87;  */

void FUN_1055cea00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010be4bec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be63140(param_1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055cea88; end: 1055cebeb; -[SCLensLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055cea88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726568,0);
  _objc_storeStrong(param_1 + _DAT_112726564,0);
  _objc_storeStrong(param_1 + _DAT_112726560,0);
  _objc_destroyWeak(param_1 + _DAT_1127265ac);
  _objc_destroyWeak(param_1 + _DAT_1127265a8);
  _objc_destroyWeak(param_1 + _DAT_1127265a4);
  _objc_destroyWeak(param_1 + _DAT_1127265a0);
  _objc_destroyWeak(param_1 + _DAT_11272659c);
  _objc_destroyWeak(param_1 + _DAT_112726598);
  _objc_destroyWeak(param_1 + _DAT_112726594);
  _objc_destroyWeak(param_1 + _DAT_112726590);
  _objc_destroyWeak(param_1 + _DAT_11272658c);
  _objc_destroyWeak(param_1 + _DAT_112726588);
  _objc_destroyWeak(param_1 + _DAT_112726584);
  _objc_destroyWeak(param_1 + _DAT_112726580);
  _objc_destroyWeak(param_1 + _DAT_11272657c);
  _objc_destroyWeak(param_1 + _DAT_11272656c);
  _objc_destroyWeak(param_1 + _DAT_112726578);
  _objc_destroyWeak(param_1 + _DAT_112726574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726570);
  return;
}



/* Entry: 1055cebec; end: 1055cec93;  */

void FUN_1055cebec(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126bbbb0;
  _objc_alloc(PTR_PTR_1126bbbb0);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c054e80(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055cec94; end: 1055cecf7;  */

void FUN_1055cec94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bece320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055cecf8; end: 1055ced0b;  */

void FUN_1055cecf8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf68fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_defaultCentralizedDataStore_1125b7d98);
  return;
}



/* Entry: 1055ced0c; end: 1055ced83;  */

void FUN_1055ced0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbbd8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf68fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c024fe0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ced84; end: 1055ceefb; -[SCLensUnlockerEntryPoint _mockLensUnlocker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ced84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bbbc8;
  _objc_alloc(PTR_PTR_1126bbbc8);
  lVar2 = param_1;
  func_0x000100bc89a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c281600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025b00(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (param_1 == 0) {
    uVar5 = 0;
    func_0x00010c097b60(0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1898e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(0);
    param_1 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_1127265e0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c097b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1898e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    param_1 = param_1 + _DAT_1127265dc;
    _objc_loadWeakRetained(param_1);
  }
  lVar2 = param_1;
  func_0x00010c097b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055ceefc; end: 1055cefbf; -[SCLensUnlockerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ceefc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127265b4,0);
  _objc_storeStrong(param_1 + _DAT_1127265b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127265e0);
  _objc_destroyWeak(param_1 + _DAT_1127265dc);
  _objc_destroyWeak(param_1 + _DAT_1127265d8);
  _objc_destroyWeak(param_1 + _DAT_1127265d4);
  _objc_destroyWeak(param_1 + _DAT_1127265d0);
  _objc_destroyWeak(param_1 + _DAT_1127265cc);
  _objc_destroyWeak(param_1 + _DAT_1127265c8);
  _objc_destroyWeak(param_1 + _DAT_1127265c4);
  _objc_destroyWeak(param_1 + _DAT_1127265c0);
  _objc_destroyWeak(param_1 + _DAT_1127265bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127265b8);
  return;
}



/* Entry: 1055cefc0; end: 1055cf037; -[SCLensUnlockingFactoryBlockImpl initWithTrackedUnlockerFactoryBlock:] */

undefined1 * FUN_1055cefc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cf038; end: 1055cf047; -[SCLensUnlockingFactoryBlockImpl makeTrackedLensUnlockerWithLensRepostiory:] */

void FUN_1055cf038(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001055cf044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1055cf048; end: 1055cf053; -[SCLensUnlockingFactoryBlockImpl .cxx_destruct] */

void FUN_1055cf048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cf054; end: 1055cf0c7; -[UNISCInLensCreationInLensCreationService initWithUnifiedGrpcService:] */

undefined1 * FUN_1055cf054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9370;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055cf0c8; end: 1055cf1ab; -[UNISCInLensCreationInLensCreationService createCustomizationWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbbf8;
  _objc_opt_class(PTR_PTR_1126bbbf8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedf18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf1ac; end: 1055cf28f; -[UNISCInLensCreationInLensCreationService getCustomizationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbc00;
  _objc_opt_class(PTR_PTR_1126bbc00);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedf38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf290; end: 1055cf373; -[UNISCInLensCreationInLensCreationService getTrendingCustomizationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbc08;
  _objc_opt_class(PTR_PTR_1126bbc08);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedf58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf374; end: 1055cf457; -[UNISCInLensCreationInLensCreationService setTrendingCustomizationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbc10;
  _objc_opt_class(PTR_PTR_1126bbc10);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedf78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf458; end: 1055cf53b; -[UNISCInLensCreationInLensCreationService setCustomizationTrendingCountWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbc18;
  _objc_opt_class(PTR_PTR_1126bbc18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedf98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf53c; end: 1055cf61f; -[UNISCInLensCreationInLensCreationService deleteAllCustomizationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbc20;
  _objc_opt_class(PTR_PTR_1126bbc20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedfb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf620; end: 1055cf703; -[UNISCInLensCreationInLensCreationService getCustomizedLensesWithRequest:callOptionsBuilder:handler:] */

void FUN_1055cf620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bbc28;
  _objc_opt_class(PTR_PTR_1126bbc28);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dedfd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055cf704; end: 1055cf70f; -[UNISCInLensCreationInLensCreationService .cxx_destruct] */

void FUN_1055cf704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055cf710; end: 1055cf78b;  */

undefined * FUN_1055cf710(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcc10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dedff8,
                        &UNK_10ddb3a94,&UNK_10ddb3ae0,3,FUN_1055cf78c,0);
    do {
      if (puRam00000001136bcc10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcc10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcc10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcc10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcc10;
}



/* Entry: 1055cf78c; end: 1055cf797;  */

bool FUN_1055cf78c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055cf798; end: 1055cf813;  */

undefined * FUN_1055cf798(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcc18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dee018,
                        &UNK_10ddb3aec,&UNK_10ddb3b18,5,FUN_1055cf814,0);
    do {
      if (puRam00000001136bcc18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcc18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcc18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcc18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcc18;
}



/* Entry: 1055cf814; end: 1055cf81f;  */

bool FUN_1055cf814(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1055cf820; end: 1055cf89b;  */

undefined * FUN_1055cf820(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcc20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dee038,
                        &UNK_10ddb3b2c,&UNK_10ddb3b7c,4,FUN_1055cf89c,0);
    do {
      if (puRam00000001136bcc20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcc20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcc20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcc20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcc20;
}



/* Entry: 1055cf89c; end: 1055cf8a7;  */

bool FUN_1055cf89c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1055cf8a8; end: 1055cf923;  */

undefined * FUN_1055cf8a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcc28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dee058,
                        &UNK_10ddb3b8c,&UNK_10ddb3bb4,3,FUN_1055cf924,0);
    do {
      if (puRam00000001136bcc28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcc28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcc28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcc28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcc28;
}



/* Entry: 1055cf924; end: 1055cf92f;  */

bool FUN_1055cf924(uint param_1)

{
  return param_1 < 3;
}


