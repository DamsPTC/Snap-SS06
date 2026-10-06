/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c038fc; end: 106c03baf; -[SCCommerceScreenshopMemoriesBackgroundFetcher processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c038fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf91940();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_6 + 0x10))(param_6,2,0);
  }
  else {
    func_0x00010c064820(*(undefined8 *)(param_1 + 8));
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar9);
    func_0x00010c189880(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c151540();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bfca3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c272160();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c270520(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106c03be0;
    puStack_90 = &UNK_110859a68;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_6);
    lStack_88 = param_6;
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_6);
    uVar8 = uVar7;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106c03bb0; end: 106c03bdf;  */

void FUN_106c03bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfaffa0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 106c03be0; end: 106c03c9f;  */

void FUN_106c03be0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106c03ca0; end: 106c03d13;  */

void FUN_106c03ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf1f3c0();
    if ((int)uVar2 == 0) goto LAB_106c03cf8;
    func_0x00010be51ce0(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
LAB_106c03cf8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c03d14; end: 106c03d77;  */

void FUN_106c03d14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea6fe0(lVar1);
    func_0x00010be51ce0(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    _objc_release(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c03d78; end: 106c03e0f; -[SCCommerceScreenshopMemoriesBackgroundFetcher _logCommerceScreenshotSessionClose] */

void FUN_106c03d78(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f380();
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfcb580(uVar2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfc9180(uVar3);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c22ccc0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c0aecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,uVar5,PTR_s_logScreenshopScannerSessionClose_112609540,uVar2,uVar3,uVar4,1);
    return;
  }
  return;
}



/* Entry: 106c03e10; end: 106c03e17; -[SCCommerceScreenshopMemoriesBackgroundFetcher _setScreenshopProcessingEnabled:] */

void FUN_106c03e10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c189890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDataSourceProcessingEnabled__112640040);
  return;
}



/* Entry: 106c03e18; end: 106c03e6b; -[SCCommerceScreenshopMemoriesBackgroundFetcher .cxx_destruct] */

void FUN_106c03e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c03e6c; end: 106c03f43; -[SCCommerceScreenshopMemoriesBackgroundFetcherEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c03e6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1;
  func_0x00010be9bce0();
  if ((int)lVar1 != 0) {
    uVar2 = param_1 + _DAT_11275ac34;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bf42360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf91940();
    if ((uVar5 & 1) == 0) {
      _objc_release(uVar4);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    lVar1 = param_1;
    func_0x00010be343e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitJob_11258f1e8);
      return;
    }
  }
  return;
}



/* Entry: 106c03f44; end: 106c04023; -[SCCommerceScreenshopMemoriesBackgroundFetcherEntryPoint _hasPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c03f44(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11275ac38;
  uVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079f60();
  if ((uVar4 & 1) == 0) {
    param_1 = param_1 + lVar7;
    _objc_loadWeakRetained(param_1);
    lVar7 = param_1;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c079f80();
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(param_1);
  }
  else {
    lVar6 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return lVar6;
}



/* Entry: 106c04024; end: 106c04103; -[SCCommerceScreenshopMemoriesBackgroundFetcherEntryPoint _screenshopEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c04024(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11275ac3c;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c151680();
  if ((int)lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1514e0();
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar5;
}



/* Entry: 106c04104; end: 106c0420b; -[SCCommerceScreenshopMemoriesBackgroundFetcherEntryPoint _submitJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c04104(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  lVar1 = param_2 + _DAT_11275ac40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + _DAT_11275ac34;
  _objc_loadWeakRetained(param_2);
  lVar4 = param_2;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1516e0();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e79238;
  FUN_106c04268(&PTR____CFConstantStringClassReference_110e79238,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar3);
  _objc_release(ppuVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c0420c; end: 106c04267; -[SCCommerceScreenshopMemoriesBackgroundFetcherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0420c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ac34);
  _objc_destroyWeak(param_1 + _DAT_11275ac40);
  _objc_destroyWeak(param_1 + _DAT_11275ac38);
  _objc_destroyWeak(param_1 + _DAT_11275ac3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ac44);
  return;
}



/* Entry: 106c04268; end: 106c0438b;  */

void FUN_106c04268(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2);
  func_0x00010c1b67e0(puVar1);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010c16fb40(puVar4);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar1);
  func_0x00010c198180(puVar1);
  func_0x00010c1b6840(puVar1);
  _objc_release(param_1);
  func_0x00010c1b6780(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c0438c; end: 106c044df; -[SCSpotlightPrefetchJobProcessor initWithSpotlightStoriesPrefetcherFactory:spotlightQueryCoordinator:discoverFeedDataFetcher:discoverFeedQueryCoordinator:storiesConfigProvider:circumstanceEngine:] */

undefined1 *
FUN_106c0438c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f5b70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c044e0; end: 106c044fb; -[SCSpotlightPrefetchJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106c044e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x5;
  
  func_0x00010c107e80(param_1,param_2,in_x5);
  return 0;
}



/* Entry: 106c044fc; end: 106c046a3; -[SCSpotlightPrefetchJobProcessor prefetchSpotlightIfNecessaryWithCompletion:] */

void FUN_106c044fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106c046a4;
  uStack_70 = 0x106c046b4;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_a8 = &uStack_b0;
  puStack_88 = &uStack_90;
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106c046bc;
  puStack_d0 = &UNK_110968680;
  puStack_c0 = &uStack_b0;
  puStack_b8 = &uStack_90;
  _objc_retain(uVar2);
  uStack_c8 = uVar2;
  func_0x00010be776a0(param_1);
  uVar3 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106c04750;
  puStack_100 = &UNK_1108647e8;
  puStack_f0 = &uStack_90;
  uStack_f8 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,uVar3,&puStack_118);
  _objc_release(uVar3);
  _objc_release(uStack_f8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106c046a4; end: 106c046bb;  */

void FUN_106c046a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c046bc; end: 106c0474f;  */

void FUN_106c046bc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) != 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar1 = param_2;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c04750; end: 106c0477f;  */

void FUN_106c04750(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = 0;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
      uVar1 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x000106c04778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 106c04780; end: 106c0480b; -[SCSpotlightPrefetchJobProcessor _prefetchSpotlightIfNecessaryWithCompletion:] */

void FUN_106c04780(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c067f00();
  if (0 < iVar1) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x0001005929c0();
    if ((uVar2 & 1) != 0) {
      func_0x00010be77660(param_1);
      goto LAB_106c047f8;
    }
  }
  (**(code **)(param_3 + 0x10))(param_3,0);
LAB_106c047f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c0480c; end: 106c04a83; -[SCSpotlightPrefetchJobProcessor _prefetchSpotlightFeed:numStoriesToPrefetch:completion:] */

void FUN_106c0480c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1138;
  _objc_alloc(PTR_PTR_1126b1138);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0127e0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c24c440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar5);
  func_0x00010c24f160(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x4);
  puVar4 = puVar2;
  func_0x00010c13cfe0(uVar7);
  _objc_release(uVar7);
  _objc_release(in_x4);
  _objc_release(in_x4);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106c04a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar3 + 0x20) + 0x10))(*(long *)(puVar3 + 0x20),puVar4);
  return;
}



/* Entry: 106c04a84; end: 106c04a93;  */

void FUN_106c04a84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c04a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 106c04a94; end: 106c04af3; -[SCSpotlightPrefetchJobProcessor .cxx_destruct] */

void FUN_106c04a94(long param_1)

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



/* Entry: 106c04af4; end: 106c04c7b; -[SCSpotlightPrefetchJobsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c04af4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + _DAT_11275ac60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11275ac64;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar3;
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11275ac68);
  *(undefined **)(param_1 + _DAT_11275ac68) = puVar4;
  _objc_release(uVar5);
  func_0x00010bec5e00(param_1);
  uVar6 = *(ulong *)(param_1 + lVar7);
  puVar4 = PTR_PTR_1126d1548;
  func_0x00010c256020(PTR_PTR_1126d1548);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar4);
  if ((uVar6 & 1) == 0) {
    func_0x00010be9b740(param_1);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106c04c7c; end: 106c04cbb;  */

void FUN_106c04c7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c04cbc; end: 106c04dd3; -[SCSpotlightPrefetchJobsEntryPoint _submitAppStartPrefetchJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c04cbc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010be78520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11275ac6c;
  lVar2 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be77fc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c085740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c04dd4; end: 106c04eff; -[SCSpotlightPrefetchJobsEntryPoint _prepareForegroundJobConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c04dd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  lVar3 = *(long *)(param_1 + _DAT_11275ac64);
  puVar2 = PTR_PTR_1126d1548;
  func_0x00010c1429a0(PTR_PTR_1126d1548);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067e20(lVar3,param_2,puVar2);
  _objc_release(puVar2);
  if (lVar3 < 1) {
    func_0x00010c1eeea0(puVar1,param_2,1);
  }
  else {
    puVar2 = PTR_PTR_1126b7248;
    _objc_opt_new(PTR_PTR_1126b7248);
    func_0x00010c1eac20();
    func_0x00010c1e9180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010be787c0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c1b6740(puVar2,param_2,1);
  func_0x00010c1b67e0(puVar2,param_2,puVar1);
  func_0x00010c1b66e0(puVar2,param_2,param_1);
  func_0x00010c1b6780(puVar2,param_2,0);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c04f00; end: 106c0506b; -[SCSpotlightPrefetchJobsEntryPoint _prepareBackgroundJobConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c04f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11275ac64;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR_PTR_1126d1548;
  func_0x00010c142980(PTR_PTR_1126d1548);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067e20(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  puVar4 = *(undefined **)(param_1 + lVar5);
  puVar2 = PTR_PTR_1126d1548;
  func_0x00010c24bbc0(PTR_PTR_1126d1548);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067e20(puVar4,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    puVar2 = PTR_PTR_1126d1550;
    func_0x00010bfb5340();
    if (puVar2 < puVar4) {
      puVar4 = PTR_PTR_1126b7238;
      _objc_opt_new(PTR_PTR_1126b7238);
      puVar1 = PTR_PTR_1126b7248;
      _objc_opt_new(PTR_PTR_1126b7248);
      func_0x00010c1eac20();
      func_0x00010c1e9180(puVar4,param_2,puVar1);
      func_0x00010be787c0(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b7228;
      _objc_opt_new(PTR_PTR_1126b7228);
      func_0x00010c1b6840();
      func_0x00010c1b6740(puVar2,param_2,1);
      func_0x00010c1b67e0(puVar2,param_2,puVar4);
      func_0x00010c1b66e0(puVar2,param_2,param_1);
      func_0x00010c1b6780(puVar2,param_2,0);
      _objc_release(param_1);
      _objc_release(puVar1);
      _objc_release(puVar4);
      goto LAB_106c05054;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_106c05054:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c0506c; end: 106c051ef; -[SCSpotlightPrefetchJobsEntryPoint _prepareJobConstraintIsForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c0506c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  if (param_3 == 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_11275ac64);
    puVar2 = PTR_PTR_1126d1548;
    func_0x00010c24bbc0(PTR_PTR_1126d1548);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067e20(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d1550;
    func_0x00010bf13c20();
    if (((ulong)puVar2 & uVar3) != 0) {
      puVar2 = puVar1;
      func_0x00010bf06200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126d1550;
    func_0x00010c266e00();
    if (((ulong)puVar2 & uVar3) != 0) {
      puVar2 = puVar1;
      func_0x00010bf06200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126d1550;
    func_0x00010c0dcb60();
    if (((ulong)puVar2 & uVar3) != 0) {
      puVar2 = puVar1;
      func_0x00010bf06200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126d1550;
    func_0x00010bf19b80();
    if (((ulong)puVar2 & uVar3) != 0) {
      puVar2 = puVar1;
      func_0x00010bf06200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar2);
    }
    func_0x00010c1cc140(puVar1,param_2,1);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf06200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c051f0; end: 106c05393; -[SCSpotlightPrefetchJobsEntryPoint _scheduleSpotlightPrefetchOnDiscoverFeedOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c051f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275ac70);
  *(undefined **)(param_1 + _DAT_11275ac70) = puVar1;
  _objc_release(uVar6);
  param_1 = param_1 + _DAT_11275ac74;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e0ea0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106c05394; end: 106c0544f;  */

void FUN_106c05394(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c02c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106c05450; end: 106c05453;  */

void FUN_106c05450(void)

{
  return;
}



/* Entry: 106c05454; end: 106c0548b;  */

void FUN_106c05454(long param_1,long param_2)

{
  if (param_2 == 0x4c) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be77680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106c0548c; end: 106c05493;  */

void FUN_106c0548c(void)

{
  return;
}



/* Entry: 106c05494; end: 106c0563f; -[SCSpotlightPrefetchJobsEntryPoint _spotlightPrefetchJobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05494(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d1558;
  _objc_alloc(PTR_PTR_1126d1558);
  lVar13 = (long)_DAT_11275ac78;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c24c420();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar4 = lVar13;
  func_0x00010c24bc80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11275ac7c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11275ac80;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf81c80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11275ac60;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = 0;
  if (param_1 != 0) {
    lVar11 = param_1 + _DAT_11275ac88;
    _objc_loadWeakRetained(lVar11);
  }
  lVar12 = lVar11;
  func_0x00010bf398e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b680(puVar1,param_2,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c05640; end: 106c0567f; -[SCSpotlightPrefetchJobsEntryPoint _prefetchSpotlightIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ac68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c05680; end: 106c0572f; -[SCSpotlightPrefetchJobsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05680(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ac88);
  _objc_destroyWeak(param_1 + _DAT_11275ac80);
  _objc_destroyWeak(param_1 + _DAT_11275ac7c);
  _objc_destroyWeak(param_1 + _DAT_11275ac74);
  _objc_destroyWeak(param_1 + _DAT_11275ac60);
  _objc_destroyWeak(param_1 + _DAT_11275ac78);
  _objc_destroyWeak(param_1 + _DAT_11275ac6c);
  _objc_destroyWeak(param_1 + _DAT_11275ac84);
  _objc_storeStrong(param_1 + _DAT_11275ac64,0);
  _objc_storeStrong(param_1 + _DAT_11275ac70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ac68,0);
  return;
}



/* Entry: 106c05730; end: 106c057ff; -[SCFriendsFeedChatMediaPrefetchJobProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05730(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = param_1 + _DAT_11275ac8c;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf90ea0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  puVar5 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275ac90);
  *(undefined **)(param_1 + _DAT_11275ac90) = puVar5;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bec5eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitChatMediaPrefetchJob_11258f150);
  return;
}



/* Entry: 106c05800; end: 106c0593f; -[SCFriendsFeedChatMediaPrefetchJobProviderEntryPoint _submitChatMediaPrefetchJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05800(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e792d8;
  func_0x00010aee3094(&PTR____CFConstantStringClassReference_110e792d8,300);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c085560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc140();
  _objc_release(ppuVar2);
  lVar3 = param_1 + _DAT_11275ac94;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275ac90);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  func_0x00010c25f200(lVar5);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 106c05940; end: 106c05943;  */

void FUN_106c05940(void)

{
  return;
}



/* Entry: 106c05944; end: 106c05997; -[SCFriendsFeedChatMediaPrefetchJobProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05944(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ac8c);
  _objc_destroyWeak(param_1 + _DAT_11275ac94);
  _objc_destroyWeak(param_1 + _DAT_11275ac98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ac90,0);
  return;
}



/* Entry: 106c05998; end: 106c05a63; -[SCPermissionSettingsBackgroundReportingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d1560;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275ac9c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275aca0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f9ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3b40(puVar1,param_2,lVar3,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275aca4);
  *(undefined **)(param_1 + _DAT_11275aca4) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106c05a64; end: 106c05ab7; -[SCPermissionSettingsBackgroundReportingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c05a64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275aca8);
  _objc_destroyWeak(param_1 + _DAT_11275ac9c);
  _objc_destroyWeak(param_1 + _DAT_11275aca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275aca4,0);
  return;
}



/* Entry: 106c05ab8; end: 106c05bb3; -[SCPermissionSettingsBackgroundReporter initWithApplicationLifecycleEvents:permissionSettingsReporter:] */

undefined1 *
FUN_106c05ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5b78;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010be65b80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c05bb4; end: 106c05c9f; -[SCPermissionSettingsBackgroundReporter _observeApplicationLifecycleEvents] */

void FUN_106c05bb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf75dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106c05ca0; end: 106c05ccb;  */

void FUN_106c05ca0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c05ccc; end: 106c05d33; -[SCPermissionSettingsBackgroundReporter _didEnterBackground] */

void FUN_106c05ccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133780(uVar1,param_2,0,uVar2,&PTR___NSConcreteGlobalBlock_110968740);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c05d34; end: 106c05d37;  */

void FUN_106c05d34(void)

{
  return;
}



/* Entry: 106c05d38; end: 106c05d7f; -[SCPermissionSettingsBackgroundReporter .cxx_destruct] */

void FUN_106c05d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c05d80; end: 106c05df3; -[SCPermissionSettingsReportingServices initWithPermissionSettingsReporter:] */

undefined1 * FUN_106c05d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5b80;
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



/* Entry: 106c05df4; end: 106c05dfb; -[SCPermissionSettingsReportingServices permissionSettingsReporter] */

undefined8 FUN_106c05df4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c05dfc; end: 106c05e07; -[SCPermissionSettingsReportingServices .cxx_destruct] */

void FUN_106c05dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c05e08; end: 106c05fb7;  */

void FUN_106c05e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1c35c0();
  func_0x00010c1edae0(puVar3,param_2,2);
  func_0x00010c1edbc0(puVar3,param_2,1);
  func_0x00010c1ed860(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar1,param_2,puVar4);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110e79318);
  func_0x00010c1b67a0(puVar1,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c198180(puVar1,param_2,1);
  func_0x00010c1b6780(puVar1,param_2,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c05fb8; end: 106c0607b; -[SCSnapchattersAddFriendsJobProcessor initWithSnapchattersDataMutator:grapheneLogger:] */

undefined1 *
FUN_106c05fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5b88;
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
    puVar3 = &UNK_10f3bfee9;
    _dispatch_queue_create(&UNK_10f3bfee9,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c0607c; end: 106c061c3; -[SCSnapchattersAddFriendsJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c0607c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010bfeea60();
  _objc_release(param_4);
  func_0x00010c1ec620(puVar1);
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1568;
  _objc_opt_class(PTR_PTR_1126d1568);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,2,0);
  }
  puVar2 = puVar3;
  FUN_106c06f84(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6de0(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0be0();
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  return 0;
}



/* Entry: 106c061c4; end: 106c062f7; -[SCSnapchattersAddFriendsJobProcessor _addFriendWithDataRequest:completionCallback:] */

void FUN_106c061c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bef8a80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c062f8; end: 106c0638b;  */

void FUN_106c062f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be463e0();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50040();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106c06388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2,0);
  return;
}



/* Entry: 106c0638c; end: 106c063eb; -[SCSnapchattersAddFriendsJobProcessor _jobProcessResult:error:] */

undefined8 FUN_106c0638c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    if (param_4 == 0) {
      uVar2 = 2;
    }
    else {
      lVar1 = param_4;
      func_0x00010b88c2c4();
      uVar2 = 1;
      if (lVar1 != 3) {
        uVar2 = 2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106c063ec; end: 106c0642f; -[SCSnapchattersAddFriendsJobProcessor _logAddFriendRetryJobFinished:] */

void FUN_106c063ec(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0a0c00();
  }
  else {
    func_0x00010c0a0c40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c06430; end: 106c0646b; -[SCSnapchattersAddFriendsJobProcessor .cxx_destruct] */

void FUN_106c06430(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c0646c; end: 106c0650f; -[SCSnapchattersAddFriendsRetryJobSubmitter initWithJobScheduler:grapheneLogger:] */

undefined1 *
FUN_106c0646c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5b90;
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



/* Entry: 106c06510; end: 106c06607; -[SCSnapchattersAddFriendsRetryJobSubmitter _submitAddFriendsRetryJob:] */

void FUN_106c06510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_106c06e2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_106c05e08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(uVar2,param_2,puVar1,uVar3,0,0);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0c20();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c06608; end: 106c0660b; -[SCSnapchattersAddFriendsRetryJobSubmitter didStartSnapchattersUpdateDataRequest:] */

void FUN_106c06608(void)

{
  return;
}



/* Entry: 106c0660c; end: 106c0669b; -[SCSnapchattersAddFriendsRetryJobSubmitter didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_106c0660c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010bf0a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (((param_5 != 0) && (lVar1 != 0)) && (lVar1 = param_5, func_0x00010b88c2c4(), lVar1 == 3)) {
      func_0x00010bec5de0(param_1,param_2,param_3);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c0669c; end: 106c066cb; -[SCSnapchattersAddFriendsRetryJobSubmitter .cxx_destruct] */

void FUN_106c0669c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c066cc; end: 106c0676b; -[SCSnapchattersAddFriendsRetryJobGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_106c066cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5b98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2449c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c0676c; end: 106c067b3; -[SCSnapchattersAddFriendsRetryJobGrapheneLogger logAddFriendsJobSubmitted] */

void FUN_106c0676c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1570;
  func_0x00010c085820(PTR_PTR_1126d1570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c067b4; end: 106c067fb; -[SCSnapchattersAddFriendsRetryJobGrapheneLogger logAddFriendsJobExecuted] */

void FUN_106c067b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1570;
  func_0x00010c0855a0(PTR_PTR_1126d1570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c067fc; end: 106c06843; -[SCSnapchattersAddFriendsRetryJobGrapheneLogger logAddFriendsJobSucceeded] */

void FUN_106c067fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1570;
  func_0x00010c085860(PTR_PTR_1126d1570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c06844; end: 106c0688b; -[SCSnapchattersAddFriendsRetryJobGrapheneLogger logAddFriendsJobFailed] */

void FUN_106c06844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1570;
  func_0x00010c085600(PTR_PTR_1126d1570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c0688c; end: 106c06897; -[SCSnapchattersAddFriendsRetryJobGrapheneLogger .cxx_destruct] */

void FUN_106c0688c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c06898; end: 106c06977; -[SCSnapchattersAddFriendsJobProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c06898(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275acd8);
  *(undefined **)(param_1 + _DAT_11275acd8) = puVar1;
  _objc_release(uVar2);
  func_0x00010beaa6e0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106c06978; end: 106c069b7;  */

void FUN_106c06978(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be24640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c069b8; end: 106c06aa3; -[SCSnapchattersAddFriendsJobProviderEntryPoint _setupAddFriendsRetryJobSubmitter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c069b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d1578;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275acdc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020900(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_11275acd8));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275ace0);
  *(undefined **)(param_1 + _DAT_11275ace0) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11275ace4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106c06aa4; end: 106c06b0b; -[SCSnapchattersAddFriendsJobProviderEntryPoint _grapheneLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c06aa4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_11275ace8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d1580;
  _objc_alloc(PTR_PTR_1126d1580);
  func_0x00010c0184a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c06b0c; end: 106c06b7b; -[SCSnapchattersAddFriendsJobProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c06b0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275acdc);
  _objc_destroyWeak(param_1 + _DAT_11275ace8);
  _objc_destroyWeak(param_1 + _DAT_11275ace4);
  _objc_destroyWeak(param_1 + _DAT_11275acec);
  _objc_storeStrong(param_1 + _DAT_11275acd8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ace0,0);
  return;
}



/* Entry: 106c06b7c; end: 106c06ba7; +[SCGrapheneSnapchattersAddFriendsRetryMetric jobSubmitted] */

void FUN_106c06b7c(void)

{
  _objc_alloc(PTR_PTR_1126d1570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c06ba8; end: 106c06bd3; +[SCGrapheneSnapchattersAddFriendsRetryMetric jobExecuted] */

void FUN_106c06ba8(void)

{
  _objc_alloc(PTR_PTR_1126d1570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c06bd4; end: 106c06bff; +[SCGrapheneSnapchattersAddFriendsRetryMetric jobFailed] */

void FUN_106c06bd4(void)

{
  _objc_alloc(PTR_PTR_1126d1570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c06c00; end: 106c06c2b; +[SCGrapheneSnapchattersAddFriendsRetryMetric jobSucceeded] */

void FUN_106c06c00(void)

{
  _objc_alloc(PTR_PTR_1126d1570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c06c2c; end: 106c06ccb; -[SCGrapheneSnapchattersAddFriendsRetryMetric description] */

void FUN_106c06c2c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79338;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e79338,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f5ba0;
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



/* Entry: 106c06ccc; end: 106c06e2b; -[SCGrapheneRegistry snapchattersAddFriendsRetryGraphene] */

void FUN_106c06ccc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106c06d54;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6de8 != -1) {
    func_0x00010002a2fc(0x1136c6de8,&puStack_48);
  }
  uVar1 = uRam00000001136c6de0;
  _objc_retain(uRam00000001136c6de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c06e2c; end: 106c06f83;  */

void FUN_106c06e2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1568;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c262240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010befb8c0(param_1);
  uVar7 = param_1;
  func_0x00010c0fdba0(param_1);
  uVar8 = param_1;
  func_0x00010bf33f40(param_1);
  uVar9 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bc80(puVar2,param_2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c06f84; end: 106c07183;  */

void FUN_106c06f84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong in_stack_ffffffffffffff28;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126bb3f8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c2622e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04f5a0(puVar3,param_2,0,0,lVar1,0,0,0,0);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  lVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c0e0(puVar4,param_2,lVar1,0,&PTR____CFConstantStringClassReference_110daafd8,0,0,0,
                      0,in_stack_ffffffffffffff28 & 0xffffffffffffff00,0,0,puVar3,0,0,0,0,0);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae5c0;
  lVar1 = param_1;
  func_0x00010befb8c0(param_1);
  lVar2 = param_1;
  func_0x00010c0fdba0(param_1);
  lVar5 = param_1;
  func_0x00010bf33f40(param_1);
  lVar6 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf454e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010befca80(puVar3,param_2,puVar4,lVar1,lVar2,lVar5,lVar6,lVar7,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c07184; end: 106c072bf; -[SCSnapchattersAddFriendsRetryDataRequest initWithCoder:] */

undefined1 * FUN_106c07184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5ba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c072c0; end: 106c073e7; -[SCSnapchattersAddFriendsRetryDataRequest initWithUserId:suggestedToken:addSource:placement:cellIndex:snapId:compositeStoryId:] */

undefined1 *
FUN_106c072c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f5ba8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c073e8; end: 106c0740b; -[SCSnapchattersAddFriendsRetryDataRequest copyWithZone:] */

undefined8 FUN_106c073e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c0740c; end: 106c074cf; -[SCSnapchattersAddFriendsRetryDataRequest encodeWithCoder:] */

void FUN_106c0740c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e12db8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e793d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e793f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e79418);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e79438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c074d0; end: 106c07573; -[SCSnapchattersAddFriendsRetryDataRequest hash] */

undefined8 * FUN_106c074d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c07654:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c07660;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
            if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_106c07660;
            }
            goto LAB_106c07654;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c07660:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c07574; end: 106c0767b; -[SCSnapchattersAddFriendsRetryDataRequest isEqual:] */

long FUN_106c07574(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c07654:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c07660;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_106c07660;
            }
            goto LAB_106c07654;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c07660:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c0767c; end: 106c07683; -[SCSnapchattersAddFriendsRetryDataRequest userId] */

undefined8 FUN_106c0767c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c07684; end: 106c0768b; -[SCSnapchattersAddFriendsRetryDataRequest suggestedToken] */

undefined8 FUN_106c07684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c0768c; end: 106c07693; -[SCSnapchattersAddFriendsRetryDataRequest addSource] */

undefined8 FUN_106c0768c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c07694; end: 106c0769b; -[SCSnapchattersAddFriendsRetryDataRequest placement] */

undefined8 FUN_106c07694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c0769c; end: 106c076a3; -[SCSnapchattersAddFriendsRetryDataRequest cellIndex] */

undefined8 FUN_106c0769c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106c076a4; end: 106c076ab; -[SCSnapchattersAddFriendsRetryDataRequest snapId] */

undefined8 FUN_106c076a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c076ac; end: 106c076b3; -[SCSnapchattersAddFriendsRetryDataRequest compositeStoryId] */

undefined8 FUN_106c076ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106c076b4; end: 106c076fb; -[SCSnapchattersAddFriendsRetryDataRequest .cxx_destruct] */

void FUN_106c076b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c076fc; end: 106c077c7; -[SCSnapchattersPublicInfoCleanUpJob initWithDocObjectContext:currentDateProvider:grapheneLogger:] */

undefined1 *
FUN_106c076fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5bb0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


