/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105206e70; end: 105206f37; -[SCDeepLinkHandlingProcedureAuthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105206e70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f818,0);
  _objc_destroyWeak(param_1 + _DAT_11271f820);
  _objc_storeStrong(param_1 + _DAT_11271f814,0);
  _objc_destroyWeak(param_1 + _DAT_11271f81c);
  _objc_destroyWeak(param_1 + _DAT_11271f810);
  _objc_destroyWeak(param_1 + _DAT_11271f804);
  _objc_destroyWeak(param_1 + _DAT_11271f7fc);
  _objc_destroyWeak(param_1 + _DAT_11271f7f8);
  _objc_destroyWeak(param_1 + _DAT_11271f7f4);
  _objc_destroyWeak(param_1 + _DAT_11271f7f0);
  _objc_destroyWeak(param_1 + _DAT_11271f800);
  _objc_destroyWeak(param_1 + _DAT_11271f80c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f808,0);
  return;
}



/* Entry: 105206f38; end: 10520700f; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint begin] */

void FUN_105206f38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010bdf8ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010be89fe0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105207010; end: 10520707b;  */

void FUN_105207010(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27f80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520707c; end: 1052072f3; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint _handleDeepLinkRequestWithProcessorPlugins:transformerPlugins:metricsEmitter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520707c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined *puVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126b6380;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271f824;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c22d2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271f828;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271f82c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c08ee80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271f830;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271f834;
  _objc_loadWeakRetained();
  puVar11 = PTR_PTR_1126b6388;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e7c0(puVar1,param_2,0,param_3,param_4,0,lVar3,lVar5,lVar7,param_5,lVar9,lVar10,
                      puVar11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11271f838);
  *(undefined **)(param_1 + _DAT_11271f838) = puVar1;
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271f83c;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c13e0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052072f4; end: 10520734b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052072f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c082da0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f838),param_2,
                      param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7eaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10520734c; end: 105207373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520734c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f838),
             PTR_s_handleOpenURL_sourceApplication__1125d20c0,param_2,param_3,param_4,param_5,
             param_6);
  return;
}



/* Entry: 105207374; end: 1052073e3; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint endDeepLinkHandlingScopeWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105207374(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271f83c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf772c0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052073e4; end: 10520746b; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint didReachDeepLinkDestinationWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052073e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_11271f83c;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didReachDeepLinkDestinationWithE_1125bbd20);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf78de0(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10520746c; end: 1052076c7; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint _deepLinkMetricsEmitter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520746c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar1 = param_1 + _DAT_11271f83c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c13e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b6390;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271f82c;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c08ee80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271f828;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf67ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271f830;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271f840;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c266da0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c680(puVar3);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_80,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1052076c8; end: 1052076e7;  */

void FUN_1052076c8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1052076e8; end: 1052079fb; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint _registeredPluginsWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052076e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271f844);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105207a48;
  puStack_b0 = &UNK_110842998;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(puVar1);
  puStack_a8 = puVar1;
  func_0x00010bf9d5c0(uVar9);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271f848);
  puVar8 = auStack_98;
  _objc_copyWeak(auStack_d0,puVar8);
  _objc_retain(puVar2);
  func_0x00010bf9d5c0(uVar9);
  puVar6 = PTR_PTR_1126ae558;
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_90 = puVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_retain(param_3);
  param_1 = param_1 + _DAT_11271f83c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(puVar6);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_release(puStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_3);
  puVar6 = PTR_PTR_1126b63a8;
  _objc_retain(puVar8);
  _objc_alloc(puVar6);
  func_0x00010c037380();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1052079fc; end: 105207a47;  */

void FUN_1052079fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b63a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105207a48; end: 105207b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105207a48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + _DAT_11271f84c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar4;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105207b14; end: 105207b5f;  */

void FUN_105207b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b63a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105207b60; end: 105207c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105207b60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + _DAT_11271f850;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar4;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105207c2c; end: 105207cab;  */

void FUN_105207c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c089820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105207cac; end: 105207d93; -[SCDeepLinkHandlingProcedureUnauthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105207cac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f848,0);
  _objc_destroyWeak(param_1 + _DAT_11271f850);
  _objc_destroyWeak(param_1 + _DAT_11271f84c);
  _objc_storeStrong(param_1 + _DAT_11271f844,0);
  _objc_destroyWeak(param_1 + _DAT_11271f840);
  _objc_destroyWeak(param_1 + _DAT_11271f824);
  _objc_destroyWeak(param_1 + _DAT_11271f834);
  _objc_destroyWeak(param_1 + _DAT_11271f82c);
  _objc_destroyWeak(param_1 + _DAT_11271f830);
  _objc_destroyWeak(param_1 + _DAT_11271f828);
  _objc_destroyWeak(param_1 + _DAT_11271f83c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f838,0);
  return;
}



/* Entry: 105207d94; end: 105207fdf; -[SCDeferredDeepLinkEntryPoint _handleDeferredDeepLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105207d94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11271f854;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6abe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6aba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010bf68280(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2475e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dcb858;
  puStack_78 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dcb898;
  lVar1 = param_1 + _DAT_11271f858;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c073d80();
  func_0x00010c0df6e0(puVar7,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271f85c;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf6abc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bfd3400(lVar3);
  func_0x00010bfd1ca0(lVar6,param_2,lVar2,lVar4,puVar8,1,8,lVar9,0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf6abe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2576c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar3 + _DAT_11271f854);
  _objc_destroyWeak(lVar3 + _DAT_11271f85c);
  _objc_destroyWeak(lVar3 + _DAT_11271f868);
  _objc_destroyWeak(lVar3 + _DAT_11271f864);
  _objc_destroyWeak(lVar3 + _DAT_11271f858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar3 + _DAT_11271f860);
  return;
}



/* Entry: 105207fe0; end: 105208047; -[SCDeferredDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105207fe0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f854);
  _objc_destroyWeak(param_1 + _DAT_11271f85c);
  _objc_destroyWeak(param_1 + _DAT_11271f868);
  _objc_destroyWeak(param_1 + _DAT_11271f864);
  _objc_destroyWeak(param_1 + _DAT_11271f858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f860);
  return;
}



/* Entry: 105208048; end: 10520819f; -[SCSnapchatHomepageDeepLinkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105208048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b63b0;
  _objc_alloc(PTR_PTR_1126b63b0);
  lVar2 = param_1 + _DAT_11271f86c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11271f878;
    _objc_loadWeakRetained(lVar6);
  }
  lVar4 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11271f87c;
    _objc_loadWeakRetained(lVar7);
  }
  lVar5 = lVar7;
  func_0x00010c0f14e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e640(puVar1,param_2,lVar3,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271f870;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052081a0; end: 1052081fb; -[SCSnapchatHomepageDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052081a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f87c);
  _objc_destroyWeak(param_1 + _DAT_11271f878);
  _objc_destroyWeak(param_1 + _DAT_11271f86c);
  _objc_destroyWeak(param_1 + _DAT_11271f874);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f870);
  return;
}



/* Entry: 1052081fc; end: 105208297; -[SCSnapchatHomepageDeepLinkHandler initWithNavigationDelegate:circumstanceEngine:pageLauncher:] */

undefined1 *
FUN_1052081fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105208298; end: 1052082ab; -[SCSnapchatHomepageDeepLinkHandler identifier] */

void FUN_105208298(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052082ac; end: 1052082b3; -[SCSnapchatHomepageDeepLinkHandler priority] */

undefined8 FUN_1052082ac(void)

{
  return 1000;
}



/* Entry: 1052082b4; end: 1052082c7; -[SCSnapchatHomepageDeepLinkHandler canProvideProcessorForFeature:] */

void FUN_1052082b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 1052082c8; end: 10520832f; -[SCSnapchatHomepageDeepLinkHandler isValidDeepLink:] */

undefined8 FUN_1052082c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105208330; end: 105208333; -[SCSnapchatHomepageDeepLinkHandler makeDeepLinkProcessor] */

void FUN_105208330(void)

{
  return;
}



/* Entry: 105208334; end: 10520849b; -[SCSnapchatHomepageDeepLinkHandler processDeepLinkURL:additionalInfo:delegate:] */

void FUN_105208334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_5);
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_alloc_init(PTR_PTR_1126b0ea8);
  puVar2 = PTR_PTR_1126b63b8;
  _objc_alloc_init(PTR_PTR_1126b63b8);
  func_0x00010c176040(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c08c020(uVar3);
  _objc_release(uVar3);
  func_0x00010c0a5fe0(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10520849c; end: 105208507;  */

void FUN_10520849c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105208508; end: 10520850f; -[SCSnapchatHomepageDeepLinkHandler shouldForceNavigation] */

undefined8 FUN_105208508(void)

{
  return 1;
}



/* Entry: 105208510; end: 105208513; -[SCSnapchatHomepageDeepLinkHandler processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_105208510(void)

{
  return;
}



/* Entry: 105208514; end: 10520853f; -[SCSnapchatHomepageDeepLinkHandler .cxx_destruct] */

void FUN_105208514(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105208540; end: 1052085b3; -[SCUniversalDeepLinkTransformerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105208540(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b63c0;
  _objc_opt_new(PTR_PTR_1126b63c0);
  param_1 = param_1 + _DAT_11271f888;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052085b4; end: 1052085c3; -[SCUniversalDeepLinkTransformerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052085b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f888);
  return;
}



/* Entry: 1052085c4; end: 1052085d7; -[SCUniversalDeepLinkTransformerPlugin identifier] */

void FUN_1052085c4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052085d8; end: 1052085df; -[SCUniversalDeepLinkTransformerPlugin priority] */

undefined8 FUN_1052085d8(void)

{
  return 1000;
}



/* Entry: 1052085e0; end: 1052086cf; -[SCUniversalDeepLinkTransformerPlugin canTransformURL:] */

bool FUN_1052085e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc8d78;
  uVar2 = param_3;
  func_0x00010c1504a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8d78,param_2,uVar2);
  _objc_release(uVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc8d58;
  uVar2 = param_3;
  func_0x00010c1504a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8d58,param_2,uVar2);
  _objc_release(uVar2);
  if (ppuVar3 == (undefined **)0x0 || ppuVar4 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e611f8;
    uVar2 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e611f8,param_2,uVar2);
    bVar1 = ppuVar3 == (undefined **)0x0;
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1052086d0; end: 10520887f; -[SCUniversalDeepLinkTransformerPlugin transformedURLForDeepLinkURL:] */

void FUN_1052086d0(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  func_0x00010bf2da80(param_1,param_2,param_3);
  if ((param_1 & 1) == 0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf51e00(param_3);
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c057bc0();
    ppuVar9 = &PTR____CFConstantStringClassReference_110dd3c78;
    func_0x00010c1f6900();
    func_0x00010c1a9200(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    puVar3 = puVar2;
    func_0x00010bdc2b80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar4 = puVar3;
    func_0x00010beec820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dd3c78);
    ppuVar5 = &PTR____CFConstantStringClassReference_110db3eb8;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110db3eb8);
    puVar6 = puVar4;
    func_0x00010c260c20(puVar4,param_2,(long)ppuVar9 + (long)ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c260c00(puVar4,param_2,(long)ppuVar9 + (long)ppuVar5 + 1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c25ce40(puVar6,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    param_3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    if (param_3 != (undefined *)0x0) {
      puVar3 = param_3;
    }
    _objc_retain(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105208880; end: 105208883; -[SCCofTweakMenuEntryPoint begin] */

void FUN_105208880(void)

{
  return;
}



/* Entry: 105208884; end: 1052088f7; -[SCCofTweakMenuEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105208884(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f8a4);
  _objc_destroyWeak(param_1 + _DAT_11271f8a0);
  _objc_destroyWeak(param_1 + _DAT_11271f89c);
  _objc_destroyWeak(param_1 + _DAT_11271f898);
  _objc_destroyWeak(param_1 + _DAT_11271f894);
  _objc_destroyWeak(param_1 + _DAT_11271f890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f88c);
  return;
}



/* Entry: 1052088f8; end: 1052088fb; -[SCCofUserInfoEntryPoint begin] */

void FUN_1052088f8(void)

{
  return;
}



/* Entry: 1052088fc; end: 10520891b; -[SCCofUserInfoEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052088fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f8a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10520891c; end: 10520892f; -[SCCofUserInfoEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520891c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f8a8,param_3);
  return;
}



/* Entry: 105208930; end: 10520893f; -[SCCofUserInfoEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105208930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f8a8);
  return;
}



/* Entry: 105208940; end: 105208a5b; -[SCMemoriesLiveRenderingPlaybackModelProvider initWithSnapDoc:memoriesSnapRendererServices:performer:liveRenderingMetricsRecorder:] */

undefined1 *
FUN_105208940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6ec0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105208a5c; end: 105208adf; -[SCMemoriesLiveRenderingPlaybackModelProvider dealloc] */

void FUN_105208a5c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c123920(*(undefined8 *)(param_1 + 0x38));
  puStack_28 = PTR_PTR_1126e6ec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105208ae0; end: 105208ae7; -[SCMemoriesLiveRenderingPlaybackModelProvider resultFuture] */

void FUN_105208ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105208ae8; end: 105208ce7; -[SCMemoriesLiveRenderingPlaybackModelProvider triggerIfNeeded] */

void FUN_105208ae8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _os_unfair_lock_lock(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0c9b20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139300();
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_2 + 0x10);
    func_0x00010c0c9b20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c109ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_retain(lVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_2 + 0x28) = lVar4;
    _objc_release(uVar5);
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x40) = param_1;
    *(undefined1 *)(param_2 + 0x48) = 0;
    *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
    if (*(double *)(param_2 + 0x58) == 0.0) {
      *(undefined8 *)(param_2 + 0x58) = param_1;
    }
    _os_unfair_lock_unlock(param_2 + 0x30);
    _objc_initWeak(auStack_48,param_2);
    lVar1 = lVar4;
    func_0x00010c13cb40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_1;
    func_0x00010c297260(lVar1);
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010c13cb40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar4);
  }
  else {
    func_0x00010c13cb40();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_2 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105208ce8; end: 105208dff;  */

void FUN_105208ce8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_105208ddc;
  _os_unfair_lock_lock(lVar2 + 0x30);
  if ((*(byte *)(lVar2 + 0x48) & 1) == 0) {
    dVar5 = *(double *)(lVar2 + 0x40);
    if (dVar5 != *(double *)(param_1 + 0x28) || (param_2 == 0 || param_3 != 0)) {
      if (dVar5 != *(double *)(param_1 + 0x28)) goto LAB_105208d40;
      bVar4 = 0;
    }
    else {
      bVar4 = *(byte *)(lVar2 + 0x60) ^ 1;
    }
    *(undefined1 *)(lVar2 + 0x48) = 1;
    lVar1 = 0x60;
    if (param_2 == 0 || param_3 != 0) {
      lVar1 = 0x61;
    }
    *(undefined1 *)(lVar2 + lVar1) = 1;
    dVar6 = *(double *)(lVar2 + 0x58);
    _os_unfair_lock_unlock(lVar2 + 0x30);
    _CACurrentMediaTime();
    dVar5 = dVar5 - *(double *)(param_1 + 0x28);
    func_0x00010c123880(dVar5,*(undefined8 *)(lVar2 + 0x38));
    if ((bVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      _CACurrentMediaTime();
      func_0x00010c123940(dVar5 - dVar6,uVar3);
    }
  }
  else {
LAB_105208d40:
    _os_unfair_lock_unlock(lVar2 + 0x30);
  }
LAB_105208ddc:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105208e00; end: 105208e9f; -[SCMemoriesLiveRenderingPlaybackModelProvider invalidate] */

void FUN_105208e00(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _os_unfair_lock_lock(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x28);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  _objc_release(uVar2);
  if ((lVar3 == 0) || ((*(byte *)(param_2 + 0x48) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x48) = 1;
  }
  _CACurrentMediaTime();
  dVar4 = *(double *)(param_2 + 0x40);
  _os_unfair_lock_unlock(param_2 + 0x30);
  if (bVar1) {
    func_0x00010c123880(param_1 - dVar4,*(undefined8 *)(param_2 + 0x38),param_3,2,0);
  }
  func_0x00010bf2dba0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105208ea0; end: 105208eff; -[SCMemoriesLiveRenderingPlaybackModelProvider .cxx_destruct] */

void FUN_105208ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105208f00; end: 105208f6b; -[SCNGSMEMemoriesOperaResolverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105208f00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f8f4,0);
  _objc_destroyWeak(param_1 + _DAT_11271f8ec);
  _objc_destroyWeak(param_1 + _DAT_11271f8e0);
  _objc_destroyWeak(param_1 + _DAT_11271f8e8);
  _objc_destroyWeak(param_1 + _DAT_11271f8e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f8f0);
  return;
}



/* Entry: 105208f6c; end: 105209517; -[SCNGSMEMemoriesSnapDocResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

ulong FUN_105208f6c(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  if (uVar3 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    do {
      uVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(uVar4);
        }
        uVar5 = *(undefined8 *)(uVar18 * 8);
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0cc820();
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar20 = (int)uVar7 == 6 | uVar20;
        uVar18 = uVar18 + 1;
      } while (uVar3 != uVar18);
      uVar3 = uVar4;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(uVar4);
  uVar3 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf04920();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30e80();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bfd6880();
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf8c3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar3;
    func_0x00010bfdc300();
    uVar1 = (uint)uVar19;
    _objc_release(uVar3);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar3 = param_3;
    func_0x00010c0d73c0();
    uVar2 = (uint)uVar3;
  }
  else {
    uVar2 = 0;
  }
  if ((((uVar20 | (uint)uVar18 | (uint)((int)uVar4 == 2) | uVar1) & 1) != 0) || (uVar2 != 0)) {
    if (((uVar1 | uVar2 ^ 0xffffffff) & 1) == 0) {
      puVar8 = PTR_PTR_1126b63d0;
      _objc_alloc();
      func_0x00010c0474c0();
      puVar9 = puVar8;
      func_0x00010c13cb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      puVar8 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0f40c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar8);
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010c0c62a0();
    if (uVar3 < 2) {
      uVar3 = param_3;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar3;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_retain(uVar18);
      uVar3 = uVar18;
      func_0x00010bf52a60();
      lVar14 = lRam0000000000000000;
      puVar8 = (undefined *)0x0;
      if (uVar3 != 0) {
        do {
          uVar19 = 0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(uVar18);
            }
            uVar21 = *(ulong *)(uVar19 * 8);
            uVar10 = uVar21;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c0c55e0();
            uVar13 = uVar4;
            func_0x00010c0c55e0();
            _objc_release(uVar11);
            if (uVar12 == uVar13) {
              func_0x00010c118b40();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar21;
              func_0x00010bfdd960();
              _objc_release(uVar21);
              if ((uVar11 & 1) == 0) {
                uVar11 = uVar10;
                func_0x00010bfd6500();
                puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                if ((int)uVar11 == 0) goto LAB_105209380;
                uVar3 = uVar10;
                func_0x00010bf7ee20(uVar10);
                _objc_retainAutoreleasedReturnValue();
                uVar19 = uVar3;
                func_0x00010c2a5040();
                uVar11 = uVar10;
                func_0x00010bf7ee20(uVar10);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x00010bfe0640();
                func_0x00010c2971c0((double)(uVar19 & 0xffffffff),(double)(uVar12 & 0xffffffff),
                                    puVar8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar11);
                _objc_release(uVar3);
              }
              else {
                puVar8 = (undefined *)0x0;
              }
              _objc_release(uVar10);
              goto LAB_105209434;
            }
LAB_105209380:
            _objc_release(uVar10);
            uVar19 = uVar19 + 1;
          } while (uVar3 != uVar19);
          uVar3 = uVar18;
          func_0x00010bf52a60();
        } while (uVar3 != 0);
        puVar8 = (undefined *)0x0;
      }
LAB_105209434:
      _objc_release(uVar18);
      _objc_release(uVar18);
      _objc_release(uVar4);
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    _objc_release(param_3);
    func_0x00010c1d0760(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c1d0760(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    func_0x00010bf4e080(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar14;
    func_0x00010c26b020();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar17;
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c08fa60();
    _objc_release(lVar15);
    _objc_release(lVar17);
    _objc_release(lVar14);
    _objc_release(param_2);
    return (ulong)(lVar16 != 0);
  }
  return param_3;
}



/* Entry: 105209518; end: 1052095b3;  */

bool FUN_105209518(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf4e080(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar4 != 0;
}



/* Entry: 1052095b4; end: 1052095fb; -[SCNGSMEMemoriesSnapDocResolver .cxx_destruct] */

void FUN_1052095b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052095fc; end: 1052097c7; -[SCFriendmojiView initWithSnapchatter:friendmojiPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1052095fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126e6ed0;
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_70 = param_1;
  _objc_msgSendSuper2(uVar6,uVar7,uVar8,uVar9,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11271f90c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    func_0x00010c1b71a0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar4);
    func_0x00010c28cd40(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c087500(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052097c8; end: 10520984f; -[SCFriendmojiView setBackgroundColor:] */

void FUN_1052097c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126e6ed0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 105209850; end: 1052098b7; -[SCFriendmojiView setClipsToBounds:] */

void FUN_105209850(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ed0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setClipsToBounds__11263cf50);
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052098b8; end: 105209a93; -[SCFriendmojiView updateWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1052098b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  int iVar7;
  
  ppuVar6 = *(undefined ***)(param_1 + _DAT_11271f90c);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar6;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar4);
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010c1b72e0(param_1,param_2,ppuVar1);
  _objc_retain(ppuVar1);
  ppuVar2 = ppuVar1;
  func_0x00010bf4bb00(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110dcb918);
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar1;
    func_0x00010bf4bb00(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110dc4f78);
    iVar7 = (int)ppuVar2;
  }
  else {
    iVar7 = 1;
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  lVar5 = param_1;
  func_0x00010c25be60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (iVar7 == 0) {
    if (lVar5 != 0) {
      lVar5 = param_1;
      func_0x00010c25be60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069d00();
      _objc_release(lVar5);
      func_0x00010c20e280(param_1,param_2,0);
    }
  }
  else if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s_animateStreakIndicator_112528338,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e280(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar6);
  return lVar4;
}



/* Entry: 105209a94; end: 105209bfb; -[SCFriendmojiView animateStreakIndicator] */

void FUN_105209a94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010c11f420(lVar1);
    lVar3 = lVar1;
    if ((param_2 == 0) && (func_0x00010c11f420(lVar1), param_2 == 0)) {
      _objc_retain(lVar1);
    }
    else {
      func_0x00010c25cf80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      func_0x00010bff4f40();
      puVar5 = puVar4;
      func_0x00010c0d3de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e7c0();
      _objc_release(puVar5);
      lVar6 = param_1;
      func_0x00010c087500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar6);
      func_0x00010c069fa0(param_1);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105209bfc; end: 105209c67; -[SCFriendmojiView willMoveToSuperview:] */

void FUN_105209bfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010c25be60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c25be60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069d00();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStreakAnimationTimer__1126612c8,0);
      return;
    }
  }
  return;
}



/* Entry: 105209c68; end: 105209cb3; -[SCFriendmojiView intrinsicContentSize] */

undefined1  [16] FUN_105209c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 105209cb4; end: 105209d0f; -[SCFriendmojiView sizeThatFits:] */

undefined1  [16] FUN_105209cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d5a0(param_1,param_2);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 105209d10; end: 105209d9f; -[SCFriendmojiView layoutSubviews] */

void FUN_105209d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6ed0;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c087500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0,0,param_3,param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 105209da0; end: 10520a053; -[SCFriendmojiView setLabelToText:] */

undefined ** FUN_105209da0(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (lRam00000001136b9508 != -1) {
    func_0x00010002a2fc(0x1136b9508,&PTR___NSConcreteGlobalBlock_110870480);
  }
  puVar1 = param_1;
  func_0x00010bf60ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c188160(param_1);
    uVar9 = param_3;
    func_0x00010c08fa60();
    if (uVar9 == 0) {
      puVar1 = param_1;
      func_0x00010c087500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      puVar3 = param_1;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_1;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      uVar9 = param_3;
      func_0x00010c08fa60();
      if (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar6 = param_3;
          func_0x00010bf35920();
          if ((uint)uVar6 == (uint)uRam00000001136b9500) {
            func_0x00010c16b800(puVar1);
          }
          uVar9 = uVar9 + 1;
          uVar6 = param_3;
          func_0x00010c08fa60();
        } while (uVar9 < uVar6);
      }
      puVar3 = param_1;
      func_0x00010c087500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
    func_0x00010c069fa0(param_1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return (undefined **)(ulong)((uint)uVar2 ^ 1);
  }
  ___stack_chk_fail();
  ppuVar7 = &PTR____CFConstantStringClassReference_110dcb938;
  func_0x00010bf35920();
  uRam00000001136b9500 = (short)ppuVar7;
  return ppuVar7;
}



/* Entry: 10520a054; end: 10520a07b;  */

void FUN_10520a054(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0xb938;
  func_0x00010bf35920(&PTR____CFConstantStringClassReference_110dcb938,param_2,0);
  uRam00000001136b9500 = uVar1;
  return;
}



/* Entry: 10520a07c; end: 10520a08b; -[SCFriendmojiView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10520a07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f910);
}



/* Entry: 10520a08c; end: 10520a0cb; -[SCFriendmojiView setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271f910;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10520a0cc; end: 10520a0db; -[SCFriendmojiView currentlyDisplayedEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10520a0cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f914);
}



/* Entry: 10520a0dc; end: 10520a11b; -[SCFriendmojiView setCurrentlyDisplayedEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271f914;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10520a11c; end: 10520a12b; -[SCFriendmojiView streakAnimationTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10520a11c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f918);
}



/* Entry: 10520a12c; end: 10520a16b; -[SCFriendmojiView setStreakAnimationTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271f918;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10520a16c; end: 10520a1cb; -[SCFriendmojiView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a16c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f918,0);
  _objc_storeStrong(param_1 + _DAT_11271f914,0);
  _objc_storeStrong(param_1 + _DAT_11271f910,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f90c,0);
  return;
}



/* Entry: 10520a1cc; end: 10520a23f; -[SCSnapchatterFriendmojiViewFactoryImpl initWithFriendmojiPresenter:] */

undefined1 * FUN_10520a1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ed8;
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



/* Entry: 10520a240; end: 10520a29b; -[SCSnapchatterFriendmojiViewFactoryImpl newFriendmojiViewWithSnapchatter:] */

undefined * FUN_10520a240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b63d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c048e00();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10520a29c; end: 10520a2a7; -[SCSnapchatterFriendmojiViewFactoryImpl .cxx_destruct] */

void FUN_10520a29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10520a2a8; end: 10520a3bf; -[SCSnapchatterFriendmojiViewServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a2a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271f928);
  }
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126b63e0;
  _objc_alloc(PTR_PTR_1126b63e0);
  func_0x00010c011620();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520a3c0; end: 10520a3ff;  */

void FUN_10520a3c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10520a400; end: 10520a483; -[SCSnapchatterFriendmojiViewServicesEntryPoint _factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a400(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b63e8;
  _objc_alloc(PTR_PTR_1126b63e8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11271f924;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfb98e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016080(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10520a484; end: 10520a4cb; -[SCSnapchatterFriendmojiViewServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520a484(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f928,0);
  _objc_destroyWeak(param_1 + _DAT_11271f924);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f920);
  return;
}



/* Entry: 10520a4cc; end: 10520a53f; -[SCSnapchatterFriendmojiViewServices initWithFactory:] */

undefined1 * FUN_10520a4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ee0;
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



/* Entry: 10520a540; end: 10520a547; -[SCSnapchatterFriendmojiViewServices factory] */

undefined8 FUN_10520a540(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10520a548; end: 10520a553; -[SCSnapchatterFriendmojiViewServices .cxx_destruct] */

void FUN_10520a548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10520a554; end: 10520a5c7; -[SCComposerDiscoverFeedFetcher initWithDataFetcher:] */

undefined1 * FUN_10520a554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ee8;
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



/* Entry: 10520a5c8; end: 10520a69f; -[SCComposerDiscoverFeedFetcher getSubscriptionsFeed] */

void FUN_10520a5c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10520a6a0; end: 10520a7eb;  */

void FUN_10520a6a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar2 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf00a20(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10520a7ec; end: 10520a907;  */

void FUN_10520a7ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = param_2;
    func_0x00010c246ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10520a908; end: 10520a963;  */

undefined8 FUN_10520a908(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  _objc_retain(param_4);
  func_0x00010c150c20(param_3);
  fVar2 = param_1;
  func_0x00010c150c20(param_4);
  _objc_release(param_4);
  uVar1 = 0xffffffffffffffff;
  if (param_1 <= fVar2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10520a964; end: 10520a977;  */

void FUN_10520a964(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c080130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSubscribed_1125fda58);
  return;
}



/* Entry: 10520a978; end: 10520b0e3; -[SCComposerDiscoverFeedFetcher discoverFeedStoryToComposerFeedStory:] */

void FUN_10520a978(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuStack_88;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010bf52680();
  _objc_release(ppuVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c298be0();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010c100c40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_3;
  func_0x00010c25b720();
  if (ppuVar6 == (undefined **)0x2) {
    ppuVar6 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar6;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar10;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    param_1 = ppuVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    if (param_1 == (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = ppuVar11;
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
    }
    ppuVar11 = ppuVar10;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    puVar15 = PTR_PTR_1126b63f0;
    _objc_alloc(PTR_PTR_1126b63f0);
    ppuVar11 = param_3;
    func_0x00010c0800e0();
    ppuVar13 = ppuVar10;
    func_0x00010c07dbe0();
    func_0x00010c04d7e0((double)ppuVar3,puVar15,param_2,ppuVar2,puVar5,ppuVar6,ppuVar12,0,
                        ppuStack_88,
                        CONCAT71(CONCAT61((int6)((ulong)ppuVar4 >> 0x10),(char)ppuVar13),
                                 (char)ppuVar11),ppuVar1);
    ppuVar3 = ppuVar10;
    func_0x00010c11af80(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bd00(puVar15,param_2,ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar3 = param_3;
    func_0x00010c0741a0(param_3);
    func_0x00010c0df6e0(puVar14,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1720(puVar15,param_2,puVar14);
    _objc_release(puVar14);
    _objc_release(ppuVar12);
LAB_10520b07c:
    _objc_release(ppuStack_88);
  }
  else {
    if (ppuVar6 == (undefined **)0xb) {
      ppuVar6 = param_3;
      func_0x00010c259560(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar6;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      func_0x00010c26eb80(param_1,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c11af80(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar11;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      puVar15 = PTR_PTR_1126b63f0;
      _objc_alloc(PTR_PTR_1126b63f0);
      ppuVar11 = ppuVar10;
      func_0x00010bf1f720(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = param_1;
      func_0x00010bfe8f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_3;
      func_0x00010c0800e0();
      func_0x00010c04d7e0((double)ppuVar3,puVar15,param_2,ppuVar2,puVar5,ppuVar12,ppuVar6,0,ppuVar13
                          ,CONCAT71((int7)((ulong)ppuVar4 >> 8),(char)ppuVar9) & 0xffffffffffff00ff,
                          ppuVar1);
      _objc_release(ppuVar13);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      ppuVar3 = ppuVar10;
      func_0x00010c11af80(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bfad760();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bd00(puVar15,param_2,ppuVar11);
      _objc_release(ppuVar11);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      ppuStack_88 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar3 = param_3;
      func_0x00010c0741a0(param_3);
      func_0x00010c0df6e0(ppuStack_88,param_2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b1720(puVar15,param_2,ppuStack_88);
      goto LAB_10520b07c;
    }
    if (ppuVar6 != (undefined **)0x3) {
      puVar15 = (undefined *)0x0;
      goto LAB_10520b09c;
    }
    ppuVar6 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar6;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    puVar15 = PTR_PTR_1126b63f0;
    _objc_alloc();
    ppuVar6 = ppuVar10;
    func_0x00010c26e100(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar10;
    func_0x00010bf85d80(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010c238c20(ppuVar10);
    ppuVar9 = ppuVar10;
    func_0x00010c26e100(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar9;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_3;
    func_0x00010c0800e0();
    func_0x00010c04d7e0((double)ppuVar3,puVar15,param_2,ppuVar2,puVar5,ppuVar11,ppuVar12,ppuVar13,
                        ppuVar7,CONCAT71((int7)((ulong)ppuVar4 >> 8),(char)ppuVar8) &
                                0xffffffffffff00ff,ppuVar1);
    _objc_release(ppuVar7);
    _objc_release(ppuVar9);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar6);
    param_1 = (undefined **)PTR_PTR_1126b63f8;
    _objc_opt_new(PTR_PTR_1126b63f8);
    ppuVar3 = ppuVar10;
    func_0x00010c26e100(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(param_1,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar10;
    func_0x00010c26e100(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(param_1,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar10;
    func_0x00010c26e100(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c26df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(param_1,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar10;
    func_0x00010c26e100(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175100(param_1,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    func_0x00010c195ba0(puVar15,param_2,param_1);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar3 = param_3;
    func_0x00010c0741a0(param_3);
    func_0x00010c0df6e0(ppuVar6,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1720(puVar15,param_2,ppuVar6);
  }
  _objc_release(ppuVar6);
  _objc_release(param_1);
  _objc_release(ppuVar10);
LAB_10520b09c:
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10520b0e4; end: 10520b253; -[SCComposerDiscoverFeedFetcher tileFromLongformShow:] */

void FUN_10520b0e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10520b254;
  uStack_40 = 0x10520b264;
  uStack_38 = 0;
  lVar1 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = lVar1;
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bebc0();
    _objc_release(lVar3);
  }
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10520b254; end: 10520b26b;  */

void FUN_10520b254(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10520b26c; end: 10520b42f;  */

void FUN_10520b26c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    *(long *)(lVar7 + 0x28) = lVar4;
    _objc_release(uVar5);
  }
  else {
    dVar9 = 0.0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar7 = 0;
        uVar5 = uVar6;
        do {
          dVar8 = dVar9;
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_4);
            dVar8 = dVar9;
          }
          uVar6 = *(undefined8 *)(lVar7 * 8);
          func_0x00010c2520c0(uVar6);
          lVar1 = *(long *)(param_1 + 0x20);
          func_0x00010c29ae20();
          dVar9 = (double)lVar1;
          if (dVar9 < dVar8) goto LAB_10520b3d0;
          func_0x00010c26e920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          lVar7 = lVar7 + 1;
          uVar5 = uVar6;
        } while (lVar4 != lVar7);
        lVar4 = param_4;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
LAB_10520b3d0:
    _objc_release(param_4);
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar2 = *(long *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10520b430; end: 10520b46f;  */

void FUN_10520b430(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10520b470; end: 10520b56f; -[SCComposerDiscoverFeedFetcher playerItemsFromStoryCard:] */

undefined * FUN_10520b470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b6400;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c036b60();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b6408;
  _objc_opt_new();
  func_0x00010c1cb360();
  puVar3 = PTR_PTR_1126b6410;
  _objc_alloc(PTR_PTR_1126b6410);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020580(0,puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 8);
}



/* Entry: 10520b570; end: 10520b577; -[SCComposerDiscoverFeedFetcher dataFetcher] */

undefined8 FUN_10520b570(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10520b578; end: 10520b5a7; -[SCComposerDiscoverFeedFetcher setDataFetcher:] */

void FUN_10520b578(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10520b5a8; end: 10520b5b3; -[SCComposerDiscoverFeedFetcher .cxx_destruct] */

void FUN_10520b5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10520b5b4; end: 10520b5bb; -[SCSearchV2ComposerContainerViewController pageViewName] */

undefined8 FUN_10520b5b4(void)

{
  return 0xfb;
}



/* Entry: 10520b5bc; end: 10520b5c3; -[SCSearchV2ComposerContainerViewController modalPresentationStyle] */

undefined8 FUN_10520b5bc(void)

{
  return 0;
}


