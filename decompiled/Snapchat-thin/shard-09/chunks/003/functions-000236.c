/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c41f68; end: 106c41f7f;  */

void FUN_106c41f68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000106c41f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1);
  return;
}



/* Entry: 106c41f80; end: 106c41faf; -[SCPlusMerlinRepinJobProcessor .cxx_destruct] */

void FUN_106c41f80(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c41fb0; end: 106c42023; -[SCPlusMerlinServices initWithInitializer:] */

undefined1 * FUN_106c41fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5e70;
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



/* Entry: 106c42024; end: 106c4202b; -[SCPlusMerlinServices initializer] */

undefined8 FUN_106c42024(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c4202c; end: 106c42037; -[SCPlusMerlinServices .cxx_destruct] */

void FUN_106c4202c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c42038; end: 106c42253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c42038(long param_1,undefined8 param_2)

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
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126d1948;
  _objc_alloc();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x0001005b1d7c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x0001005b1d58();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar8 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = lVar8 + _DAT_11275b3ac;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar17;
  func_0x00010c0f98e0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x0001005b1dc4();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2522e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf29900();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar15 = param_1;
  func_0x0001005b1da0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c08be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0121c0(puVar1,param_2,lVar4,lVar7,lVar9,lVar14,lVar16);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar17);
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



/* Entry: 106c42254; end: 106c423e7; -[SCPlusAppStartServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c42254(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275b3bc);
  _objc_destroyWeak(param_1 + _DAT_11275b3b8);
  _objc_destroyWeak(param_1 + _DAT_11275b3b4);
  _objc_destroyWeak(param_1 + _DAT_11275b3b0);
  _objc_destroyWeak(param_1 + _DAT_11275b3ac);
  _objc_destroyWeak(param_1 + _DAT_11275b3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275b3a4);
  return;
}



/* Entry: 106c423e8; end: 106c4258b; -[SCPlusServicesEntryPoint _createFeatureBadging:featureGating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c423e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  puVar1 = PTR_PTR_1126d1988;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275b3e4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275b3ec;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11275b3f4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275b3e8;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275b3fc;
  _objc_loadWeakRetained();
  lVar10 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f100(puVar1,param_2,param_3,lVar3,param_4,lVar5,lVar7,lVar9,lVar10);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar10);
  _objc_release(param_1);
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



/* Entry: 106c4258c; end: 106c42633; -[SCPlusServicesEntryPoint _createFeatureLogging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c4258c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d1990;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_11275b400;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_11275b404;
  _objc_loadWeakRetained(param_1);
  func_0x00010c04f140(puVar1,param_2,param_3,lVar2,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c42634; end: 106c42747; -[SCPlusServicesEntryPoint _createUpsellManagingWithFeatureGating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c42634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d1998;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_11275b3ec;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275b3f4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275b3e8;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001380(puVar1,param_2,lVar3,lVar5,param_3,lVar6);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c42748; end: 106c428cb; -[SCPlusServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c42748(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b40c,0);
  _objc_storeStrong(param_1 + _DAT_11275b408,0);
  _objc_storeStrong(param_1 + _DAT_11275b3c4,0);
  _objc_storeStrong(param_1 + _DAT_11275b3c0,0);
  _objc_destroyWeak(param_1 + _DAT_11275b424);
  _objc_destroyWeak(param_1 + _DAT_11275b414);
  _objc_destroyWeak(param_1 + _DAT_11275b410);
  _objc_destroyWeak(param_1 + _DAT_11275b3e8);
  _objc_destroyWeak(param_1 + _DAT_11275b3f8);
  _objc_destroyWeak(param_1 + _DAT_11275b404);
  _objc_destroyWeak(param_1 + _DAT_11275b400);
  _objc_destroyWeak(param_1 + _DAT_11275b418);
  _objc_destroyWeak(param_1 + _DAT_11275b3fc);
  _objc_destroyWeak(param_1 + _DAT_11275b3e4);
  _objc_destroyWeak(param_1 + _DAT_11275b3f4);
  _objc_destroyWeak(param_1 + _DAT_11275b3f0);
  _objc_destroyWeak(param_1 + _DAT_11275b3ec);
  _objc_destroyWeak(param_1 + _DAT_11275b420);
  _objc_destroyWeak(param_1 + _DAT_11275b41c);
  _objc_storeStrong(param_1 + _DAT_11275b3e0,0);
  _objc_storeStrong(param_1 + _DAT_11275b3dc,0);
  _objc_storeStrong(param_1 + _DAT_11275b3d8,0);
  _objc_storeStrong(param_1 + _DAT_11275b3d4,0);
  _objc_storeStrong(param_1 + _DAT_11275b3d0,0);
  _objc_storeStrong(param_1 + _DAT_11275b3cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b3c8,0);
  return;
}



/* Entry: 106c428cc; end: 106c42a33; -[SCPlusServicesJobProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c428cc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275b428);
  *(undefined **)(param_1 + _DAT_11275b428) = puVar1;
  _objc_release(uVar6);
  param_1 = param_1 + _DAT_11275b42c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106c42a34; end: 106c42ab7;  */

void FUN_106c42a34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9b920();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9b920();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9b920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c42ab8; end: 106c42c3f; -[SCPlusServicesJobProcessorEntryPoint _scheduleUpdateJob:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c42ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b7238;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1eeea0();
  puVar2 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar3 = puVar2;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1edae0(puVar3,param_2,10);
  func_0x00010c1c35c0(puVar3,param_2,3);
  puVar4 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  _objc_release(param_3);
  func_0x00010c1b67e0(puVar4,param_2,puVar1);
  func_0x00010c1b6740(puVar4,param_2,1);
  func_0x00010c1b66e0(puVar4,param_2,puVar2);
  func_0x00010c1ed860(puVar4,param_2,puVar3);
  param_1 = param_1 + _DAT_11275b430;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c42c40; end: 106c42c93; -[SCPlusServicesJobProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c42c40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275b42c);
  _objc_destroyWeak(param_1 + _DAT_11275b430);
  _objc_destroyWeak(param_1 + _DAT_11275b434);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b428,0);
  return;
}



/* Entry: 106c42c94; end: 106c42c9f; -[SCFeatureSettingsService isPlusBadgeVisibilityAvailable] */

void FUN_106c42c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7abb8);
  return;
}



/* Entry: 106c42ca0; end: 106c42cab; -[SCFeatureSettingsService plusBadgeVisibilityServerParam] */

undefined ** FUN_106c42ca0(void)

{
  return &PTR____CFConstantStringClassReference_110e7abb8;
}



/* Entry: 106c42cac; end: 106c42cbb; -[SCFeatureSettingsService setPlusBadgeVisibility:] */

void FUN_106c42cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e7abb8,param_3);
  return;
}



/* Entry: 106c42cbc; end: 106c42cc3; -[SCFeatureSettingsService plus_badge_visibility_client_value:] */

void FUN_106c42cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106c42cc4; end: 106c42ccb; -[SCFeatureSettingsService plus_badge_visibility_server_value:] */

void FUN_106c42cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106c42ccc; end: 106c42cd7; -[SCFeatureSettingsService isPlusStoryRewatchCountDisabledAvailable] */

void FUN_106c42ccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7abd8);
  return;
}



/* Entry: 106c42cd8; end: 106c42ce3; -[SCFeatureSettingsService plusStoryRewatchCountDisabledServerParam] */

undefined ** FUN_106c42cd8(void)

{
  return &PTR____CFConstantStringClassReference_110e7abd8;
}



/* Entry: 106c42ce4; end: 106c42cf3; -[SCFeatureSettingsService setPlusStoryRewatchCountDisabled:] */

void FUN_106c42ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7abd8,param_3);
  return;
}



/* Entry: 106c42cf4; end: 106c42cfb; -[SCFeatureSettingsService plus_story_rewatch_count_disabled_client_value:] */

undefined * FUN_106c42cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42cfc; end: 106c42d03; -[SCFeatureSettingsService plus_story_rewatch_count_disabled_server_value:] */

void FUN_106c42cfc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42d04; end: 106c42d13; -[SCFeatureSettingsService plusStoryRewatchCountDisabled] */

void FUN_106c42d04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7abd8,0);
  return;
}



/* Entry: 106c42d14; end: 106c42d1f; -[SCFeatureSettingsService isPlusPeekAPeekDisabledAvailable] */

void FUN_106c42d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7abf8);
  return;
}



/* Entry: 106c42d20; end: 106c42d2b; -[SCFeatureSettingsService plusPeekAPeekDisabledServerParam] */

undefined ** FUN_106c42d20(void)

{
  return &PTR____CFConstantStringClassReference_110e7abf8;
}



/* Entry: 106c42d2c; end: 106c42d3b; -[SCFeatureSettingsService setPlusPeekAPeekDisabled:] */

void FUN_106c42d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7abf8,param_3);
  return;
}



/* Entry: 106c42d3c; end: 106c42d43; -[SCFeatureSettingsService plus_peek_a_peek_disabled_client_value:] */

undefined * FUN_106c42d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42d44; end: 106c42d4b; -[SCFeatureSettingsService plus_peek_a_peek_disabled_server_value:] */

void FUN_106c42d44(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42d4c; end: 106c42d5b; -[SCFeatureSettingsService plusPeekAPeekDisabled] */

void FUN_106c42d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7abf8,0);
  return;
}



/* Entry: 106c42d5c; end: 106c42d67; -[SCFeatureSettingsService isPlusSnapscoreMultiplierEnabledAvailable] */

void FUN_106c42d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ac18);
  return;
}



/* Entry: 106c42d68; end: 106c42d73; -[SCFeatureSettingsService plusSnapscoreMultiplierEnabledServerParam] */

undefined ** FUN_106c42d68(void)

{
  return &PTR____CFConstantStringClassReference_110e7ac18;
}



/* Entry: 106c42d74; end: 106c42d83; -[SCFeatureSettingsService setPlusSnapscoreMultiplierEnabled:] */

void FUN_106c42d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7ac18,param_3);
  return;
}



/* Entry: 106c42d84; end: 106c42d8b; -[SCFeatureSettingsService plus_snapscore_multiplier_enabled_client_value:] */

undefined * FUN_106c42d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42d8c; end: 106c42d93; -[SCFeatureSettingsService plus_snapscore_multiplier_enabled_server_value:] */

void FUN_106c42d8c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42d94; end: 106c42da3; -[SCFeatureSettingsService plusSnapscoreMultiplierEnabled] */

void FUN_106c42d94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7ac18,0);
  return;
}



/* Entry: 106c42da4; end: 106c42daf; -[SCFeatureSettingsService isPlusClosestFriendScoreDisabledAvailable] */

void FUN_106c42da4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ac38);
  return;
}



/* Entry: 106c42db0; end: 106c42dbb; -[SCFeatureSettingsService plusClosestFriendScoreDisabledServerParam] */

undefined ** FUN_106c42db0(void)

{
  return &PTR____CFConstantStringClassReference_110e7ac38;
}



/* Entry: 106c42dbc; end: 106c42dcb; -[SCFeatureSettingsService setPlusClosestFriendScoreDisabled:] */

void FUN_106c42dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7ac38,param_3);
  return;
}



/* Entry: 106c42dcc; end: 106c42dd3; -[SCFeatureSettingsService plus_closest_friend_score_disabled_client_value:] */

undefined * FUN_106c42dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42dd4; end: 106c42ddb; -[SCFeatureSettingsService plus_closest_friend_score_disabled_server_value:] */

void FUN_106c42dd4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42ddc; end: 106c42deb; -[SCFeatureSettingsService plusClosestFriendScoreDisabled] */

void FUN_106c42ddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7ac38,1);
  return;
}



/* Entry: 106c42dec; end: 106c42df7; -[SCFeatureSettingsService isPlusSnapscoreChangeDisabledAvailable] */

void FUN_106c42dec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ac58);
  return;
}



/* Entry: 106c42df8; end: 106c42e03; -[SCFeatureSettingsService plusSnapscoreChangeDisabledServerParam] */

undefined ** FUN_106c42df8(void)

{
  return &PTR____CFConstantStringClassReference_110e7ac58;
}



/* Entry: 106c42e04; end: 106c42e13; -[SCFeatureSettingsService setPlusSnapscoreChangeDisabled:] */

void FUN_106c42e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7ac58,param_3);
  return;
}



/* Entry: 106c42e14; end: 106c42e1b; -[SCFeatureSettingsService plus_snapscore_change_disabled_client_value:] */

undefined * FUN_106c42e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42e1c; end: 106c42e23; -[SCFeatureSettingsService plus_snapscore_change_disabled_server_value:] */

void FUN_106c42e1c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42e24; end: 106c42e33; -[SCFeatureSettingsService plusSnapscoreChangeDisabled] */

void FUN_106c42e24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7ac58,0);
  return;
}



/* Entry: 106c42e34; end: 106c42e3f; -[SCFeatureSettingsService isPlusExtendedBestFriendsDisabledAvailable] */

void FUN_106c42e34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ac78);
  return;
}



/* Entry: 106c42e40; end: 106c42e4b; -[SCFeatureSettingsService plusExtendedBestFriendsDisabledServerParam] */

undefined ** FUN_106c42e40(void)

{
  return &PTR____CFConstantStringClassReference_110e7ac78;
}



/* Entry: 106c42e4c; end: 106c42e5b; -[SCFeatureSettingsService setPlusExtendedBestFriendsDisabled:] */

void FUN_106c42e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7ac78,param_3);
  return;
}



/* Entry: 106c42e5c; end: 106c42e63; -[SCFeatureSettingsService plus_extended_best_friends_disabled_client_value:] */

undefined * FUN_106c42e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42e64; end: 106c42e6b; -[SCFeatureSettingsService plus_extended_best_friends_disabled_server_value:] */

void FUN_106c42e64(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42e6c; end: 106c42e7b; -[SCFeatureSettingsService plusExtendedBestFriendsDisabled] */

void FUN_106c42e6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7ac78,0);
  return;
}



/* Entry: 106c42e7c; end: 106c42e87; -[SCFeatureSettingsService isPlusStoryTimestampsDisabledAvailable] */

void FUN_106c42e7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ac98);
  return;
}



/* Entry: 106c42e88; end: 106c42e93; -[SCFeatureSettingsService plusStoryTimestampsDisabledServerParam] */

undefined ** FUN_106c42e88(void)

{
  return &PTR____CFConstantStringClassReference_110e7ac98;
}



/* Entry: 106c42e94; end: 106c42ea3; -[SCFeatureSettingsService setPlusStoryTimestampsDisabled:] */

void FUN_106c42e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7ac98,param_3);
  return;
}



/* Entry: 106c42ea4; end: 106c42eab; -[SCFeatureSettingsService plus_story_timestamps_disabled_client_value:] */

undefined * FUN_106c42ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42eac; end: 106c42eb3; -[SCFeatureSettingsService plus_story_timestamps_disabled_server_value:] */

void FUN_106c42eac(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42eb4; end: 106c42ec3; -[SCFeatureSettingsService plusStoryTimestampsDisabled] */

void FUN_106c42eb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7ac98,0);
  return;
}



/* Entry: 106c42ec4; end: 106c42ecf; -[SCFeatureSettingsService isPlusLightningSnapsDisabledAvailable] */

void FUN_106c42ec4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7acb8);
  return;
}



/* Entry: 106c42ed0; end: 106c42edb; -[SCFeatureSettingsService plusLightningSnapsDisabledServerParam] */

undefined ** FUN_106c42ed0(void)

{
  return &PTR____CFConstantStringClassReference_110e7acb8;
}



/* Entry: 106c42edc; end: 106c42eeb; -[SCFeatureSettingsService setPlusLightningSnapsDisabled:] */

void FUN_106c42edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7acb8,param_3);
  return;
}



/* Entry: 106c42eec; end: 106c42ef3; -[SCFeatureSettingsService plus_lightning_snaps_disabled_client_value:] */

undefined * FUN_106c42eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42ef4; end: 106c42efb; -[SCFeatureSettingsService plus_lightning_snaps_disabled_server_value:] */

void FUN_106c42ef4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42efc; end: 106c42f0b; -[SCFeatureSettingsService plusLightningSnapsDisabled] */

void FUN_106c42efc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7acb8,0);
  return;
}



/* Entry: 106c42f0c; end: 106c42f17; -[SCFeatureSettingsService isPlusPublicMutualPinnedBFFEnabledAvailable] */

void FUN_106c42f0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7acd8);
  return;
}



/* Entry: 106c42f18; end: 106c42f23; -[SCFeatureSettingsService plusPublicMutualPinnedBFFEnabledServerParam] */

undefined ** FUN_106c42f18(void)

{
  return &PTR____CFConstantStringClassReference_110e7acd8;
}



/* Entry: 106c42f24; end: 106c42f33; -[SCFeatureSettingsService setPlusPublicMutualPinnedBFFEnabled:] */

void FUN_106c42f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7acd8,param_3);
  return;
}



/* Entry: 106c42f34; end: 106c42f3b; -[SCFeatureSettingsService mutually_pinned_bff_public_client_value:] */

undefined * FUN_106c42f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42f3c; end: 106c42f43; -[SCFeatureSettingsService mutually_pinned_bff_public_server_value:] */

void FUN_106c42f3c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42f44; end: 106c42f53; -[SCFeatureSettingsService plusPublicMutualPinnedBFFEnabled] */

void FUN_106c42f44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7acd8,0);
  return;
}



/* Entry: 106c42f54; end: 106c42f5f; -[SCFeatureSettingsService isPresenceHintsEnabledAvailable] */

void FUN_106c42f54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7acf8);
  return;
}



/* Entry: 106c42f60; end: 106c42f6b; -[SCFeatureSettingsService presenceHintsEnabledServerParam] */

undefined ** FUN_106c42f60(void)

{
  return &PTR____CFConstantStringClassReference_110e7acf8;
}



/* Entry: 106c42f6c; end: 106c42f7b; -[SCFeatureSettingsService setPresenceHintsEnabled:] */

void FUN_106c42f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7acf8,param_3);
  return;
}



/* Entry: 106c42f7c; end: 106c42f83; -[SCFeatureSettingsService presence_hints_enabled_client_value:] */

undefined * FUN_106c42f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42f84; end: 106c42f8b; -[SCFeatureSettingsService presence_hints_enabled_server_value:] */

void FUN_106c42f84(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42f8c; end: 106c42f9b; -[SCFeatureSettingsService presenceHintsEnabled] */

void FUN_106c42f8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7acf8,1);
  return;
}



/* Entry: 106c42f9c; end: 106c42fa7; -[SCFeatureSettingsService isPlusInstantStreaksEnabledAvailable] */

void FUN_106c42f9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ad18);
  return;
}



/* Entry: 106c42fa8; end: 106c42fb3; -[SCFeatureSettingsService instantStreaksEnabledServerParam] */

undefined ** FUN_106c42fa8(void)

{
  return &PTR____CFConstantStringClassReference_110e7ad18;
}



/* Entry: 106c42fb4; end: 106c42fc3; -[SCFeatureSettingsService setInstantStreaksEnabled:] */

void FUN_106c42fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e7ad18,param_3);
  return;
}



/* Entry: 106c42fc4; end: 106c42fcb; -[SCFeatureSettingsService plus_instant_streak_toggle_client_value:] */

undefined * FUN_106c42fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106c42fcc; end: 106c42fd3; -[SCFeatureSettingsService plus_instant_streak_toggle_server_value:] */

void FUN_106c42fcc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106c42fd4; end: 106c42fe3; -[SCFeatureSettingsService instantStreaksEnabled] */

void FUN_106c42fd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e7ad18,0);
  return;
}



/* Entry: 106c42fe4; end: 106c42fef; -[SCFeatureSettingsService isPlusBadgeImpressionMsAvailable_sectionBadge] */

void FUN_106c42fe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ad38);
  return;
}



/* Entry: 106c42ff0; end: 106c42ffb; -[SCFeatureSettingsService plusBadgeImpressionMs_sectionBadgeServerParam] */

undefined ** FUN_106c42ff0(void)

{
  return &PTR____CFConstantStringClassReference_110e7ad38;
}



/* Entry: 106c42ffc; end: 106c4300b; -[SCFeatureSettingsService setPlusBadgeImpressionMs_sectionBadge:] */

void FUN_106c42ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e7ad38,param_3);
  return;
}



/* Entry: 106c4300c; end: 106c43013; -[SCFeatureSettingsService plus_new_badge_timestamp_my_profile_card_client_value:] */

void FUN_106c4300c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106c43014; end: 106c4301b; -[SCFeatureSettingsService plus_new_badge_timestamp_my_profile_card_server_value:] */

void FUN_106c43014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106c4301c; end: 106c4302b; -[SCFeatureSettingsService plusBadgeImpressionMs_sectionBadge] */

void FUN_106c4301c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e7ad38,0);
  return;
}



/* Entry: 106c4302c; end: 106c43037; -[SCFeatureSettingsService isPlusBadgeImpressionMsAvailable_management] */

void FUN_106c4302c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ad58);
  return;
}



/* Entry: 106c43038; end: 106c43043; -[SCFeatureSettingsService plusBadgeImpressionMs_managementServerParam] */

undefined ** FUN_106c43038(void)

{
  return &PTR____CFConstantStringClassReference_110e7ad58;
}



/* Entry: 106c43044; end: 106c43053; -[SCFeatureSettingsService setPlusBadgeImpressionMs_management:] */

void FUN_106c43044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e7ad58,param_3);
  return;
}



/* Entry: 106c43054; end: 106c4305b; -[SCFeatureSettingsService plus_new_badge_last_view_timestamp_client_value:] */

void FUN_106c43054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106c4305c; end: 106c43063; -[SCFeatureSettingsService plus_new_badge_last_view_timestamp_server_value:] */

void FUN_106c4305c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106c43064; end: 106c43073; -[SCFeatureSettingsService plusBadgeImpressionMs_management] */

void FUN_106c43064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e7ad58,0);
  return;
}



/* Entry: 106c43074; end: 106c4307f; -[SCFeatureSettingsService isPlusBadgeImpressionMsAvailable_appIcon] */

void FUN_106c43074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7ad78);
  return;
}



/* Entry: 106c43080; end: 106c4308b; -[SCFeatureSettingsService plusBadgeImpressionMs_appIconServerParam] */

undefined ** FUN_106c43080(void)

{
  return &PTR____CFConstantStringClassReference_110e7ad78;
}


