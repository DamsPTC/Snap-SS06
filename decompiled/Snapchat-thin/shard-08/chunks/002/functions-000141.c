/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e7041c; end: 105e7041f; -[SCAdInfoPreferencesViewController navigationControllerForPagePresentation] */

void FUN_105e7041c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d66b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_navigationController_1126133c0);
  return;
}



/* Entry: 105e70420; end: 105e7042f; -[SCAdInfoPreferencesViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e70420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273850c);
}



/* Entry: 105e70430; end: 105e7046f; -[SCAdInfoPreferencesViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e70430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273850c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e70470; end: 105e704fb; -[SCAdInfoPreferencesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e70470(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273850c,0);
  _objc_storeStrong(param_1 + _DAT_112738508,0);
  _objc_storeStrong(param_1 + _DAT_112738504,0);
  _objc_storeStrong(param_1 + _DAT_112738500,0);
  _objc_storeStrong(param_1 + _DAT_1127384fc,0);
  _objc_storeStrong(param_1 + _DAT_1127384f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127384f4);
  return;
}



/* Entry: 105e704fc; end: 105e7065f; -[SCAdReportAdInfoAdTargetingRulesService initWithNetworkManager:adConfigProvider:adConfigProviderV2:userAgent:snapTokenProvider:performer:] */

undefined1 *
FUN_105e704fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed7b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106433d34();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e70660; end: 105e70837; -[SCAdReportAdInfoAdTargetingRulesService makeAdWhyISeeThisAdRequestWithAdProductType:serveItemId:] */

void FUN_105e70660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_3;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010bfa48e0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e70838; end: 105e7088f;  */

void FUN_105e70838(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5b4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e70890; end: 105e7089b;  */

void FUN_105e70890(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 105e7089c; end: 105e70b73; -[SCAdReportAdInfoAdTargetingRulesService _makeAdWhyISeeThisAdRequestWithAdProductType:serveItemId:snapToken:promise:] */

void FUN_105e7089c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c5390;
  _objc_opt_new(PTR_PTR_1126c5390);
  func_0x00010848cb20(param_3);
  func_0x00010c1ae9c0(puVar1);
  func_0x00010c1fd160(puVar1);
  puVar2 = *(undefined **)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f480();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
    FUN_105e853e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x000105e85488(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126c5398;
    func_0x00010c135ba0(PTR_PTR_1126c5398);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c5398;
    func_0x00010bfbff20(PTR_PTR_1126c5398);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c21eae0(puVar1);
  puVar4 = PTR_PTR_1126b8df0;
  _objc_alloc(PTR_PTR_1126b8df0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c291200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a340(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_initWeak(auStack_78,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e70b74;
  puStack_90 = &UNK_1108efaf8;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_6);
  func_0x00010c25ede0(uVar5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105e70b74; end: 105e70c53;  */

void FUN_105e70b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be255c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e70c54; end: 105e70de3; -[SCAdReportAdInfoAdTargetingRulesService _handleAdWhyISeeThisAdRequestResponse:data:error:promise:] */

void FUN_105e70c54(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_4 == 0) || (param_5 != 0)) || (lVar1 = param_3, func_0x00010c252ee0(), lVar1 != 200))
  {
    func_0x00010bf43ca0(param_6,param_2,param_5);
  }
  else {
    lStack_58 = 0;
    puVar2 = PTR_PTR_1126c53a0;
    func_0x00010c0f40e0(PTR_PTR_1126c53a0,param_2,param_4,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_58 == 0) {
      puVar3 = PTR_PTR_1126c53a8;
      _objc_alloc(PTR_PTR_1126c53a8);
      puVar4 = puVar2;
      func_0x00010bef58e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010befe080(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff1fc0(puVar3,param_2,puVar4,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010bf43d60(param_6,param_2,puVar3);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e2d318,
                          &PTR____CFConstantStringClassReference_110e2d338,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(param_6,param_2,puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e70de4; end: 105e70e43; -[SCAdReportAdInfoAdTargetingRulesService .cxx_destruct] */

void FUN_105e70de4(long param_1)

{
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



/* Entry: 105e70e44; end: 105e70e47; -[SCAdReportAdInfoEntryPoint begin] */

void FUN_105e70e44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb7810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showAdInfo_11258b7a8);
  return;
}



/* Entry: 105e70e48; end: 105e70e83; -[SCAdReportAdInfoEntryPoint end] */

void FUN_105e70e48(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed7c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e70e84; end: 105e714bb; -[SCAdReportAdInfoEntryPoint _showAdInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e70e84(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar2 = param_1 + _DAT_112738528;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar22 = (long)_DAT_11273852c;
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112738530;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar23 = (long)_DAT_112738534;
  lVar2 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112738538;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126b91b0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273853c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112738540;
  _objc_loadWeakRetained();
  lVar11 = lVar3;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112738544;
  lVar4 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar4);
  lVar12 = lVar4;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar24);
  lVar13 = lVar24;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar14 = lVar23;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff12a0(puVar10,param_2,lVar7,lVar2,lVar11,lVar9,lVar12,lVar13,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar23);
  _objc_release(lVar13);
  _objc_release(lVar24);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar15 = PTR_PTR_1126b91c0;
  _objc_alloc();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar22);
  lVar2 = lVar22;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f060(puVar15,param_2,puVar10,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar22);
  puVar16 = PTR_PTR_1126b91a8;
  _objc_alloc();
  func_0x00010bff1060();
  lVar2 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f480();
  _objc_release(lVar2);
  ppuVar1 = &PTR_PTR_1126c53b0;
  if ((int)lVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126c53b8;
  }
  puVar17 = *ppuVar1;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112738548;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11273854c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_112738550;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bff5640(puVar17,param_2,lVar2,lVar3,lVar4,0);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar18 = PTR_PTR_1126b91b8;
  _objc_alloc();
  func_0x00010bff3a00();
  lVar2 = param_1 + _DAT_112738554;
  _objc_loadWeakRetained();
  lVar22 = lVar2;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar19 = PTR_PTR_1126c53c0;
  _objc_alloc();
  func_0x00010c02f2e0();
  puVar20 = PTR_PTR_1126c53c8;
  _objc_alloc();
  puVar21 = puVar20;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112738558;
  _objc_loadWeakRetained();
  lVar11 = lVar2;
  func_0x00010c228280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11273855c;
  _objc_loadWeakRetained();
  lVar25 = (long)_DAT_112738560;
  lVar4 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar12 = lVar4;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar13 = lVar24;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar14 = lVar23;
  func_0x00010bef4240();
  func_0x00010bff1fe0(puVar20,param_2,puVar19,lVar7,lVar8,lVar6,puVar21,lVar11,lVar3,lVar12,lVar13,
                      lVar14);
  _objc_release(lVar23);
  _objc_release(lVar13);
  _objc_release(lVar24);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(puVar21);
  puVar21 = PTR_PTR_1126c53d0;
  _objc_alloc(PTR_PTR_1126c53d0);
  func_0x00010c00ace0();
  func_0x00010c21e940(puVar20,param_2,puVar21);
  param_1 = param_1 + lVar25;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar22);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105e714bc; end: 105e7150b; -[SCAdReportAdInfoEntryPoint adInfoPreferencesDidTapLeftButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e714bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112738560;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e7150c; end: 105e7157f; -[SCAdReportAdInfoEntryPoint adInfoPreferencesDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e7150c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112738560;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef2dc0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e71580; end: 105e71653; -[SCAdReportAdInfoEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e71580(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273852c);
  _objc_destroyWeak(param_1 + _DAT_112738544);
  _objc_destroyWeak(param_1 + _DAT_112738534);
  _objc_destroyWeak(param_1 + _DAT_112738538);
  _objc_destroyWeak(param_1 + _DAT_112738554);
  _objc_destroyWeak(param_1 + _DAT_11273855c);
  _objc_destroyWeak(param_1 + _DAT_11273853c);
  _objc_destroyWeak(param_1 + _DAT_11273854c);
  _objc_destroyWeak(param_1 + _DAT_112738550);
  _objc_destroyWeak(param_1 + _DAT_112738558);
  _objc_destroyWeak(param_1 + _DAT_112738528);
  _objc_destroyWeak(param_1 + _DAT_112738548);
  _objc_destroyWeak(param_1 + _DAT_112738540);
  _objc_destroyWeak(param_1 + _DAT_112738530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738560);
  return;
}



/* Entry: 105e71654; end: 105e717d7; -[SCAdReportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e71654(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126c53d8;
  _objc_alloc();
  lVar13 = (long)_DAT_112738564;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf9a3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273856c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1 + _DAT_112738574;
  _objc_loadWeakRetained();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar10 = lVar13;
  func_0x00010bf84e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000e60();
  lVar12 = (long)_DAT_112738578;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar12),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105e717d8; end: 105e71833; -[SCAdReportEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e717d8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738578);
  *(undefined8 *)(param_1 + _DAT_112738578) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ed7c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e71834; end: 105e718a7; -[SCAdReportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e71834(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738574);
  _objc_storeStrong(param_1 + _DAT_112738570,0);
  _objc_destroyWeak(param_1 + _DAT_11273856c);
  _objc_storeStrong(param_1 + _DAT_112738568,0);
  _objc_destroyWeak(param_1 + _DAT_112738564);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738578,0);
  return;
}



/* Entry: 105e718a8; end: 105e719a7; -[SCAdReportItemViewModel initWithIdentifier:title:accessibilityLabel:tapActionBlock:] */

undefined1 *
FUN_105e718a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ed7d0;
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
    uVar2 = param_6;
    _objc_retainBlock();
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



/* Entry: 105e719a8; end: 105e719af; -[SCAdReportItemViewModel identifier] */

undefined8 FUN_105e719a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e719b0; end: 105e719b7; -[SCAdReportItemViewModel setIdentifier:] */

void FUN_105e719b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e719b8; end: 105e719bf; -[SCAdReportItemViewModel title] */

undefined8 FUN_105e719b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e719c0; end: 105e719c7; -[SCAdReportItemViewModel setTitle:] */

void FUN_105e719c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e719c8; end: 105e719cf; -[SCAdReportItemViewModel accessibilityLabel] */

undefined8 FUN_105e719c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e719d0; end: 105e719d7; -[SCAdReportItemViewModel setAccessibilityLabel:] */

void FUN_105e719d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e719d8; end: 105e719df; -[SCAdReportItemViewModel tapActionBlock] */

undefined8 FUN_105e719d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e719e0; end: 105e719e7; -[SCAdReportItemViewModel setTapActionBlock:] */

void FUN_105e719e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e719e8; end: 105e71a2f; -[SCAdReportItemViewModel .cxx_destruct] */

void FUN_105e719e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e71a30; end: 105e71acb; -[SCAdReportPresenter initWithRouter:config:] */

undefined1 *
FUN_105e71a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed7d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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



/* Entry: 105e71acc; end: 105e71b33; -[SCAdReportPresenter didLoad] */

void FUN_105e71acc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c53e0;
  _objc_alloc(PTR_PTR_1126c53e0);
  lVar2 = param_1;
  func_0x00010bdd9e40(param_1);
  func_0x00010bffc3e0(puVar1,param_2,lVar2,param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47d60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e71b34; end: 105e71b5f; -[SCAdReportPresenter didSelectReportAd] */

void FUN_105e71b34(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c239960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e71b60; end: 105e71b8b; -[SCAdReportPresenter didSelectWhyAmISeeingThisAd] */

void FUN_105e71b60(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23ad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e71b8c; end: 105e71bb7; -[SCAdReportPresenter didSelectDismiss] */

void FUN_105e71b8c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e71bb8; end: 105e71be3; -[SCAdReportPresenter didDismiss] */

void FUN_105e71bb8(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf940a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e71be4; end: 105e71c27; -[SCAdReportPresenter _canReportAd] */

bool FUN_105e71be4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bef2c20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 105e71c28; end: 105e71c3f; -[SCAdReportPresenter userInterface] */

void FUN_105e71c28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e71c40; end: 105e71c4b; -[SCAdReportPresenter setUserInterface:] */

void FUN_105e71c40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105e71c4c; end: 105e71c7f; -[SCAdReportPresenter .cxx_destruct] */

void FUN_105e71c4c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e71c80; end: 105e71e2b; -[SCAdReportRouter initWithConfig:eventTracker:uiContainer:reportAdScopeExposer:reportAdScopeServices:adInfoScopeExposer:adInfoScopeServices:dismissalCompletionHandler:] */

undefined1 *
FUN_105e71c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ed7e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e71e2c; end: 105e71edb; -[SCAdReportRouter begin] */

void FUN_105e71e2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c53e8;
  _objc_alloc(PTR_PTR_1126c53e8);
  func_0x00010c040600();
  puVar2 = PTR_PTR_1126c53f0;
  _objc_alloc(PTR_PTR_1126c53f0);
  func_0x00010c038a60();
  puVar3 = PTR_PTR_1126c53f8;
  _objc_alloc(PTR_PTR_1126c53f8);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  func_0x00010c21e940(puVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_storeWeak(param_1 + 8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e71edc; end: 105e71f93; -[SCAdReportRouter showReportAd] */

void FUN_105e71edc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c02e4c0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf22c00(uVar3,param_2,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18),puVar2,*(undefined8 *)(param_1 + 0x20),
                        param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105e71f94; end: 105e7209f; -[SCAdReportRouter showWhyAmISeeingThisAd] */

void FUN_105e71f94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c02e4c0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf20f80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c15ed20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bef4240(uVar5);
    func_0x00010bf22a60(uVar6,param_2,uVar3,uVar4,uVar5,puVar2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar6);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105e720a0; end: 105e720ab; -[SCAdReportRouter dismiss] */

void FUN_105e720a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105e720ac; end: 105e720bf; -[SCAdReportRouter end] */

void FUN_105e720ac(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e720b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e720c0; end: 105e720e7; -[SCAdReportRouter reportAdScopeDidComplete:didSubmit:] */

void FUN_105e720c0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
    return;
  }
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105e720e8; end: 105e720eb; -[SCAdReportRouter reportAdScopeDidSubmitWithReasonId:comment:] */

void FUN_105e720e8(void)

{
  return;
}



/* Entry: 105e720ec; end: 105e7210b; -[SCAdReportRouter adInfoScopeDidComplete:] */

void FUN_105e720ec(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105e7210c; end: 105e7218b; -[SCAdReportRouter .cxx_destruct] */

void FUN_105e7210c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e7218c; end: 105e7220f; -[SCAdReportViewController initWithPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105e7218c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed7e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127385bc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e72210; end: 105e72257; -[SCAdReportViewController loadView] */

void FUN_105e72210(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed7e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bdc88a0(param_1);
  return;
}



/* Entry: 105e72258; end: 105e72327; -[SCAdReportViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e72258(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ed7e8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  lVar2 = (long)_DAT_1127385c0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_opt_class(PTR_PTR_1126b0708);
  func_0x00010c125fe0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_opt_class(PTR_PTR_1126b0708);
  func_0x00010c125fe0(uVar1);
  lVar2 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(lVar2);
  func_0x00010bf77880(*(undefined8 *)(param_1 + _DAT_1127385bc));
  return;
}



/* Entry: 105e72328; end: 105e723af; -[SCAdReportViewController viewWillAppear:] */

void FUN_105e72328(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed7e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 105e723b0; end: 105e72413; -[SCAdReportViewController viewWillDisappear:] */

void FUN_105e723b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed7e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  return;
}



/* Entry: 105e72414; end: 105e7241b; -[SCAdReportViewController prefersStatusBarHidden] */

undefined8 FUN_105e72414(void)

{
  return 0;
}



/* Entry: 105e7241c; end: 105e7246b; -[SCAdReportViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e7241c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf74ac0(*(undefined8 *)(param_1 + _DAT_1127385bc));
  puStack_28 = PTR_PTR_1126ed7e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105e7246c; end: 105e72473; -[SCAdReportViewController pageViewName] */

undefined8 FUN_105e7246c(void)

{
  return 0xd;
}



/* Entry: 105e72474; end: 105e7247f; -[SCAdReportViewController supportedInterfaceOrientations] */

undefined8 FUN_105e72474(void)

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



/* Entry: 105e72480; end: 105e72483; -[SCAdReportViewController getTitle] */

void FUN_105e72480(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f393f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f393f8,
                      &PTR____CFConstantStringClassReference_110f391d8,0);
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



/* Entry: 105e72484; end: 105e72493; -[SCAdReportViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e72484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127385bc),PTR_s_didSelectDismiss_1125bc3f0);
  return;
}



/* Entry: 105e72494; end: 105e724db; -[SCAdReportViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e72494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127385c4);
  func_0x00010c084fc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e724dc; end: 105e72773; -[SCAdReportViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e724dc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127385c4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c084fc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_4);
  uVar2 = uVar7;
  func_0x00010c0dfd40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar2;
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf6e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126b0708;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar3);
    _objc_release(puVar4);
    func_0x00010c21e900(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar6);
    func_0x00010c1faee0(uVar3);
    func_0x00010c138500(uVar3);
    uVar5 = uVar3;
    func_0x00010c26c280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(0x4044000000000000,0x4014000000000000,0x4069000000000000,0x402e000000000000)
    ;
    _objc_release(uVar5);
    uVar7 = uVar2;
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c26c280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010beecf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c26c280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(uVar5);
    _objc_release(uVar7);
    func_0x00010c138520(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e72774; end: 105e7282b; -[SCAdReportViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e72774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  lVar1 = *(long *)(param_1 + _DAT_1127385c4);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  lVar3 = lVar1;
  func_0x00010c0dfd40(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c268c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e7282c; end: 105e72833; -[SCAdReportViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105e7282c(void)

{
  return 0;
}



/* Entry: 105e72834; end: 105e72897; -[SCAdReportViewController configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e72834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127385c4);
  *(undefined8 *)(param_1 + _DAT_1127385c4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_1127385c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e72898; end: 105e72c8b; -[SCAdReportViewController _addTableViewSubview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e72898(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_1127385c0;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar18));
  uVar17 = *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
  func_0x00010c1eeb20(uVar17,*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1974c0(uVar17,*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR_PTR_1126c5400;
  func_0x00010bef2e20(PTR_PTR_1126c5400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + _DAT_1127385c4,0);
  _objc_storeStrong(lVar3 + _DAT_1127385bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + _DAT_1127385c0,0);
  return;
}



/* Entry: 105e72c8c; end: 105e72cdb; -[SCAdReportViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e72c8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127385c4,0);
  _objc_storeStrong(param_1 + _DAT_1127385bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127385c0,0);
  return;
}



/* Entry: 105e72cdc; end: 105e72d4f; -[SCAdReportViewModel initWithItems:] */

undefined1 * FUN_105e72cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed7f0;
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



/* Entry: 105e72d50; end: 105e72f57; -[SCAdReportViewModel initWithCanReportAd:presenter:] */

undefined8 FUN_105e72d50(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126c5408;
    _objc_alloc(PTR_PTR_1126c5408);
    puVar3 = puVar2;
    func_0x00010af46fec();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar4;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105e72f58;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c01bb60(puVar2);
    _objc_release(puVar3);
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
  }
  puVar4 = PTR_PTR_1126c5408;
  _objc_alloc(PTR_PTR_1126c5408);
  puVar2 = puVar4;
  func_0x00010af46fd4();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c01bb60(puVar4);
  _objc_release(puVar2);
  func_0x00010befa120(puVar1);
  func_0x00010c020480(param_1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105e72f58; end: 105e72faf;  */

void FUN_105e72f58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ae40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e72fb0; end: 105e72fb7; -[SCAdReportViewModel items] */

undefined8 FUN_105e72fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e72fb8; end: 105e72fe7; -[SCAdReportViewModel setItems:] */

void FUN_105e72fb8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e72fe8; end: 105e72ff3; -[SCAdReportViewModel .cxx_destruct] */

void FUN_105e72fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e72ff4; end: 105e72ff7; -[SCAdReportHideAdEntryPoint begin] */

void FUN_105e72ff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showHideAdV3_11258bf00);
  return;
}



/* Entry: 105e72ff8; end: 105e73033; -[SCAdReportHideAdEntryPoint end] */

void FUN_105e72ff8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed7f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e73034; end: 105e731cf; -[SCAdReportHideAdEntryPoint _showHideAdV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e73034(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127385cc;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c133f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126c5410;
  if (lVar3 - 1U < 4) {
    puVar5 = (undefined *)(param_1 + lVar7);
    _objc_loadWeakRetained(puVar5);
    puVar4 = puVar5;
    func_0x00010c06c420();
    func_0x00010c121f40(puVar6,param_2,lVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 == 5) {
      puVar6 = PTR_PTR_1126c5418;
      func_0x00010c06b080(PTR_PTR_1126c5418);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beba5e0(param_1,param_2,puVar6);
      goto LAB_105e731b8;
    }
    puVar5 = (undefined *)(param_1 + lVar7);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010c06c420();
    FUN_105e737f4();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b0a48;
  _objc_alloc(PTR_PTR_1126b0a48);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar1 = lVar7;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be5c060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058860(puVar5,param_2,lVar1,&PTR____CFConstantStringClassReference_110e2d3b8,puVar6,
                      param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127385d0),param_2,puVar5);
  _objc_release(puVar5);
LAB_105e731b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105e731d0; end: 105e732a3; -[SCAdReportHideAdEntryPoint _makeReportViewConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e731d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0a40;
  _objc_opt_new(PTR_PTR_1126b0a40);
  puVar2 = puVar1;
  func_0x00010b75e41c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7a40(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1ee140(puVar1,param_2,PTR_PTR_1133bb3a8);
  param_1 = param_1 + _DAT_1127385cc;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f40(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  func_0x000105e77c44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eda0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e732a4; end: 105e73397; -[SCAdReportHideAdEntryPoint submitReportWithReasonId:comment:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e732a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127385cc;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1660();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf9a3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277ca0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  (**(code **)(param_5 + 0x10))(param_5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e73398; end: 105e7346f; -[SCAdReportHideAdEntryPoint reportDidCompleteWithCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e73398(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar1 = param_1 + _DAT_1127385cc;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf9a3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277c60();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127385d0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127385cc;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe1640(lVar2,param_2,param_1,param_3 ^ 1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e73470; end: 105e736df; -[SCAdReportHideAdEntryPoint _showPostReportPageWithReasonId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e73470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126c5420;
  _objc_alloc(PTR_PTR_1126c5420);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c03e880(puVar1);
  lVar2 = param_1 + _DAT_1127385d4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c5428;
  _objc_alloc(PTR_PTR_1126c5428);
  func_0x00010c061d40();
  puVar6 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  lVar7 = (long)_DAT_1127385cc;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1660();
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf9a3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277ca0();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105e736e0; end: 105e7379f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e736e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_1127385cc;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfe1640(lVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e737a0; end: 105e737f3; -[SCAdReportHideAdEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e737a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127385d4);
  _objc_storeStrong(param_1 + _DAT_1127385d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127385d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127385cc);
  return;
}



/* Entry: 105e737f4; end: 105e73ae7;  */

void FUN_105e737f4(int param_1,undefined8 param_2)

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
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puStack_98 = puVar1;
  func_0x000105e77c5c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0a18;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5418;
  puStack_a0 = puVar2;
  func_0x00010c06b080(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x000105e77c74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar4,param_2,puVar3,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5418;
  puStack_90 = puVar4;
  func_0x00010bfe5000(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x000105e77c8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar2,param_2,puVar3,puVar5,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0a10;
  puVar5 = PTR_PTR_1126c5418;
  puStack_88 = puVar2;
  func_0x00010bfeb920(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105e77ca4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar5,puVar6,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b0a10;
  puVar6 = PTR_PTR_1126c5418;
  puStack_80 = puVar3;
  if (param_1 == 0) {
    func_0x00010bf01cc0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000105e77cbc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf01ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000105e77cd4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c25f960(puVar5,param_2,puVar6,puVar7,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puStack_a0;
  func_0x00010c03d260(puStack_a0,param_2,puVar7);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &PTR____CFConstantStringClassReference_110e2d3d8;
  puVar6 = puStack_98;
  puVar14 = puVar1;
  func_0x00010c03d240();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_a8 = FUN_105e73ae8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar11 = puVar9;
  puVar12 = puVar9;
  puStack_f0 = puVar7;
  puStack_e8 = puVar5;
  puStack_e0 = puVar3;
  puStack_d8 = puVar2;
  puStack_d0 = puVar8;
  puStack_c8 = puVar4;
  puStack_c0 = puVar6;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppuVar13 < (undefined **)0x6) {
    if ((1L << ((ulong)ppuVar13 & 0x3f) & 0x1aU) != 0) {
      func_0x00010c06b080();
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = puVar10;
      func_0x00010bfe5020();
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = puVar11;
      func_0x00010bfe4fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      puStack_110 = puVar12;
      func_0x00010bfe4ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = puVar2;
      func_0x00010bf01d00(puVar9,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar2;
      goto LAB_105e73c80;
    }
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if ((1L << ((ulong)ppuVar13 & 0x3f) & 0x24U) == 0) goto LAB_105e73c00;
  }
  else {
LAB_105e73c00:
    func_0x00010c06b080();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar10;
    func_0x00010bfe5000();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar11;
    func_0x00010bfeb920();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar12;
    func_0x00010bf01d00(puVar9,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_128 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,4);
    _objc_retainAutoreleasedReturnValue();
LAB_105e73c80:
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  puVar2 = PTR_PTR_1126b0a18;
  _objc_alloc();
  func_0x00010c03d260();
  puVar6 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puVar3 = puVar6;
  func_0x000105e77c5c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_148 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d240(puVar6,param_2,&PTR____CFConstantStringClassReference_110e2d3d8,puVar3,puVar5)
  ;
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126b0a10;
    puVar4 = PTR_PTR_1126c5418;
    func_0x00010c06b080(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x000105e77c74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960(puVar6,param_2,puVar4,puVar2,PTR_PTR_1133bb228);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e73ae8; end: 105e73d6f; +[SCHideAdReasons reasonRootForVersion:isAppInstallAd:] */

void FUN_105e73ae8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  uVar3 = param_1;
  uVar4 = param_1;
  if (param_3 < 6) {
    if ((1L << (param_3 & 0x3f) & 0x1aU) == 0) {
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if ((1L << (param_3 & 0x3f) & 0x24U) != 0) goto LAB_105e73ca0;
      goto LAB_105e73c00;
    }
    func_0x00010c06b080();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar2;
    func_0x00010bfe5020();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar3;
    func_0x00010bfe4fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    uStack_70 = uVar4;
    func_0x00010bfe4ec0();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = uVar1;
    func_0x00010bf01d00(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = uVar1;
  }
  else {
LAB_105e73c00:
    func_0x00010c06b080();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar2;
    func_0x00010bfe5000();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar3;
    func_0x00010bfeb920();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar4;
    func_0x00010bf01d00(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105e73ca0:
  puVar6 = PTR_PTR_1126b0a18;
  _objc_alloc();
  func_0x00010c03d260();
  puVar7 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puVar8 = puVar7;
  func_0x000105e77c5c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d240(puVar7,param_2,&PTR____CFConstantStringClassReference_110e2d3d8,puVar8,puVar9)
  ;
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126b0a10;
    puVar5 = PTR_PTR_1126c5418;
    func_0x00010c06b080(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000105e77c74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960(puVar7,param_2,puVar5,puVar6,PTR_PTR_1133bb228);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e73d70; end: 105e73dfb; +[SCHideAdReasons irrelevant] */

void FUN_105e73d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010c06b080(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77c74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e73dfc; end: 105e73e87; +[SCHideAdReasons iSeeItTooOften] */

void FUN_105e73dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010bfe5000(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77c8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e73e88; end: 105e73f13; +[SCHideAdReasons iSeeSimilarAdsTooOften] */

void FUN_105e73e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010bfe5020(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77cec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e73f14; end: 105e73f9f; +[SCHideAdReasons iSeeItTooManyAds] */

void FUN_105e73f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010bfb77a0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77d04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e73fa0; end: 105e7402b; +[SCHideAdReasons inappropriate] */

void FUN_105e73fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010bfeb920(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77ca4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e7402c; end: 105e740b7; +[SCHideAdReasons iDislikeProductOrBrandOrService] */

void FUN_105e7402c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c06b100(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77b6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e740b8; end: 105e74167; +[SCHideAdReasons alreadyInstalledWithAppInstallAd:] */

void FUN_105e740b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  if (param_3 == 0) {
    func_0x00010bf01cc0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105e77cbc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf01ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105e77cd4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e74168; end: 105e742cf; -[SCAdReportReportAdEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e74168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c5438;
  _objc_alloc(PTR_PTR_1126c5438);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar6 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127385dc;
    _objc_loadWeakRetained(lVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127385e8);
    _objc_retain(uVar6);
    lVar4 = param_1 + _DAT_1127385e4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bef2520(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127385ec;
    _objc_loadWeakRetained(lVar7);
  }
  func_0x00010c03e6e0(puVar1,param_2,lVar5,uVar6,lVar2,lVar7);
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126c5440;
  _objc_alloc();
  lVar5 = param_1 + _DAT_1127385dc;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c040900(puVar3,param_2,puVar1,lVar5);
  lVar4 = (long)_DAT_1127385e0;
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar3;
  _objc_release(uVar6);
  _objc_release(lVar5);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e742d0; end: 105e74327; -[SCAdReportReportAdEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e742d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_1127385e0));
  puStack_28 = PTR_PTR_1126ed800;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e74328; end: 105e7438b; -[SCAdReportReportAdEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e74328(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127385ec);
  _objc_storeStrong(param_1 + _DAT_1127385e8,0);
  _objc_destroyWeak(param_1 + _DAT_1127385e4);
  _objc_destroyWeak(param_1 + _DAT_1127385dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127385e0,0);
  return;
}



/* Entry: 105e7438c; end: 105e75103;  */

undefined1 * FUN_105e7438c(uint param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_bc = param_2;
  uStack_b8 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010bfb77c0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_105e77a64();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010bfb77a0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77a7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c06b0c0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77b24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c06b0a0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77b3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c06b100(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77b54();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  if ((param_1 & 1) == 0) {
    puVar3 = PTR_PTR_1126c5430;
    func_0x00010c06b0e0(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000105e77af4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010bf88280(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77b0c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_c8 = puVar5;
  puStack_a8 = puVar5;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c0e1940(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77aac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c0e1980(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77ac4();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar6 = puVar4;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126b0a10;
    puVar3 = PTR_PTR_1126c5430;
    func_0x00010c0e1960(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000105e77adc();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0a10;
    puVar4 = PTR_PTR_1126c5430;
    func_0x00010c0e1900(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x000105e77af4();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c25f960(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126b0a10;
    puVar4 = PTR_PTR_1126c5430;
    func_0x00010c0e1960(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x000105e77adc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126b0a10;
  func_0x000105e77a94();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  puStack_d0 = puVar5;
  puStack_a0 = puVar5;
  func_0x00010c117f00(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x000105e77b84();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = param_1;
  if ((param_1 & 1) == 0) {
    puVar4 = puVar5;
    func_0x000107cbc9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    func_0x00010c25f960();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  puStack_e8 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  puStack_d8 = puVar2;
  puStack_98 = puVar2;
  func_0x00010bfee1a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar3;
  func_0x000105e77b9c();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar3;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0a10;
  puVar2 = PTR_PTR_1126c5430;
  puStack_108 = puVar3;
  func_0x00010c06b000();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  func_0x000105e77bb4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e2d418;
  puStack_f0 = puVar2;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e2d418,
                      &PTR____CFConstantStringClassReference_110e2d438,
                      &PTR____CFConstantStringClassReference_110db4078);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = ppuVar7;
  func_0x00010c2a4520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0a10;
  puVar6 = PTR_PTR_1126c5430;
  puStack_80 = puVar5;
  func_0x00010c06b040(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x000105e77bcc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e2d458;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e2d458,
                      &PTR____CFConstantStringClassReference_110e2d478,
                      &PTR____CFConstantStringClassReference_110db4078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puStack_100;
  puVar3 = puStack_108;
  puVar10 = puStack_e8;
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(ppuVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puStack_e0);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puStack_110);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_e0 = puVar10;
  puStack_90 = puVar10;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c0b7380(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77bfc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_c0;
  if (uStack_c0 == 0) {
    puVar6 = puVar4;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c25f960(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    puVar6 = puVar5;
  }
  uVar13 = uStack_b8;
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010c1160c0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77c14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126b0a10;
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126c5430;
    func_0x00010c128800(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000105e77af4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar5 = PTR_PTR_1126b0a10;
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010bfe4ee0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105e77be4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puStack_e0);
  _objc_release(puStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  puVar2 = PTR_PTR_1126c5430;
  puVar5 = PTR_PTR_1126b0a10;
  if (iStack_bc != 0) {
    _objc_retain(uVar13);
    func_0x00010bfe6a40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x000105e77c2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4520(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puVar2 = puVar5;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0a18;
  _objc_alloc();
  func_0x00010c03d260();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e2d498;
  puVar9 = puVar2;
  puVar10 = puVar6;
  func_0x00010c03d240();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  uVar11 = uVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_160;
  uStack_150 = uVar13;
  pcStack_118 = FUN_105e75104;
  puStack_148 = puVar6;
  puStack_140 = puVar4;
  puStack_138 = puVar3;
  puStack_130 = puVar2;
  puStack_128 = puVar5;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  puStack_158 = PTR_PTR_1126ed808;
  uStack_160 = uVar11;
  _objc_msgSendSuper2(&uStack_160,PTR_s_init_1125d9248);
  if (puVar12 != (undefined8 *)0x0) {
    _objc_retain(ppuVar7);
    uVar13 = *(undefined8 *)((long)puVar12 + 8);
    *(undefined ***)((long)puVar12 + 8) = ppuVar7;
    _objc_release(uVar13);
    _objc_retain(puVar9);
    uVar13 = *(undefined8 *)((long)puVar12 + 0x10);
    *(undefined **)((long)puVar12 + 0x10) = puVar9;
    _objc_release(uVar13);
    _objc_retain(puVar10);
    uVar13 = *(undefined8 *)((long)puVar12 + 0x18);
    *(undefined **)((long)puVar12 + 0x18) = puVar10;
    _objc_release(uVar13);
    _objc_retain(puVar8);
    uVar13 = *(undefined8 *)((long)puVar12 + 0x20);
    *(undefined **)((long)puVar12 + 0x20) = puVar8;
    _objc_release(uVar13);
  }
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar7);
  return (undefined1 *)puVar12;
}



/* Entry: 105e75104; end: 105e751ff; -[SCAdReportReportAdRouter initWithReportAdScope:customReportScopeExposer:adConfigProviderV2:composerServices:] */

undefined1 *
FUN_105e75104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed808;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e75200; end: 105e75203; -[SCAdReportReportAdRouter showReportAd] */

void FUN_105e75200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebaa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showReportAdV3_11258c430);
  return;
}



/* Entry: 105e75204; end: 105e7529f; -[SCAdReportReportAdRouter reportDidCompleteWithCancelled:] */

void FUN_105e75204(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf9a3c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277c60();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1324e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


